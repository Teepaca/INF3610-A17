; ModuleID = 'C:/TEMP/Labo4/SobelLab4/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@y_op = internal unnamed_addr constant [3 x [3 x i8]] [[3 x i8] c"\01\02\01", [3 x i8] zeroinitializer, [3 x i8] c"\FF\FE\FF"], align 1 ; [#uses=1 type=[3 x [3 x i8]]*]
@x_op = internal unnamed_addr constant [3 x [3 x i8]] [[3 x i8] c"\FF\00\01", [3 x i8] c"\FE\00\02", [3 x i8] c"\FF\00\01"], align 1 ; [#uses=1 type=[3 x [3 x i8]]*]
@sobel_filter.str = internal unnamed_addr constant [13 x i8] c"sobel_filter\00" ; [#uses=1 type=[13 x i8]*]
@.str9 = private unnamed_addr constant [12 x i8] c"hls_label_1\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str8 = private unnamed_addr constant [9 x i8] c"LoadLine\00", align 1 ; [#uses=1 type=[9 x i8]*]
@.str7 = private unnamed_addr constant [10 x i8] c"LoadCache\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str6 = private unnamed_addr constant [9 x i8] c"COMPLETE\00", align 1 ; [#uses=1 type=[9 x i8]*]
@.str5 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str4 = private unnamed_addr constant [6 x i8] c"slave\00", align 1 ; [#uses=1 type=[6 x i8]*]
@.str3 = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1 ; [#uses=1 type=[6 x i8]*]
@.str2 = private unnamed_addr constant [7 x i8] c"SobelY\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str10 = private unnamed_addr constant [12 x i8] c"hls_label_0\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str1 = private unnamed_addr constant [7 x i8] c"SobelX\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]

; [#uses=0]
define void @sobel_filter([1920 x i8]* %inter_pix, [1920 x i32]* %out_pix) nounwind {
  call void (...)* @_ssdm_op_SpecTopModule([13 x i8]* @sobel_filter.str) nounwind
  %lineBuffer = alloca [4 x [1920 x i8]], align 1 ; [#uses=4 type=[4 x [1920 x i8]]*]
  call void @llvm.dbg.value(metadata !{[1920 x i8]* %inter_pix}, i64 0, metadata !52), !dbg !53 ; [debug line = 134:27] [debug variable = inter_pix]
  call void @llvm.dbg.value(metadata !{[1920 x i32]* %out_pix}, i64 0, metadata !54), !dbg !55 ; [debug line = 134:59] [debug variable = out_pix]
  call void (...)* @_ssdm_SpecArrayDimSize([1920 x i32]* %out_pix, i32 1080) nounwind, !dbg !56 ; [debug line = 135:2]
  call void (...)* @_ssdm_SpecArrayDimSize([1920 x i8]* %inter_pix, i32 1080) nounwind, !dbg !58 ; [debug line = 135:39]
  call void (...)* @_ssdm_op_SpecInterface([1920 x i8]* %inter_pix, i8* getelementptr inbounds ([6 x i8]* @.str3, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8]* @.str4, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 16, i32 16, i32 16, i32 16, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !59 ; [debug line = 143:1]
  call void (...)* @_ssdm_op_SpecInterface([1920 x i32]* %out_pix, i8* getelementptr inbounds ([6 x i8]* @.str3, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8]* @.str4, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 16, i32 16, i32 16, i32 16, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !60 ; [debug line = 144:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 0, i8* getelementptr inbounds ([10 x i8]* @.str5, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !61 ; [debug line = 145:1]
  call void @llvm.dbg.declare(metadata !{[4 x [1920 x i8]]* %lineBuffer}, metadata !62), !dbg !66 ; [debug line = 148:10] [debug variable = lineBuffer]
  %cache.assign = getelementptr inbounds [4 x [1920 x i8]]* %lineBuffer, i32 0, i32 0, !dbg !67 ; [#uses=1 type=[1920 x i8]*] [debug line = 149:1]
  call void (...)* @_ssdm_SpecArrayPartition([1920 x i8]* %cache.assign, i32 1, i8* getelementptr inbounds ([9 x i8]* @.str6, i32 0, i32 0), i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !67 ; [debug line = 149:1]
  br label %1, !dbg !68                           ; [debug line = 151:14]

; <label>:1                                       ; preds = %5, %0
  %lastLine = phi i32 [ 0, %0 ], [ %tmp.6, %5 ]   ; [#uses=4 type=i32]
  %tmp = icmp eq i32 %lastLine, 3, !dbg !68       ; [#uses=1 type=i1] [debug line = 151:14]
  br i1 %tmp, label %.preheader.preheader, label %2, !dbg !68 ; [debug line = 151:14]

.preheader.preheader:                             ; preds = %1
  br label %.preheader, !dbg !70                  ; [debug line = 157:25]

; <label>:2                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0)) nounwind, !dbg !72 ; [debug line = 151:46]
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0)) nounwind, !dbg !72 ; [#uses=1 type=i32] [debug line = 151:46]
  br label %3, !dbg !74                           ; [debug line = 152:37]

; <label>:3                                       ; preds = %4, %2
  %i = phi i32 [ 0, %2 ], [ %i.1, %4 ]            ; [#uses=4 type=i32]
  %tmp.2 = icmp eq i32 %i, 1920, !dbg !74         ; [#uses=1 type=i1] [debug line = 152:37]
  br i1 %tmp.2, label %5, label %4, !dbg !74      ; [debug line = 152:37]

; <label>:4                                       ; preds = %3
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([9 x i8]* @.str8, i32 0, i32 0)) nounwind, !dbg !76 ; [debug line = 152:54]
  %rbegin4 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([9 x i8]* @.str8, i32 0, i32 0)) nounwind, !dbg !76 ; [#uses=1 type=i32] [debug line = 152:54]
  %inter_pix.addr = getelementptr inbounds [1920 x i8]* %inter_pix, i32 %lastLine, i32 %i, !dbg !78 ; [#uses=1 type=i8*] [debug line = 153:4]
  %inter_pix.load = load i8* %inter_pix.addr, align 1, !dbg !78 ; [#uses=2 type=i8] [debug line = 153:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %inter_pix.load) nounwind
  %lineBuffer.addr.1 = getelementptr inbounds [4 x [1920 x i8]]* %lineBuffer, i32 0, i32 %lastLine, i32 %i, !dbg !78 ; [#uses=1 type=i8*] [debug line = 153:4]
  store i8 %inter_pix.load, i8* %lineBuffer.addr.1, align 1, !dbg !78 ; [debug line = 153:4]
  %rend5 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([9 x i8]* @.str8, i32 0, i32 0), i32 %rbegin4) nounwind, !dbg !79 ; [#uses=0 type=i32] [debug line = 154:3]
  %i.1 = add i32 %i, 1, !dbg !80                  ; [#uses=1 type=i32] [debug line = 152:49]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !81), !dbg !80 ; [debug line = 152:49] [debug variable = i]
  br label %3, !dbg !80                           ; [debug line = 152:49]

; <label>:5                                       ; preds = %3
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0), i32 %rbegin) nounwind, !dbg !82 ; [#uses=0 type=i32] [debug line = 156:2]
  %tmp.6 = add i32 %lastLine, 1, !dbg !83         ; [#uses=1 type=i32] [debug line = 151:34]
  br label %1, !dbg !83                           ; [debug line = 151:34]

.preheader:                                       ; preds = %19, %.preheader.preheader
  %lastLine.1 = phi i32 [ %lastLine.2, %19 ], [ 3, %.preheader.preheader ] ; [#uses=5 type=i32]
  %i1 = phi i32 [ %i.2, %19 ], [ 0, %.preheader.preheader ] ; [#uses=6 type=i32]
  %tmp.1 = icmp eq i32 %i1, 1080, !dbg !70        ; [#uses=1 type=i1] [debug line = 157:25]
  br i1 %tmp.1, label %20, label %6, !dbg !70     ; [debug line = 157:25]

; <label>:6                                       ; preds = %.preheader
  %rbegin8 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str9, i32 0, i32 0)) nounwind, !dbg !84 ; [#uses=1 type=i32] [debug line = 157:43]
  call void (...)* @_ssdm_Unroll(i32 1, i32 0, i32 10, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !86 ; [debug line = 158:1]
  %tmp.3 = icmp eq i32 %i1, 0, !dbg !87           ; [#uses=1 type=i1] [debug line = 162:2]
  %tmp.4 = icmp eq i32 %i1, 1079, !dbg !87        ; [#uses=1 type=i1] [debug line = 162:2]
  %or.cond = or i1 %tmp.3, %tmp.4, !dbg !87       ; [#uses=2 type=i1] [debug line = 162:2]
  %tmp.5 = and i32 %lastLine.1, 3, !dbg !90       ; [#uses=1 type=i32] [debug line = 168:5]
  br label %7, !dbg !92                           ; [debug line = 159:25]

; <label>:7                                       ; preds = %18, %6
  %row.assign = phi i32 [ 0, %6 ], [ %j.1, %18 ]  ; [#uses=9 type=i32]
  %tmp.8 = icmp eq i32 %row.assign, 1920, !dbg !92 ; [#uses=1 type=i1] [debug line = 159:25]
  br i1 %tmp.8, label %19, label %8, !dbg !92     ; [debug line = 159:25]

; <label>:8                                       ; preds = %7
  %rbegin6 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str10, i32 0, i32 0)) nounwind, !dbg !93 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !94 ; [debug line = 160:1]
  call void (...)* @_ssdm_SpecLoopFlatten(i32 1, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !95 ; [debug line = 161:1]
  %tmp.11 = icmp eq i32 %row.assign, 0, !dbg !87  ; [#uses=1 type=i1] [debug line = 162:2]
  %or.cond1 = or i1 %or.cond, %tmp.11, !dbg !87   ; [#uses=1 type=i1] [debug line = 162:2]
  %tmp.12 = icmp eq i32 %row.assign, 1919, !dbg !87 ; [#uses=1 type=i1] [debug line = 162:2]
  %or.cond2 = or i1 %or.cond1, %tmp.12, !dbg !87  ; [#uses=1 type=i1] [debug line = 162:2]
  br i1 %or.cond2, label %9, label %10, !dbg !87  ; [debug line = 162:2]

; <label>:9                                       ; preds = %8
  %out_pix.addr = getelementptr inbounds [1920 x i32]* %out_pix, i32 %i1, i32 %row.assign, !dbg !96 ; [#uses=1 type=i32*] [debug line = 163:5]
  store i32 0, i32* %out_pix.addr, align 4, !dbg !96 ; [debug line = 163:5]
  br label %18, !dbg !98                          ; [debug line = 164:4]

; <label>:10                                      ; preds = %8
  call void @llvm.dbg.value(metadata !{i32 %row.assign}, i64 0, metadata !99) nounwind, !dbg !101 ; [debug line = 75:55@166:38] [debug variable = row]
  call void @llvm.dbg.value(metadata !{[1920 x i8]* %cache.assign}, i64 0, metadata !102) nounwind, !dbg !103 ; [debug line = 75:68@166:38] [debug variable = cache]
  br label %11, !dbg !104                         ; [debug line = 106:25@166:38]

; <label>:11                                      ; preds = %15, %10
  %y_weight.0.i = phi i32 [ 0, %10 ], [ %y_weight.1.i.lcssa, %15 ] ; [#uses=2 type=i32]
  %x_weight.0.i = phi i32 [ 0, %10 ], [ %x_weight.1.i.lcssa, %15 ] ; [#uses=2 type=i32]
  %i.0.i = phi i32 [ 0, %10 ], [ %i.3, %15 ]      ; [#uses=5 type=i32]
  %exitcond1.i = icmp eq i32 %i.0.i, 3, !dbg !104 ; [#uses=1 type=i1] [debug line = 106:25@166:38]
  br i1 %exitcond1.i, label %16, label %12, !dbg !104 ; [debug line = 106:25@166:38]

; <label>:12                                      ; preds = %11
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([7 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !107 ; [debug line = 106:40@166:38]
  %rbegin.i = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([7 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !107 ; [#uses=1 type=i32] [debug line = 106:40@166:38]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !109 ; [debug line = 107:1@166:38]
  %tmp.22 = add i32 %lastLine.1, 1, !dbg !110     ; [#uses=1 type=i32] [debug line = 111:4@166:38]
  %tmp.23 = add i32 %tmp.22, %i.0.i, !dbg !110    ; [#uses=1 type=i32] [debug line = 111:4@166:38]
  %tmp.24 = and i32 %tmp.23, 3, !dbg !110         ; [#uses=1 type=i32] [debug line = 111:4@166:38]
  br label %13, !dbg !113                         ; [debug line = 108:25@166:38]

; <label>:13                                      ; preds = %14, %12
  %y_weight.1.i = phi i32 [ %y_weight.0.i, %12 ], [ %y_weight, %14 ] ; [#uses=2 type=i32]
  %x_weight.1.i = phi i32 [ %x_weight.0.i, %12 ], [ %x_weight, %14 ] ; [#uses=2 type=i32]
  %j.0.i = phi i32 [ 0, %12 ], [ %j, %14 ]        ; [#uses=5 type=i32]
  %exitcond.i = icmp eq i32 %j.0.i, 3, !dbg !113  ; [#uses=1 type=i1] [debug line = 108:25@166:38]
  br i1 %exitcond.i, label %15, label %14, !dbg !113 ; [debug line = 108:25@166:38]

; <label>:14                                      ; preds = %13
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([7 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !114 ; [debug line = 108:40@166:38]
  %rbegin2.i = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([7 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !114 ; [#uses=1 type=i32] [debug line = 108:40@166:38]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !115 ; [debug line = 109:1@166:38]
  %tmp.33 = add i32 %row.assign, -1, !dbg !110    ; [#uses=1 type=i32] [debug line = 111:4@166:38]
  %tmp.34 = add i32 %tmp.33, %j.0.i, !dbg !110    ; [#uses=1 type=i32] [debug line = 111:4@166:38]
  %lineBuffer.addr.2 = getelementptr inbounds [4 x [1920 x i8]]* %lineBuffer, i32 0, i32 %tmp.24, i32 %tmp.34, !dbg !110 ; [#uses=1 type=i8*] [debug line = 111:4@166:38]
  %lineBuffer.load = load i8* %lineBuffer.addr.2, align 1, !dbg !110 ; [#uses=3 type=i8] [debug line = 111:4@166:38]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %lineBuffer.load) nounwind
  %tmp.35 = zext i8 %lineBuffer.load to i32, !dbg !110 ; [#uses=2 type=i32] [debug line = 111:4@166:38]
  %x_op.addr = getelementptr inbounds [3 x [3 x i8]]* @x_op, i32 0, i32 %i.0.i, i32 %j.0.i, !dbg !110 ; [#uses=1 type=i8*] [debug line = 111:4@166:38]
  %x_op.load = load i8* %x_op.addr, align 1, !dbg !110 ; [#uses=2 type=i8] [debug line = 111:4@166:38]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %x_op.load) nounwind
  %tmp.36 = sext i8 %x_op.load to i32, !dbg !110  ; [#uses=1 type=i32] [debug line = 111:4@166:38]
  %tmp.37 = mul nsw i32 %tmp.36, %tmp.35, !dbg !110 ; [#uses=1 type=i32] [debug line = 111:4@166:38]
  %x_weight = add nsw i32 %tmp.37, %x_weight.1.i, !dbg !110 ; [#uses=1 type=i32] [debug line = 111:4@166:38]
  call void @llvm.dbg.value(metadata !{i32 %x_weight}, i64 0, metadata !116) nounwind, !dbg !110 ; [debug line = 111:4@166:38] [debug variable = x_weight]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %lineBuffer.load) nounwind
  %y_op.addr = getelementptr inbounds [3 x [3 x i8]]* @y_op, i32 0, i32 %i.0.i, i32 %j.0.i, !dbg !117 ; [#uses=1 type=i8*] [debug line = 115:4@166:38]
  %y_op.load = load i8* %y_op.addr, align 1, !dbg !117 ; [#uses=2 type=i8] [debug line = 115:4@166:38]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %y_op.load) nounwind
  %tmp.39 = sext i8 %y_op.load to i32, !dbg !117  ; [#uses=1 type=i32] [debug line = 115:4@166:38]
  %tmp.40 = mul nsw i32 %tmp.39, %tmp.35, !dbg !117 ; [#uses=1 type=i32] [debug line = 115:4@166:38]
  %y_weight = add nsw i32 %tmp.40, %y_weight.1.i, !dbg !117 ; [#uses=1 type=i32] [debug line = 115:4@166:38]
  call void @llvm.dbg.value(metadata !{i32 %y_weight}, i64 0, metadata !118) nounwind, !dbg !117 ; [debug line = 115:4@166:38] [debug variable = y_weight]
  %rend3.i = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([7 x i8]* @.str2, i32 0, i32 0), i32 %rbegin2.i) nounwind, !dbg !119 ; [#uses=0 type=i32] [debug line = 117:3@166:38]
  %j = add nsw i32 %j.0.i, 1, !dbg !120           ; [#uses=1 type=i32] [debug line = 108:34@166:38]
  call void @llvm.dbg.value(metadata !{i32 %j}, i64 0, metadata !121) nounwind, !dbg !120 ; [debug line = 108:34@166:38] [debug variable = j]
  br label %13, !dbg !120                         ; [debug line = 108:34@166:38]

; <label>:15                                      ; preds = %13
  %x_weight.1.i.lcssa = phi i32 [ %x_weight.1.i, %13 ] ; [#uses=1 type=i32]
  %y_weight.1.i.lcssa = phi i32 [ %y_weight.1.i, %13 ] ; [#uses=1 type=i32]
  %rend.i = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([7 x i8]* @.str1, i32 0, i32 0), i32 %rbegin.i) nounwind, !dbg !122 ; [#uses=0 type=i32] [debug line = 118:2@166:38]
  %i.3 = add nsw i32 %i.0.i, 1, !dbg !123         ; [#uses=1 type=i32] [debug line = 106:34@166:38]
  call void @llvm.dbg.value(metadata !{i32 %i.3}, i64 0, metadata !124) nounwind, !dbg !123 ; [debug line = 106:34@166:38] [debug variable = i]
  br label %11, !dbg !123                         ; [debug line = 106:34@166:38]

; <label>:16                                      ; preds = %11
  %x_weight.0.i.lcssa = phi i32 [ %x_weight.0.i, %11 ] ; [#uses=3 type=i32]
  %y_weight.0.i.lcssa = phi i32 [ %y_weight.0.i, %11 ] ; [#uses=3 type=i32]
  %tmp.13 = icmp sgt i32 %x_weight.0.i.lcssa, 0, !dbg !125 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.14 = sub nsw i32 0, %x_weight.0.i.lcssa, !dbg !125 ; [#uses=1 type=i32] [debug line = 120:2@166:38]
  %tmp.15 = select i1 %tmp.13, i32 %x_weight.0.i.lcssa, i32 %tmp.14, !dbg !125 ; [#uses=1 type=i32] [debug line = 120:2@166:38]
  %tmp.16 = icmp sgt i32 %y_weight.0.i.lcssa, 0, !dbg !125 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.17 = sub nsw i32 0, %y_weight.0.i.lcssa, !dbg !125 ; [#uses=1 type=i32] [debug line = 120:2@166:38]
  %tmp.18 = select i1 %tmp.16, i32 %y_weight.0.i.lcssa, i32 %tmp.17, !dbg !125 ; [#uses=1 type=i32] [debug line = 120:2@166:38]
  %edge_weight = add nsw i32 %tmp.18, %tmp.15, !dbg !125 ; [#uses=1 type=i32] [debug line = 120:2@166:38]
  call void @llvm.dbg.value(metadata !{i32 %edge_weight}, i64 0, metadata !126) nounwind, !dbg !125 ; [debug line = 120:2@166:38] [debug variable = edge_weight]
  %tmp.19 = trunc i32 %edge_weight to i8, !dbg !127 ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val = xor i8 %tmp.19, -1, !dbg !127       ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  call void @llvm.dbg.value(metadata !{i8 %edge_val}, i64 0, metadata !128) nounwind, !dbg !127 ; [debug line = 122:2@166:38] [debug variable = edge_val]
  %tmp.21 = icmp ult i8 %tmp.19, 55, !dbg !129    ; [#uses=1 type=i1] [debug line = 125:2@166:38]
  br i1 %tmp.21, label %sobel_operator_cache.exit, label %17, !dbg !129 ; [debug line = 125:2@166:38]

; <label>:17                                      ; preds = %16
  %tmp.25 = icmp ugt i8 %tmp.19, -101, !dbg !130  ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %..i = select i1 %tmp.25, i8 0, i8 %edge_val, !dbg !130 ; [#uses=1 type=i8] [debug line = 127:7@166:38]
  br label %sobel_operator_cache.exit

sobel_operator_cache.exit:                        ; preds = %17, %16
  %edge_val.1.i = phi i8 [ %..i, %17 ], [ -1, %16 ] ; [#uses=1 type=i8]
  %val = zext i8 %edge_val.1.i to i32, !dbg !100  ; [#uses=4 type=i32] [debug line = 166:38]
  call void @llvm.dbg.value(metadata !{i32 %val}, i64 0, metadata !131), !dbg !100 ; [debug line = 166:38] [debug variable = val]
  %tmp.26 = shl nuw i32 %val, 24, !dbg !132       ; [#uses=1 type=i32] [debug line = 167:5]
  %tmp.27 = shl nuw nsw i32 %val, 16, !dbg !132   ; [#uses=1 type=i32] [debug line = 167:5]
  %tmp.28 = shl nuw nsw i32 %val, 8, !dbg !132    ; [#uses=1 type=i32] [debug line = 167:5]
  %tmp.29 = or i32 %tmp.26, %val, !dbg !132       ; [#uses=1 type=i32] [debug line = 167:5]
  %tmp.30 = or i32 %tmp.29, %tmp.27, !dbg !132    ; [#uses=1 type=i32] [debug line = 167:5]
  %tmp.31 = or i32 %tmp.30, %tmp.28, !dbg !132    ; [#uses=1 type=i32] [debug line = 167:5]
  %out_pix.addr.1 = getelementptr inbounds [1920 x i32]* %out_pix, i32 %i1, i32 %row.assign, !dbg !132 ; [#uses=1 type=i32*] [debug line = 167:5]
  store i32 %tmp.31, i32* %out_pix.addr.1, align 4, !dbg !132 ; [debug line = 167:5]
  %inter_pix.addr.1 = getelementptr inbounds [1920 x i8]* %inter_pix, i32 %lastLine.1, i32 %row.assign, !dbg !90 ; [#uses=1 type=i8*] [debug line = 168:5]
  %inter_pix.load.1 = load i8* %inter_pix.addr.1, align 1, !dbg !90 ; [#uses=2 type=i8] [debug line = 168:5]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %inter_pix.load.1) nounwind
  %lineBuffer.addr = getelementptr inbounds [4 x [1920 x i8]]* %lineBuffer, i32 0, i32 %tmp.5, i32 %row.assign, !dbg !90 ; [#uses=1 type=i8*] [debug line = 168:5]
  store i8 %inter_pix.load.1, i8* %lineBuffer.addr, align 1, !dbg !90 ; [debug line = 168:5]
  br label %18

; <label>:18                                      ; preds = %sobel_operator_cache.exit, %9
  %rend7 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str10, i32 0, i32 0), i32 %rbegin6) nounwind, !dbg !133 ; [#uses=0 type=i32] [debug line = 170:3]
  %j.1 = add i32 %row.assign, 1, !dbg !134        ; [#uses=1 type=i32] [debug line = 159:37]
  call void @llvm.dbg.value(metadata !{i32 %j.1}, i64 0, metadata !135), !dbg !134 ; [debug line = 159:37] [debug variable = j]
  br label %7, !dbg !134                          ; [debug line = 159:37]

; <label>:19                                      ; preds = %7
  %lastLine.3 = add i32 %lastLine.1, 1, !dbg !136 ; [#uses=1 type=i32] [debug line = 172:4]
  call void @llvm.dbg.value(metadata !{i32 %lastLine.3}, i64 0, metadata !138), !dbg !136 ; [debug line = 172:4] [debug variable = lastLine]
  %lastLine.2 = select i1 %or.cond, i32 %lastLine.1, i32 %lastLine.3, !dbg !139 ; [#uses=1 type=i32] [debug line = 171:3]
  call void @llvm.dbg.value(metadata !{i32 %lastLine.2}, i64 0, metadata !138), !dbg !139 ; [debug line = 171:3] [debug variable = lastLine]
  %rend9 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str9, i32 0, i32 0), i32 %rbegin8) nounwind, !dbg !140 ; [#uses=0 type=i32] [debug line = 174:2]
  %i.2 = add i32 %i1, 1, !dbg !141                ; [#uses=1 type=i32] [debug line = 157:37]
  call void @llvm.dbg.value(metadata !{i32 %i.2}, i64 0, metadata !142), !dbg !141 ; [debug line = 157:37] [debug variable = i]
  br label %.preheader, !dbg !141                 ; [debug line = 157:37]

; <label>:20                                      ; preds = %.preheader
  ret void, !dbg !143                             ; [debug line = 207:1]
}

; [#uses=16]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=6]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=6]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=1]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=4]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=3]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=3]
declare void @_ssdm_Unroll(...) nounwind

; [#uses=1]
declare void @_ssdm_SpecLoopFlatten(...) nounwind

; [#uses=6]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=1]
declare void @_ssdm_SpecArrayPartition(...) nounwind

; [#uses=2]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!37, !44, !46}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 4, metadata !"C:/TEMP/Labo4/SobelLab4/solution1/.autopilot/db/Sobel.pragma.2.cpp", metadata !"C:\5CTEMP\5CLabo4", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !26} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !19, metadata !20}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"sobel_operator", metadata !"sobel_operator", metadata !"_Z14sobel_operatoriiPA1920_h", metadata !6, i32 20, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !17, i32 21} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"SobelLab4/Sobel.cpp", metadata !"C:\5CTEMP\5CLabo4", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !11, metadata !11, metadata !13}
!9 = metadata !{i32 786454, null, metadata !"uint8_t", metadata !6, i32 36, i64 0, i64 0, i64 0, i32 0, metadata !10} ; [ DW_TAG_typedef ]
!10 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!11 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !12} ; [ DW_TAG_const_type ]
!12 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!13 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !14} ; [ DW_TAG_pointer_type ]
!14 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 15360, i64 8, i32 0, i32 0, metadata !9, metadata !15, i32 0, i32 0} ; [ DW_TAG_array_type ]
!15 = metadata !{metadata !16}
!16 = metadata !{i32 786465, i64 0, i64 1919}     ; [ DW_TAG_subrange_type ]
!17 = metadata !{metadata !18}
!18 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!19 = metadata !{i32 786478, i32 0, metadata !6, metadata !"sobel_operator_cache", metadata !"sobel_operator_cache", metadata !"_Z20sobel_operator_cacheiiPA1920_h", metadata !6, i32 75, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !17, i32 76} ; [ DW_TAG_subprogram ]
!20 = metadata !{i32 786478, i32 0, metadata !6, metadata !"sobel_filter", metadata !"sobel_filter", metadata !"_Z12sobel_filterPA1920_hPA1920_j", metadata !6, i32 134, metadata !21, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ([1920 x i8]*, [1920 x i32]*)* @sobel_filter, null, null, metadata !17, i32 135} ; [ DW_TAG_subprogram ]
!21 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !22, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!22 = metadata !{null, metadata !13, metadata !23}
!23 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !24} ; [ DW_TAG_pointer_type ]
!24 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 61440, i64 32, i32 0, i32 0, metadata !25, metadata !15, i32 0, i32 0} ; [ DW_TAG_array_type ]
!25 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!26 = metadata !{metadata !27}
!27 = metadata !{metadata !28, metadata !34, metadata !35, metadata !36}
!28 = metadata !{i32 786484, i32 0, metadata !5, metadata !"x_op", metadata !"x_op", metadata !"", metadata !6, i32 41, metadata !29, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!29 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 72, i64 8, i32 0, i32 0, metadata !30, metadata !32, i32 0, i32 0} ; [ DW_TAG_array_type ]
!30 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !31} ; [ DW_TAG_const_type ]
!31 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!32 = metadata !{metadata !33, metadata !33}
!33 = metadata !{i32 786465, i64 0, i64 2}        ; [ DW_TAG_subrange_type ]
!34 = metadata !{i32 786484, i32 0, metadata !5, metadata !"y_op", metadata !"y_op", metadata !"", metadata !6, i32 45, metadata !29, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!35 = metadata !{i32 786484, i32 0, metadata !19, metadata !"x_op", metadata !"x_op", metadata !"", metadata !6, i32 96, metadata !29, i32 1, i32 1, [3 x [3 x i8]]* @x_op} ; [ DW_TAG_variable ]
!36 = metadata !{i32 786484, i32 0, metadata !19, metadata !"y_op", metadata !"y_op", metadata !"", metadata !6, i32 100, metadata !29, i32 1, i32 1, [3 x [3 x i8]]* @y_op} ; [ DW_TAG_variable ]
!37 = metadata !{null, metadata !38, metadata !39, metadata !40, metadata !41, metadata !42, metadata !43}
!38 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 1}
!39 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!40 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"int", metadata !"uint8_t [1920]*"}
!41 = metadata !{metadata !"kernel_arg_type_qual", metadata !"const", metadata !"const", metadata !""}
!42 = metadata !{metadata !"kernel_arg_name", metadata !"col", metadata !"row", metadata !"image"}
!43 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!44 = metadata !{null, metadata !38, metadata !39, metadata !40, metadata !41, metadata !45, metadata !43}
!45 = metadata !{metadata !"kernel_arg_name", metadata !"col", metadata !"row", metadata !"cache"}
!46 = metadata !{void ([1920 x i8]*, [1920 x i32]*)* @sobel_filter, metadata !47, metadata !48, metadata !49, metadata !50, metadata !51, metadata !43}
!47 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!48 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!49 = metadata !{metadata !"kernel_arg_type", metadata !"uint8_t [1920]*", metadata !"uint [1920]*"}
!50 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!51 = metadata !{metadata !"kernel_arg_name", metadata !"inter_pix", metadata !"out_pix"}
!52 = metadata !{i32 786689, metadata !20, metadata !"inter_pix", metadata !6, i32 16777350, metadata !13, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!53 = metadata !{i32 134, i32 27, metadata !20, null}
!54 = metadata !{i32 786689, metadata !20, metadata !"out_pix", metadata !6, i32 33554566, metadata !23, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!55 = metadata !{i32 134, i32 59, metadata !20, null}
!56 = metadata !{i32 135, i32 2, metadata !57, null}
!57 = metadata !{i32 786443, metadata !20, i32 135, i32 1, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!58 = metadata !{i32 135, i32 39, metadata !57, null}
!59 = metadata !{i32 143, i32 1, metadata !57, null}
!60 = metadata !{i32 144, i32 1, metadata !57, null}
!61 = metadata !{i32 145, i32 1, metadata !57, null}
!62 = metadata !{i32 786688, metadata !57, metadata !"lineBuffer", metadata !6, i32 148, metadata !63, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!63 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 61440, i64 8, i32 0, i32 0, metadata !9, metadata !64, i32 0, i32 0} ; [ DW_TAG_array_type ]
!64 = metadata !{metadata !65, metadata !16}
!65 = metadata !{i32 786465, i64 0, i64 3}        ; [ DW_TAG_subrange_type ]
!66 = metadata !{i32 148, i32 10, metadata !57, null}
!67 = metadata !{i32 149, i32 1, metadata !57, null}
!68 = metadata !{i32 151, i32 14, metadata !69, null}
!69 = metadata !{i32 786443, metadata !57, i32 151, i32 14, metadata !6, i32 11} ; [ DW_TAG_lexical_block ]
!70 = metadata !{i32 157, i32 25, metadata !71, null}
!71 = metadata !{i32 786443, metadata !57, i32 157, i32 2, metadata !6, i32 15} ; [ DW_TAG_lexical_block ]
!72 = metadata !{i32 151, i32 46, metadata !73, null}
!73 = metadata !{i32 786443, metadata !69, i32 151, i32 45, metadata !6, i32 12} ; [ DW_TAG_lexical_block ]
!74 = metadata !{i32 152, i32 37, metadata !75, null}
!75 = metadata !{i32 786443, metadata !73, i32 152, i32 14, metadata !6, i32 13} ; [ DW_TAG_lexical_block ]
!76 = metadata !{i32 152, i32 54, metadata !77, null}
!77 = metadata !{i32 786443, metadata !75, i32 152, i32 53, metadata !6, i32 14} ; [ DW_TAG_lexical_block ]
!78 = metadata !{i32 153, i32 4, metadata !77, null}
!79 = metadata !{i32 154, i32 3, metadata !77, null}
!80 = metadata !{i32 152, i32 49, metadata !75, null}
!81 = metadata !{i32 786688, metadata !75, metadata !"i", metadata !6, i32 152, metadata !25, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!82 = metadata !{i32 156, i32 2, metadata !73, null}
!83 = metadata !{i32 151, i32 34, metadata !69, null}
!84 = metadata !{i32 157, i32 43, metadata !85, null}
!85 = metadata !{i32 786443, metadata !71, i32 157, i32 42, metadata !6, i32 16} ; [ DW_TAG_lexical_block ]
!86 = metadata !{i32 158, i32 1, metadata !85, null}
!87 = metadata !{i32 162, i32 2, metadata !88, null}
!88 = metadata !{i32 786443, metadata !89, i32 159, i32 42, metadata !6, i32 18} ; [ DW_TAG_lexical_block ]
!89 = metadata !{i32 786443, metadata !85, i32 159, i32 2, metadata !6, i32 17} ; [ DW_TAG_lexical_block ]
!90 = metadata !{i32 168, i32 5, metadata !91, null}
!91 = metadata !{i32 786443, metadata !88, i32 165, i32 9, metadata !6, i32 20} ; [ DW_TAG_lexical_block ]
!92 = metadata !{i32 159, i32 25, metadata !89, null}
!93 = metadata !{i32 159, i32 43, metadata !88, null}
!94 = metadata !{i32 160, i32 1, metadata !88, null}
!95 = metadata !{i32 161, i32 1, metadata !88, null}
!96 = metadata !{i32 163, i32 5, metadata !97, null}
!97 = metadata !{i32 786443, metadata !88, i32 162, i32 50, metadata !6, i32 19} ; [ DW_TAG_lexical_block ]
!98 = metadata !{i32 164, i32 4, metadata !97, null}
!99 = metadata !{i32 786689, metadata !19, metadata !"row", metadata !6, i32 33554507, metadata !11, i32 0, metadata !100} ; [ DW_TAG_arg_variable ]
!100 = metadata !{i32 166, i32 38, metadata !91, null}
!101 = metadata !{i32 75, i32 55, metadata !19, metadata !100}
!102 = metadata !{i32 786689, metadata !19, metadata !"cache", metadata !6, i32 50331723, metadata !13, i32 0, metadata !100} ; [ DW_TAG_arg_variable ]
!103 = metadata !{i32 75, i32 68, metadata !19, metadata !100}
!104 = metadata !{i32 106, i32 25, metadata !105, metadata !100}
!105 = metadata !{i32 786443, metadata !106, i32 106, i32 11, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!106 = metadata !{i32 786443, metadata !19, i32 76, i32 1, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!107 = metadata !{i32 106, i32 40, metadata !108, metadata !100}
!108 = metadata !{i32 786443, metadata !105, i32 106, i32 39, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!109 = metadata !{i32 107, i32 1, metadata !108, metadata !100}
!110 = metadata !{i32 111, i32 4, metadata !111, metadata !100}
!111 = metadata !{i32 786443, metadata !112, i32 108, i32 39, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!112 = metadata !{i32 786443, metadata !108, i32 108, i32 11, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!113 = metadata !{i32 108, i32 25, metadata !112, metadata !100}
!114 = metadata !{i32 108, i32 40, metadata !111, metadata !100}
!115 = metadata !{i32 109, i32 1, metadata !111, metadata !100}
!116 = metadata !{i32 786688, metadata !106, metadata !"x_weight", metadata !6, i32 90, metadata !12, i32 0, metadata !100} ; [ DW_TAG_auto_variable ]
!117 = metadata !{i32 115, i32 4, metadata !111, metadata !100}
!118 = metadata !{i32 786688, metadata !106, metadata !"y_weight", metadata !6, i32 91, metadata !12, i32 0, metadata !100} ; [ DW_TAG_auto_variable ]
!119 = metadata !{i32 117, i32 3, metadata !111, metadata !100}
!120 = metadata !{i32 108, i32 34, metadata !112, metadata !100}
!121 = metadata !{i32 786688, metadata !112, metadata !"j", metadata !6, i32 108, metadata !12, i32 0, metadata !100} ; [ DW_TAG_auto_variable ]
!122 = metadata !{i32 118, i32 2, metadata !108, metadata !100}
!123 = metadata !{i32 106, i32 34, metadata !105, metadata !100}
!124 = metadata !{i32 786688, metadata !105, metadata !"i", metadata !6, i32 106, metadata !12, i32 0, metadata !100} ; [ DW_TAG_auto_variable ]
!125 = metadata !{i32 120, i32 2, metadata !106, metadata !100}
!126 = metadata !{i32 786688, metadata !106, metadata !"edge_weight", metadata !6, i32 93, metadata !25, i32 0, metadata !100} ; [ DW_TAG_auto_variable ]
!127 = metadata !{i32 122, i32 2, metadata !106, metadata !100}
!128 = metadata !{i32 786688, metadata !106, metadata !"edge_val", metadata !6, i32 94, metadata !9, i32 0, metadata !100} ; [ DW_TAG_auto_variable ]
!129 = metadata !{i32 125, i32 2, metadata !106, metadata !100}
!130 = metadata !{i32 127, i32 7, metadata !106, metadata !100}
!131 = metadata !{i32 786688, metadata !91, metadata !"val", metadata !6, i32 166, metadata !25, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!132 = metadata !{i32 167, i32 5, metadata !91, null}
!133 = metadata !{i32 170, i32 3, metadata !88, null}
!134 = metadata !{i32 159, i32 37, metadata !89, null}
!135 = metadata !{i32 786688, metadata !89, metadata !"j", metadata !6, i32 159, metadata !25, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!136 = metadata !{i32 172, i32 4, metadata !137, null}
!137 = metadata !{i32 786443, metadata !85, i32 171, i32 27, metadata !6, i32 21} ; [ DW_TAG_lexical_block ]
!138 = metadata !{i32 786688, metadata !57, metadata !"lastLine", metadata !6, i32 150, metadata !25, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!139 = metadata !{i32 171, i32 3, metadata !85, null}
!140 = metadata !{i32 174, i32 2, metadata !85, null}
!141 = metadata !{i32 157, i32 37, metadata !71, null}
!142 = metadata !{i32 786688, metadata !71, metadata !"i", metadata !6, i32 157, metadata !25, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!143 = metadata !{i32 207, i32 1, metadata !57, null}
