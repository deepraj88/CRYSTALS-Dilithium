-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity polyveck_freeze is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    v_vec_coeffs_address0 : OUT STD_LOGIC_VECTOR (10 downto 0);
    v_vec_coeffs_ce0 : OUT STD_LOGIC;
    v_vec_coeffs_we0 : OUT STD_LOGIC;
    v_vec_coeffs_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    v_vec_coeffs_q0 : IN STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of polyveck_freeze is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (4 downto 0) := "01000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv9_0 : STD_LOGIC_VECTOR (8 downto 0) := "000000000";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv3_5 : STD_LOGIC_VECTOR (2 downto 0) := "101";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv9_100 : STD_LOGIC_VECTOR (8 downto 0) := "100000000";
    constant ap_const_lv9_1 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    constant ap_const_lv32_17 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010111";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv22_1FFF : STD_LOGIC_VECTOR (21 downto 0) := "0000000001111111111111";
    constant ap_const_lv10_3FE : STD_LOGIC_VECTOR (9 downto 0) := "1111111110";
    constant ap_const_lv32_7FE001 : STD_LOGIC_VECTOR (31 downto 0) := "00000000011111111110000000000001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_23_fu_89_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal i_23_reg_219 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal tmp_579_cast_fu_103_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_579_cast_reg_224 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_fu_83_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_24_fu_113_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal i_24_reg_232 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal v_vec_coeffs_addr_reg_237 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_i_fu_107_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal a_assign_s_fu_189_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal a_assign_s_reg_242 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal i_reg_61 : STD_LOGIC_VECTOR (2 downto 0);
    signal i_i_reg_72 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal tmp_580_cast_fu_128_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_s_fu_95_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_i_cast_fu_119_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_578_fu_123_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal t_fu_133_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_579_fu_141_p4 : STD_LOGIC_VECTOR (8 downto 0);
    signal t_cast_fu_137_p1 : STD_LOGIC_VECTOR (23 downto 0);
    signal a_assign_11_cast_fu_151_p1 : STD_LOGIC_VECTOR (23 downto 0);
    signal tmp_42_i_i_i_fu_165_p2 : STD_LOGIC_VECTOR (23 downto 0);
    signal tmp_i_i_i_fu_155_p4 : STD_LOGIC_VECTOR (21 downto 0);
    signal tmp_580_fu_175_p2 : STD_LOGIC_VECTOR (21 downto 0);
    signal tmp12_fu_181_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_42_i_i_i_cast_fu_171_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_581_fu_195_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_i_i_cast_cast_fu_202_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (4 downto 0);


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    i_i_reg_72_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                i_i_reg_72 <= i_24_reg_232;
            elsif (((tmp_fu_83_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i_i_reg_72 <= ap_const_lv9_0;
            end if; 
        end if;
    end process;

    i_reg_61_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_i_fu_107_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                i_reg_61 <= i_23_reg_219;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_61 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                a_assign_s_reg_242 <= a_assign_s_fu_189_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_23_reg_219 <= i_23_fu_89_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                i_24_reg_232 <= i_24_fu_113_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_fu_83_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    tmp_579_cast_reg_224(10 downto 8) <= tmp_579_cast_fu_103_p1(10 downto 8);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_i_fu_107_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                v_vec_coeffs_addr_reg_237 <= tmp_580_cast_fu_128_p1(11 - 1 downto 0);
            end if;
        end if;
    end process;
    tmp_579_cast_reg_224(7 downto 0) <= "00000000";
    tmp_579_cast_reg_224(11) <= '0';

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, tmp_fu_83_p2, ap_CS_fsm_state3, tmp_i_fu_107_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((tmp_fu_83_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((tmp_i_fu_107_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when others =>  
                ap_NS_fsm <= "XXXXX";
        end case;
    end process;
    a_assign_11_cast_fu_151_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_579_fu_141_p4),24));
    a_assign_s_fu_189_p2 <= std_logic_vector(unsigned(tmp12_fu_181_p3) + unsigned(tmp_42_i_i_i_cast_fu_171_p1));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, tmp_fu_83_p2)
    begin
        if ((((tmp_fu_83_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2, tmp_fu_83_p2)
    begin
        if (((tmp_fu_83_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    i_23_fu_89_p2 <= std_logic_vector(unsigned(i_reg_61) + unsigned(ap_const_lv3_1));
    i_24_fu_113_p2 <= std_logic_vector(unsigned(i_i_reg_72) + unsigned(ap_const_lv9_1));
    t_cast_fu_137_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(t_fu_133_p1),24));
    t_fu_133_p1 <= v_vec_coeffs_q0(23 - 1 downto 0);
    tmp12_fu_181_p3 <= (ap_const_lv10_3FE & tmp_580_fu_175_p2);
        tmp_42_i_i_i_cast_fu_171_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_42_i_i_i_fu_165_p2),32));

    tmp_42_i_i_i_fu_165_p2 <= std_logic_vector(unsigned(t_cast_fu_137_p1) - unsigned(a_assign_11_cast_fu_151_p1));
    tmp_578_fu_123_p2 <= std_logic_vector(unsigned(tmp_i_cast_fu_119_p1) + unsigned(tmp_579_cast_reg_224));
    tmp_579_cast_fu_103_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_s_fu_95_p3),12));
    tmp_579_fu_141_p4 <= v_vec_coeffs_q0(31 downto 23);
    tmp_580_cast_fu_128_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_578_fu_123_p2),64));
    tmp_580_fu_175_p2 <= (tmp_i_i_i_fu_155_p4 or ap_const_lv22_1FFF);
    tmp_581_fu_195_p3 <= a_assign_s_reg_242(31 downto 31);
    tmp_fu_83_p2 <= "1" when (i_reg_61 = ap_const_lv3_5) else "0";
    tmp_i_cast_fu_119_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_i_reg_72),12));
    tmp_i_fu_107_p2 <= "1" when (i_i_reg_72 = ap_const_lv9_100) else "0";
    tmp_i_i_cast_cast_fu_202_p3 <= 
        ap_const_lv32_7FE001 when (tmp_581_fu_195_p3(0) = '1') else 
        ap_const_lv32_0;
    tmp_i_i_i_fu_155_p4 <= v_vec_coeffs_q0(31 downto 10);
    tmp_s_fu_95_p3 <= (i_reg_61 & ap_const_lv8_0);

    v_vec_coeffs_address0_assign_proc : process(ap_CS_fsm_state3, v_vec_coeffs_addr_reg_237, ap_CS_fsm_state5, tmp_580_cast_fu_128_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            v_vec_coeffs_address0 <= v_vec_coeffs_addr_reg_237;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            v_vec_coeffs_address0 <= tmp_580_cast_fu_128_p1(11 - 1 downto 0);
        else 
            v_vec_coeffs_address0 <= "XXXXXXXXXXX";
        end if; 
    end process;


    v_vec_coeffs_ce0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            v_vec_coeffs_ce0 <= ap_const_logic_1;
        else 
            v_vec_coeffs_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    v_vec_coeffs_d0 <= std_logic_vector(unsigned(a_assign_s_reg_242) + unsigned(tmp_i_i_cast_cast_fu_202_p3));

    v_vec_coeffs_we0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            v_vec_coeffs_we0 <= ap_const_logic_1;
        else 
            v_vec_coeffs_we0 <= ap_const_logic_0;
        end if; 
    end process;

end behav;
