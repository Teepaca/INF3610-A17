# aclk {FREQ_HZ 100000000 CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK3 PHASE 0.000} aclk1 {FREQ_HZ 76923080 CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0 PHASE 0.000}
# Clock Domain: design_1_processing_system7_0_0_FCLK_CLK3
create_clock -name aclk -period 10.000 [get_ports aclk]
# Clock Domain: design_1_processing_system7_0_0_FCLK_CLK0
create_clock -name aclk1 -period 13.000 [get_ports aclk1]
# Generated clocks
