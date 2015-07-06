library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity UART_TX is
Port(
CLK: IN STD_LOGIC;
SWITCH: in STD_LOGIC;
DATA: IN STD_LOGIC_VECTOR(7 downto 0);
TRANSMISSION_PORT: out STD_LOGIC
);
end UART_TX;
architecture Behavorial of UART_TX is

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
begin

debouncer: debounce port map(
	clk => CLK,
	Input_Valid=>SWITCH,
	res=> debouncer_temp;
);

process (CLK)
begin
if rising_edge(CLK) then

	TX_PS <= TX_NS;
	if(TX_PS = IDLE and debouncer_temp = '1') then
		TX_NS <= BUSY;
		DATAFLL(0) <= '0';
		DATAFLL(9) <= '1';
		DATAFLL(8 downto 1) <= DATA;
	end if;
	if(TX_PS = IDLE and debouncer_temp = '0') then
		out_signal <= '1';
	end if;
	if(TX_PS = BUSY) then
		out_signal <= DATAFLL(INDEX);
		if(INDEX < 9) then
			INDEX <= INDEX + '1';
		else
			TX_NS <= IDLE;
			INDEX <= 0;
		end if;
	end if;
end if;
	TRANSMISSION_PORT <= out_signal;
end process;
end Behavorial;

