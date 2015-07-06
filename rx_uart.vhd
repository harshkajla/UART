
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity rx_uart is
    Port ( sys_clk : in  STD_LOGIC;  
           rst : in  STD_LOGIC;
           rx : in  STD_LOGIC;   -- receiving_port
           rx_data: out  STD_LOGIC_VECTOR (7 downto 0)  -- final output
			  );
end rx_uart;

architecture Behavioral of rx_uart is

Type RX_FSM is (Idle,Receiving);

signal tmp_tx :STD_LOGIC_VECTOR (7 downto 0):=(others=>'0'); 
--signal count: integer range 0 to 350:= 0;
signal count : STD_LOGIC_VECTOR(8 downto 0) := (others=>'0'); 
--signal sampling_count: integer range 0 to 20:= 0;
signal sampling_count: STD_LOGIC_VECTOR(4 downto 0) := (others=>'0'); 
--signal sample: integer range 0 to 20:= 0;
signal sample: STD_LOGIC_VECTOR(4 downto 0) := (others=>'0'); 
--signal rx_bit_count: integer range 0 to 10:= 0;
signal rx_bit_count : STD_LOGIC_VECTOR(3 downto 0):= (others=>'0'); 

signal RPS,RNS : RX_FSM:=Idle;

begin

COUNTER:Process(sys_clk,rst)
begin
if rst='1' then
		sampling_count <= "00000";
		count <= "000000000";
elsif rising_edge(sys_clk) then
	count <= count + '1';
	if count = "101000101" then
		count<= "000000000";
		if sampling_count = "10000" then
			sampling_count <= "00001" ;
			sample <= "00000" ;
		else
			sampling_count <= sampling_count + '1' ;
			if rx = '1' then
				sample <= sample + '1' ;
			end if;
		end if;			
	end if;
end if;
end Process COUNTER;



REC:Process(sampling_count)
begin
	if rst='1' then
		rx_bit_count <= "0000";
	else
	RPS <= RNS;
	case RPS is
		when Idle =>
			rx_bit_count <= "0000" ;
			if sampling_count = "10000" then
				if sample < "01000" then
					RNS <= Receiving;
				end if;
			end if;	
		when Receiving =>
			if sampling_count = "10000" then
				rx_bit_count <= rx_bit_count + '1';
				if sample < "01000" then
					tmp_tx <= tmp_tx(6 downto 0) & '0';
				else
					if rx_bit_count > "00111" then
						RNS <= Idle ;
						rx_data <= tmp_tx ;
					else
						tmp_tx <= tmp_tx(6 downto 0) & '1';
					end if;
				end if;
			end if;
	end case;
	end if;
end Process REC;
end Behavioral;