
�
%s*synth2�
wStarting RTL Elaboration : Time (s): cpu = 00:00:08 ; elapsed = 00:00:09 . Memory (MB): peak = 341.113 ; gain = 79.168
2default:defaulth px� 
�
synthesizing module '%s'638*oasys2,
design_1_v_rgb2ycrcb_0_02default:default2�
�c:/TEMP/3610_4/1788287_1799919/lab4/lab4.srcs/sources_1/bd/design_1/ip/design_1_v_rgb2ycrcb_0_0/synth/design_1_v_rgb2ycrcb_0_0.vhd2default:default2
772default:default8@Z8-638h px� 
�
%done synthesizing module '%s' (%s#%s)256*oasys2,
design_1_v_rgb2ycrcb_0_02default:default2
212default:default2
12default:default2�
�c:/TEMP/3610_4/1788287_1799919/lab4/lab4.srcs/sources_1/bd/design_1/ip/design_1_v_rgb2ycrcb_0_0/synth/design_1_v_rgb2ycrcb_0_0.vhd2default:default2
772default:default8@Z8-256h px� 
�
%s*synth2�
xFinished RTL Elaboration : Time (s): cpu = 00:00:12 ; elapsed = 00:00:13 . Memory (MB): peak = 384.871 ; gain = 122.926
2default:defaulth px� 
�
%s*synth2�
�Finished RTL Optimization Phase 1 : Time (s): cpu = 00:00:12 ; elapsed = 00:00:14 . Memory (MB): peak = 384.871 ; gain = 122.926
2default:defaulth px� 
V
Loading part %s157*device2#
xc7z020clg484-12default:defaultZ21-403h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common24
 Constraint Validation Runtime : 2default:default2
00:00:002default:default2 
00:00:00.0672default:default2
710.7702default:default2
0.0002default:defaultZ17-268h px� 
�
%s*synth2�
~Finished Constraint Validation : Time (s): cpu = 00:00:35 ; elapsed = 00:01:02 . Memory (MB): peak = 710.770 ; gain = 448.824
2default:defaulth px� 
�
%s*synth2�
�Finished Loading Part and Timing Information : Time (s): cpu = 00:00:35 ; elapsed = 00:01:02 . Memory (MB): peak = 710.770 ; gain = 448.824
2default:defaulth px� 
�
%s*synth2�
�Finished applying 'set_property' XDC Constraints : Time (s): cpu = 00:00:35 ; elapsed = 00:01:02 . Memory (MB): peak = 710.770 ; gain = 448.824
2default:defaulth px� 
�
%s*synth2�
�Finished RTL Optimization Phase 2 : Time (s): cpu = 00:00:37 ; elapsed = 00:01:04 . Memory (MB): peak = 710.770 ; gain = 448.824
2default:defaulth px� 
�
%s*synth2�
�Finished Cross Boundary and Area Optimization : Time (s): cpu = 00:00:41 ; elapsed = 00:01:09 . Memory (MB): peak = 710.770 ; gain = 448.824
2default:defaulth px� 
�
%s*synth2�
�---------------------------------------------------------------------------------
Start ROM, RAM, DSP and Shift Register Reporting
2default:defaulth px� 
~
%s*synth2f
R---------------------------------------------------------------------------------
2default:defaulth px� 
k
%s*synth2S
?
Distributed RAM: Preliminary Mapping  Report (see note below)
2default:defaulth px� 
�
%s*synth2�
�+------------+------------------------------------------------------------------------------------------+----------------+----------------------+--------------+
2default:defaulth px� 
�
%s*synth2�
�|Module Name | RTL Object                                                                               | Inference      | Size (Depth x Width) | Primitives   | 
2default:defaulth px� 
�
%s*synth2�
�+------------+------------------------------------------------------------------------------------------+----------------+----------------------+--------------+
2default:defaulth px� 
�
%s*synth2�
�|U0          | rgb2ycrcb_top_inst/axi_in_fifo/U_AXIS_SYNC_FIFO/mem1/GenerateDoutWriteFirstA.mem_reg     | User Attribute | 16 x 26              | RAM32M x 5   | 
2default:defaulth px� 
�
%s*synth2�
�|U0          | rgb2ycrcb_top_inst/axi_out_fifo/UOSD_AXIS_SYNC_FIFO/mem1/GenerateDoutWriteFirstA.mem_reg | User Attribute | 16 x 26              | RAM32M x 5   | 
2default:defaulth px� 
�
%s*synth2�
�+------------+------------------------------------------------------------------------------------------+----------------+----------------------+--------------+

2default:defaulth px� 
�
%s*synth2�
�Note: The table above is a preliminary report that shows the Distributed RAMs at the current stage of the synthesis flow. Some Distributed RAMs may be reimplemented as non Distributed RAM primitives later in the synthesis flow. Multiple instantiated RAMs are reported only once.
2default:defaulth px� 
_
%s*synth2G
3
DSP: Preliminary Mapping  Report (see note below)
2default:defaulth px� 
�
%s*synth2�
�+------------+-----------------------+--------+--------+--------+--------+--------+------+------+------+------+-------+------+------+
2default:defaulth px� 
�
%s*synth2�
�|Module Name | DSP Mapping           | A Size | B Size | C Size | D Size | P Size | AREG | BREG | CREG | DREG | ADREG | MREG | PREG | 
2default:defaulth px� 
�
%s*synth2�
�+------------+-----------------------+--------+--------+--------+--------+--------+------+------+------+------+-------+------+------+
2default:defaulth px� 
�
%s*synth2�
�|mac         | (C+(A2*B2)'+CarryIn)' | 17     | 9      | 26     | -      | 26     | 1    | 1    | 0    | -    | -     | 1    | 1    | 
2default:defaulth px� 
�
%s*synth2�
�|mac         | (C+(A2*B2)'+CarryIn)' | 17     | 11     | 28     | -      | 28     | 1    | 1    | 0    | -    | -     | 1    | 1    | 
2default:defaulth px� 
�
%s*synth2�
�|mac         | (C+(A2*B2)'+CarryIn)' | 17     | 11     | 28     | -      | 28     | 1    | 1    | 0    | -    | -     | 1    | 1    | 
2default:defaulth px� 
�
%s*synth2�
�|v_rgb2ycrcb | (A*B)'                | 17     | 9      | -      | -      | 26     | 0    | 0    | -    | -    | -     | 1    | 1    | 
2default:defaulth px� 
�
%s*synth2�
�+------------+-----------------------+--------+--------+--------+--------+--------+------+------+------+------+-------+------+------+

2default:defaulth px� 
�
%s*synth2�
�Note: The table above is a preliminary report that shows the DSPs inferred at the current stage of the synthesis flow. Some DSP may be reimplemented as non DSP primitives later in the synthesis flow. Multiple instantiated DSPs are reported only once.
2default:defaulth px� 
�
%s*synth2�
�---------------------------------------------------------------------------------
Finished ROM, RAM, DSP and Shift Register Reporting
2default:defaulth px� 
~
%s*synth2f
R---------------------------------------------------------------------------------
2default:defaulth px� 
�
%s*synth2�
�Finished Applying XDC Timing Constraints : Time (s): cpu = 00:01:20 ; elapsed = 00:01:49 . Memory (MB): peak = 719.363 ; gain = 457.418
2default:defaulth px� 
�
%s*synth2�
|Finished Timing Optimization : Time (s): cpu = 00:01:21 ; elapsed = 00:01:51 . Memory (MB): peak = 745.531 ; gain = 483.586
2default:defaulth px� 
�
%s*synth2�
{Finished Technology Mapping : Time (s): cpu = 00:01:22 ; elapsed = 00:01:52 . Memory (MB): peak = 752.668 ; gain = 490.723
2default:defaulth px� 
�
%s*synth2�
uFinished IO Insertion : Time (s): cpu = 00:01:24 ; elapsed = 00:01:54 . Memory (MB): peak = 752.668 ; gain = 490.723
2default:defaulth px� 
�
%s*synth2�
�Finished Renaming Generated Instances : Time (s): cpu = 00:01:24 ; elapsed = 00:01:54 . Memory (MB): peak = 752.668 ; gain = 490.723
2default:defaulth px� 
�
%s*synth2�
�Finished Rebuilding User Hierarchy : Time (s): cpu = 00:01:24 ; elapsed = 00:01:54 . Memory (MB): peak = 752.668 ; gain = 490.723
2default:defaulth px� 
�
%s*synth2�
�Finished Renaming Generated Ports : Time (s): cpu = 00:01:24 ; elapsed = 00:01:54 . Memory (MB): peak = 752.668 ; gain = 490.723
2default:defaulth px� 
�
%s*synth2�
�Finished Handling Custom Attributes : Time (s): cpu = 00:01:24 ; elapsed = 00:01:54 . Memory (MB): peak = 752.668 ; gain = 490.723
2default:defaulth px� 
�
%s*synth2�
�Finished Renaming Generated Nets : Time (s): cpu = 00:01:24 ; elapsed = 00:01:54 . Memory (MB): peak = 752.668 ; gain = 490.723
2default:defaulth px� 
A
%s*synth2)

Report Cell Usage: 
2default:defaulth px� 
G
%s*synth2/
+------+----------+------+
2default:defaulth px� 
G
%s*synth2/
|      |Cell      |Count |
2default:defaulth px� 
G
%s*synth2/
+------+----------+------+
2default:defaulth px� 
G
%s*synth2/
|1     |CARRY4    |    72|
2default:defaulth px� 
G
%s*synth2/
|2     |DSP48E1   |     3|
2default:defaulth px� 
G
%s*synth2/
|3     |DSP48E1_1 |     1|
2default:defaulth px� 
G
%s*synth2/
|4     |LUT1      |    83|
2default:defaulth px� 
G
%s*synth2/
|5     |LUT2      |   135|
2default:defaulth px� 
G
%s*synth2/
|6     |LUT3      |    56|
2default:defaulth px� 
G
%s*synth2/
|7     |LUT4      |   158|
2default:defaulth px� 
G
%s*synth2/
|8     |LUT5      |    17|
2default:defaulth px� 
G
%s*synth2/
|9     |LUT6      |    57|
2default:defaulth px� 
G
%s*synth2/
|10    |RAM32M    |    10|
2default:defaulth px� 
G
%s*synth2/
|11    |SRL16E    |    34|
2default:defaulth px� 
G
%s*synth2/
|12    |FDRE      |   326|
2default:defaulth px� 
G
%s*synth2/
|13    |FDSE      |     9|
2default:defaulth px� 
G
%s*synth2/
+------+----------+------+
2default:defaulth px� 
�
%s*synth2�
�Finished Writing Synthesis Report : Time (s): cpu = 00:01:24 ; elapsed = 00:01:54 . Memory (MB): peak = 752.668 ; gain = 490.723
2default:defaulth px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2"
synth_design: 2default:default2
00:01:282default:default2
00:01:592default:default2
752.6682default:default2
492.3132default:defaultZ17-268h px� 


End Record