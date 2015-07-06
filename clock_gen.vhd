library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity CLOCK_GEN is
    Port (baud : out STD_LOGIC;
			 CLK : in STD_LOGIC
	 );
end CLOCK_GEN;

architecture Behavioral of CLOCK_GEN is
signal temp : STD_LOGIC := '1';
signal counter : STD_LOGIC_VECTOR(12 downto 0) := (OTHERS=>'0');
begin
process(CLK)
begin
if(rising_edge(CLK)) then
	if(counter = "0101000101100") then
		counter <= "0000000000000";
		temp <= not temp ;
	else
		counter <= counter + '1';
	end if;
	baud <= temp ;
end if;
end process;

end Behavioral;
