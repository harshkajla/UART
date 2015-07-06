LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
ENTITY top_testbench IS
END top_testbench; 
ARCHITECTURE behavior OF top_testbench IS 
    COMPONENT TOP
    PORT(
         SYS_CLK : IN  std_logic;
         RST : IN  std_logic;
         RX : IN  std_logic;
         TX : OUT  std_logic;
         TX_DATA : IN  std_logic_vector(7 downto 0);
         TX_DATA_VALID : IN  std_logic;
         RX_DATA : OUT  std_logic_vector(7 downto 0);
         RX_VALID : IN  std_logic
        );
    END COMPONENT;
   signal SYS_CLK : std_logic := '0';
   signal RST : std_logic := '0';
   signal RX : std_logic := '0';
   signal TX_DATA : std_logic_vector(7 downto 0) := (others => '0');
   signal TX_DATA_VALID : std_logic := '0';
   signal RX_VALID : std_logic := '0';
   signal TX : std_logic;
   signal RX_DATA : std_logic_vector(7 downto 0);
   constant SYS_CLK_period : time := 10 ns; 
BEGIN
   uut: TOP PORT MAP (
          SYS_CLK => SYS_CLK,
          RST => RST,
          RX => RX,
          TX => TX,
          TX_DATA => TX_DATA,
          TX_DATA_VALID => TX_DATA_VALID,
          RX_DATA => RX_DATA,
          RX_VALID => RX_VALID
        );
   SYS_CLK_process :process
   begin
		SYS_CLK <= '0';
		wait for SYS_CLK_period/2;
		SYS_CLK <= '1';
		wait for SYS_CLK_period/2;
   end process;
   stim_proc: process
   begin
		rx<='1';

		TX_DATA <= "11101010";
		TX_DATA_VALID <= '1';
      wait for 1100000 ns;
		TX_DATA_VALID <= '0';

			for count in 0 to 521000 loop
					rx<=tx;
				wait for SYS_CLK_period;
			end loop;
			
			TX_DATA <= "11111111";
		TX_DATA_VALID <= '1';
      wait for 1100000 ns;
		TX_DATA_VALID <= '0';

			for count in 0 to 521000 loop
					rx<=tx;
				wait for SYS_CLK_period;
			end loop;
			
			
			TX_DATA <= "00000000";
		TX_DATA_VALID <= '1';
      wait for 1100000 ns;
		TX_DATA_VALID <= '0';

			for count in 0 to 521000 loop
					rx<=tx;
				wait for SYS_CLK_period;
			end loop;
			
			TX_DATA <= "10101010";
		TX_DATA_VALID <= '1';
      wait for 1100000 ns;
		TX_DATA_VALID <= '0';

			for count in 0 to 521000 loop
					rx<=tx;
				wait for SYS_CLK_period;
			end loop;
			
			TX_DATA <= "10010001";
		TX_DATA_VALID <= '1';
      wait for 1100000 ns;
		TX_DATA_VALID <= '0';

			for count in 0 to 521000 loop
					rx<=tx;
				wait for SYS_CLK_period;
			end loop;
			
			TX_DATA <= "10000001";
		TX_DATA_VALID <= '1';
      wait for 1100000 ns;
		TX_DATA_VALID <= '0';

			for count in 0 to 521000 loop
					rx<=tx;
				wait for SYS_CLK_period;
			end loop;
			
			TX_DATA <= "00101010";
		TX_DATA_VALID <= '1';
      wait for 1100000 ns;
		TX_DATA_VALID <= '0';

			for count in 0 to 521000 loop
					rx<=tx;
				wait for SYS_CLK_period;
			end loop;
			
			TX_DATA <= "11110000";
		TX_DATA_VALID <= '1';
      wait for 1100000 ns;
		TX_DATA_VALID <= '0';

			for count in 0 to 521000 loop
					rx<=tx;
				wait for SYS_CLK_period;
			end loop;
			
			TX_DATA <= "11111100";
		TX_DATA_VALID <= '1';
      wait for 1100000 ns;
		TX_DATA_VALID <= '0';

			for count in 0 to 521000 loop
					rx<=tx;
				wait for SYS_CLK_period;
			end loop;
			
		
		
		
		
		
		
      wait;
   end process;
END;
