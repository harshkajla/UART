library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

entity TX_UART is
Port(
sys_clk : in std_logic;
CLK: IN STD_LOGIC;
SWITCH: in STD_LOGIC;
DATA: IN STD_LOGIC_VECTOR(7 downto 0);
TRANSMISSION_PORT: out STD_LOGIC
);
end TX_UART;
architecture Behavorial of TX_UART is

component debounce 
port(

clk: in std_logic;
Input_Valid: in std_logic;
res: out std_logic
);

end component;


signal counter : STD_LOGIC_VECTOR(4 downto 0) := (OTHERS=>'0');
signal DATAFLL: STD_LOGIC_VECTOR(9 downto 0):= (OTHERS=>'0');
signal out_signal:std_logic := '1';
Type TX_STATE_TYPE is (IDLE, BUSY);
Signal TX_PS, TX_NS : TX_STATE_TYPE := IDLE;
signal debouncer_temp : std_logic;
signal index: std_logic_vector(3 downto 0):= "1001";

begin

debouncer: debounce port map(
	clk => clk,
	Input_Valid=>SWITCH,
	res=> debouncer_temp
);

process (CLK)
begin
if rising_edge(CLK) then

	TX_PS <= TX_NS;
	case TX_PS is
	when IDLE =>
		if(debouncer_temp = '1') then
			TX_NS <= BUSY;
			DATAFLL(0) <= '1';
			DATAFLL(9) <= '0';
			DATAFLL(8 downto 1) <= DATA(7 downto 0);
		
		else
			out_signal <= '1';
		end if;
	
	when BUSY =>
	
		out_signal <= DATAFLL(conv_integer(INDEX));
		if(conv_integer(INDEX) > 0 ) then
			INDEX <= INDEX - '1';
		else
			TX_NS <= IDLE;
			TX_PS <= IDLE;
			INDEX <= "1001";
		end if;

	end case;
end if;
	TRANSMISSION_PORT <= out_signal;
end process;
end Behavorial;

