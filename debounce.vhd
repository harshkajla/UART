
----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:22:45 04/18/2015 
-- Design Name: 
-- Module Name:    debounce - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity debounce is
port(

clk: in std_logic;
Input_Valid: in std_logic;
res: out std_logic
);
end debounce;

architecture Behavioral of debounce is

TYPE SWITCH_TYPE is (IDLE, PRESSED , RELEASED);
signal count1 : std_logic_vector(6 downto 0):= (OTHERS=>'0');
signal temp : std_logic;
Signal SWITCH_PRES, SWITCH_NEXT : SWITCH_TYPE:=IDLE;

begin

process(clk)
begin
	if rising_edge(clk) then
		SWITCH_PRES <= SWITCH_NEXT;
		
		case SWITCH_PRES is
		
		when IDLE =>
			temp <= '0';
			if(Input_Valid = '0') then
				count1 <= (OTHERS =>'0');
				temp <= '0';
				SWITCH_NEXT <= IDLE;
			else
				SWITCH_NEXT <= PRESSED;
				count1 <= (OTHERS =>'0');
				temp <= '0';
			end if;
			
		when PRESSED => 
		
		if (Input_Valid = '1')then
			count1 <= count1 + '1';
			temp <= '0';
			SWITCH_NEXT <=PRESSED;

		elsif (count1(1) = '0') then
			SWITCH_NEXT <= IDLE;
			count1 <= (OTHERS=>'0');
			temp <='0';
		end if;
		
--		if (count1(25) = '1') then      --value changed for same reason as above
		if (count1(1) = '1') then
			SWITCH_NEXT <=RELEASED;
			temp <='0';
		end if;
		
		when RELEASED =>	
		if(Input_Valid = '1') then 
			SWITCH_NEXT <= RELEASED;
		else
			SWITCH_NEXT <= IDLE;
			temp <= '1';
			count1 <= (OTHERS=>'0');
		end if;
		end Case;
	end if;	
		res <= temp;
		
end process;


end Behavioral;

