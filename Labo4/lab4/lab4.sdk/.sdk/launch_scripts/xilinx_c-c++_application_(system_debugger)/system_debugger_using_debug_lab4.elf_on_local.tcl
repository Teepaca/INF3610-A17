connect -url tcp:127.0.0.1:3121
source C:/TEMP/3610_4/1788287_1799919/lab4/lab4.sdk/design_1_wrapper_hw_platform_0/ps7_init.tcl
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zed 210248684603"} -index 0
loadhw -hw C:/TEMP/3610_4/1788287_1799919/lab4/lab4.sdk/design_1_wrapper_hw_platform_0/system.hdf -mem-ranges [list {0x40000000 0xbfffffff}]
configparams force-mem-access 1
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zed 210248684603"} -index 0
stop
ps7_init
ps7_post_config
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zed 210248684603"} -index 0
rst -processor
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zed 210248684603"} -index 0
dow C:/TEMP/3610_4/1788287_1799919/lab4/lab4.sdk/Lab4/Debug/Lab4.elf
configparams force-mem-access 0
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zed 210248684603"} -index 0
con
