; ModuleID = 'C:/TEMP/Labo4/SobelLab4/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@sobel_filter.str = internal unnamed_addr constant [13 x i8] c"sobel_filter\00" ; [#uses=1 type=[13 x i8]*]
@.str9 = private unnamed_addr constant [12 x i8] c"hls_label_1\00", align 1 ; [#uses=20 type=[12 x i8]*]
@.str8 = private unnamed_addr constant [9 x i8] c"LoadLine\00", align 1 ; [#uses=1 type=[9 x i8]*]
@.str7 = private unnamed_addr constant [10 x i8] c"LoadCache\00", align 1 ; [#uses=3 type=[10 x i8]*]
@.str5 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str4 = private unnamed_addr constant [6 x i8] c"slave\00", align 1 ; [#uses=2 type=[6 x i8]*]
@.str3 = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1 ; [#uses=2 type=[6 x i8]*]
@.str10 = private unnamed_addr constant [12 x i8] c"hls_label_0\00", align 1 ; [#uses=20 type=[12 x i8]*]
@.str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=36 type=[1 x i8]*]

; [#uses=0]
define void @sobel_filter([1080 x [1920 x i8]]* %inter_pix, [1080 x [1920 x i32]]* %out_pix) nounwind {
  call void (...)* @_ssdm_op_SpecBitsMap([1080 x [1920 x i8]]* %inter_pix) nounwind, !map !50
  call void (...)* @_ssdm_op_SpecBitsMap([1080 x [1920 x i32]]* %out_pix) nounwind, !map !57
  call void (...)* @_ssdm_op_SpecTopModule([13 x i8]* @sobel_filter.str) nounwind
  %"lineBuffer[0]" = alloca [1920 x i8], align 1  ; [#uses=31 type=[1920 x i8]*]
  %"lineBuffer[1]" = alloca [1920 x i8], align 1  ; [#uses=31 type=[1920 x i8]*]
  %"lineBuffer[2]" = alloca [1920 x i8], align 1  ; [#uses=31 type=[1920 x i8]*]
  %"lineBuffer[3]" = alloca [1920 x i8], align 1  ; [#uses=30 type=[1920 x i8]*]
  call void @llvm.dbg.value(metadata !{[1080 x [1920 x i8]]* %inter_pix}, i64 0, metadata !61), !dbg !65 ; [debug line = 134:27] [debug variable = inter_pix]
  call void @llvm.dbg.value(metadata !{[1080 x [1920 x i32]]* %out_pix}, i64 0, metadata !66), !dbg !68 ; [debug line = 134:59] [debug variable = out_pix]
  call void (...)* @_ssdm_op_SpecInterface([1080 x [1920 x i8]]* %inter_pix, [6 x i8]* @.str3, i32 0, i32 0, [1 x i8]* @.str, i32 0, i32 0, [1 x i8]* @.str, [6 x i8]* @.str4, [1 x i8]* @.str, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @.str, [1 x i8]* @.str) nounwind
  call void (...)* @_ssdm_op_SpecInterface([1080 x [1920 x i32]]* %out_pix, [6 x i8]* @.str3, i32 0, i32 0, [1 x i8]* @.str, i32 0, i32 0, [1 x i8]* @.str, [6 x i8]* @.str4, [1 x i8]* @.str, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @.str, [1 x i8]* @.str) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @.str5, i32 0, i32 0, [1 x i8]* @.str, i32 0, i32 0, [1 x i8]* @.str, [1 x i8]* @.str, [1 x i8]* @.str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @.str, [1 x i8]* @.str) nounwind, !dbg !69 ; [debug line = 145:1]
  call void @llvm.dbg.declare(metadata !{[1920 x i8]* %"lineBuffer[0]"}, metadata !71), !dbg !77 ; [debug line = 148:10] [debug variable = lineBuffer[0]]
  call void @llvm.dbg.declare(metadata !{[1920 x i8]* %"lineBuffer[1]"}, metadata !78), !dbg !77 ; [debug line = 148:10] [debug variable = lineBuffer[1]]
  call void @llvm.dbg.declare(metadata !{[1920 x i8]* %"lineBuffer[2]"}, metadata !79), !dbg !77 ; [debug line = 148:10] [debug variable = lineBuffer[2]]
  call void @llvm.dbg.declare(metadata !{[1920 x i8]* %"lineBuffer[3]"}, metadata !80), !dbg !77 ; [debug line = 148:10] [debug variable = lineBuffer[3]]
  br label %1, !dbg !81                           ; [debug line = 151:14]

; <label>:1                                       ; preds = %8, %0
  %lastLine = phi i2 [ 0, %0 ], [ %tmp.6, %8 ]    ; [#uses=4 type=i2]
  %lastLine.cast = zext i2 %lastLine to i32, !dbg !81 ; [#uses=1 type=i32] [debug line = 151:14]
  %tmp = icmp eq i2 %lastLine, -1, !dbg !81       ; [#uses=1 type=i1] [debug line = 151:14]
  %2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind ; [#uses=0 type=i32]
  br i1 %tmp, label %.preheader.0.preheader, label %3, !dbg !81 ; [debug line = 151:14]

.preheader.0.preheader:                           ; preds = %1
  br label %.preheader.0

; <label>:3                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName([10 x i8]* @.str7) nounwind, !dbg !83 ; [debug line = 151:46]
  %tmp.3 = call i32 (...)* @_ssdm_op_SpecRegionBegin([10 x i8]* @.str7) nounwind, !dbg !83 ; [#uses=1 type=i32] [debug line = 151:46]
  br label %4, !dbg !85                           ; [debug line = 152:37]

; <label>:4                                       ; preds = %7, %3
  %i = phi i11 [ 0, %3 ], [ %i.1, %7 ]            ; [#uses=3 type=i11]
  %i.cast = zext i11 %i to i32, !dbg !85          ; [#uses=4 type=i32] [debug line = 152:37]
  %tmp.2 = icmp eq i11 %i, -128, !dbg !85         ; [#uses=1 type=i1] [debug line = 152:37]
  %5 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  br i1 %tmp.2, label %8, label %6, !dbg !85      ; [debug line = 152:37]

; <label>:6                                       ; preds = %4
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @.str8) nounwind, !dbg !87 ; [debug line = 152:54]
  %inter_pix.addr = getelementptr [1080 x [1920 x i8]]* %inter_pix, i32 0, i32 %lastLine.cast, i32 %i.cast, !dbg !89 ; [#uses=1 type=i8*] [debug line = 153:4]
  %inter_pix.load = load i8* %inter_pix.addr, align 1, !dbg !89 ; [#uses=3 type=i8] [debug line = 153:4]
  %"lineBuffer[0].addr" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %i.cast, !dbg !89 ; [#uses=1 type=i8*] [debug line = 153:4]
  %"lineBuffer[1].addr" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %i.cast, !dbg !89 ; [#uses=1 type=i8*] [debug line = 153:4]
  %"lineBuffer[2].addr" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %i.cast, !dbg !89 ; [#uses=1 type=i8*] [debug line = 153:4]
  switch i2 %lastLine, label %branch42 [
    i2 0, label %branch40
    i2 1, label %branch41
  ], !dbg !89                                     ; [debug line = 153:4]

; <label>:7                                       ; preds = %branch42, %branch41, %branch40
  %i.1 = add i11 %i, 1, !dbg !90                  ; [#uses=1 type=i11] [debug line = 152:49]
  call void @llvm.dbg.value(metadata !{i11 %i.1}, i64 0, metadata !91), !dbg !90 ; [debug line = 152:49] [debug variable = i]
  br label %4, !dbg !90                           ; [debug line = 152:49]

; <label>:8                                       ; preds = %4
  %9 = call i32 (...)* @_ssdm_op_SpecRegionEnd([10 x i8]* @.str7, i32 %tmp.3) nounwind, !dbg !92 ; [#uses=0 type=i32] [debug line = 156:2]
  %tmp.6 = add i2 %lastLine, 1, !dbg !93          ; [#uses=1 type=i2] [debug line = 151:34]
  br label %1, !dbg !93                           ; [debug line = 151:34]

.preheader.0:                                     ; preds = %75, %.preheader.0.preheader
  %lastLine.1 = phi i32 [ %lastLine.2.9, %75 ], [ 3, %.preheader.0.preheader ] ; [#uses=4 type=i32]
  %i1 = phi i11 [ %i.2.9, %75 ], [ 0, %.preheader.0.preheader ] ; [#uses=13 type=i11]
  %i1.cast = zext i11 %i1 to i32                  ; [#uses=2 type=i32]
  %10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 108, i64 108, i64 108) nounwind ; [#uses=0 type=i32]
  %tmp.1 = icmp eq i11 %i1, -968, !dbg !94        ; [#uses=1 type=i1] [debug line = 157:25]
  br i1 %tmp.1, label %83, label %14, !dbg !94    ; [debug line = 157:25]

.preheader.1:                                     ; preds = %12
  %lastLine.3 = add i32 %lastLine.1, 1, !dbg !96  ; [#uses=1 type=i32] [debug line = 172:4]
  %lastLine.2 = select i1 %tmp., i32 %lastLine.1, i32 %lastLine.3, !dbg !99 ; [#uses=5 type=i32] [debug line = 171:3]
  %lastLine.2.cast = trunc i32 %lastLine.2 to i12, !dbg !100 ; [#uses=7 type=i12] [debug line = 174:2]
  %11 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str9, i32 %tmp.4) nounwind, !dbg !100 ; [#uses=0 type=i32] [debug line = 174:2]
  %i.2. = or i11 %i1, 1, !dbg !101                ; [#uses=1 type=i11] [debug line = 157:37]
  %i.2..cast = zext i11 %i.2. to i32, !dbg !101   ; [#uses=2 type=i32] [debug line = 157:37]
  %tmp.5 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str9) nounwind, !dbg !102 ; [#uses=1 type=i32] [debug line = 157:43]
  %tmp.10 = trunc i32 %lastLine.2 to i2           ; [#uses=26 type=i2]
  %tmp.19.1.0.t = add i2 %tmp.10, 1               ; [#uses=19 type=i2]
  %tmp.19.1.1.t = xor i2 %tmp.10, -2              ; [#uses=20 type=i2]
  %tmp.19.1.2.t = add i2 %tmp.10, -1              ; [#uses=19 type=i2]
  br label %20, !dbg !103                         ; [debug line = 159:25]

; <label>:12                                      ; preds = %15, %14
  %row.assign = phi i11 [ 0, %14 ], [ %j.1, %15 ] ; [#uses=6 type=i11]
  %row.assign.cast = zext i11 %row.assign to i32, !dbg !103 ; [#uses=7 type=i32] [debug line = 159:25]
  %tmp.8 = icmp eq i11 %row.assign, -128, !dbg !103 ; [#uses=1 type=i1] [debug line = 159:25]
  %13 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  br i1 %tmp.8, label %.preheader.1, label %18, !dbg !103 ; [debug line = 159:25]

; <label>:14                                      ; preds = %.preheader.0
  %tmp.4 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str9) nounwind, !dbg !102 ; [#uses=1 type=i32] [debug line = 157:43]
  %tmp. = icmp eq i11 %i1, 0, !dbg !105           ; [#uses=2 type=i1] [debug line = 162:2]
  %tmp.9 = trunc i32 %lastLine.1 to i2            ; [#uses=4 type=i2]
  %tmp.19.0.0.t = add i2 %tmp.9, 1                ; [#uses=3 type=i2]
  %tmp.19.0.1.t = xor i2 %tmp.9, -2               ; [#uses=2 type=i2]
  %tmp.19.0.2.t = add i2 %tmp.9, -1               ; [#uses=3 type=i2]
  br label %12, !dbg !103                         ; [debug line = 159:25]

; <label>:15                                      ; preds = %sobel_operator_cache.exit.0501, %17
  %16 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str10, i32 %tmp.7) nounwind, !dbg !107 ; [#uses=0 type=i32] [debug line = 170:3]
  %j.1 = add i11 %row.assign, 1, !dbg !108        ; [#uses=1 type=i11] [debug line = 159:37]
  br label %12, !dbg !108                         ; [debug line = 159:37]

; <label>:17                                      ; preds = %switch.early.test, %switch.early.test, %18
  %out_pix.addr = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i1.cast, i32 %row.assign.cast, !dbg !109 ; [#uses=1 type=i32*] [debug line = 163:5]
  store i32 0, i32* %out_pix.addr, align 4, !dbg !109 ; [debug line = 163:5]
  br label %15, !dbg !111                         ; [debug line = 164:4]

; <label>:18                                      ; preds = %12
  %tmp.7 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str10) nounwind, !dbg !112 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @.str) nounwind, !dbg !113 ; [debug line = 160:1]
  call void (...)* @_ssdm_SpecLoopFlatten(i32 1, [1 x i8]* @.str) nounwind, !dbg !114 ; [debug line = 161:1]
  br i1 %tmp., label %17, label %switch.early.test

switch.early.test:                                ; preds = %18
  switch i11 %row.assign, label %.preheader9.preheader.0_ifconv [
    i11 -129, label %17
    i11 0, label %17
  ], !dbg !105                                    ; [debug line = 162:2]

sobel_operator_cache.exit.0501:                   ; preds = %branch39, %branch38, %branch37, %branch36
  br label %15

.preheader9.preheader.0_ifconv:                   ; preds = %switch.early.test
  %tmp.28 = add i11 %row.assign, -1, !dbg !115    ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.28.0.cast = zext i11 %tmp.28 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.1" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.0.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load" = load i8* %"lineBuffer[0].addr.1", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.1" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.0.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load" = load i8* %"lineBuffer[1].addr.1", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.1" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.0.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load" = load i8* %"lineBuffer[2].addr.1", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.0.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load" = load i8* %"lineBuffer[3].addr", align 1 ; [#uses=3 type=i8]
  %tmp.13 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load", i8 %"lineBuffer[1].load", i8 %"lineBuffer[2].load", i8 %"lineBuffer[3].load", i2 %tmp.19.0.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.0.cast = zext i8 %tmp.13 to i9          ; [#uses=2 type=i9]
  %"lineBuffer[0].addr.2" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %row.assign.cast ; [#uses=2 type=i8*]
  %"lineBuffer[0].load.1" = load i8* %"lineBuffer[0].addr.2", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[1].addr.2" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %row.assign.cast ; [#uses=2 type=i8*]
  %"lineBuffer[1].load.1" = load i8* %"lineBuffer[1].addr.2", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[2].addr.2" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %row.assign.cast ; [#uses=2 type=i8*]
  %"lineBuffer[2].load.1" = load i8* %"lineBuffer[2].addr.2", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[3].addr.1" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %row.assign.cast ; [#uses=2 type=i8*]
  %"lineBuffer[3].load.1" = load i8* %"lineBuffer[3].addr.1", align 1 ; [#uses=2 type=i8]
  %tmp.14 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.1", i8 %"lineBuffer[1].load.1", i8 %"lineBuffer[2].load.1", i8 %"lineBuffer[3].load.1", i2 %tmp.19.0.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.0.0.1.cast = zext i8 %tmp.14 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.0.0.1 = shl nuw i9 %tmp.29.0.0.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.0.0.1.cast = zext i9 %tmp.33.0.0.1 to i10, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp.28.0.0.2 = add i11 %row.assign, 1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.28.0.0.2.cast = zext i11 %tmp.28.0.0.2 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.3" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.0.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.2" = load i8* %"lineBuffer[0].addr.3", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.3" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.0.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.2" = load i8* %"lineBuffer[1].addr.3", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.3" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.0.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.2" = load i8* %"lineBuffer[2].addr.3", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.2" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.0.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.2" = load i8* %"lineBuffer[3].addr.2", align 1 ; [#uses=3 type=i8]
  %tmp.15 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.2", i8 %"lineBuffer[1].load.2", i8 %"lineBuffer[2].load.2", i8 %"lineBuffer[3].load.2", i2 %tmp.19.0.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.0.0.2.cast = zext i8 %tmp.15 to i9, !dbg !115 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight.0.0.2 = sub i9 %tmp.29.0.0.2.cast, %tmp.29.0.cast, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight.0.0.2.cast = sext i9 %x_weight.0.0.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.16 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load", i8 %"lineBuffer[1].load", i8 %"lineBuffer[2].load", i8 %"lineBuffer[3].load", i2 %tmp.19.0.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.0.1.cast = zext i8 %tmp.16 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl1 = shl nuw i9 %tmp.29.0.1.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl1.cast = zext i9 %_shl1 to i11, !dbg !115  ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.0.1.1 = sub i11 %x_weight.0.0.2.cast, %_shl1.cast, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.17 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.2", i8 %"lineBuffer[1].load.2", i8 %"lineBuffer[2].load.2", i8 %"lineBuffer[3].load.2", i2 %tmp.19.0.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.0.1.2.cast = zext i8 %tmp.17 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.0.1.2 = shl nuw i9 %tmp.29.0.1.2.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.0.1.2.cast = zext i9 %tmp.31.0.1.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.0.1.2 = add i11 %tmp.31.0.1.2.cast, %x_weight.0.1.1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp2 = add i9 %tmp.29.0.0.2.cast, %tmp.29.0.cast, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp2.cast = zext i9 %tmp2 to i10, !dbg !123    ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.0.1.2 = add i10 %tmp.33.0.0.1.cast, %tmp2.cast, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.0.1.2.cast = zext i10 %y_weight.0.1.2 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.18 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load", i8 %"lineBuffer[1].load", i8 %"lineBuffer[2].load", i8 %"lineBuffer[3].load", i2 %tmp.19.0.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.0.2.cast = zext i8 %tmp.18 to i11, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight.0.2 = sub i11 %x_weight.0.1.2, %tmp.29.0.2.cast, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight.0.2 = sub i11 %y_weight.0.1.2.cast, %tmp.29.0.2.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.19 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.1", i8 %"lineBuffer[1].load.1", i8 %"lineBuffer[2].load.1", i8 %"lineBuffer[3].load.1", i2 %tmp.19.0.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.0.2.1.cast = zext i8 %tmp.19 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl = shl nuw i9 %tmp.29.0.2.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl.cast = zext i9 %_shl to i11, !dbg !123    ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight.0.2.1 = sub i11 %y_weight.0.2, %_shl.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.27 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.2", i8 %"lineBuffer[1].load.2", i8 %"lineBuffer[2].load.2", i8 %"lineBuffer[3].load.2", i2 %tmp.19.0.2.t) nounwind ; [#uses=2 type=i8]
  %tmp.29.0.2.2.cast = zext i8 %tmp.27 to i11     ; [#uses=2 type=i11]
  %tmp.20 = trunc i11 %x_weight.0.2 to i8         ; [#uses=1 type=i8]
  %x_weight.0.2.2 = add i11 %tmp.29.0.2.2.cast, %x_weight.0.2, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight.0.2.2 = sub i11 %y_weight.0.2.1, %tmp.29.0.2.2.cast, !dbg !123 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp.29 = icmp sgt i11 %x_weight.0.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.21 = add i8 %tmp.20, %tmp.27, !dbg !124    ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.22 = sub i8 0, %tmp.21, !dbg !124          ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.23 = select i1 %tmp.29, i8 %tmp.21, i8 %tmp.22, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.30 = icmp sgt i11 %y_weight.0.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.24 = trunc i11 %y_weight.0.2.2 to i8, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.25 = sub i8 0, %tmp.24, !dbg !124          ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.26 = select i1 %tmp.30, i8 %tmp.24, i8 %tmp.25, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.31 = add i8 %tmp.26, %tmp.23, !dbg !125    ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val = xor i8 %tmp.31, -1, !dbg !125       ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp.32 = icmp ult i8 %tmp.31, 55, !dbg !126    ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp.33 = icmp ugt i8 %tmp.31, -101, !dbg !127  ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %..i = sext i1 %tmp.32 to i8                    ; [#uses=1 type=i8]
  %tmp.34 = or i1 %tmp.32, %tmp.33                ; [#uses=1 type=i1]
  %edge_val.1.i = select i1 %tmp.34, i8 %..i, i8 %edge_val ; [#uses=4 type=i8]
  %val.cast = zext i8 %edge_val.1.i to i16, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp.35 = shl nuw i16 %val.cast, 8, !dbg !128   ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp3 = call i24 @_ssdm_op_BitConcatenate.i24.i8.i16(i8 %edge_val.1.i, i16 %tmp.35), !dbg !128 ; [#uses=1 type=i24] [debug line = 167:5]
  %tmp.36 = call i24 @_ssdm_op_BitConcatenate.i24.i16.i8(i16 0, i8 %edge_val.1.i) ; [#uses=1 type=i24]
  %tmp.37 = or i24 %tmp.36, %tmp3                 ; [#uses=1 type=i24]
  %tmp.38 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i24(i8 %edge_val.1.i, i24 %tmp.37), !dbg !128 ; [#uses=1 type=i32] [debug line = 167:5]
  %out_pix.addr.2 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i1.cast, i32 %row.assign.cast, !dbg !128 ; [#uses=1 type=i32*] [debug line = 167:5]
  store i32 %tmp.38, i32* %out_pix.addr.2, align 4, !dbg !128 ; [debug line = 167:5]
  %inter_pix.addr.1 = getelementptr [1080 x [1920 x i8]]* %inter_pix, i32 0, i32 %lastLine.1, i32 %row.assign.cast, !dbg !129 ; [#uses=1 type=i8*] [debug line = 168:5]
  %inter_pix.load.1 = load i8* %inter_pix.addr.1, align 1, !dbg !129 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp.9, label %branch39 [
    i2 0, label %branch36
    i2 1, label %branch37
    i2 -2, label %branch38
  ], !dbg !129                                    ; [debug line = 168:5]

.preheader.2:                                     ; preds = %20
  %lastLine.3.1 = add i12 %lastLine.2.cast, 1, !dbg !96 ; [#uses=1 type=i12] [debug line = 172:4]
  %lastLine.3.1.cast = zext i12 %lastLine.3.1 to i32, !dbg !96 ; [#uses=1 type=i32] [debug line = 172:4]
  %19 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str9, i32 %tmp.5) nounwind, !dbg !100 ; [#uses=0 type=i32] [debug line = 174:2]
  %i.2.1 = add i11 %i1, 2, !dbg !101              ; [#uses=1 type=i11] [debug line = 157:37]
  %i.2.1.cast = zext i11 %i.2.1 to i32, !dbg !101 ; [#uses=2 type=i32] [debug line = 157:37]
  %tmp.11 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str9) nounwind, !dbg !102 ; [#uses=1 type=i32] [debug line = 157:43]
  br label %27, !dbg !103                         ; [debug line = 159:25]

; <label>:20                                      ; preds = %22, %.preheader.1
  %row.assign.1 = phi i11 [ 0, %.preheader.1 ], [ %j.1.1, %22 ] ; [#uses=6 type=i11]
  %row.assign.1.cast1 = zext i11 %row.assign.1 to i32, !dbg !103 ; [#uses=7 type=i32] [debug line = 159:25]
  %row.assign.1.cast = zext i11 %row.assign.1 to i12, !dbg !103 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp.8.1 = icmp eq i11 %row.assign.1, -128, !dbg !103 ; [#uses=1 type=i1] [debug line = 159:25]
  %21 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  br i1 %tmp.8.1, label %.preheader.2, label %25, !dbg !103 ; [debug line = 159:25]

; <label>:22                                      ; preds = %sobel_operator_cache.exit.1496, %24
  %23 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str10, i32 %tmp.12) nounwind, !dbg !107 ; [#uses=0 type=i32] [debug line = 170:3]
  %j.1.1 = add i11 %row.assign.1, 1, !dbg !108    ; [#uses=1 type=i11] [debug line = 159:37]
  br label %20, !dbg !108                         ; [debug line = 159:37]

; <label>:24                                      ; preds = %25, %25
  %out_pix.addr.1 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2..cast, i32 %row.assign.1.cast1, !dbg !109 ; [#uses=1 type=i32*] [debug line = 163:5]
  store i32 0, i32* %out_pix.addr.1, align 4, !dbg !109 ; [debug line = 163:5]
  br label %22, !dbg !111                         ; [debug line = 164:4]

; <label>:25                                      ; preds = %20
  %tmp.12 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str10) nounwind, !dbg !112 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @.str) nounwind, !dbg !113 ; [debug line = 160:1]
  call void (...)* @_ssdm_SpecLoopFlatten(i32 1, [1 x i8]* @.str) nounwind, !dbg !114 ; [debug line = 161:1]
  switch i11 %row.assign.1, label %.preheader9.preheader.1_ifconv [
    i11 -129, label %24
    i11 0, label %24
  ]

sobel_operator_cache.exit.1496:                   ; preds = %branch35, %branch34, %branch33, %branch32
  br label %22

.preheader9.preheader.1_ifconv:                   ; preds = %25
  %tmp.28.1 = add i12 %row.assign.1.cast, -1, !dbg !115 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp.28.1.cast = sext i12 %tmp.28.1 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.4" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.1.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.3" = load i8* %"lineBuffer[0].addr.4", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.4" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.1.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.3" = load i8* %"lineBuffer[1].addr.4", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.4" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.1.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.3" = load i8* %"lineBuffer[2].addr.4", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.3" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.1.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.3" = load i8* %"lineBuffer[3].addr.3", align 1 ; [#uses=3 type=i8]
  %tmp.39 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.3", i8 %"lineBuffer[1].load.3", i8 %"lineBuffer[2].load.3", i8 %"lineBuffer[3].load.3", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.1.cast = zext i8 %tmp.39 to i9          ; [#uses=2 type=i9]
  %"lineBuffer[0].addr.5" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %row.assign.1.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[0].load.4" = load i8* %"lineBuffer[0].addr.5", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[1].addr.5" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %row.assign.1.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[1].load.4" = load i8* %"lineBuffer[1].addr.5", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[2].addr.5" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %row.assign.1.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[2].load.4" = load i8* %"lineBuffer[2].addr.5", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[3].addr.4" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %row.assign.1.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[3].load.4" = load i8* %"lineBuffer[3].addr.4", align 1 ; [#uses=2 type=i8]
  %tmp.40 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.4", i8 %"lineBuffer[1].load.4", i8 %"lineBuffer[2].load.4", i8 %"lineBuffer[3].load.4", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.1.0.1.cast = zext i8 %tmp.40 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.1.0.1 = shl nuw i9 %tmp.29.1.0.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.1.0.1.cast = zext i9 %tmp.33.1.0.1 to i10, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp.28.1.0.2 = add i11 %row.assign.1, 1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.28.1.0.2.cast = zext i11 %tmp.28.1.0.2 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.6" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.1.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.5" = load i8* %"lineBuffer[0].addr.6", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.6" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.1.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.5" = load i8* %"lineBuffer[1].addr.6", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.6" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.1.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.5" = load i8* %"lineBuffer[2].addr.6", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.5" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.1.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.5" = load i8* %"lineBuffer[3].addr.5", align 1 ; [#uses=3 type=i8]
  %tmp.41 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.5", i8 %"lineBuffer[1].load.5", i8 %"lineBuffer[2].load.5", i8 %"lineBuffer[3].load.5", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.1.0.2.cast = zext i8 %tmp.41 to i9, !dbg !115 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight.1.0.2 = sub i9 %tmp.29.1.0.2.cast, %tmp.29.1.cast, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight.1.0.2.cast = sext i9 %x_weight.1.0.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.42 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.3", i8 %"lineBuffer[1].load.3", i8 %"lineBuffer[2].load.3", i8 %"lineBuffer[3].load.3", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.1.1.cast = zext i8 %tmp.42 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl2 = shl nuw i9 %tmp.29.1.1.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl2.cast = zext i9 %_shl2 to i11, !dbg !115  ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.1.1.1 = sub i11 %x_weight.1.0.2.cast, %_shl2.cast, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.43 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.5", i8 %"lineBuffer[1].load.5", i8 %"lineBuffer[2].load.5", i8 %"lineBuffer[3].load.5", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.1.1.2.cast = zext i8 %tmp.43 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.1.1.2 = shl nuw i9 %tmp.29.1.1.2.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.1.1.2.cast = zext i9 %tmp.31.1.1.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.1.1.2 = add i11 %tmp.31.1.1.2.cast, %x_weight.1.1.1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp4 = add i9 %tmp.29.1.0.2.cast, %tmp.29.1.cast, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp4.cast = zext i9 %tmp4 to i10, !dbg !123    ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.1.1.2 = add i10 %tmp.33.1.0.1.cast, %tmp4.cast, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.1.1.2.cast = zext i10 %y_weight.1.1.2 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.51 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.3", i8 %"lineBuffer[1].load.3", i8 %"lineBuffer[2].load.3", i8 %"lineBuffer[3].load.3", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.1.2.cast = zext i8 %tmp.51 to i11, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight.1.2 = sub i11 %x_weight.1.1.2, %tmp.29.1.2.cast, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight.1.2 = sub i11 %y_weight.1.1.2.cast, %tmp.29.1.2.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.52 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.4", i8 %"lineBuffer[1].load.4", i8 %"lineBuffer[2].load.4", i8 %"lineBuffer[3].load.4", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.1.2.1.cast = zext i8 %tmp.52 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl3 = shl nuw i9 %tmp.29.1.2.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl3.cast = zext i9 %_shl3 to i11, !dbg !123  ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight.1.2.1 = sub i11 %y_weight.1.2, %_shl3.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.53 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.5", i8 %"lineBuffer[1].load.5", i8 %"lineBuffer[2].load.5", i8 %"lineBuffer[3].load.5", i2 %tmp.19.1.2.t) nounwind ; [#uses=2 type=i8]
  %tmp.29.1.2.2.cast = zext i8 %tmp.53 to i11     ; [#uses=2 type=i11]
  %tmp.44 = trunc i11 %x_weight.1.2 to i8         ; [#uses=1 type=i8]
  %x_weight.1.2.2 = add i11 %tmp.29.1.2.2.cast, %x_weight.1.2, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight.1.2.2 = sub i11 %y_weight.1.2.1, %tmp.29.1.2.2.cast, !dbg !123 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp.9.1 = icmp sgt i11 %x_weight.1.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.45 = add i8 %tmp.44, %tmp.53, !dbg !124    ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.46 = sub i8 0, %tmp.45, !dbg !124          ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.47 = select i1 %tmp.9.1, i8 %tmp.45, i8 %tmp.46, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.12.1 = icmp sgt i11 %y_weight.1.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.48 = trunc i11 %y_weight.1.2.2 to i8, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.49 = sub i8 0, %tmp.48, !dbg !124          ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.50 = select i1 %tmp.12.1, i8 %tmp.48, i8 %tmp.49, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.15.1 = add i8 %tmp.50, %tmp.47, !dbg !125  ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val.1 = xor i8 %tmp.15.1, -1, !dbg !125   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp.16.1 = icmp ult i8 %tmp.15.1, 55, !dbg !126 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp.20.1 = icmp ugt i8 %tmp.15.1, -101, !dbg !127 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %..i.1 = sext i1 %tmp.16.1 to i8                ; [#uses=1 type=i8]
  %tmp.54 = or i1 %tmp.16.1, %tmp.20.1            ; [#uses=1 type=i1]
  %edge_val.1.i.1 = select i1 %tmp.54, i8 %..i.1, i8 %edge_val.1 ; [#uses=4 type=i8]
  %val.1.cast = zext i8 %edge_val.1.i.1 to i16, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp.23.1 = shl nuw i16 %val.1.cast, 8, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp5 = call i24 @_ssdm_op_BitConcatenate.i24.i8.i16(i8 %edge_val.1.i.1, i16 %tmp.23.1), !dbg !128 ; [#uses=1 type=i24] [debug line = 167:5]
  %tmp.55 = call i24 @_ssdm_op_BitConcatenate.i24.i16.i8(i16 0, i8 %edge_val.1.i.1) ; [#uses=1 type=i24]
  %tmp.58 = or i24 %tmp.55, %tmp5                 ; [#uses=1 type=i24]
  %tmp.26.1 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i24(i8 %edge_val.1.i.1, i24 %tmp.58), !dbg !128 ; [#uses=1 type=i32] [debug line = 167:5]
  %out_pix.addr.4 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2..cast, i32 %row.assign.1.cast1, !dbg !128 ; [#uses=1 type=i32*] [debug line = 167:5]
  store i32 %tmp.26.1, i32* %out_pix.addr.4, align 4, !dbg !128 ; [debug line = 167:5]
  %inter_pix.addr.2 = getelementptr [1080 x [1920 x i8]]* %inter_pix, i32 0, i32 %lastLine.2, i32 %row.assign.1.cast1, !dbg !129 ; [#uses=1 type=i8*] [debug line = 168:5]
  %inter_pix.load.2 = load i8* %inter_pix.addr.2, align 1, !dbg !129 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp.10, label %branch35 [
    i2 0, label %branch32
    i2 1, label %branch33
    i2 -2, label %branch34
  ], !dbg !129                                    ; [debug line = 168:5]

.preheader.3:                                     ; preds = %27
  %lastLine.3.2 = add i12 %lastLine.2.cast, 2, !dbg !96 ; [#uses=1 type=i12] [debug line = 172:4]
  %lastLine.3.2.cast = zext i12 %lastLine.3.2 to i32, !dbg !96 ; [#uses=1 type=i32] [debug line = 172:4]
  %26 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str9, i32 %tmp.11) nounwind, !dbg !100 ; [#uses=0 type=i32] [debug line = 174:2]
  %i.2.2 = add i11 %i1, 3, !dbg !101              ; [#uses=1 type=i11] [debug line = 157:37]
  %i.2.2.cast = zext i11 %i.2.2 to i32, !dbg !101 ; [#uses=2 type=i32] [debug line = 157:37]
  %tmp.56 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str9) nounwind, !dbg !102 ; [#uses=1 type=i32] [debug line = 157:43]
  br label %34, !dbg !103                         ; [debug line = 159:25]

; <label>:27                                      ; preds = %29, %.preheader.2
  %row.assign.2 = phi i11 [ 0, %.preheader.2 ], [ %j.1.2, %29 ] ; [#uses=6 type=i11]
  %row.assign.2.cast1 = zext i11 %row.assign.2 to i32, !dbg !103 ; [#uses=7 type=i32] [debug line = 159:25]
  %row.assign.2.cast = zext i11 %row.assign.2 to i12, !dbg !103 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp.8.2 = icmp eq i11 %row.assign.2, -128, !dbg !103 ; [#uses=1 type=i1] [debug line = 159:25]
  %28 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  br i1 %tmp.8.2, label %.preheader.3, label %32, !dbg !103 ; [debug line = 159:25]

; <label>:29                                      ; preds = %sobel_operator_cache.exit.2491, %31
  %30 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str10, i32 %tmp.57) nounwind, !dbg !107 ; [#uses=0 type=i32] [debug line = 170:3]
  %j.1.2 = add i11 %row.assign.2, 1, !dbg !108    ; [#uses=1 type=i11] [debug line = 159:37]
  br label %27, !dbg !108                         ; [debug line = 159:37]

; <label>:31                                      ; preds = %32, %32
  %out_pix.addr.3 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.1.cast, i32 %row.assign.2.cast1, !dbg !109 ; [#uses=1 type=i32*] [debug line = 163:5]
  store i32 0, i32* %out_pix.addr.3, align 4, !dbg !109 ; [debug line = 163:5]
  br label %29, !dbg !111                         ; [debug line = 164:4]

; <label>:32                                      ; preds = %27
  %tmp.57 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str10) nounwind, !dbg !112 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @.str) nounwind, !dbg !113 ; [debug line = 160:1]
  call void (...)* @_ssdm_SpecLoopFlatten(i32 1, [1 x i8]* @.str) nounwind, !dbg !114 ; [debug line = 161:1]
  switch i11 %row.assign.2, label %.preheader9.preheader.2_ifconv [
    i11 -129, label %31
    i11 0, label %31
  ]

sobel_operator_cache.exit.2491:                   ; preds = %branch31, %branch30, %branch29, %branch28
  br label %29

.preheader9.preheader.2_ifconv:                   ; preds = %32
  %tmp.28.2 = add i12 %row.assign.2.cast, -1, !dbg !115 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp.28.2.cast = sext i12 %tmp.28.2 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.7" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.6" = load i8* %"lineBuffer[0].addr.7", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.7" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.6" = load i8* %"lineBuffer[1].addr.7", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.7" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.6" = load i8* %"lineBuffer[2].addr.7", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.6" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.6" = load i8* %"lineBuffer[3].addr.6", align 1 ; [#uses=3 type=i8]
  %tmp.59 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.6", i8 %"lineBuffer[1].load.6", i8 %"lineBuffer[2].load.6", i8 %"lineBuffer[3].load.6", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.2.cast = zext i8 %tmp.59 to i9          ; [#uses=2 type=i9]
  %"lineBuffer[0].addr.8" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %row.assign.2.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[0].load.7" = load i8* %"lineBuffer[0].addr.8", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[1].addr.8" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %row.assign.2.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[1].load.7" = load i8* %"lineBuffer[1].addr.8", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[2].addr.8" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %row.assign.2.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[2].load.7" = load i8* %"lineBuffer[2].addr.8", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[3].addr.7" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %row.assign.2.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[3].load.7" = load i8* %"lineBuffer[3].addr.7", align 1 ; [#uses=2 type=i8]
  %tmp.60 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.7", i8 %"lineBuffer[1].load.7", i8 %"lineBuffer[2].load.7", i8 %"lineBuffer[3].load.7", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.2.0.1.cast = zext i8 %tmp.60 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.2.0.1 = shl nuw i9 %tmp.29.2.0.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.2.0.1.cast = zext i9 %tmp.33.2.0.1 to i10, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp.28.2.0.2 = add i11 %row.assign.2, 1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.28.2.0.2.cast = zext i11 %tmp.28.2.0.2 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.9" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.2.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.8" = load i8* %"lineBuffer[0].addr.9", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.9" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.2.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.8" = load i8* %"lineBuffer[1].addr.9", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.9" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.2.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.8" = load i8* %"lineBuffer[2].addr.9", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.8" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.2.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.8" = load i8* %"lineBuffer[3].addr.8", align 1 ; [#uses=3 type=i8]
  %tmp.61 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.8", i8 %"lineBuffer[1].load.8", i8 %"lineBuffer[2].load.8", i8 %"lineBuffer[3].load.8", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.2.0.2.cast = zext i8 %tmp.61 to i9, !dbg !115 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight.2.0.2 = sub i9 %tmp.29.2.0.2.cast, %tmp.29.2.cast, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight.2.0.2.cast = sext i9 %x_weight.2.0.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.62 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.6", i8 %"lineBuffer[1].load.6", i8 %"lineBuffer[2].load.6", i8 %"lineBuffer[3].load.6", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.2.1.cast = zext i8 %tmp.62 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl4 = shl nuw i9 %tmp.29.2.1.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl4.cast = zext i9 %_shl4 to i11, !dbg !115  ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.2.1.1 = sub i11 %x_weight.2.0.2.cast, %_shl4.cast, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.63 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.8", i8 %"lineBuffer[1].load.8", i8 %"lineBuffer[2].load.8", i8 %"lineBuffer[3].load.8", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.2.1.2.cast = zext i8 %tmp.63 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.2.1.2 = shl nuw i9 %tmp.29.2.1.2.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.2.1.2.cast = zext i9 %tmp.31.2.1.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.2.1.2 = add i11 %tmp.31.2.1.2.cast, %x_weight.2.1.1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp6 = add i9 %tmp.29.2.0.2.cast, %tmp.29.2.cast, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp6.cast = zext i9 %tmp6 to i10, !dbg !123    ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.2.1.2 = add i10 %tmp.33.2.0.1.cast, %tmp6.cast, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.2.1.2.cast = zext i10 %y_weight.2.1.2 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.64 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.6", i8 %"lineBuffer[1].load.6", i8 %"lineBuffer[2].load.6", i8 %"lineBuffer[3].load.6", i2 %tmp.10) nounwind ; [#uses=1 type=i8]
  %tmp.29.2.2.cast = zext i8 %tmp.64 to i11, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight.2.2 = sub i11 %x_weight.2.1.2, %tmp.29.2.2.cast, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight.2.2 = sub i11 %y_weight.2.1.2.cast, %tmp.29.2.2.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.65 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.7", i8 %"lineBuffer[1].load.7", i8 %"lineBuffer[2].load.7", i8 %"lineBuffer[3].load.7", i2 %tmp.10) nounwind ; [#uses=1 type=i8]
  %tmp.29.2.2.1.cast = zext i8 %tmp.65 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl5 = shl nuw i9 %tmp.29.2.2.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl5.cast = zext i9 %_shl5 to i11, !dbg !123  ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight.2.2.1 = sub i11 %y_weight.2.2, %_shl5.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.75 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.8", i8 %"lineBuffer[1].load.8", i8 %"lineBuffer[2].load.8", i8 %"lineBuffer[3].load.8", i2 %tmp.10) nounwind ; [#uses=2 type=i8]
  %tmp.29.2.2.2.cast = zext i8 %tmp.75 to i11     ; [#uses=2 type=i11]
  %tmp.66 = trunc i11 %x_weight.2.2 to i8         ; [#uses=1 type=i8]
  %x_weight.2.2.2 = add i11 %tmp.29.2.2.2.cast, %x_weight.2.2, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight.2.2.2 = sub i11 %y_weight.2.2.1, %tmp.29.2.2.2.cast, !dbg !123 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp.9.2 = icmp sgt i11 %x_weight.2.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.67 = add i8 %tmp.66, %tmp.75, !dbg !124    ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.68 = sub i8 0, %tmp.67, !dbg !124          ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.69 = select i1 %tmp.9.2, i8 %tmp.67, i8 %tmp.68, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.12.2 = icmp sgt i11 %y_weight.2.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.70 = trunc i11 %y_weight.2.2.2 to i8, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.71 = sub i8 0, %tmp.70, !dbg !124          ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.72 = select i1 %tmp.12.2, i8 %tmp.70, i8 %tmp.71, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.15.2 = add i8 %tmp.72, %tmp.69, !dbg !125  ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val.2 = xor i8 %tmp.15.2, -1, !dbg !125   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp.16.2 = icmp ult i8 %tmp.15.2, 55, !dbg !126 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp.20.2 = icmp ugt i8 %tmp.15.2, -101, !dbg !127 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %..i.2 = sext i1 %tmp.16.2 to i8                ; [#uses=1 type=i8]
  %tmp.76 = or i1 %tmp.16.2, %tmp.20.2            ; [#uses=1 type=i1]
  %edge_val.1.i.2 = select i1 %tmp.76, i8 %..i.2, i8 %edge_val.2 ; [#uses=4 type=i8]
  %val.2.cast = zext i8 %edge_val.1.i.2 to i16, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp.23.2 = shl nuw i16 %val.2.cast, 8, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp7 = call i24 @_ssdm_op_BitConcatenate.i24.i8.i16(i8 %edge_val.1.i.2, i16 %tmp.23.2), !dbg !128 ; [#uses=1 type=i24] [debug line = 167:5]
  %tmp.77 = call i24 @_ssdm_op_BitConcatenate.i24.i16.i8(i16 0, i8 %edge_val.1.i.2) ; [#uses=1 type=i24]
  %tmp.78 = or i24 %tmp.77, %tmp7                 ; [#uses=1 type=i24]
  %tmp.26.2 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i24(i8 %edge_val.1.i.2, i24 %tmp.78), !dbg !128 ; [#uses=1 type=i32] [debug line = 167:5]
  %out_pix.addr.6 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.1.cast, i32 %row.assign.2.cast1, !dbg !128 ; [#uses=1 type=i32*] [debug line = 167:5]
  store i32 %tmp.26.2, i32* %out_pix.addr.6, align 4, !dbg !128 ; [debug line = 167:5]
  %inter_pix.addr.3 = getelementptr [1080 x [1920 x i8]]* %inter_pix, i32 0, i32 %lastLine.3.1.cast, i32 %row.assign.2.cast1, !dbg !129 ; [#uses=1 type=i8*] [debug line = 168:5]
  %inter_pix.load.3 = load i8* %inter_pix.addr.3, align 1, !dbg !129 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp.10, label %branch31 [
    i2 -1, label %branch28
    i2 0, label %branch29
    i2 1, label %branch30
  ], !dbg !129                                    ; [debug line = 168:5]

.preheader.4:                                     ; preds = %34
  %lastLine.3.3 = add i12 %lastLine.2.cast, 3, !dbg !96 ; [#uses=1 type=i12] [debug line = 172:4]
  %lastLine.3.3.cast = zext i12 %lastLine.3.3 to i32, !dbg !96 ; [#uses=1 type=i32] [debug line = 172:4]
  %33 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str9, i32 %tmp.56) nounwind, !dbg !100 ; [#uses=0 type=i32] [debug line = 174:2]
  %i.2.3 = add i11 %i1, 4, !dbg !101              ; [#uses=1 type=i11] [debug line = 157:37]
  %i.2.3.cast = zext i11 %i.2.3 to i32, !dbg !101 ; [#uses=2 type=i32] [debug line = 157:37]
  %tmp.73 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str9) nounwind, !dbg !102 ; [#uses=1 type=i32] [debug line = 157:43]
  br label %41, !dbg !103                         ; [debug line = 159:25]

; <label>:34                                      ; preds = %36, %.preheader.3
  %row.assign.3 = phi i11 [ 0, %.preheader.3 ], [ %j.1.3, %36 ] ; [#uses=6 type=i11]
  %row.assign.3.cast1 = zext i11 %row.assign.3 to i32, !dbg !103 ; [#uses=7 type=i32] [debug line = 159:25]
  %row.assign.3.cast = zext i11 %row.assign.3 to i12, !dbg !103 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp.8.3 = icmp eq i11 %row.assign.3, -128, !dbg !103 ; [#uses=1 type=i1] [debug line = 159:25]
  %35 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  br i1 %tmp.8.3, label %.preheader.4, label %39, !dbg !103 ; [debug line = 159:25]

; <label>:36                                      ; preds = %sobel_operator_cache.exit.3486, %38
  %37 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str10, i32 %tmp.74) nounwind, !dbg !107 ; [#uses=0 type=i32] [debug line = 170:3]
  %j.1.3 = add i11 %row.assign.3, 1, !dbg !108    ; [#uses=1 type=i11] [debug line = 159:37]
  br label %34, !dbg !108                         ; [debug line = 159:37]

; <label>:38                                      ; preds = %39, %39
  %out_pix.addr.5 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.2.cast, i32 %row.assign.3.cast1, !dbg !109 ; [#uses=1 type=i32*] [debug line = 163:5]
  store i32 0, i32* %out_pix.addr.5, align 4, !dbg !109 ; [debug line = 163:5]
  br label %36, !dbg !111                         ; [debug line = 164:4]

; <label>:39                                      ; preds = %34
  %tmp.74 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str10) nounwind, !dbg !112 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @.str) nounwind, !dbg !113 ; [debug line = 160:1]
  call void (...)* @_ssdm_SpecLoopFlatten(i32 1, [1 x i8]* @.str) nounwind, !dbg !114 ; [debug line = 161:1]
  switch i11 %row.assign.3, label %.preheader9.preheader.3_ifconv [
    i11 -129, label %38
    i11 0, label %38
  ]

sobel_operator_cache.exit.3486:                   ; preds = %branch27, %branch26, %branch25, %branch24
  br label %36

.preheader9.preheader.3_ifconv:                   ; preds = %39
  %tmp.28.3 = add i12 %row.assign.3.cast, -1, !dbg !115 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp.28.3.cast = sext i12 %tmp.28.3 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.10" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.3.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.9" = load i8* %"lineBuffer[0].addr.10", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.10" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.3.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.9" = load i8* %"lineBuffer[1].addr.10", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.10" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.3.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.9" = load i8* %"lineBuffer[2].addr.10", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.9" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.3.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.9" = load i8* %"lineBuffer[3].addr.9", align 1 ; [#uses=3 type=i8]
  %tmp.79 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.9", i8 %"lineBuffer[1].load.9", i8 %"lineBuffer[2].load.9", i8 %"lineBuffer[3].load.9", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.3.cast = zext i8 %tmp.79 to i9          ; [#uses=2 type=i9]
  %"lineBuffer[0].addr.11" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %row.assign.3.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[0].load.10" = load i8* %"lineBuffer[0].addr.11", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[1].addr.11" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %row.assign.3.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[1].load.10" = load i8* %"lineBuffer[1].addr.11", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[2].addr.11" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %row.assign.3.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[2].load.10" = load i8* %"lineBuffer[2].addr.11", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[3].addr.10" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %row.assign.3.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[3].load.10" = load i8* %"lineBuffer[3].addr.10", align 1 ; [#uses=2 type=i8]
  %tmp.80 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.10", i8 %"lineBuffer[1].load.10", i8 %"lineBuffer[2].load.10", i8 %"lineBuffer[3].load.10", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.3.0.1.cast = zext i8 %tmp.80 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.3.0.1 = shl nuw i9 %tmp.29.3.0.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.3.0.1.cast = zext i9 %tmp.33.3.0.1 to i10, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp.28.3.0.2 = add i11 %row.assign.3, 1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.28.3.0.2.cast = zext i11 %tmp.28.3.0.2 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.12" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.3.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.11" = load i8* %"lineBuffer[0].addr.12", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.12" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.3.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.11" = load i8* %"lineBuffer[1].addr.12", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.12" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.3.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.11" = load i8* %"lineBuffer[2].addr.12", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.11" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.3.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.11" = load i8* %"lineBuffer[3].addr.11", align 1 ; [#uses=3 type=i8]
  %tmp.81 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.11", i8 %"lineBuffer[1].load.11", i8 %"lineBuffer[2].load.11", i8 %"lineBuffer[3].load.11", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.3.0.2.cast = zext i8 %tmp.81 to i9, !dbg !115 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight.3.0.2 = sub i9 %tmp.29.3.0.2.cast, %tmp.29.3.cast, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight.3.0.2.cast = sext i9 %x_weight.3.0.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.82 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.9", i8 %"lineBuffer[1].load.9", i8 %"lineBuffer[2].load.9", i8 %"lineBuffer[3].load.9", i2 %tmp.10) nounwind ; [#uses=1 type=i8]
  %tmp.29.3.1.cast = zext i8 %tmp.82 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl6 = shl nuw i9 %tmp.29.3.1.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl6.cast = zext i9 %_shl6 to i11, !dbg !115  ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.3.1.1 = sub i11 %x_weight.3.0.2.cast, %_shl6.cast, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.92 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.11", i8 %"lineBuffer[1].load.11", i8 %"lineBuffer[2].load.11", i8 %"lineBuffer[3].load.11", i2 %tmp.10) nounwind ; [#uses=1 type=i8]
  %tmp.29.3.1.2.cast = zext i8 %tmp.92 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.3.1.2 = shl nuw i9 %tmp.29.3.1.2.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.3.1.2.cast = zext i9 %tmp.31.3.1.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.3.1.2 = add i11 %tmp.31.3.1.2.cast, %x_weight.3.1.1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp8 = add i9 %tmp.29.3.0.2.cast, %tmp.29.3.cast, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp8.cast = zext i9 %tmp8 to i10, !dbg !123    ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.3.1.2 = add i10 %tmp.33.3.0.1.cast, %tmp8.cast, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.3.1.2.cast = zext i10 %y_weight.3.1.2 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.93 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.9", i8 %"lineBuffer[1].load.9", i8 %"lineBuffer[2].load.9", i8 %"lineBuffer[3].load.9", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.3.2.cast = zext i8 %tmp.93 to i11, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight.3.2 = sub i11 %x_weight.3.1.2, %tmp.29.3.2.cast, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight.3.2 = sub i11 %y_weight.3.1.2.cast, %tmp.29.3.2.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.94 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.10", i8 %"lineBuffer[1].load.10", i8 %"lineBuffer[2].load.10", i8 %"lineBuffer[3].load.10", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.3.2.1.cast = zext i8 %tmp.94 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl7 = shl nuw i9 %tmp.29.3.2.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl7.cast = zext i9 %_shl7 to i11, !dbg !123  ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight.3.2.1 = sub i11 %y_weight.3.2, %_shl7.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.95 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.11", i8 %"lineBuffer[1].load.11", i8 %"lineBuffer[2].load.11", i8 %"lineBuffer[3].load.11", i2 %tmp.19.1.0.t) nounwind ; [#uses=2 type=i8]
  %tmp.29.3.2.2.cast = zext i8 %tmp.95 to i11     ; [#uses=2 type=i11]
  %tmp.83 = trunc i11 %x_weight.3.2 to i8         ; [#uses=1 type=i8]
  %x_weight.3.2.2 = add i11 %tmp.29.3.2.2.cast, %x_weight.3.2, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight.3.2.2 = sub i11 %y_weight.3.2.1, %tmp.29.3.2.2.cast, !dbg !123 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp.9.3 = icmp sgt i11 %x_weight.3.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.84 = add i8 %tmp.83, %tmp.95, !dbg !124    ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.85 = sub i8 0, %tmp.84, !dbg !124          ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.86 = select i1 %tmp.9.3, i8 %tmp.84, i8 %tmp.85, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.12.3 = icmp sgt i11 %y_weight.3.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.87 = trunc i11 %y_weight.3.2.2 to i8, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.88 = sub i8 0, %tmp.87, !dbg !124          ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.89 = select i1 %tmp.12.3, i8 %tmp.87, i8 %tmp.88, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.15.3 = add i8 %tmp.89, %tmp.86, !dbg !125  ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val.3 = xor i8 %tmp.15.3, -1, !dbg !125   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp.16.3 = icmp ult i8 %tmp.15.3, 55, !dbg !126 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp.20.3 = icmp ugt i8 %tmp.15.3, -101, !dbg !127 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %..i.3 = sext i1 %tmp.16.3 to i8                ; [#uses=1 type=i8]
  %tmp.96 = or i1 %tmp.16.3, %tmp.20.3            ; [#uses=1 type=i1]
  %edge_val.1.i.3 = select i1 %tmp.96, i8 %..i.3, i8 %edge_val.3 ; [#uses=4 type=i8]
  %val.3.cast = zext i8 %edge_val.1.i.3 to i16, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp.23.3 = shl nuw i16 %val.3.cast, 8, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp9 = call i24 @_ssdm_op_BitConcatenate.i24.i8.i16(i8 %edge_val.1.i.3, i16 %tmp.23.3), !dbg !128 ; [#uses=1 type=i24] [debug line = 167:5]
  %tmp.97 = call i24 @_ssdm_op_BitConcatenate.i24.i16.i8(i16 0, i8 %edge_val.1.i.3) ; [#uses=1 type=i24]
  %tmp.98 = or i24 %tmp.97, %tmp9                 ; [#uses=1 type=i24]
  %tmp.26.3 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i24(i8 %edge_val.1.i.3, i24 %tmp.98), !dbg !128 ; [#uses=1 type=i32] [debug line = 167:5]
  %out_pix.addr.8 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.2.cast, i32 %row.assign.3.cast1, !dbg !128 ; [#uses=1 type=i32*] [debug line = 167:5]
  store i32 %tmp.26.3, i32* %out_pix.addr.8, align 4, !dbg !128 ; [debug line = 167:5]
  %inter_pix.addr.4 = getelementptr [1080 x [1920 x i8]]* %inter_pix, i32 0, i32 %lastLine.3.2.cast, i32 %row.assign.3.cast1, !dbg !129 ; [#uses=1 type=i8*] [debug line = 168:5]
  %inter_pix.load.4 = load i8* %inter_pix.addr.4, align 1, !dbg !129 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp.19.1.1.t, label %branch27 [
    i2 0, label %branch24
    i2 1, label %branch25
    i2 -2, label %branch26
  ], !dbg !129                                    ; [debug line = 168:5]

.preheader.5:                                     ; preds = %41
  %lastLine.3.4 = add i12 %lastLine.2.cast, 4, !dbg !96 ; [#uses=1 type=i12] [debug line = 172:4]
  %lastLine.3.4.cast = zext i12 %lastLine.3.4 to i32, !dbg !96 ; [#uses=1 type=i32] [debug line = 172:4]
  %40 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str9, i32 %tmp.73) nounwind, !dbg !100 ; [#uses=0 type=i32] [debug line = 174:2]
  %i.2.4 = add i11 %i1, 5, !dbg !101              ; [#uses=1 type=i11] [debug line = 157:37]
  %i.2.4.cast = zext i11 %i.2.4 to i32, !dbg !101 ; [#uses=2 type=i32] [debug line = 157:37]
  %tmp.90 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str9) nounwind, !dbg !102 ; [#uses=1 type=i32] [debug line = 157:43]
  br label %48, !dbg !103                         ; [debug line = 159:25]

; <label>:41                                      ; preds = %43, %.preheader.4
  %row.assign.4 = phi i11 [ 0, %.preheader.4 ], [ %j.1.4, %43 ] ; [#uses=6 type=i11]
  %row.assign.4.cast1 = zext i11 %row.assign.4 to i32, !dbg !103 ; [#uses=7 type=i32] [debug line = 159:25]
  %row.assign.4.cast = zext i11 %row.assign.4 to i12, !dbg !103 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp.8.4 = icmp eq i11 %row.assign.4, -128, !dbg !103 ; [#uses=1 type=i1] [debug line = 159:25]
  %42 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  br i1 %tmp.8.4, label %.preheader.5, label %46, !dbg !103 ; [debug line = 159:25]

; <label>:43                                      ; preds = %sobel_operator_cache.exit.4481, %45
  %44 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str10, i32 %tmp.91) nounwind, !dbg !107 ; [#uses=0 type=i32] [debug line = 170:3]
  %j.1.4 = add i11 %row.assign.4, 1, !dbg !108    ; [#uses=1 type=i11] [debug line = 159:37]
  br label %41, !dbg !108                         ; [debug line = 159:37]

; <label>:45                                      ; preds = %46, %46
  %out_pix.addr.7 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.3.cast, i32 %row.assign.4.cast1, !dbg !109 ; [#uses=1 type=i32*] [debug line = 163:5]
  store i32 0, i32* %out_pix.addr.7, align 4, !dbg !109 ; [debug line = 163:5]
  br label %43, !dbg !111                         ; [debug line = 164:4]

; <label>:46                                      ; preds = %41
  %tmp.91 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str10) nounwind, !dbg !112 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @.str) nounwind, !dbg !113 ; [debug line = 160:1]
  call void (...)* @_ssdm_SpecLoopFlatten(i32 1, [1 x i8]* @.str) nounwind, !dbg !114 ; [debug line = 161:1]
  switch i11 %row.assign.4, label %.preheader9.preheader.4_ifconv [
    i11 -129, label %45
    i11 0, label %45
  ]

sobel_operator_cache.exit.4481:                   ; preds = %branch23, %branch22, %branch21, %branch20
  br label %43

.preheader9.preheader.4_ifconv:                   ; preds = %46
  %tmp.28.4 = add i12 %row.assign.4.cast, -1, !dbg !115 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp.28.4.cast = sext i12 %tmp.28.4 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.13" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.4.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.12" = load i8* %"lineBuffer[0].addr.13", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.13" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.4.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.12" = load i8* %"lineBuffer[1].addr.13", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.13" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.4.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.12" = load i8* %"lineBuffer[2].addr.13", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.12" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.4.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.12" = load i8* %"lineBuffer[3].addr.12", align 1 ; [#uses=3 type=i8]
  %tmp.99 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.12", i8 %"lineBuffer[1].load.12", i8 %"lineBuffer[2].load.12", i8 %"lineBuffer[3].load.12", i2 %tmp.10) nounwind ; [#uses=1 type=i8]
  %tmp.29.4.cast = zext i8 %tmp.99 to i9          ; [#uses=2 type=i9]
  %"lineBuffer[0].addr.14" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %row.assign.4.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[0].load.13" = load i8* %"lineBuffer[0].addr.14", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[1].addr.14" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %row.assign.4.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[1].load.13" = load i8* %"lineBuffer[1].addr.14", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[2].addr.14" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %row.assign.4.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[2].load.13" = load i8* %"lineBuffer[2].addr.14", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[3].addr.13" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %row.assign.4.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[3].load.13" = load i8* %"lineBuffer[3].addr.13", align 1 ; [#uses=2 type=i8]
  %tmp.109 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.13", i8 %"lineBuffer[1].load.13", i8 %"lineBuffer[2].load.13", i8 %"lineBuffer[3].load.13", i2 %tmp.10) nounwind ; [#uses=1 type=i8]
  %tmp.29.4.0.1.cast = zext i8 %tmp.109 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.4.0.1 = shl nuw i9 %tmp.29.4.0.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.4.0.1.cast = zext i9 %tmp.33.4.0.1 to i10, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp.28.4.0.2 = add i11 %row.assign.4, 1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.28.4.0.2.cast = zext i11 %tmp.28.4.0.2 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.15" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.4.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.14" = load i8* %"lineBuffer[0].addr.15", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.15" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.4.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.14" = load i8* %"lineBuffer[1].addr.15", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.15" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.4.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.14" = load i8* %"lineBuffer[2].addr.15", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.14" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.4.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.14" = load i8* %"lineBuffer[3].addr.14", align 1 ; [#uses=3 type=i8]
  %tmp.110 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.14", i8 %"lineBuffer[1].load.14", i8 %"lineBuffer[2].load.14", i8 %"lineBuffer[3].load.14", i2 %tmp.10) nounwind ; [#uses=1 type=i8]
  %tmp.29.4.0.2.cast = zext i8 %tmp.110 to i9, !dbg !115 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight.4.0.2 = sub i9 %tmp.29.4.0.2.cast, %tmp.29.4.cast, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight.4.0.2.cast = sext i9 %x_weight.4.0.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.111 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.12", i8 %"lineBuffer[1].load.12", i8 %"lineBuffer[2].load.12", i8 %"lineBuffer[3].load.12", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.4.1.cast = zext i8 %tmp.111 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl8 = shl nuw i9 %tmp.29.4.1.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl8.cast = zext i9 %_shl8 to i11, !dbg !115  ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.4.1.1 = sub i11 %x_weight.4.0.2.cast, %_shl8.cast, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.112 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.14", i8 %"lineBuffer[1].load.14", i8 %"lineBuffer[2].load.14", i8 %"lineBuffer[3].load.14", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.4.1.2.cast = zext i8 %tmp.112 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.4.1.2 = shl nuw i9 %tmp.29.4.1.2.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.4.1.2.cast = zext i9 %tmp.31.4.1.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.4.1.2 = add i11 %tmp.31.4.1.2.cast, %x_weight.4.1.1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp10 = add i9 %tmp.29.4.0.2.cast, %tmp.29.4.cast, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp10.cast = zext i9 %tmp10 to i10, !dbg !123  ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.4.1.2 = add i10 %tmp.33.4.0.1.cast, %tmp10.cast, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.4.1.2.cast = zext i10 %y_weight.4.1.2 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.113 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.12", i8 %"lineBuffer[1].load.12", i8 %"lineBuffer[2].load.12", i8 %"lineBuffer[3].load.12", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.4.2.cast = zext i8 %tmp.113 to i11, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight.4.2 = sub i11 %x_weight.4.1.2, %tmp.29.4.2.cast, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight.4.2 = sub i11 %y_weight.4.1.2.cast, %tmp.29.4.2.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.114 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.13", i8 %"lineBuffer[1].load.13", i8 %"lineBuffer[2].load.13", i8 %"lineBuffer[3].load.13", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.4.2.1.cast = zext i8 %tmp.114 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl9 = shl nuw i9 %tmp.29.4.2.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl9.cast = zext i9 %_shl9 to i11, !dbg !123  ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight.4.2.1 = sub i11 %y_weight.4.2, %_shl9.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.115 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.14", i8 %"lineBuffer[1].load.14", i8 %"lineBuffer[2].load.14", i8 %"lineBuffer[3].load.14", i2 %tmp.19.1.1.t) nounwind ; [#uses=2 type=i8]
  %tmp.29.4.2.2.cast = zext i8 %tmp.115 to i11    ; [#uses=2 type=i11]
  %tmp.100 = trunc i11 %x_weight.4.2 to i8        ; [#uses=1 type=i8]
  %x_weight.4.2.2 = add i11 %tmp.29.4.2.2.cast, %x_weight.4.2, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight.4.2.2 = sub i11 %y_weight.4.2.1, %tmp.29.4.2.2.cast, !dbg !123 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp.9.4 = icmp sgt i11 %x_weight.4.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.101 = add i8 %tmp.100, %tmp.115, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.102 = sub i8 0, %tmp.101, !dbg !124        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.103 = select i1 %tmp.9.4, i8 %tmp.101, i8 %tmp.102, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.12.4 = icmp sgt i11 %y_weight.4.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.104 = trunc i11 %y_weight.4.2.2 to i8, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.105 = sub i8 0, %tmp.104, !dbg !124        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.106 = select i1 %tmp.12.4, i8 %tmp.104, i8 %tmp.105, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.15.4 = add i8 %tmp.106, %tmp.103, !dbg !125 ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val.4 = xor i8 %tmp.15.4, -1, !dbg !125   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp.16.4 = icmp ult i8 %tmp.15.4, 55, !dbg !126 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp.20.4 = icmp ugt i8 %tmp.15.4, -101, !dbg !127 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %..i.4 = sext i1 %tmp.16.4 to i8                ; [#uses=1 type=i8]
  %tmp.116 = or i1 %tmp.16.4, %tmp.20.4           ; [#uses=1 type=i1]
  %edge_val.1.i.4 = select i1 %tmp.116, i8 %..i.4, i8 %edge_val.4 ; [#uses=4 type=i8]
  %val.4.cast = zext i8 %edge_val.1.i.4 to i16, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp.23.4 = shl nuw i16 %val.4.cast, 8, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp11 = call i24 @_ssdm_op_BitConcatenate.i24.i8.i16(i8 %edge_val.1.i.4, i16 %tmp.23.4), !dbg !128 ; [#uses=1 type=i24] [debug line = 167:5]
  %tmp.126 = call i24 @_ssdm_op_BitConcatenate.i24.i16.i8(i16 0, i8 %edge_val.1.i.4) ; [#uses=1 type=i24]
  %tmp.127 = or i24 %tmp.126, %tmp11              ; [#uses=1 type=i24]
  %tmp.26.4 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i24(i8 %edge_val.1.i.4, i24 %tmp.127), !dbg !128 ; [#uses=1 type=i32] [debug line = 167:5]
  %out_pix.addr.10 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.3.cast, i32 %row.assign.4.cast1, !dbg !128 ; [#uses=1 type=i32*] [debug line = 167:5]
  store i32 %tmp.26.4, i32* %out_pix.addr.10, align 4, !dbg !128 ; [debug line = 167:5]
  %inter_pix.addr.5 = getelementptr [1080 x [1920 x i8]]* %inter_pix, i32 0, i32 %lastLine.3.3.cast, i32 %row.assign.4.cast1, !dbg !129 ; [#uses=1 type=i8*] [debug line = 168:5]
  %inter_pix.load.5 = load i8* %inter_pix.addr.5, align 1, !dbg !129 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp.10, label %branch23 [
    i2 1, label %branch20
    i2 -2, label %branch21
    i2 -1, label %branch22
  ], !dbg !129                                    ; [debug line = 168:5]

.preheader.6:                                     ; preds = %48
  %lastLine.3.5 = add i12 %lastLine.2.cast, 5, !dbg !96 ; [#uses=1 type=i12] [debug line = 172:4]
  %lastLine.3.5.cast = zext i12 %lastLine.3.5 to i32, !dbg !96 ; [#uses=1 type=i32] [debug line = 172:4]
  %47 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str9, i32 %tmp.90) nounwind, !dbg !100 ; [#uses=0 type=i32] [debug line = 174:2]
  %i.2.5 = add i11 %i1, 6, !dbg !101              ; [#uses=1 type=i11] [debug line = 157:37]
  %i.2.5.cast = zext i11 %i.2.5 to i32, !dbg !101 ; [#uses=2 type=i32] [debug line = 157:37]
  %tmp.107 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str9) nounwind, !dbg !102 ; [#uses=1 type=i32] [debug line = 157:43]
  br label %55, !dbg !103                         ; [debug line = 159:25]

; <label>:48                                      ; preds = %50, %.preheader.5
  %row.assign.5 = phi i11 [ 0, %.preheader.5 ], [ %j.1.5, %50 ] ; [#uses=6 type=i11]
  %row.assign.5.cast1 = zext i11 %row.assign.5 to i32, !dbg !103 ; [#uses=7 type=i32] [debug line = 159:25]
  %row.assign.5.cast = zext i11 %row.assign.5 to i12, !dbg !103 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp.8.5 = icmp eq i11 %row.assign.5, -128, !dbg !103 ; [#uses=1 type=i1] [debug line = 159:25]
  %49 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  br i1 %tmp.8.5, label %.preheader.6, label %53, !dbg !103 ; [debug line = 159:25]

; <label>:50                                      ; preds = %sobel_operator_cache.exit.5476, %52
  %51 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str10, i32 %tmp.108) nounwind, !dbg !107 ; [#uses=0 type=i32] [debug line = 170:3]
  %j.1.5 = add i11 %row.assign.5, 1, !dbg !108    ; [#uses=1 type=i11] [debug line = 159:37]
  br label %48, !dbg !108                         ; [debug line = 159:37]

; <label>:52                                      ; preds = %53, %53
  %out_pix.addr.9 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.4.cast, i32 %row.assign.5.cast1, !dbg !109 ; [#uses=1 type=i32*] [debug line = 163:5]
  store i32 0, i32* %out_pix.addr.9, align 4, !dbg !109 ; [debug line = 163:5]
  br label %50, !dbg !111                         ; [debug line = 164:4]

; <label>:53                                      ; preds = %48
  %tmp.108 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str10) nounwind, !dbg !112 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @.str) nounwind, !dbg !113 ; [debug line = 160:1]
  call void (...)* @_ssdm_SpecLoopFlatten(i32 1, [1 x i8]* @.str) nounwind, !dbg !114 ; [debug line = 161:1]
  switch i11 %row.assign.5, label %.preheader9.preheader.5_ifconv [
    i11 -129, label %52
    i11 0, label %52
  ]

sobel_operator_cache.exit.5476:                   ; preds = %branch19, %branch18, %branch17, %branch16
  br label %50

.preheader9.preheader.5_ifconv:                   ; preds = %53
  %tmp.28.5 = add i12 %row.assign.5.cast, -1, !dbg !115 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp.28.5.cast = sext i12 %tmp.28.5 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.16" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.5.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.15" = load i8* %"lineBuffer[0].addr.16", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.16" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.5.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.15" = load i8* %"lineBuffer[1].addr.16", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.16" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.5.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.15" = load i8* %"lineBuffer[2].addr.16", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.15" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.5.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.15" = load i8* %"lineBuffer[3].addr.15", align 1 ; [#uses=3 type=i8]
  %tmp.128 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.15", i8 %"lineBuffer[1].load.15", i8 %"lineBuffer[2].load.15", i8 %"lineBuffer[3].load.15", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.5.cast = zext i8 %tmp.128 to i9         ; [#uses=2 type=i9]
  %"lineBuffer[0].addr.17" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %row.assign.5.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[0].load.16" = load i8* %"lineBuffer[0].addr.17", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[1].addr.17" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %row.assign.5.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[1].load.16" = load i8* %"lineBuffer[1].addr.17", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[2].addr.17" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %row.assign.5.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[2].load.16" = load i8* %"lineBuffer[2].addr.17", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[3].addr.16" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %row.assign.5.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[3].load.16" = load i8* %"lineBuffer[3].addr.16", align 1 ; [#uses=2 type=i8]
  %tmp.129 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.16", i8 %"lineBuffer[1].load.16", i8 %"lineBuffer[2].load.16", i8 %"lineBuffer[3].load.16", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.5.0.1.cast = zext i8 %tmp.129 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.5.0.1 = shl nuw i9 %tmp.29.5.0.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.5.0.1.cast = zext i9 %tmp.33.5.0.1 to i10, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp.28.5.0.2 = add i11 %row.assign.5, 1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.28.5.0.2.cast = zext i11 %tmp.28.5.0.2 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.18" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.5.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.17" = load i8* %"lineBuffer[0].addr.18", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.18" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.5.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.17" = load i8* %"lineBuffer[1].addr.18", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.18" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.5.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.17" = load i8* %"lineBuffer[2].addr.18", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.17" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.5.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.17" = load i8* %"lineBuffer[3].addr.17", align 1 ; [#uses=3 type=i8]
  %tmp.130 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.17", i8 %"lineBuffer[1].load.17", i8 %"lineBuffer[2].load.17", i8 %"lineBuffer[3].load.17", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.5.0.2.cast = zext i8 %tmp.130 to i9, !dbg !115 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight.5.0.2 = sub i9 %tmp.29.5.0.2.cast, %tmp.29.5.cast, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight.5.0.2.cast = sext i9 %x_weight.5.0.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.131 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.15", i8 %"lineBuffer[1].load.15", i8 %"lineBuffer[2].load.15", i8 %"lineBuffer[3].load.15", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.5.1.cast = zext i8 %tmp.131 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl10 = shl nuw i9 %tmp.29.5.1.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl10.cast = zext i9 %_shl10 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.5.1.1 = sub i11 %x_weight.5.0.2.cast, %_shl10.cast, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.132 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.17", i8 %"lineBuffer[1].load.17", i8 %"lineBuffer[2].load.17", i8 %"lineBuffer[3].load.17", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.5.1.2.cast = zext i8 %tmp.132 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.5.1.2 = shl nuw i9 %tmp.29.5.1.2.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.5.1.2.cast = zext i9 %tmp.31.5.1.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.5.1.2 = add i11 %tmp.31.5.1.2.cast, %x_weight.5.1.1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp12 = add i9 %tmp.29.5.0.2.cast, %tmp.29.5.cast, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp12.cast = zext i9 %tmp12 to i10, !dbg !123  ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.5.1.2 = add i10 %tmp.33.5.0.1.cast, %tmp12.cast, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.5.1.2.cast = zext i10 %y_weight.5.1.2 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.133 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.15", i8 %"lineBuffer[1].load.15", i8 %"lineBuffer[2].load.15", i8 %"lineBuffer[3].load.15", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.5.2.cast = zext i8 %tmp.133 to i11, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight.5.2 = sub i11 %x_weight.5.1.2, %tmp.29.5.2.cast, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight.5.2 = sub i11 %y_weight.5.1.2.cast, %tmp.29.5.2.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.143 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.16", i8 %"lineBuffer[1].load.16", i8 %"lineBuffer[2].load.16", i8 %"lineBuffer[3].load.16", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.5.2.1.cast = zext i8 %tmp.143 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl11 = shl nuw i9 %tmp.29.5.2.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl11.cast = zext i9 %_shl11 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight.5.2.1 = sub i11 %y_weight.5.2, %_shl11.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.144 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.17", i8 %"lineBuffer[1].load.17", i8 %"lineBuffer[2].load.17", i8 %"lineBuffer[3].load.17", i2 %tmp.19.1.2.t) nounwind ; [#uses=2 type=i8]
  %tmp.29.5.2.2.cast = zext i8 %tmp.144 to i11    ; [#uses=2 type=i11]
  %tmp.117 = trunc i11 %x_weight.5.2 to i8        ; [#uses=1 type=i8]
  %x_weight.5.2.2 = add i11 %tmp.29.5.2.2.cast, %x_weight.5.2, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight.5.2.2 = sub i11 %y_weight.5.2.1, %tmp.29.5.2.2.cast, !dbg !123 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp.9.5 = icmp sgt i11 %x_weight.5.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.118 = add i8 %tmp.117, %tmp.144, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.119 = sub i8 0, %tmp.118, !dbg !124        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.120 = select i1 %tmp.9.5, i8 %tmp.118, i8 %tmp.119, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.12.5 = icmp sgt i11 %y_weight.5.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.121 = trunc i11 %y_weight.5.2.2 to i8, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.122 = sub i8 0, %tmp.121, !dbg !124        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.123 = select i1 %tmp.12.5, i8 %tmp.121, i8 %tmp.122, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.15.5 = add i8 %tmp.123, %tmp.120, !dbg !125 ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val.5 = xor i8 %tmp.15.5, -1, !dbg !125   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp.16.5 = icmp ult i8 %tmp.15.5, 55, !dbg !126 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp.20.5 = icmp ugt i8 %tmp.15.5, -101, !dbg !127 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %..i.5 = sext i1 %tmp.16.5 to i8                ; [#uses=1 type=i8]
  %tmp.145 = or i1 %tmp.16.5, %tmp.20.5           ; [#uses=1 type=i1]
  %edge_val.1.i.5 = select i1 %tmp.145, i8 %..i.5, i8 %edge_val.5 ; [#uses=4 type=i8]
  %val.5.cast = zext i8 %edge_val.1.i.5 to i16, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp.23.5 = shl nuw i16 %val.5.cast, 8, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp13 = call i24 @_ssdm_op_BitConcatenate.i24.i8.i16(i8 %edge_val.1.i.5, i16 %tmp.23.5), !dbg !128 ; [#uses=1 type=i24] [debug line = 167:5]
  %tmp.146 = call i24 @_ssdm_op_BitConcatenate.i24.i16.i8(i16 0, i8 %edge_val.1.i.5) ; [#uses=1 type=i24]
  %tmp.147 = or i24 %tmp.146, %tmp13              ; [#uses=1 type=i24]
  %tmp.26.5 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i24(i8 %edge_val.1.i.5, i24 %tmp.147), !dbg !128 ; [#uses=1 type=i32] [debug line = 167:5]
  %out_pix.addr.12 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.4.cast, i32 %row.assign.5.cast1, !dbg !128 ; [#uses=1 type=i32*] [debug line = 167:5]
  store i32 %tmp.26.5, i32* %out_pix.addr.12, align 4, !dbg !128 ; [debug line = 167:5]
  %inter_pix.addr.6 = getelementptr [1080 x [1920 x i8]]* %inter_pix, i32 0, i32 %lastLine.3.4.cast, i32 %row.assign.5.cast1, !dbg !129 ; [#uses=1 type=i8*] [debug line = 168:5]
  %inter_pix.load.6 = load i8* %inter_pix.addr.6, align 1, !dbg !129 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp.10, label %branch19 [
    i2 0, label %branch16
    i2 1, label %branch17
    i2 -2, label %branch18
  ], !dbg !129                                    ; [debug line = 168:5]

.preheader.7:                                     ; preds = %55
  %lastLine.3.6 = add i12 %lastLine.2.cast, 6, !dbg !96 ; [#uses=1 type=i12] [debug line = 172:4]
  %lastLine.3.6.cast = zext i12 %lastLine.3.6 to i32, !dbg !96 ; [#uses=1 type=i32] [debug line = 172:4]
  %54 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str9, i32 %tmp.107) nounwind, !dbg !100 ; [#uses=0 type=i32] [debug line = 174:2]
  %i.2.6 = add i11 %i1, 7, !dbg !101              ; [#uses=1 type=i11] [debug line = 157:37]
  %i.2.6.cast = zext i11 %i.2.6 to i32, !dbg !101 ; [#uses=2 type=i32] [debug line = 157:37]
  %tmp.124 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str9) nounwind, !dbg !102 ; [#uses=1 type=i32] [debug line = 157:43]
  br label %62, !dbg !103                         ; [debug line = 159:25]

; <label>:55                                      ; preds = %57, %.preheader.6
  %row.assign.6 = phi i11 [ 0, %.preheader.6 ], [ %j.1.6, %57 ] ; [#uses=6 type=i11]
  %row.assign.6.cast1 = zext i11 %row.assign.6 to i32, !dbg !103 ; [#uses=7 type=i32] [debug line = 159:25]
  %row.assign.6.cast = zext i11 %row.assign.6 to i12, !dbg !103 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp.8.6 = icmp eq i11 %row.assign.6, -128, !dbg !103 ; [#uses=1 type=i1] [debug line = 159:25]
  %56 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  br i1 %tmp.8.6, label %.preheader.7, label %60, !dbg !103 ; [debug line = 159:25]

; <label>:57                                      ; preds = %sobel_operator_cache.exit.6471, %59
  %58 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str10, i32 %tmp.125) nounwind, !dbg !107 ; [#uses=0 type=i32] [debug line = 170:3]
  %j.1.6 = add i11 %row.assign.6, 1, !dbg !108    ; [#uses=1 type=i11] [debug line = 159:37]
  br label %55, !dbg !108                         ; [debug line = 159:37]

; <label>:59                                      ; preds = %60, %60
  %out_pix.addr.11 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.5.cast, i32 %row.assign.6.cast1, !dbg !109 ; [#uses=1 type=i32*] [debug line = 163:5]
  store i32 0, i32* %out_pix.addr.11, align 4, !dbg !109 ; [debug line = 163:5]
  br label %57, !dbg !111                         ; [debug line = 164:4]

; <label>:60                                      ; preds = %55
  %tmp.125 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str10) nounwind, !dbg !112 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @.str) nounwind, !dbg !113 ; [debug line = 160:1]
  call void (...)* @_ssdm_SpecLoopFlatten(i32 1, [1 x i8]* @.str) nounwind, !dbg !114 ; [debug line = 161:1]
  switch i11 %row.assign.6, label %.preheader9.preheader.6_ifconv [
    i11 -129, label %59
    i11 0, label %59
  ]

sobel_operator_cache.exit.6471:                   ; preds = %branch15, %branch14, %branch13, %branch12
  br label %57

.preheader9.preheader.6_ifconv:                   ; preds = %60
  %tmp.28.6 = add i12 %row.assign.6.cast, -1, !dbg !115 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp.28.6.cast = sext i12 %tmp.28.6 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.19" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.6.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.18" = load i8* %"lineBuffer[0].addr.19", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.19" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.6.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.18" = load i8* %"lineBuffer[1].addr.19", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.19" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.6.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.18" = load i8* %"lineBuffer[2].addr.19", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.18" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.6.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.18" = load i8* %"lineBuffer[3].addr.18", align 1 ; [#uses=3 type=i8]
  %tmp.148 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.18", i8 %"lineBuffer[1].load.18", i8 %"lineBuffer[2].load.18", i8 %"lineBuffer[3].load.18", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.6.cast = zext i8 %tmp.148 to i9         ; [#uses=2 type=i9]
  %"lineBuffer[0].addr.20" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %row.assign.6.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[0].load.19" = load i8* %"lineBuffer[0].addr.20", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[1].addr.20" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %row.assign.6.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[1].load.19" = load i8* %"lineBuffer[1].addr.20", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[2].addr.20" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %row.assign.6.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[2].load.19" = load i8* %"lineBuffer[2].addr.20", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[3].addr.19" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %row.assign.6.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[3].load.19" = load i8* %"lineBuffer[3].addr.19", align 1 ; [#uses=2 type=i8]
  %tmp.149 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.19", i8 %"lineBuffer[1].load.19", i8 %"lineBuffer[2].load.19", i8 %"lineBuffer[3].load.19", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.6.0.1.cast = zext i8 %tmp.149 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.6.0.1 = shl nuw i9 %tmp.29.6.0.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.6.0.1.cast = zext i9 %tmp.33.6.0.1 to i10, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp.28.6.0.2 = add i11 %row.assign.6, 1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.28.6.0.2.cast = zext i11 %tmp.28.6.0.2 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.21" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.6.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.20" = load i8* %"lineBuffer[0].addr.21", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.21" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.6.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.20" = load i8* %"lineBuffer[1].addr.21", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.21" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.6.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.20" = load i8* %"lineBuffer[2].addr.21", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.20" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.6.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.20" = load i8* %"lineBuffer[3].addr.20", align 1 ; [#uses=3 type=i8]
  %tmp.150 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.20", i8 %"lineBuffer[1].load.20", i8 %"lineBuffer[2].load.20", i8 %"lineBuffer[3].load.20", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.6.0.2.cast = zext i8 %tmp.150 to i9, !dbg !115 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight.6.0.2 = sub i9 %tmp.29.6.0.2.cast, %tmp.29.6.cast, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight.6.0.2.cast = sext i9 %x_weight.6.0.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.160 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.18", i8 %"lineBuffer[1].load.18", i8 %"lineBuffer[2].load.18", i8 %"lineBuffer[3].load.18", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.6.1.cast = zext i8 %tmp.160 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl12 = shl nuw i9 %tmp.29.6.1.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl12.cast = zext i9 %_shl12 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.6.1.1 = sub i11 %x_weight.6.0.2.cast, %_shl12.cast, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.161 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.20", i8 %"lineBuffer[1].load.20", i8 %"lineBuffer[2].load.20", i8 %"lineBuffer[3].load.20", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.6.1.2.cast = zext i8 %tmp.161 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.6.1.2 = shl nuw i9 %tmp.29.6.1.2.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.6.1.2.cast = zext i9 %tmp.31.6.1.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.6.1.2 = add i11 %tmp.31.6.1.2.cast, %x_weight.6.1.1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp14 = add i9 %tmp.29.6.0.2.cast, %tmp.29.6.cast, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp14.cast = zext i9 %tmp14 to i10, !dbg !123  ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.6.1.2 = add i10 %tmp.33.6.0.1.cast, %tmp14.cast, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.6.1.2.cast = zext i10 %y_weight.6.1.2 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.162 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.18", i8 %"lineBuffer[1].load.18", i8 %"lineBuffer[2].load.18", i8 %"lineBuffer[3].load.18", i2 %tmp.10) nounwind ; [#uses=1 type=i8]
  %tmp.29.6.2.cast = zext i8 %tmp.162 to i11, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight.6.2 = sub i11 %x_weight.6.1.2, %tmp.29.6.2.cast, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight.6.2 = sub i11 %y_weight.6.1.2.cast, %tmp.29.6.2.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.163 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.19", i8 %"lineBuffer[1].load.19", i8 %"lineBuffer[2].load.19", i8 %"lineBuffer[3].load.19", i2 %tmp.10) nounwind ; [#uses=1 type=i8]
  %tmp.29.6.2.1.cast = zext i8 %tmp.163 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl13 = shl nuw i9 %tmp.29.6.2.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl13.cast = zext i9 %_shl13 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight.6.2.1 = sub i11 %y_weight.6.2, %_shl13.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.164 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.20", i8 %"lineBuffer[1].load.20", i8 %"lineBuffer[2].load.20", i8 %"lineBuffer[3].load.20", i2 %tmp.10) nounwind ; [#uses=2 type=i8]
  %tmp.29.6.2.2.cast = zext i8 %tmp.164 to i11    ; [#uses=2 type=i11]
  %tmp.134 = trunc i11 %x_weight.6.2 to i8        ; [#uses=1 type=i8]
  %x_weight.6.2.2 = add i11 %tmp.29.6.2.2.cast, %x_weight.6.2, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight.6.2.2 = sub i11 %y_weight.6.2.1, %tmp.29.6.2.2.cast, !dbg !123 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp.9.6 = icmp sgt i11 %x_weight.6.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.135 = add i8 %tmp.134, %tmp.164, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.136 = sub i8 0, %tmp.135, !dbg !124        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.137 = select i1 %tmp.9.6, i8 %tmp.135, i8 %tmp.136, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.12.6 = icmp sgt i11 %y_weight.6.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.138 = trunc i11 %y_weight.6.2.2 to i8, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.139 = sub i8 0, %tmp.138, !dbg !124        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.140 = select i1 %tmp.12.6, i8 %tmp.138, i8 %tmp.139, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.15.6 = add i8 %tmp.140, %tmp.137, !dbg !125 ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val.6 = xor i8 %tmp.15.6, -1, !dbg !125   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp.16.6 = icmp ult i8 %tmp.15.6, 55, !dbg !126 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp.20.6 = icmp ugt i8 %tmp.15.6, -101, !dbg !127 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %..i.6 = sext i1 %tmp.16.6 to i8                ; [#uses=1 type=i8]
  %tmp.165 = or i1 %tmp.16.6, %tmp.20.6           ; [#uses=1 type=i1]
  %edge_val.1.i.6 = select i1 %tmp.165, i8 %..i.6, i8 %edge_val.6 ; [#uses=4 type=i8]
  %val.6.cast = zext i8 %edge_val.1.i.6 to i16, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp.23.6 = shl nuw i16 %val.6.cast, 8, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp15 = call i24 @_ssdm_op_BitConcatenate.i24.i8.i16(i8 %edge_val.1.i.6, i16 %tmp.23.6), !dbg !128 ; [#uses=1 type=i24] [debug line = 167:5]
  %tmp.166 = call i24 @_ssdm_op_BitConcatenate.i24.i16.i8(i16 0, i8 %edge_val.1.i.6) ; [#uses=1 type=i24]
  %tmp.167 = or i24 %tmp.166, %tmp15              ; [#uses=1 type=i24]
  %tmp.26.6 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i24(i8 %edge_val.1.i.6, i24 %tmp.167), !dbg !128 ; [#uses=1 type=i32] [debug line = 167:5]
  %out_pix.addr.14 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.5.cast, i32 %row.assign.6.cast1, !dbg !128 ; [#uses=1 type=i32*] [debug line = 167:5]
  store i32 %tmp.26.6, i32* %out_pix.addr.14, align 4, !dbg !128 ; [debug line = 167:5]
  %inter_pix.addr.7 = getelementptr [1080 x [1920 x i8]]* %inter_pix, i32 0, i32 %lastLine.3.5.cast, i32 %row.assign.6.cast1, !dbg !129 ; [#uses=1 type=i8*] [debug line = 168:5]
  %inter_pix.load.7 = load i8* %inter_pix.addr.7, align 1, !dbg !129 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp.10, label %branch15 [
    i2 -1, label %branch12
    i2 0, label %branch13
    i2 1, label %branch14
  ], !dbg !129                                    ; [debug line = 168:5]

.preheader.8:                                     ; preds = %62
  %lastLine.3.7 = add i12 %lastLine.2.cast, 7, !dbg !96 ; [#uses=1 type=i12] [debug line = 172:4]
  %lastLine.3.7.cast = zext i12 %lastLine.3.7 to i32, !dbg !96 ; [#uses=1 type=i32] [debug line = 172:4]
  %61 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str9, i32 %tmp.124) nounwind, !dbg !100 ; [#uses=0 type=i32] [debug line = 174:2]
  %i.2.7 = add i11 %i1, 8, !dbg !101              ; [#uses=1 type=i11] [debug line = 157:37]
  %i.2.7.cast = zext i11 %i.2.7 to i32, !dbg !101 ; [#uses=2 type=i32] [debug line = 157:37]
  %tmp.141 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str9) nounwind, !dbg !102 ; [#uses=1 type=i32] [debug line = 157:43]
  br label %69, !dbg !103                         ; [debug line = 159:25]

; <label>:62                                      ; preds = %64, %.preheader.7
  %row.assign.7 = phi i11 [ 0, %.preheader.7 ], [ %j.1.7, %64 ] ; [#uses=6 type=i11]
  %row.assign.7.cast1 = zext i11 %row.assign.7 to i32, !dbg !103 ; [#uses=7 type=i32] [debug line = 159:25]
  %row.assign.7.cast = zext i11 %row.assign.7 to i12, !dbg !103 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp.8.7 = icmp eq i11 %row.assign.7, -128, !dbg !103 ; [#uses=1 type=i1] [debug line = 159:25]
  %63 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  br i1 %tmp.8.7, label %.preheader.8, label %67, !dbg !103 ; [debug line = 159:25]

; <label>:64                                      ; preds = %sobel_operator_cache.exit.7466, %66
  %65 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str10, i32 %tmp.142) nounwind, !dbg !107 ; [#uses=0 type=i32] [debug line = 170:3]
  %j.1.7 = add i11 %row.assign.7, 1, !dbg !108    ; [#uses=1 type=i11] [debug line = 159:37]
  br label %62, !dbg !108                         ; [debug line = 159:37]

; <label>:66                                      ; preds = %67, %67
  %out_pix.addr.13 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.6.cast, i32 %row.assign.7.cast1, !dbg !109 ; [#uses=1 type=i32*] [debug line = 163:5]
  store i32 0, i32* %out_pix.addr.13, align 4, !dbg !109 ; [debug line = 163:5]
  br label %64, !dbg !111                         ; [debug line = 164:4]

; <label>:67                                      ; preds = %62
  %tmp.142 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str10) nounwind, !dbg !112 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @.str) nounwind, !dbg !113 ; [debug line = 160:1]
  call void (...)* @_ssdm_SpecLoopFlatten(i32 1, [1 x i8]* @.str) nounwind, !dbg !114 ; [debug line = 161:1]
  switch i11 %row.assign.7, label %.preheader9.preheader.7_ifconv [
    i11 -129, label %66
    i11 0, label %66
  ]

sobel_operator_cache.exit.7466:                   ; preds = %branch11, %branch10, %branch9, %branch8
  br label %64

.preheader9.preheader.7_ifconv:                   ; preds = %67
  %tmp.28.7 = add i12 %row.assign.7.cast, -1, !dbg !115 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp.28.7.cast = sext i12 %tmp.28.7 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.22" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.7.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.21" = load i8* %"lineBuffer[0].addr.22", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.22" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.7.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.21" = load i8* %"lineBuffer[1].addr.22", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.22" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.7.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.21" = load i8* %"lineBuffer[2].addr.22", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.21" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.7.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.21" = load i8* %"lineBuffer[3].addr.21", align 1 ; [#uses=3 type=i8]
  %tmp.176 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.21", i8 %"lineBuffer[1].load.21", i8 %"lineBuffer[2].load.21", i8 %"lineBuffer[3].load.21", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.7.cast = zext i8 %tmp.176 to i9         ; [#uses=2 type=i9]
  %"lineBuffer[0].addr.23" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %row.assign.7.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[0].load.22" = load i8* %"lineBuffer[0].addr.23", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[1].addr.23" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %row.assign.7.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[1].load.22" = load i8* %"lineBuffer[1].addr.23", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[2].addr.23" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %row.assign.7.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[2].load.22" = load i8* %"lineBuffer[2].addr.23", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[3].addr.22" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %row.assign.7.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[3].load.22" = load i8* %"lineBuffer[3].addr.22", align 1 ; [#uses=2 type=i8]
  %tmp.177 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.22", i8 %"lineBuffer[1].load.22", i8 %"lineBuffer[2].load.22", i8 %"lineBuffer[3].load.22", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.7.0.1.cast = zext i8 %tmp.177 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.7.0.1 = shl nuw i9 %tmp.29.7.0.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.7.0.1.cast = zext i9 %tmp.33.7.0.1 to i10, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp.28.7.0.2 = add i11 %row.assign.7, 1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.28.7.0.2.cast = zext i11 %tmp.28.7.0.2 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.24" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.7.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.23" = load i8* %"lineBuffer[0].addr.24", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.24" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.7.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.23" = load i8* %"lineBuffer[1].addr.24", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.24" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.7.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.23" = load i8* %"lineBuffer[2].addr.24", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.23" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.7.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.23" = load i8* %"lineBuffer[3].addr.23", align 1 ; [#uses=3 type=i8]
  %tmp.178 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.23", i8 %"lineBuffer[1].load.23", i8 %"lineBuffer[2].load.23", i8 %"lineBuffer[3].load.23", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.7.0.2.cast = zext i8 %tmp.178 to i9, !dbg !115 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight.7.0.2 = sub i9 %tmp.29.7.0.2.cast, %tmp.29.7.cast, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight.7.0.2.cast = sext i9 %x_weight.7.0.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.179 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.21", i8 %"lineBuffer[1].load.21", i8 %"lineBuffer[2].load.21", i8 %"lineBuffer[3].load.21", i2 %tmp.10) nounwind ; [#uses=1 type=i8]
  %tmp.29.7.1.cast = zext i8 %tmp.179 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl14 = shl nuw i9 %tmp.29.7.1.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl14.cast = zext i9 %_shl14 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.7.1.1 = sub i11 %x_weight.7.0.2.cast, %_shl14.cast, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.180 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.23", i8 %"lineBuffer[1].load.23", i8 %"lineBuffer[2].load.23", i8 %"lineBuffer[3].load.23", i2 %tmp.10) nounwind ; [#uses=1 type=i8]
  %tmp.29.7.1.2.cast = zext i8 %tmp.180 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.7.1.2 = shl nuw i9 %tmp.29.7.1.2.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.7.1.2.cast = zext i9 %tmp.31.7.1.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.7.1.2 = add i11 %tmp.31.7.1.2.cast, %x_weight.7.1.1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp16 = add i9 %tmp.29.7.0.2.cast, %tmp.29.7.cast, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp16.cast = zext i9 %tmp16 to i10, !dbg !123  ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.7.1.2 = add i10 %tmp.33.7.0.1.cast, %tmp16.cast, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.7.1.2.cast = zext i10 %y_weight.7.1.2 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.181 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.21", i8 %"lineBuffer[1].load.21", i8 %"lineBuffer[2].load.21", i8 %"lineBuffer[3].load.21", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.7.2.cast = zext i8 %tmp.181 to i11, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight.7.2 = sub i11 %x_weight.7.1.2, %tmp.29.7.2.cast, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight.7.2 = sub i11 %y_weight.7.1.2.cast, %tmp.29.7.2.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.182 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.22", i8 %"lineBuffer[1].load.22", i8 %"lineBuffer[2].load.22", i8 %"lineBuffer[3].load.22", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.7.2.1.cast = zext i8 %tmp.182 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl15 = shl nuw i9 %tmp.29.7.2.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl15.cast = zext i9 %_shl15 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight.7.2.1 = sub i11 %y_weight.7.2, %_shl15.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.183 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.23", i8 %"lineBuffer[1].load.23", i8 %"lineBuffer[2].load.23", i8 %"lineBuffer[3].load.23", i2 %tmp.19.1.0.t) nounwind ; [#uses=2 type=i8]
  %tmp.29.7.2.2.cast = zext i8 %tmp.183 to i11    ; [#uses=2 type=i11]
  %tmp.151 = trunc i11 %x_weight.7.2 to i8        ; [#uses=1 type=i8]
  %x_weight.7.2.2 = add i11 %tmp.29.7.2.2.cast, %x_weight.7.2, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight.7.2.2 = sub i11 %y_weight.7.2.1, %tmp.29.7.2.2.cast, !dbg !123 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp.9.7 = icmp sgt i11 %x_weight.7.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.152 = add i8 %tmp.151, %tmp.183, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.153 = sub i8 0, %tmp.152, !dbg !124        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.154 = select i1 %tmp.9.7, i8 %tmp.152, i8 %tmp.153, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.12.7 = icmp sgt i11 %y_weight.7.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.155 = trunc i11 %y_weight.7.2.2 to i8, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.156 = sub i8 0, %tmp.155, !dbg !124        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.157 = select i1 %tmp.12.7, i8 %tmp.155, i8 %tmp.156, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.15.7 = add i8 %tmp.157, %tmp.154, !dbg !125 ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val.7 = xor i8 %tmp.15.7, -1, !dbg !125   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp.16.7 = icmp ult i8 %tmp.15.7, 55, !dbg !126 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp.20.7 = icmp ugt i8 %tmp.15.7, -101, !dbg !127 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %..i.7 = sext i1 %tmp.16.7 to i8                ; [#uses=1 type=i8]
  %tmp.191 = or i1 %tmp.16.7, %tmp.20.7           ; [#uses=1 type=i1]
  %edge_val.1.i.7 = select i1 %tmp.191, i8 %..i.7, i8 %edge_val.7 ; [#uses=4 type=i8]
  %val.7.cast = zext i8 %edge_val.1.i.7 to i16, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp.23.7 = shl nuw i16 %val.7.cast, 8, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp17 = call i24 @_ssdm_op_BitConcatenate.i24.i8.i16(i8 %edge_val.1.i.7, i16 %tmp.23.7), !dbg !128 ; [#uses=1 type=i24] [debug line = 167:5]
  %tmp.192 = call i24 @_ssdm_op_BitConcatenate.i24.i16.i8(i16 0, i8 %edge_val.1.i.7) ; [#uses=1 type=i24]
  %tmp.193 = or i24 %tmp.192, %tmp17              ; [#uses=1 type=i24]
  %tmp.26.7 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i24(i8 %edge_val.1.i.7, i24 %tmp.193), !dbg !128 ; [#uses=1 type=i32] [debug line = 167:5]
  %out_pix.addr.16 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.6.cast, i32 %row.assign.7.cast1, !dbg !128 ; [#uses=1 type=i32*] [debug line = 167:5]
  store i32 %tmp.26.7, i32* %out_pix.addr.16, align 4, !dbg !128 ; [debug line = 167:5]
  %inter_pix.addr.8 = getelementptr [1080 x [1920 x i8]]* %inter_pix, i32 0, i32 %lastLine.3.6.cast, i32 %row.assign.7.cast1, !dbg !129 ; [#uses=1 type=i8*] [debug line = 168:5]
  %inter_pix.load.8 = load i8* %inter_pix.addr.8, align 1, !dbg !129 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp.19.1.1.t, label %branch11 [
    i2 0, label %branch8
    i2 1, label %branch9
    i2 -2, label %branch10
  ], !dbg !129                                    ; [debug line = 168:5]

.preheader.9:                                     ; preds = %69
  %lastLine.3.8 = add i32 %lastLine.2, 8, !dbg !96 ; [#uses=2 type=i32] [debug line = 172:4]
  %68 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str9, i32 %tmp.141) nounwind, !dbg !100 ; [#uses=0 type=i32] [debug line = 174:2]
  %i.2.8 = add i11 %i1, 9, !dbg !101              ; [#uses=2 type=i11] [debug line = 157:37]
  %i.2.8.cast = zext i11 %i.2.8 to i32, !dbg !101 ; [#uses=2 type=i32] [debug line = 157:37]
  %tmp.158 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str9) nounwind, !dbg !102 ; [#uses=1 type=i32] [debug line = 157:43]
  %tmp.4.9 = icmp eq i11 %i.2.8, -969, !dbg !105  ; [#uses=2 type=i1] [debug line = 162:2]
  br label %77, !dbg !103                         ; [debug line = 159:25]

; <label>:69                                      ; preds = %71, %.preheader.8
  %row.assign.8 = phi i11 [ 0, %.preheader.8 ], [ %j.1.8, %71 ] ; [#uses=6 type=i11]
  %row.assign.8.cast1 = zext i11 %row.assign.8 to i32, !dbg !103 ; [#uses=7 type=i32] [debug line = 159:25]
  %row.assign.8.cast = zext i11 %row.assign.8 to i12, !dbg !103 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp.8.8 = icmp eq i11 %row.assign.8, -128, !dbg !103 ; [#uses=1 type=i1] [debug line = 159:25]
  %70 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  br i1 %tmp.8.8, label %.preheader.9, label %74, !dbg !103 ; [debug line = 159:25]

; <label>:71                                      ; preds = %sobel_operator_cache.exit.8461, %73
  %72 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str10, i32 %tmp.159) nounwind, !dbg !107 ; [#uses=0 type=i32] [debug line = 170:3]
  %j.1.8 = add i11 %row.assign.8, 1, !dbg !108    ; [#uses=1 type=i11] [debug line = 159:37]
  br label %69, !dbg !108                         ; [debug line = 159:37]

; <label>:73                                      ; preds = %74, %74
  %out_pix.addr.15 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.7.cast, i32 %row.assign.8.cast1, !dbg !109 ; [#uses=1 type=i32*] [debug line = 163:5]
  store i32 0, i32* %out_pix.addr.15, align 4, !dbg !109 ; [debug line = 163:5]
  br label %71, !dbg !111                         ; [debug line = 164:4]

; <label>:74                                      ; preds = %69
  %tmp.159 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str10) nounwind, !dbg !112 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @.str) nounwind, !dbg !113 ; [debug line = 160:1]
  call void (...)* @_ssdm_SpecLoopFlatten(i32 1, [1 x i8]* @.str) nounwind, !dbg !114 ; [debug line = 161:1]
  switch i11 %row.assign.8, label %.preheader9.preheader.8_ifconv [
    i11 -129, label %73
    i11 0, label %73
  ]

sobel_operator_cache.exit.8461:                   ; preds = %branch7, %branch6, %branch5, %branch4
  br label %71

.preheader9.preheader.8_ifconv:                   ; preds = %74
  %tmp.28.8 = add i12 %row.assign.8.cast, -1, !dbg !115 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp.28.8.cast = sext i12 %tmp.28.8 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.25" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.8.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.24" = load i8* %"lineBuffer[0].addr.25", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.25" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.8.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.24" = load i8* %"lineBuffer[1].addr.25", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.25" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.8.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.24" = load i8* %"lineBuffer[2].addr.25", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.24" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.8.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.24" = load i8* %"lineBuffer[3].addr.24", align 1 ; [#uses=3 type=i8]
  %tmp.194 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.24", i8 %"lineBuffer[1].load.24", i8 %"lineBuffer[2].load.24", i8 %"lineBuffer[3].load.24", i2 %tmp.10) nounwind ; [#uses=1 type=i8]
  %tmp.29.8.cast = zext i8 %tmp.194 to i9         ; [#uses=2 type=i9]
  %"lineBuffer[0].addr.26" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %row.assign.8.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[0].load.25" = load i8* %"lineBuffer[0].addr.26", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[1].addr.26" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %row.assign.8.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[1].load.25" = load i8* %"lineBuffer[1].addr.26", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[2].addr.26" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %row.assign.8.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[2].load.25" = load i8* %"lineBuffer[2].addr.26", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[3].addr.25" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %row.assign.8.cast1 ; [#uses=2 type=i8*]
  %"lineBuffer[3].load.25" = load i8* %"lineBuffer[3].addr.25", align 1 ; [#uses=2 type=i8]
  %tmp.195 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.25", i8 %"lineBuffer[1].load.25", i8 %"lineBuffer[2].load.25", i8 %"lineBuffer[3].load.25", i2 %tmp.10) nounwind ; [#uses=1 type=i8]
  %tmp.29.8.0.1.cast = zext i8 %tmp.195 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.8.0.1 = shl nuw i9 %tmp.29.8.0.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.8.0.1.cast = zext i9 %tmp.33.8.0.1 to i10, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp.28.8.0.2 = add i11 %row.assign.8, 1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.28.8.0.2.cast = zext i11 %tmp.28.8.0.2 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.27" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.8.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.26" = load i8* %"lineBuffer[0].addr.27", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.27" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.8.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.26" = load i8* %"lineBuffer[1].addr.27", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.27" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.8.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.26" = load i8* %"lineBuffer[2].addr.27", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.26" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.8.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.26" = load i8* %"lineBuffer[3].addr.26", align 1 ; [#uses=3 type=i8]
  %tmp.196 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.26", i8 %"lineBuffer[1].load.26", i8 %"lineBuffer[2].load.26", i8 %"lineBuffer[3].load.26", i2 %tmp.10) nounwind ; [#uses=1 type=i8]
  %tmp.29.8.0.2.cast = zext i8 %tmp.196 to i9, !dbg !115 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight.8.0.2 = sub i9 %tmp.29.8.0.2.cast, %tmp.29.8.cast, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight.8.0.2.cast = sext i9 %x_weight.8.0.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.197 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.24", i8 %"lineBuffer[1].load.24", i8 %"lineBuffer[2].load.24", i8 %"lineBuffer[3].load.24", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.8.1.cast = zext i8 %tmp.197 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl16 = shl nuw i9 %tmp.29.8.1.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl16.cast = zext i9 %_shl16 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.8.1.1 = sub i11 %x_weight.8.0.2.cast, %_shl16.cast, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.198 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.26", i8 %"lineBuffer[1].load.26", i8 %"lineBuffer[2].load.26", i8 %"lineBuffer[3].load.26", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.8.1.2.cast = zext i8 %tmp.198 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.8.1.2 = shl nuw i9 %tmp.29.8.1.2.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.8.1.2.cast = zext i9 %tmp.31.8.1.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.8.1.2 = add i11 %tmp.31.8.1.2.cast, %x_weight.8.1.1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp18 = add i9 %tmp.29.8.0.2.cast, %tmp.29.8.cast, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp18.cast = zext i9 %tmp18 to i10, !dbg !123  ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.8.1.2 = add i10 %tmp.33.8.0.1.cast, %tmp18.cast, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.8.1.2.cast = zext i10 %y_weight.8.1.2 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.199 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.24", i8 %"lineBuffer[1].load.24", i8 %"lineBuffer[2].load.24", i8 %"lineBuffer[3].load.24", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.8.2.cast = zext i8 %tmp.199 to i11, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight.8.2 = sub i11 %x_weight.8.1.2, %tmp.29.8.2.cast, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight.8.2 = sub i11 %y_weight.8.1.2.cast, %tmp.29.8.2.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.200 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.25", i8 %"lineBuffer[1].load.25", i8 %"lineBuffer[2].load.25", i8 %"lineBuffer[3].load.25", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.8.2.1.cast = zext i8 %tmp.200 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl17 = shl nuw i9 %tmp.29.8.2.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl17.cast = zext i9 %_shl17 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight.8.2.1 = sub i11 %y_weight.8.2, %_shl17.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.201 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.26", i8 %"lineBuffer[1].load.26", i8 %"lineBuffer[2].load.26", i8 %"lineBuffer[3].load.26", i2 %tmp.19.1.1.t) nounwind ; [#uses=2 type=i8]
  %tmp.29.8.2.2.cast = zext i8 %tmp.201 to i11    ; [#uses=2 type=i11]
  %tmp.168 = trunc i11 %x_weight.8.2 to i8        ; [#uses=1 type=i8]
  %x_weight.8.2.2 = add i11 %tmp.29.8.2.2.cast, %x_weight.8.2, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight.8.2.2 = sub i11 %y_weight.8.2.1, %tmp.29.8.2.2.cast, !dbg !123 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp.9.8 = icmp sgt i11 %x_weight.8.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.169 = add i8 %tmp.168, %tmp.201, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.170 = sub i8 0, %tmp.169, !dbg !124        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.171 = select i1 %tmp.9.8, i8 %tmp.169, i8 %tmp.170, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.12.8 = icmp sgt i11 %y_weight.8.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.172 = trunc i11 %y_weight.8.2.2 to i8, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.173 = sub i8 0, %tmp.172, !dbg !124        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.174 = select i1 %tmp.12.8, i8 %tmp.172, i8 %tmp.173, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.15.8 = add i8 %tmp.174, %tmp.171, !dbg !125 ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val.8 = xor i8 %tmp.15.8, -1, !dbg !125   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp.16.8 = icmp ult i8 %tmp.15.8, 55, !dbg !126 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp.20.8 = icmp ugt i8 %tmp.15.8, -101, !dbg !127 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %..i.8 = sext i1 %tmp.16.8 to i8                ; [#uses=1 type=i8]
  %tmp.202 = or i1 %tmp.16.8, %tmp.20.8           ; [#uses=1 type=i1]
  %edge_val.1.i.8 = select i1 %tmp.202, i8 %..i.8, i8 %edge_val.8 ; [#uses=4 type=i8]
  %val.8.cast = zext i8 %edge_val.1.i.8 to i16, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp.23.8 = shl nuw i16 %val.8.cast, 8, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp19 = call i24 @_ssdm_op_BitConcatenate.i24.i8.i16(i8 %edge_val.1.i.8, i16 %tmp.23.8), !dbg !128 ; [#uses=1 type=i24] [debug line = 167:5]
  %tmp.203 = call i24 @_ssdm_op_BitConcatenate.i24.i16.i8(i16 0, i8 %edge_val.1.i.8) ; [#uses=1 type=i24]
  %tmp.204 = or i24 %tmp.203, %tmp19              ; [#uses=1 type=i24]
  %tmp.26.8 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i24(i8 %edge_val.1.i.8, i24 %tmp.204), !dbg !128 ; [#uses=1 type=i32] [debug line = 167:5]
  %out_pix.addr.18 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.7.cast, i32 %row.assign.8.cast1, !dbg !128 ; [#uses=1 type=i32*] [debug line = 167:5]
  store i32 %tmp.26.8, i32* %out_pix.addr.18, align 4, !dbg !128 ; [debug line = 167:5]
  %inter_pix.addr.9 = getelementptr [1080 x [1920 x i8]]* %inter_pix, i32 0, i32 %lastLine.3.7.cast, i32 %row.assign.8.cast1, !dbg !129 ; [#uses=1 type=i8*] [debug line = 168:5]
  %inter_pix.load.9 = load i8* %inter_pix.addr.9, align 1, !dbg !129 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp.10, label %branch7 [
    i2 1, label %branch4
    i2 -2, label %branch5
    i2 -1, label %branch6
  ], !dbg !129                                    ; [debug line = 168:5]

; <label>:75                                      ; preds = %77
  %lastLine.3.9 = add i32 %lastLine.2, 9, !dbg !96 ; [#uses=1 type=i32] [debug line = 172:4]
  %lastLine.2.9 = select i1 %tmp.4.9, i32 %lastLine.3.8, i32 %lastLine.3.9, !dbg !99 ; [#uses=1 type=i32] [debug line = 171:3]
  %76 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str9, i32 %tmp.158) nounwind, !dbg !100 ; [#uses=0 type=i32] [debug line = 174:2]
  %i.2.9 = add i11 %i1, 10, !dbg !101             ; [#uses=1 type=i11] [debug line = 157:37]
  br label %.preheader.0, !dbg !101               ; [debug line = 157:37]

; <label>:77                                      ; preds = %79, %.preheader.9
  %row.assign.9 = phi i11 [ 0, %.preheader.9 ], [ %j.1.9, %79 ] ; [#uses=6 type=i11]
  %row.assign.9.cast = zext i11 %row.assign.9 to i32, !dbg !103 ; [#uses=7 type=i32] [debug line = 159:25]
  %tmp.8.9 = icmp eq i11 %row.assign.9, -128, !dbg !103 ; [#uses=1 type=i1] [debug line = 159:25]
  %78 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  br i1 %tmp.8.9, label %75, label %82, !dbg !103 ; [debug line = 159:25]

; <label>:79                                      ; preds = %sobel_operator_cache.exit.9456, %81
  %80 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str10, i32 %tmp.175) nounwind, !dbg !107 ; [#uses=0 type=i32] [debug line = 170:3]
  %j.1.9 = add i11 %row.assign.9, 1, !dbg !108    ; [#uses=1 type=i11] [debug line = 159:37]
  br label %77, !dbg !108                         ; [debug line = 159:37]

; <label>:81                                      ; preds = %switch.early.test47, %switch.early.test47, %82
  %out_pix.addr.17 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.8.cast, i32 %row.assign.9.cast, !dbg !109 ; [#uses=1 type=i32*] [debug line = 163:5]
  store i32 0, i32* %out_pix.addr.17, align 4, !dbg !109 ; [debug line = 163:5]
  br label %79, !dbg !111                         ; [debug line = 164:4]

; <label>:82                                      ; preds = %77
  %tmp.175 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str10) nounwind, !dbg !112 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @.str) nounwind, !dbg !113 ; [debug line = 160:1]
  call void (...)* @_ssdm_SpecLoopFlatten(i32 1, [1 x i8]* @.str) nounwind, !dbg !114 ; [debug line = 161:1]
  br i1 %tmp.4.9, label %81, label %switch.early.test47

switch.early.test47:                              ; preds = %82
  switch i11 %row.assign.9, label %.preheader9.preheader.9_ifconv [
    i11 -129, label %81
    i11 0, label %81
  ], !dbg !105                                    ; [debug line = 162:2]

sobel_operator_cache.exit.9456:                   ; preds = %branch3, %branch2, %branch1, %branch0
  br label %79

.preheader9.preheader.9_ifconv:                   ; preds = %switch.early.test47
  %tmp.28.9 = add i11 %row.assign.9, -1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.28.9.cast = zext i11 %tmp.28.9 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.28" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.9.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.27" = load i8* %"lineBuffer[0].addr.28", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.28" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.9.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.27" = load i8* %"lineBuffer[1].addr.28", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.28" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.9.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.27" = load i8* %"lineBuffer[2].addr.28", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.27" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.9.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.27" = load i8* %"lineBuffer[3].addr.27", align 1 ; [#uses=3 type=i8]
  %tmp.205 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.27", i8 %"lineBuffer[1].load.27", i8 %"lineBuffer[2].load.27", i8 %"lineBuffer[3].load.27", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.9.cast = zext i8 %tmp.205 to i9         ; [#uses=2 type=i9]
  %"lineBuffer[0].addr.29" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %row.assign.9.cast ; [#uses=2 type=i8*]
  %"lineBuffer[0].load.28" = load i8* %"lineBuffer[0].addr.29", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[1].addr.29" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %row.assign.9.cast ; [#uses=2 type=i8*]
  %"lineBuffer[1].load.28" = load i8* %"lineBuffer[1].addr.29", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[2].addr.29" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %row.assign.9.cast ; [#uses=2 type=i8*]
  %"lineBuffer[2].load.28" = load i8* %"lineBuffer[2].addr.29", align 1 ; [#uses=2 type=i8]
  %"lineBuffer[3].addr.28" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %row.assign.9.cast ; [#uses=2 type=i8*]
  %"lineBuffer[3].load.28" = load i8* %"lineBuffer[3].addr.28", align 1 ; [#uses=2 type=i8]
  %tmp.206 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.28", i8 %"lineBuffer[1].load.28", i8 %"lineBuffer[2].load.28", i8 %"lineBuffer[3].load.28", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.9.0.1.cast = zext i8 %tmp.206 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.9.0.1 = shl nuw i9 %tmp.29.9.0.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp.33.9.0.1.cast = zext i9 %tmp.33.9.0.1 to i10, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp.28.9.0.2 = add i11 %row.assign.9, 1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.28.9.0.2.cast = zext i11 %tmp.28.9.0.2 to i32, !dbg !115 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %"lineBuffer[0].addr.30" = getelementptr [1920 x i8]* %"lineBuffer[0]", i32 0, i32 %tmp.28.9.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[0].load.29" = load i8* %"lineBuffer[0].addr.30", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[1].addr.30" = getelementptr [1920 x i8]* %"lineBuffer[1]", i32 0, i32 %tmp.28.9.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[1].load.29" = load i8* %"lineBuffer[1].addr.30", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[2].addr.30" = getelementptr [1920 x i8]* %"lineBuffer[2]", i32 0, i32 %tmp.28.9.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[2].load.29" = load i8* %"lineBuffer[2].addr.30", align 1 ; [#uses=3 type=i8]
  %"lineBuffer[3].addr.29" = getelementptr [1920 x i8]* %"lineBuffer[3]", i32 0, i32 %tmp.28.9.0.2.cast ; [#uses=1 type=i8*]
  %"lineBuffer[3].load.29" = load i8* %"lineBuffer[3].addr.29", align 1 ; [#uses=3 type=i8]
  %tmp.207 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.29", i8 %"lineBuffer[1].load.29", i8 %"lineBuffer[2].load.29", i8 %"lineBuffer[3].load.29", i2 %tmp.19.1.0.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.9.0.2.cast = zext i8 %tmp.207 to i9, !dbg !115 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight.9.0.2 = sub i9 %tmp.29.9.0.2.cast, %tmp.29.9.cast, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight.9.0.2.cast = sext i9 %x_weight.9.0.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.208 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.27", i8 %"lineBuffer[1].load.27", i8 %"lineBuffer[2].load.27", i8 %"lineBuffer[3].load.27", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.9.1.cast = zext i8 %tmp.208 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl18 = shl nuw i9 %tmp.29.9.1.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %_shl18.cast = zext i9 %_shl18 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.9.1.1 = sub i11 %x_weight.9.0.2.cast, %_shl18.cast, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp.209 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.29", i8 %"lineBuffer[1].load.29", i8 %"lineBuffer[2].load.29", i8 %"lineBuffer[3].load.29", i2 %tmp.19.1.1.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.9.1.2.cast = zext i8 %tmp.209 to i9, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.9.1.2 = shl nuw i9 %tmp.29.9.1.2.cast, 1, !dbg !115 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp.31.9.1.2.cast = zext i9 %tmp.31.9.1.2 to i11, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight.9.1.2 = add i11 %tmp.31.9.1.2.cast, %x_weight.9.1.1, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp21 = add i9 %tmp.29.9.0.2.cast, %tmp.29.9.cast, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp21.cast = zext i9 %tmp21 to i10, !dbg !123  ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.9.1.2 = add i10 %tmp.33.9.0.1.cast, %tmp21.cast, !dbg !123 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight.9.1.2.cast = zext i10 %y_weight.9.1.2 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.210 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.27", i8 %"lineBuffer[1].load.27", i8 %"lineBuffer[2].load.27", i8 %"lineBuffer[3].load.27", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.9.2.cast = zext i8 %tmp.210 to i11, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight.9.2 = sub i11 %x_weight.9.1.2, %tmp.29.9.2.cast, !dbg !115 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight.9.2 = sub i11 %y_weight.9.1.2.cast, %tmp.29.9.2.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.211 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.28", i8 %"lineBuffer[1].load.28", i8 %"lineBuffer[2].load.28", i8 %"lineBuffer[3].load.28", i2 %tmp.19.1.2.t) nounwind ; [#uses=1 type=i8]
  %tmp.29.9.2.1.cast = zext i8 %tmp.211 to i9, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl19 = shl nuw i9 %tmp.29.9.2.1.cast, 1, !dbg !123 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %_shl19.cast = zext i9 %_shl19 to i11, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight.9.2.1 = sub i11 %y_weight.9.2, %_shl19.cast, !dbg !123 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp.212 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %"lineBuffer[0].load.29", i8 %"lineBuffer[1].load.29", i8 %"lineBuffer[2].load.29", i8 %"lineBuffer[3].load.29", i2 %tmp.19.1.2.t) nounwind ; [#uses=2 type=i8]
  %tmp.29.9.2.2.cast = zext i8 %tmp.212 to i11    ; [#uses=2 type=i11]
  %tmp.184 = trunc i11 %x_weight.9.2 to i8        ; [#uses=1 type=i8]
  %x_weight.9.2.2 = add i11 %tmp.29.9.2.2.cast, %x_weight.9.2, !dbg !115 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight.9.2.2 = sub i11 %y_weight.9.2.1, %tmp.29.9.2.2.cast, !dbg !123 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp.9.9 = icmp sgt i11 %x_weight.9.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.185 = add i8 %tmp.184, %tmp.212, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.186 = sub i8 0, %tmp.185, !dbg !124        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.187 = select i1 %tmp.9.9, i8 %tmp.185, i8 %tmp.186, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.12.9 = icmp sgt i11 %y_weight.9.2.2, 0, !dbg !124 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp.188 = trunc i11 %y_weight.9.2.2 to i8, !dbg !124 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp.189 = sub i8 0, %tmp.188, !dbg !124        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.190 = select i1 %tmp.12.9, i8 %tmp.188, i8 %tmp.189, !dbg !124 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp.15.9 = add i8 %tmp.190, %tmp.187, !dbg !125 ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val.9 = xor i8 %tmp.15.9, -1, !dbg !125   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp.16.9 = icmp ult i8 %tmp.15.9, 55, !dbg !126 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp.20.9 = icmp ugt i8 %tmp.15.9, -101, !dbg !127 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %..i.9 = sext i1 %tmp.16.9 to i8                ; [#uses=1 type=i8]
  %tmp.213 = or i1 %tmp.16.9, %tmp.20.9           ; [#uses=1 type=i1]
  %edge_val.1.i.9 = select i1 %tmp.213, i8 %..i.9, i8 %edge_val.9 ; [#uses=4 type=i8]
  %val.9.cast = zext i8 %edge_val.1.i.9 to i16, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp.23.9 = shl nuw i16 %val.9.cast, 8, !dbg !128 ; [#uses=1 type=i16] [debug line = 167:5]
  %tmp22 = call i24 @_ssdm_op_BitConcatenate.i24.i8.i16(i8 %edge_val.1.i.9, i16 %tmp.23.9), !dbg !128 ; [#uses=1 type=i24] [debug line = 167:5]
  %tmp.214 = call i24 @_ssdm_op_BitConcatenate.i24.i16.i8(i16 0, i8 %edge_val.1.i.9) ; [#uses=1 type=i24]
  %tmp.215 = or i24 %tmp.214, %tmp22              ; [#uses=1 type=i24]
  %tmp.26.9 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i24(i8 %edge_val.1.i.9, i24 %tmp.215), !dbg !128 ; [#uses=1 type=i32] [debug line = 167:5]
  %out_pix.addr.19 = getelementptr [1080 x [1920 x i32]]* %out_pix, i32 0, i32 %i.2.8.cast, i32 %row.assign.9.cast, !dbg !128 ; [#uses=1 type=i32*] [debug line = 167:5]
  store i32 %tmp.26.9, i32* %out_pix.addr.19, align 4, !dbg !128 ; [debug line = 167:5]
  %inter_pix.addr.10 = getelementptr [1080 x [1920 x i8]]* %inter_pix, i32 0, i32 %lastLine.3.8, i32 %row.assign.9.cast, !dbg !129 ; [#uses=1 type=i8*] [debug line = 168:5]
  %inter_pix.load.10 = load i8* %inter_pix.addr.10, align 1, !dbg !129 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp.10, label %branch3 [
    i2 0, label %branch0
    i2 1, label %branch1
    i2 -2, label %branch2
  ], !dbg !129                                    ; [debug line = 168:5]

; <label>:83                                      ; preds = %.preheader.0
  ret void, !dbg !130                             ; [debug line = 207:1]

branch0:                                          ; preds = %.preheader9.preheader.9_ifconv
  store i8 %inter_pix.load.10, i8* %"lineBuffer[0].addr.29", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.9456, !dbg !129 ; [debug line = 168:5]

branch1:                                          ; preds = %.preheader9.preheader.9_ifconv
  store i8 %inter_pix.load.10, i8* %"lineBuffer[1].addr.29", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.9456, !dbg !129 ; [debug line = 168:5]

branch2:                                          ; preds = %.preheader9.preheader.9_ifconv
  store i8 %inter_pix.load.10, i8* %"lineBuffer[2].addr.29", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.9456, !dbg !129 ; [debug line = 168:5]

branch3:                                          ; preds = %.preheader9.preheader.9_ifconv
  store i8 %inter_pix.load.10, i8* %"lineBuffer[3].addr.28", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.9456, !dbg !129 ; [debug line = 168:5]

branch4:                                          ; preds = %.preheader9.preheader.8_ifconv
  store i8 %inter_pix.load.9, i8* %"lineBuffer[0].addr.26", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.8461, !dbg !129 ; [debug line = 168:5]

branch5:                                          ; preds = %.preheader9.preheader.8_ifconv
  store i8 %inter_pix.load.9, i8* %"lineBuffer[1].addr.26", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.8461, !dbg !129 ; [debug line = 168:5]

branch6:                                          ; preds = %.preheader9.preheader.8_ifconv
  store i8 %inter_pix.load.9, i8* %"lineBuffer[2].addr.26", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.8461, !dbg !129 ; [debug line = 168:5]

branch7:                                          ; preds = %.preheader9.preheader.8_ifconv
  store i8 %inter_pix.load.9, i8* %"lineBuffer[3].addr.25", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.8461, !dbg !129 ; [debug line = 168:5]

branch8:                                          ; preds = %.preheader9.preheader.7_ifconv
  store i8 %inter_pix.load.8, i8* %"lineBuffer[0].addr.23", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.7466, !dbg !129 ; [debug line = 168:5]

branch9:                                          ; preds = %.preheader9.preheader.7_ifconv
  store i8 %inter_pix.load.8, i8* %"lineBuffer[1].addr.23", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.7466, !dbg !129 ; [debug line = 168:5]

branch10:                                         ; preds = %.preheader9.preheader.7_ifconv
  store i8 %inter_pix.load.8, i8* %"lineBuffer[2].addr.23", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.7466, !dbg !129 ; [debug line = 168:5]

branch11:                                         ; preds = %.preheader9.preheader.7_ifconv
  store i8 %inter_pix.load.8, i8* %"lineBuffer[3].addr.22", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.7466, !dbg !129 ; [debug line = 168:5]

branch12:                                         ; preds = %.preheader9.preheader.6_ifconv
  store i8 %inter_pix.load.7, i8* %"lineBuffer[0].addr.20", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.6471, !dbg !129 ; [debug line = 168:5]

branch13:                                         ; preds = %.preheader9.preheader.6_ifconv
  store i8 %inter_pix.load.7, i8* %"lineBuffer[1].addr.20", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.6471, !dbg !129 ; [debug line = 168:5]

branch14:                                         ; preds = %.preheader9.preheader.6_ifconv
  store i8 %inter_pix.load.7, i8* %"lineBuffer[2].addr.20", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.6471, !dbg !129 ; [debug line = 168:5]

branch15:                                         ; preds = %.preheader9.preheader.6_ifconv
  store i8 %inter_pix.load.7, i8* %"lineBuffer[3].addr.19", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.6471, !dbg !129 ; [debug line = 168:5]

branch16:                                         ; preds = %.preheader9.preheader.5_ifconv
  store i8 %inter_pix.load.6, i8* %"lineBuffer[0].addr.17", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.5476, !dbg !129 ; [debug line = 168:5]

branch17:                                         ; preds = %.preheader9.preheader.5_ifconv
  store i8 %inter_pix.load.6, i8* %"lineBuffer[1].addr.17", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.5476, !dbg !129 ; [debug line = 168:5]

branch18:                                         ; preds = %.preheader9.preheader.5_ifconv
  store i8 %inter_pix.load.6, i8* %"lineBuffer[2].addr.17", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.5476, !dbg !129 ; [debug line = 168:5]

branch19:                                         ; preds = %.preheader9.preheader.5_ifconv
  store i8 %inter_pix.load.6, i8* %"lineBuffer[3].addr.16", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.5476, !dbg !129 ; [debug line = 168:5]

branch20:                                         ; preds = %.preheader9.preheader.4_ifconv
  store i8 %inter_pix.load.5, i8* %"lineBuffer[0].addr.14", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.4481, !dbg !129 ; [debug line = 168:5]

branch21:                                         ; preds = %.preheader9.preheader.4_ifconv
  store i8 %inter_pix.load.5, i8* %"lineBuffer[1].addr.14", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.4481, !dbg !129 ; [debug line = 168:5]

branch22:                                         ; preds = %.preheader9.preheader.4_ifconv
  store i8 %inter_pix.load.5, i8* %"lineBuffer[2].addr.14", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.4481, !dbg !129 ; [debug line = 168:5]

branch23:                                         ; preds = %.preheader9.preheader.4_ifconv
  store i8 %inter_pix.load.5, i8* %"lineBuffer[3].addr.13", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.4481, !dbg !129 ; [debug line = 168:5]

branch24:                                         ; preds = %.preheader9.preheader.3_ifconv
  store i8 %inter_pix.load.4, i8* %"lineBuffer[0].addr.11", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.3486, !dbg !129 ; [debug line = 168:5]

branch25:                                         ; preds = %.preheader9.preheader.3_ifconv
  store i8 %inter_pix.load.4, i8* %"lineBuffer[1].addr.11", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.3486, !dbg !129 ; [debug line = 168:5]

branch26:                                         ; preds = %.preheader9.preheader.3_ifconv
  store i8 %inter_pix.load.4, i8* %"lineBuffer[2].addr.11", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.3486, !dbg !129 ; [debug line = 168:5]

branch27:                                         ; preds = %.preheader9.preheader.3_ifconv
  store i8 %inter_pix.load.4, i8* %"lineBuffer[3].addr.10", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.3486, !dbg !129 ; [debug line = 168:5]

branch28:                                         ; preds = %.preheader9.preheader.2_ifconv
  store i8 %inter_pix.load.3, i8* %"lineBuffer[0].addr.8", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.2491, !dbg !129 ; [debug line = 168:5]

branch29:                                         ; preds = %.preheader9.preheader.2_ifconv
  store i8 %inter_pix.load.3, i8* %"lineBuffer[1].addr.8", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.2491, !dbg !129 ; [debug line = 168:5]

branch30:                                         ; preds = %.preheader9.preheader.2_ifconv
  store i8 %inter_pix.load.3, i8* %"lineBuffer[2].addr.8", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.2491, !dbg !129 ; [debug line = 168:5]

branch31:                                         ; preds = %.preheader9.preheader.2_ifconv
  store i8 %inter_pix.load.3, i8* %"lineBuffer[3].addr.7", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.2491, !dbg !129 ; [debug line = 168:5]

branch32:                                         ; preds = %.preheader9.preheader.1_ifconv
  store i8 %inter_pix.load.2, i8* %"lineBuffer[0].addr.5", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.1496, !dbg !129 ; [debug line = 168:5]

branch33:                                         ; preds = %.preheader9.preheader.1_ifconv
  store i8 %inter_pix.load.2, i8* %"lineBuffer[1].addr.5", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.1496, !dbg !129 ; [debug line = 168:5]

branch34:                                         ; preds = %.preheader9.preheader.1_ifconv
  store i8 %inter_pix.load.2, i8* %"lineBuffer[2].addr.5", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.1496, !dbg !129 ; [debug line = 168:5]

branch35:                                         ; preds = %.preheader9.preheader.1_ifconv
  store i8 %inter_pix.load.2, i8* %"lineBuffer[3].addr.4", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.1496, !dbg !129 ; [debug line = 168:5]

branch36:                                         ; preds = %.preheader9.preheader.0_ifconv
  store i8 %inter_pix.load.1, i8* %"lineBuffer[0].addr.2", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.0501, !dbg !129 ; [debug line = 168:5]

branch37:                                         ; preds = %.preheader9.preheader.0_ifconv
  store i8 %inter_pix.load.1, i8* %"lineBuffer[1].addr.2", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.0501, !dbg !129 ; [debug line = 168:5]

branch38:                                         ; preds = %.preheader9.preheader.0_ifconv
  store i8 %inter_pix.load.1, i8* %"lineBuffer[2].addr.2", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.0501, !dbg !129 ; [debug line = 168:5]

branch39:                                         ; preds = %.preheader9.preheader.0_ifconv
  store i8 %inter_pix.load.1, i8* %"lineBuffer[3].addr.1", align 1, !dbg !129 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.0501, !dbg !129 ; [debug line = 168:5]

branch40:                                         ; preds = %6
  store i8 %inter_pix.load, i8* %"lineBuffer[0].addr", align 1, !dbg !89 ; [debug line = 153:4]
  br label %7, !dbg !89                           ; [debug line = 153:4]

branch41:                                         ; preds = %6
  store i8 %inter_pix.load, i8* %"lineBuffer[1].addr", align 1, !dbg !89 ; [debug line = 153:4]
  br label %7, !dbg !89                           ; [debug line = 153:4]

branch42:                                         ; preds = %6
  store i8 %inter_pix.load, i8* %"lineBuffer[2].addr", align 1, !dbg !89 ; [debug line = 153:4]
  br label %7, !dbg !89                           ; [debug line = 153:4]
}

; [#uses=3]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=4]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=21]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=21]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=10]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=13]
declare i32 @_ssdm_op_SpecLoopTripCount(...)

; [#uses=2]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=3]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=2]
declare void @_ssdm_op_SpecBitsMap(...)

; [#uses=0]
declare i8 @_ssdm_op_PartSelect.i8.i8.i32.i32(i8, i32, i32) nounwind readnone

; [#uses=0]
declare i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=0]
declare i8 @_ssdm_op_PartSelect.i8.i24.i32.i32(i24, i32, i32) nounwind readnone

; [#uses=80]
declare i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8, i8, i8, i8, i2)

; [#uses=10]
declare i32 @_ssdm_op_BitConcatenate.i32.i8.i24(i8, i24) nounwind readnone

; [#uses=0]
declare i32 @_ssdm_op_BitConcatenate.i32.i8.i16.i8(i8, i16, i8) nounwind readnone

; [#uses=10]
declare i24 @_ssdm_op_BitConcatenate.i24.i8.i16(i8, i16) nounwind readnone

; [#uses=10]
declare i24 @_ssdm_op_BitConcatenate.i24.i16.i8(i16, i8) nounwind readnone

; [#uses=10]
declare void @_ssdm_SpecLoopFlatten(...) nounwind

!opencl.kernels = !{!0, !7, !9}
!hls.encrypted.func = !{}
!llvm.dbg.cu = !{!15}
!llvm.map.gv = !{}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"int", metadata !"uint8_t [1920]*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"const", metadata !"const", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"col", metadata !"row", metadata !"image"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !8, metadata !6}
!8 = metadata !{metadata !"kernel_arg_name", metadata !"col", metadata !"row", metadata !"cache"}
!9 = metadata !{null, metadata !10, metadata !11, metadata !12, metadata !13, metadata !14, metadata !6}
!10 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!11 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!12 = metadata !{metadata !"kernel_arg_type", metadata !"uint8_t [1920]*", metadata !"uint [1920]*"}
!13 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!14 = metadata !{metadata !"kernel_arg_name", metadata !"inter_pix", metadata !"out_pix"}
!15 = metadata !{i32 786449, i32 0, i32 4, metadata !"C:/TEMP/Labo4/SobelLab4/solution1/.autopilot/db/Sobel.pragma.2.cpp", metadata !"C:\5CTEMP\5CLabo4", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !16, metadata !16, metadata !17, metadata !39} ; [ DW_TAG_compile_unit ]
!16 = metadata !{i32 0}
!17 = metadata !{metadata !18, metadata !32, metadata !33}
!18 = metadata !{i32 786478, i32 0, metadata !19, metadata !"sobel_operator", metadata !"sobel_operator", metadata !"_Z14sobel_operatoriiPA1920_h", metadata !19, i32 20, metadata !20, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !30, i32 21} ; [ DW_TAG_subprogram ]
!19 = metadata !{i32 786473, metadata !"SobelLab4/Sobel.cpp", metadata !"C:\5CTEMP\5CLabo4", null} ; [ DW_TAG_file_type ]
!20 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !21, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!21 = metadata !{metadata !22, metadata !24, metadata !24, metadata !26}
!22 = metadata !{i32 786454, null, metadata !"uint8_t", metadata !19, i32 36, i64 0, i64 0, i64 0, i32 0, metadata !23} ; [ DW_TAG_typedef ]
!23 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!24 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !25} ; [ DW_TAG_const_type ]
!25 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!26 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !27} ; [ DW_TAG_pointer_type ]
!27 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 15360, i64 8, i32 0, i32 0, metadata !22, metadata !28, i32 0, i32 0} ; [ DW_TAG_array_type ]
!28 = metadata !{metadata !29}
!29 = metadata !{i32 786465, i64 0, i64 1919}     ; [ DW_TAG_subrange_type ]
!30 = metadata !{metadata !31}
!31 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!32 = metadata !{i32 786478, i32 0, metadata !19, metadata !"sobel_operator_cache", metadata !"sobel_operator_cache", metadata !"_Z20sobel_operator_cacheiiPA1920_h", metadata !19, i32 75, metadata !20, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !30, i32 76} ; [ DW_TAG_subprogram ]
!33 = metadata !{i32 786478, i32 0, metadata !19, metadata !"sobel_filter", metadata !"sobel_filter", metadata !"_Z12sobel_filterPA1920_hPA1920_j", metadata !19, i32 134, metadata !34, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !30, i32 135} ; [ DW_TAG_subprogram ]
!34 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !35, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!35 = metadata !{null, metadata !26, metadata !36}
!36 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !37} ; [ DW_TAG_pointer_type ]
!37 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 61440, i64 32, i32 0, i32 0, metadata !38, metadata !28, i32 0, i32 0} ; [ DW_TAG_array_type ]
!38 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!39 = metadata !{metadata !40}
!40 = metadata !{metadata !41, metadata !47, metadata !48, metadata !49}
!41 = metadata !{i32 786484, i32 0, metadata !32, metadata !"y_op", metadata !"y_op", metadata !"", metadata !19, i32 100, metadata !42, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!42 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 72, i64 8, i32 0, i32 0, metadata !43, metadata !45, i32 0, i32 0} ; [ DW_TAG_array_type ]
!43 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !44} ; [ DW_TAG_const_type ]
!44 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!45 = metadata !{metadata !46, metadata !46}
!46 = metadata !{i32 786465, i64 0, i64 2}        ; [ DW_TAG_subrange_type ]
!47 = metadata !{i32 786484, i32 0, metadata !32, metadata !"x_op", metadata !"x_op", metadata !"", metadata !19, i32 96, metadata !42, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!48 = metadata !{i32 786484, i32 0, metadata !18, metadata !"x_op", metadata !"x_op", metadata !"", metadata !19, i32 41, metadata !42, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!49 = metadata !{i32 786484, i32 0, metadata !18, metadata !"y_op", metadata !"y_op", metadata !"", metadata !19, i32 45, metadata !42, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!50 = metadata !{metadata !51}
!51 = metadata !{i32 0, i32 7, metadata !52}
!52 = metadata !{metadata !53}
!53 = metadata !{metadata !"inter_pix", metadata !54, metadata !"unsigned char", i32 0, i32 7}
!54 = metadata !{metadata !55, metadata !56}
!55 = metadata !{i32 0, i32 1079, i32 1}
!56 = metadata !{i32 0, i32 1919, i32 1}
!57 = metadata !{metadata !58}
!58 = metadata !{i32 0, i32 31, metadata !59}
!59 = metadata !{metadata !60}
!60 = metadata !{metadata !"out_pix", metadata !54, metadata !"unsigned int", i32 0, i32 31}
!61 = metadata !{i32 786689, metadata !33, metadata !"inter_pix", null, i32 134, metadata !62, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!62 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 16588800, i64 8, i32 0, i32 0, metadata !22, metadata !63, i32 0, i32 0} ; [ DW_TAG_array_type ]
!63 = metadata !{metadata !64, metadata !29}
!64 = metadata !{i32 786465, i64 0, i64 1079}     ; [ DW_TAG_subrange_type ]
!65 = metadata !{i32 134, i32 27, metadata !33, null}
!66 = metadata !{i32 786689, metadata !33, metadata !"out_pix", null, i32 134, metadata !67, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!67 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 66355200, i64 32, i32 0, i32 0, metadata !38, metadata !63, i32 0, i32 0} ; [ DW_TAG_array_type ]
!68 = metadata !{i32 134, i32 59, metadata !33, null}
!69 = metadata !{i32 145, i32 1, metadata !70, null}
!70 = metadata !{i32 786443, metadata !33, i32 135, i32 1, metadata !19, i32 10} ; [ DW_TAG_lexical_block ]
!71 = metadata !{i32 790529, metadata !72, metadata !"lineBuffer[0]", null, i32 148, metadata !76, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!72 = metadata !{i32 786688, metadata !70, metadata !"lineBuffer", metadata !19, i32 148, metadata !73, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!73 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 61440, i64 8, i32 0, i32 0, metadata !22, metadata !74, i32 0, i32 0} ; [ DW_TAG_array_type ]
!74 = metadata !{metadata !75, metadata !29}
!75 = metadata !{i32 786465, i64 0, i64 3}        ; [ DW_TAG_subrange_type ]
!76 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 15360, i64 8, i32 0, i32 0, metadata !22, metadata !74, i32 0, i32 0} ; [ DW_TAG_array_type ]
!77 = metadata !{i32 148, i32 10, metadata !70, null}
!78 = metadata !{i32 790529, metadata !72, metadata !"lineBuffer[1]", null, i32 148, metadata !76, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!79 = metadata !{i32 790529, metadata !72, metadata !"lineBuffer[2]", null, i32 148, metadata !76, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!80 = metadata !{i32 790529, metadata !72, metadata !"lineBuffer[3]", null, i32 148, metadata !76, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!81 = metadata !{i32 151, i32 14, metadata !82, null}
!82 = metadata !{i32 786443, metadata !70, i32 151, i32 14, metadata !19, i32 11} ; [ DW_TAG_lexical_block ]
!83 = metadata !{i32 151, i32 46, metadata !84, null}
!84 = metadata !{i32 786443, metadata !82, i32 151, i32 45, metadata !19, i32 12} ; [ DW_TAG_lexical_block ]
!85 = metadata !{i32 152, i32 37, metadata !86, null}
!86 = metadata !{i32 786443, metadata !84, i32 152, i32 14, metadata !19, i32 13} ; [ DW_TAG_lexical_block ]
!87 = metadata !{i32 152, i32 54, metadata !88, null}
!88 = metadata !{i32 786443, metadata !86, i32 152, i32 53, metadata !19, i32 14} ; [ DW_TAG_lexical_block ]
!89 = metadata !{i32 153, i32 4, metadata !88, null}
!90 = metadata !{i32 152, i32 49, metadata !86, null}
!91 = metadata !{i32 786688, metadata !86, metadata !"i", metadata !19, i32 152, metadata !38, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!92 = metadata !{i32 156, i32 2, metadata !84, null}
!93 = metadata !{i32 151, i32 34, metadata !82, null}
!94 = metadata !{i32 157, i32 25, metadata !95, null}
!95 = metadata !{i32 786443, metadata !70, i32 157, i32 2, metadata !19, i32 15} ; [ DW_TAG_lexical_block ]
!96 = metadata !{i32 172, i32 4, metadata !97, null}
!97 = metadata !{i32 786443, metadata !98, i32 171, i32 27, metadata !19, i32 21} ; [ DW_TAG_lexical_block ]
!98 = metadata !{i32 786443, metadata !95, i32 157, i32 42, metadata !19, i32 16} ; [ DW_TAG_lexical_block ]
!99 = metadata !{i32 171, i32 3, metadata !98, null}
!100 = metadata !{i32 174, i32 2, metadata !98, null}
!101 = metadata !{i32 157, i32 37, metadata !95, null}
!102 = metadata !{i32 157, i32 43, metadata !98, null}
!103 = metadata !{i32 159, i32 25, metadata !104, null}
!104 = metadata !{i32 786443, metadata !98, i32 159, i32 2, metadata !19, i32 17} ; [ DW_TAG_lexical_block ]
!105 = metadata !{i32 162, i32 2, metadata !106, null}
!106 = metadata !{i32 786443, metadata !104, i32 159, i32 42, metadata !19, i32 18} ; [ DW_TAG_lexical_block ]
!107 = metadata !{i32 170, i32 3, metadata !106, null}
!108 = metadata !{i32 159, i32 37, metadata !104, null}
!109 = metadata !{i32 163, i32 5, metadata !110, null}
!110 = metadata !{i32 786443, metadata !106, i32 162, i32 50, metadata !19, i32 19} ; [ DW_TAG_lexical_block ]
!111 = metadata !{i32 164, i32 4, metadata !110, null}
!112 = metadata !{i32 159, i32 43, metadata !106, null}
!113 = metadata !{i32 160, i32 1, metadata !106, null}
!114 = metadata !{i32 161, i32 1, metadata !106, null}
!115 = metadata !{i32 111, i32 4, metadata !116, metadata !121}
!116 = metadata !{i32 786443, metadata !117, i32 108, i32 39, metadata !19, i32 9} ; [ DW_TAG_lexical_block ]
!117 = metadata !{i32 786443, metadata !118, i32 108, i32 11, metadata !19, i32 8} ; [ DW_TAG_lexical_block ]
!118 = metadata !{i32 786443, metadata !119, i32 106, i32 39, metadata !19, i32 7} ; [ DW_TAG_lexical_block ]
!119 = metadata !{i32 786443, metadata !120, i32 106, i32 11, metadata !19, i32 6} ; [ DW_TAG_lexical_block ]
!120 = metadata !{i32 786443, metadata !32, i32 76, i32 1, metadata !19, i32 5} ; [ DW_TAG_lexical_block ]
!121 = metadata !{i32 166, i32 38, metadata !122, null}
!122 = metadata !{i32 786443, metadata !106, i32 165, i32 9, metadata !19, i32 20} ; [ DW_TAG_lexical_block ]
!123 = metadata !{i32 115, i32 4, metadata !116, metadata !121}
!124 = metadata !{i32 120, i32 2, metadata !120, metadata !121}
!125 = metadata !{i32 122, i32 2, metadata !120, metadata !121}
!126 = metadata !{i32 125, i32 2, metadata !120, metadata !121}
!127 = metadata !{i32 127, i32 7, metadata !120, metadata !121}
!128 = metadata !{i32 167, i32 5, metadata !122, null}
!129 = metadata !{i32 168, i32 5, metadata !122, null}
!130 = metadata !{i32 207, i32 1, metadata !70, null}
