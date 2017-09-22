// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.2 (win64) Build 1909853 Thu Jun 15 18:39:09 MDT 2017
// Date        : Fri Sep 22 13:12:27 2017
// Host        : L3712-07 running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               x:/Bureau/INF3610/Labo2/lab2/lab2.srcs/sources_1/bd/design_1/ip/design_1_fit_timer_1_0/design_1_fit_timer_1_0_stub.v
// Design      : design_1_fit_timer_1_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "fit_timer,Vivado 2017.2" *)
module design_1_fit_timer_1_0(Clk, Rst, Interrupt)
/* synthesis syn_black_box black_box_pad_pin="Clk,Rst,Interrupt" */;
  input Clk;
  input Rst;
  output Interrupt;
endmodule
