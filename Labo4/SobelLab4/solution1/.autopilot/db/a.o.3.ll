; ModuleID = 'C:/TEMP/Labo4/SobelLab4/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@sobel_filter_str = internal unnamed_addr constant [13 x i8] c"sobel_filter\00" ; [#uses=1 type=[13 x i8]*]
@mode3 = internal constant [10 x i8] c"s_axilite\00" ; [#uses=1 type=[10 x i8]*]
@mode = internal constant [10 x i8] c"s_axilite\00" ; [#uses=1 type=[10 x i8]*]
@bundle4 = internal constant [1 x i8] zeroinitializer ; [#uses=1 type=[1 x i8]*]
@bundle = internal constant [1 x i8] zeroinitializer ; [#uses=1 type=[1 x i8]*]
@p_str9 = private unnamed_addr constant [12 x i8] c"hls_label_1\00", align 1 ; [#uses=20 type=[12 x i8]*]
@p_str8 = private unnamed_addr constant [9 x i8] c"LoadLine\00", align 1 ; [#uses=1 type=[9 x i8]*]
@p_str7 = private unnamed_addr constant [10 x i8] c"LoadCache\00", align 1 ; [#uses=3 type=[10 x i8]*]
@p_str5 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@p_str4 = private unnamed_addr constant [6 x i8] c"slave\00", align 1 ; [#uses=4 type=[6 x i8]*]
@p_str3 = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1 ; [#uses=2 type=[6 x i8]*]
@p_str10 = private unnamed_addr constant [12 x i8] c"hls_label_0\00", align 1 ; [#uses=20 type=[12 x i8]*]
@p_str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=34 type=[1 x i8]*]

; [#uses=0]
define void @sobel_filter(i8* %gmem, i32* %gmem2, i32 %inter_pix, i32 %out_pix) {
  %out_pix_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %out_pix) ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %out_pix_read}, i64 0, metadata !19), !dbg !38 ; [debug line = 134:59] [debug variable = out_pix]
  %inter_pix_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %inter_pix) ; [#uses=11 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %inter_pix_read}, i64 0, metadata !39), !dbg !41 ; [debug line = 134:27] [debug variable = inter_pix]
  %out_pix3 = call i30 @_ssdm_op_PartSelect.i30.i32.i32.i32(i32 %out_pix_read, i32 2, i32 31) ; [#uses=1 type=i30]
  %tmp_9 = zext i30 %out_pix3 to i32              ; [#uses=10 type=i32]
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %gmem2), !map !42
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %gmem), !map !49
  call void (...)* @_ssdm_op_SpecTopModule([13 x i8]* @sobel_filter_str) nounwind
  %lineBuffer_0 = alloca [1920 x i8], align 1     ; [#uses=31 type=[1920 x i8]*]
  %lineBuffer_1 = alloca [1920 x i8], align 1     ; [#uses=31 type=[1920 x i8]*]
  %lineBuffer_2 = alloca [1920 x i8], align 1     ; [#uses=31 type=[1920 x i8]*]
  %lineBuffer_3 = alloca [1920 x i8], align 1     ; [#uses=30 type=[1920 x i8]*]
  call void @llvm.dbg.value(metadata !{i32 %inter_pix}, i64 0, metadata !39), !dbg !41 ; [debug line = 134:27] [debug variable = inter_pix]
  call void @llvm.dbg.value(metadata !{i32 %out_pix}, i64 0, metadata !19), !dbg !38 ; [debug line = 134:59] [debug variable = out_pix]
  call void (...)* @_ssdm_op_SpecInterface(i8* %gmem, [6 x i8]* @p_str3, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [6 x i8]* @p_str4, [1 x i8]* @p_str, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i32 %inter_pix, [10 x i8]* @mode, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @bundle, [6 x i8]* @p_str4, [1 x i8]* @p_str, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i32* %gmem2, [6 x i8]* @p_str3, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [6 x i8]* @p_str4, [1 x i8]* @p_str, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i32 %out_pix, [10 x i8]* @mode3, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @bundle4, [6 x i8]* @p_str4, [1 x i8]* @p_str, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str5, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind, !dbg !53 ; [debug line = 145:1]
  call void @llvm.dbg.declare(metadata !{[1920 x i8]* %lineBuffer_0}, metadata !55), !dbg !61 ; [debug line = 148:10] [debug variable = lineBuffer[0]]
  call void @llvm.dbg.declare(metadata !{[1920 x i8]* %lineBuffer_1}, metadata !62), !dbg !61 ; [debug line = 148:10] [debug variable = lineBuffer[1]]
  call void @llvm.dbg.declare(metadata !{[1920 x i8]* %lineBuffer_2}, metadata !63), !dbg !61 ; [debug line = 148:10] [debug variable = lineBuffer[2]]
  call void @llvm.dbg.declare(metadata !{[1920 x i8]* %lineBuffer_3}, metadata !64), !dbg !61 ; [debug line = 148:10] [debug variable = lineBuffer[3]]
  br label %1, !dbg !65                           ; [debug line = 151:14]

; <label>:1                                       ; preds = %6, %0
  %lastLine = phi i2 [ 0, %0 ], [ %tmp_6, %6 ]    ; [#uses=5 type=i2]
  %tmp_10 = call i13 @_ssdm_op_BitConcatenate.i13.i2.i11(i2 %lastLine, i11 0) ; [#uses=1 type=i13]
  %p_shl20_cast = zext i13 %tmp_10 to i14         ; [#uses=1 type=i14]
  %tmp_20 = call i9 @_ssdm_op_BitConcatenate.i9.i2.i7(i2 %lastLine, i7 0) ; [#uses=1 type=i9]
  %p_shl21_cast = zext i9 %tmp_20 to i14, !dbg !67 ; [#uses=1 type=i14] [debug line = 153:4]
  %tmp_24 = sub i14 %p_shl20_cast, %p_shl21_cast, !dbg !67 ; [#uses=1 type=i14] [debug line = 153:4]
  %tmp = icmp eq i2 %lastLine, -1, !dbg !65       ; [#uses=1 type=i1] [debug line = 151:14]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind ; [#uses=0 type=i32]
  %tmp_6 = add i2 %lastLine, 1, !dbg !71          ; [#uses=1 type=i2] [debug line = 151:34]
  br i1 %tmp, label %.preheader.0.preheader, label %2, !dbg !65 ; [debug line = 151:14]

.preheader.0.preheader:                           ; preds = %1
  br label %.preheader.0

; <label>:2                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName([10 x i8]* @p_str7) nounwind, !dbg !72 ; [debug line = 151:46]
  %tmp_3 = call i32 (...)* @_ssdm_op_SpecRegionBegin([10 x i8]* @p_str7) nounwind, !dbg !72 ; [#uses=1 type=i32] [debug line = 151:46]
  %tmp_35 = sext i14 %tmp_24 to i32, !dbg !67     ; [#uses=1 type=i32] [debug line = 153:4]
  %tmp_36 = add i32 %tmp_35, %inter_pix_read      ; [#uses=1 type=i32]
  %gmem_addr = getelementptr i8* %gmem, i32 %tmp_36 ; [#uses=2 type=i8*]
  %p_rd_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %gmem_addr, i32 1920), !dbg !67 ; [#uses=0 type=i1] [debug line = 153:4]
  br label %3, !dbg !73                           ; [debug line = 152:37]

; <label>:3                                       ; preds = %5, %2
  %i = phi i11 [ 0, %2 ], [ %i_1, %5 ]            ; [#uses=3 type=i11]
  %i_cast = zext i11 %i to i32, !dbg !73          ; [#uses=3 type=i32] [debug line = 152:37]
  %tmp_2 = icmp eq i11 %i, -128, !dbg !73         ; [#uses=1 type=i1] [debug line = 152:37]
  %empty_5 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  %i_1 = add i11 %i, 1, !dbg !74                  ; [#uses=1 type=i11] [debug line = 152:49]
  br i1 %tmp_2, label %6, label %4, !dbg !73      ; [debug line = 152:37]

; <label>:4                                       ; preds = %3
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str8) nounwind, !dbg !75 ; [debug line = 152:54]
  %gmem_addr_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %gmem_addr), !dbg !67 ; [#uses=3 type=i8] [debug line = 153:4]
  %lineBuffer_0_addr = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %i_cast, !dbg !67 ; [#uses=1 type=i8*] [debug line = 153:4]
  %lineBuffer_1_addr = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %i_cast, !dbg !67 ; [#uses=1 type=i8*] [debug line = 153:4]
  %lineBuffer_2_addr = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %i_cast, !dbg !67 ; [#uses=1 type=i8*] [debug line = 153:4]
  switch i2 %lastLine, label %branch42 [
    i2 0, label %branch40
    i2 1, label %branch41
  ], !dbg !67                                     ; [debug line = 153:4]

; <label>:5                                       ; preds = %branch42, %branch41, %branch40
  call void @llvm.dbg.value(metadata !{i11 %i_1}, i64 0, metadata !76), !dbg !74 ; [debug line = 152:49] [debug variable = i]
  br label %3, !dbg !74                           ; [debug line = 152:49]

; <label>:6                                       ; preds = %3
  %empty_6 = call i32 (...)* @_ssdm_op_SpecRegionEnd([10 x i8]* @p_str7, i32 %tmp_3) nounwind, !dbg !77 ; [#uses=0 type=i32] [debug line = 156:2]
  br label %1, !dbg !71                           ; [debug line = 151:34]

.preheader.0:                                     ; preds = %44, %.preheader.0.preheader
  %lastLine_1 = phi i32 [ %lastLine_2_9, %44 ], [ 3, %.preheader.0.preheader ] ; [#uses=5 type=i32]
  %i1 = phi i11 [ %i_2_9, %44 ], [ 0, %.preheader.0.preheader ] ; [#uses=14 type=i11]
  %tmp_37 = shl i32 %lastLine_1, 11, !dbg !78     ; [#uses=1 type=i32] [debug line = 168:5]
  %tmp_44 = shl i32 %lastLine_1, 7, !dbg !78      ; [#uses=1 type=i32] [debug line = 168:5]
  %tmp_48 = sub i32 %tmp_37, %tmp_44, !dbg !78    ; [#uses=1 type=i32] [debug line = 168:5]
  %tmp_55 = call i22 @_ssdm_op_BitConcatenate.i22.i11.i11(i11 %i1, i11 0) ; [#uses=1 type=i22]
  %p_shl22_cast = zext i22 %tmp_55 to i23         ; [#uses=1 type=i23]
  %tmp_58 = call i18 @_ssdm_op_BitConcatenate.i18.i11.i7(i11 %i1, i7 0) ; [#uses=1 type=i18]
  %p_shl23_cast = zext i18 %tmp_58 to i23, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_66 = sub i23 %p_shl22_cast, %p_shl23_cast, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_126_cast = sext i23 %tmp_66 to i24, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %empty_7 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 108, i64 108, i64 108) nounwind ; [#uses=0 type=i32]
  %tmp_1 = icmp eq i11 %i1, -968, !dbg !86        ; [#uses=1 type=i1] [debug line = 157:25]
  br i1 %tmp_1, label %49, label %8, !dbg !86     ; [debug line = 157:25]

.preheader.1:                                     ; preds = %7
  %lastLine_3 = add i32 1, %lastLine_1, !dbg !87  ; [#uses=1 type=i32] [debug line = 172:4]
  %lastLine_2 = select i1 %tmp_s, i32 %lastLine_1, i32 %lastLine_3, !dbg !89 ; [#uses=6 type=i32] [debug line = 171:3]
  %tmp_83 = shl i32 %lastLine_2, 11, !dbg !78     ; [#uses=1 type=i32] [debug line = 168:5]
  %tmp_87 = shl i32 %lastLine_2, 7, !dbg !78      ; [#uses=1 type=i32] [debug line = 168:5]
  %tmp_97 = sub i32 %tmp_83, %tmp_87, !dbg !78    ; [#uses=1 type=i32] [debug line = 168:5]
  %tmp_98 = trunc i32 %lastLine_2 to i12, !dbg !90 ; [#uses=7 type=i12] [debug line = 174:2]
  %empty_8 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str9, i32 %tmp_4) nounwind, !dbg !90 ; [#uses=0 type=i32] [debug line = 174:2]
  %i_2_s = or i11 %i1, 1, !dbg !91                ; [#uses=2 type=i11] [debug line = 157:37]
  %tmp_100 = call i22 @_ssdm_op_BitConcatenate.i22.i11.i11(i11 %i_2_s, i11 0) ; [#uses=1 type=i22]
  %p_shl26_cast = zext i22 %tmp_100 to i23        ; [#uses=1 type=i23]
  %tmp_104 = call i18 @_ssdm_op_BitConcatenate.i18.i11.i7(i11 %i_2_s, i7 0) ; [#uses=1 type=i18]
  %p_shl27_cast = zext i18 %tmp_104 to i23, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_117 = sub i23 %p_shl26_cast, %p_shl27_cast, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_204_cast = sext i23 %tmp_117 to i24, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_5 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str9) nounwind, !dbg !92 ; [#uses=1 type=i32] [debug line = 157:43]
  %tmp_121 = trunc i32 %lastLine_2 to i2          ; [#uses=26 type=i2]
  %tmp_19_1_0_t = add i2 1, %tmp_121              ; [#uses=19 type=i2]
  %tmp_19_1_1_t = xor i2 %tmp_121, -2             ; [#uses=20 type=i2]
  %tmp_19_1_2_t = add i2 -1, %tmp_121             ; [#uses=19 type=i2]
  br label %12, !dbg !93                          ; [debug line = 159:25]

; <label>:7                                       ; preds = %9, %8
  %row_assign = phi i11 [ 0, %8 ], [ %j_1, %9 ]   ; [#uses=7 type=i11]
  %row_assign_cast = zext i11 %row_assign to i32, !dbg !93 ; [#uses=5 type=i32] [debug line = 159:25]
  %row_assign_cast_cast = zext i11 %row_assign to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_77 = add i32 %tmp_48, %row_assign_cast, !dbg !78 ; [#uses=1 type=i32] [debug line = 168:5]
  %inter_pix2_sum1 = add i32 %inter_pix_read, %tmp_77 ; [#uses=1 type=i32]
  %gmem_addr_1 = getelementptr i8* %gmem, i32 %inter_pix2_sum1 ; [#uses=2 type=i8*]
  %tmp_78 = add i24 %tmp_126_cast, %row_assign_cast_cast, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_147_cast = sext i24 %tmp_78 to i32, !dbg !84 ; [#uses=1 type=i32] [debug line = 163:5]
  %out_pix4_sum = add i32 %tmp_147_cast, %tmp_9   ; [#uses=1 type=i32]
  %gmem2_addr = getelementptr i32* %gmem2, i32 %out_pix4_sum ; [#uses=6 type=i32*]
  %tmp_8 = icmp eq i11 %row_assign, -128, !dbg !93 ; [#uses=1 type=i1] [debug line = 159:25]
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  %j_1 = add i11 %row_assign, 1, !dbg !94         ; [#uses=2 type=i11] [debug line = 159:37]
  br i1 %tmp_8, label %.preheader.1, label %11, !dbg !93 ; [debug line = 159:25]

; <label>:8                                       ; preds = %.preheader.0
  %tmp_4 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str9) nounwind, !dbg !92 ; [#uses=1 type=i32] [debug line = 157:43]
  %tmp_s = icmp eq i11 %i1, 0, !dbg !95           ; [#uses=2 type=i1] [debug line = 162:2]
  %tmp_70 = trunc i32 %lastLine_1 to i2           ; [#uses=4 type=i2]
  %tmp_19_0_0_t = add i2 1, %tmp_70               ; [#uses=3 type=i2]
  %tmp_19_0_1_t = xor i2 %tmp_70, -2              ; [#uses=2 type=i2]
  %tmp_19_0_2_t = add i2 -1, %tmp_70              ; [#uses=3 type=i2]
  br label %7, !dbg !93                           ; [debug line = 159:25]

; <label>:9                                       ; preds = %sobel_operator_cache.exit.0501, %10
  %empty_10 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str10, i32 %tmp_7) nounwind, !dbg !96 ; [#uses=0 type=i32] [debug line = 170:3]
  br label %7, !dbg !94                           ; [debug line = 159:37]

; <label>:10                                      ; preds = %switch.early.test, %11
  %gmem2_addr_req = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr, i32 1), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr, i32 0, i4 -1), !dbg !84 ; [debug line = 163:5]
  %gmem2_addr_resp = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  br label %9, !dbg !97                           ; [debug line = 164:4]

; <label>:11                                      ; preds = %7
  %tmp_7 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str10) nounwind, !dbg !98 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind, !dbg !99 ; [debug line = 160:1]
  br i1 %tmp_s, label %10, label %switch.early.test

switch.early.test:                                ; preds = %11
  %tmp_134 = icmp eq i11 %row_assign, -129        ; [#uses=1 type=i1]
  %tmp_138 = icmp eq i11 %row_assign, 0           ; [#uses=1 type=i1]
  %tmp_146 = or i1 %tmp_138, %tmp_134             ; [#uses=1 type=i1]
  br i1 %tmp_146, label %10, label %.preheader9.preheader.0_ifconv

sobel_operator_cache.exit.0501:                   ; preds = %branch39, %branch38, %branch37, %branch36
  br label %9

.preheader9.preheader.0_ifconv:                   ; preds = %switch.early.test
  %tmp_28 = add i11 -1, %row_assign, !dbg !100    ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_28_0_cast = zext i11 %tmp_28 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_1 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_0_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load = load i8* %lineBuffer_0_addr_1, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_1 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_0_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load = load i8* %lineBuffer_1_addr_1, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_1 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_0_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load = load i8* %lineBuffer_2_addr_1, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_0_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load = load i8* %lineBuffer_3_addr, align 1 ; [#uses=3 type=i8]
  %tmp_13 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load, i8 %lineBuffer_1_load, i8 %lineBuffer_2_load, i8 %lineBuffer_3_load, i2 %tmp_19_0_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_0_cast = zext i8 %tmp_13 to i9          ; [#uses=2 type=i9]
  %lineBuffer_0_addr_2 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %row_assign_cast ; [#uses=2 type=i8*]
  %lineBuffer_0_load_1 = load i8* %lineBuffer_0_addr_2, align 1 ; [#uses=2 type=i8]
  %lineBuffer_1_addr_2 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %row_assign_cast ; [#uses=2 type=i8*]
  %lineBuffer_1_load_1 = load i8* %lineBuffer_1_addr_2, align 1 ; [#uses=2 type=i8]
  %lineBuffer_2_addr_2 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %row_assign_cast ; [#uses=2 type=i8*]
  %lineBuffer_2_load_1 = load i8* %lineBuffer_2_addr_2, align 1 ; [#uses=2 type=i8]
  %lineBuffer_3_addr_1 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %row_assign_cast ; [#uses=2 type=i8*]
  %lineBuffer_3_load_1 = load i8* %lineBuffer_3_addr_1, align 1 ; [#uses=2 type=i8]
  %tmp_14 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_1, i8 %lineBuffer_1_load_1, i8 %lineBuffer_2_load_1, i8 %lineBuffer_3_load_1, i2 %tmp_19_0_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_33_0_0_1 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_14, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp_33_0_0_1_cast = zext i9 %tmp_33_0_0_1 to i10, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp_28_0_0_2_cast = zext i11 %j_1 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_3 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_0_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_2 = load i8* %lineBuffer_0_addr_3, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_3 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_0_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_2 = load i8* %lineBuffer_1_addr_3, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_3 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_0_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_2 = load i8* %lineBuffer_2_addr_3, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_2 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_0_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_2 = load i8* %lineBuffer_3_addr_2, align 1 ; [#uses=3 type=i8]
  %tmp_15 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_2, i8 %lineBuffer_1_load_2, i8 %lineBuffer_2_load_2, i8 %lineBuffer_3_load_2, i2 %tmp_19_0_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_0_0_2_cast = zext i8 %tmp_15 to i9, !dbg !100 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight_0_0_2 = sub i9 %tmp_29_0_0_2_cast, %tmp_29_0_cast, !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight_0_0_2_cast = sext i9 %x_weight_0_0_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_16 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load, i8 %lineBuffer_1_load, i8 %lineBuffer_2_load, i8 %lineBuffer_3_load, i2 %tmp_19_0_1_t) nounwind ; [#uses=1 type=i8]
  %p_shl1 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_16, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %p_shl1_cast = zext i9 %p_shl1 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_0_1_1 = sub i11 %x_weight_0_0_2_cast, %p_shl1_cast, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_17 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_2, i8 %lineBuffer_1_load_2, i8 %lineBuffer_2_load_2, i8 %lineBuffer_3_load_2, i2 %tmp_19_0_1_t) nounwind ; [#uses=1 type=i8]
  %tmp_31_0_1_2 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_17, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp_31_0_1_2_cast = zext i9 %tmp_31_0_1_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_0_1_2 = add i11 %tmp_31_0_1_2_cast, %x_weight_0_1_1, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp2 = add i9 %tmp_29_0_0_2_cast, %tmp_29_0_cast, !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp2_cast = zext i9 %tmp2 to i10, !dbg !112    ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_0_1_2 = add i10 %tmp_33_0_0_1_cast, %tmp2_cast, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_0_1_2_cast = zext i10 %y_weight_0_1_2 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_18 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load, i8 %lineBuffer_1_load, i8 %lineBuffer_2_load, i8 %lineBuffer_3_load, i2 %tmp_19_0_2_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_0_2_cast = zext i8 %tmp_18 to i11, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight_0_2 = sub i11 %x_weight_0_1_2, %tmp_29_0_2_cast, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight_0_2 = sub i11 %y_weight_0_1_2_cast, %tmp_29_0_2_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_19 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_1, i8 %lineBuffer_1_load_1, i8 %lineBuffer_2_load_1, i8 %lineBuffer_3_load_1, i2 %tmp_19_0_2_t) nounwind ; [#uses=1 type=i8]
  %p_shl = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_19, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %p_shl_cast = zext i9 %p_shl to i11, !dbg !112  ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight_0_2_1 = sub i11 %y_weight_0_2, %p_shl_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_27 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_2, i8 %lineBuffer_1_load_2, i8 %lineBuffer_2_load_2, i8 %lineBuffer_3_load_2, i2 %tmp_19_0_2_t) nounwind ; [#uses=2 type=i8]
  %tmp_29_0_2_2_cast = zext i8 %tmp_27 to i11     ; [#uses=2 type=i11]
  %tmp_192 = trunc i11 %x_weight_0_2 to i8        ; [#uses=1 type=i8]
  %x_weight_0_2_2 = add i11 %tmp_29_0_2_2_cast, %x_weight_0_2, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight_0_2_2 = sub i11 %y_weight_0_2_1, %tmp_29_0_2_2_cast, !dbg !112 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp_29 = icmp sgt i11 %x_weight_0_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_21 = add i8 %tmp_192, %tmp_27, !dbg !113   ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_22 = sub i8 0, %tmp_21, !dbg !113          ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_23 = select i1 %tmp_29, i8 %tmp_21, i8 %tmp_22, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_30 = icmp sgt i11 %y_weight_0_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_193 = trunc i11 %y_weight_0_2_2 to i8, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_25 = sub i8 0, %tmp_193, !dbg !113         ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_26 = select i1 %tmp_30, i8 %tmp_193, i8 %tmp_25, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_31 = add i8 %tmp_26, %tmp_23, !dbg !114    ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val = xor i8 %tmp_31, -1, !dbg !114       ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp_32 = icmp ult i8 %tmp_31, 55, !dbg !115    ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp_33 = icmp ugt i8 %tmp_31, -101, !dbg !116  ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %p_i = select i1 %tmp_32, i8 -1, i8 0           ; [#uses=1 type=i8]
  %tmp_34 = or i1 %tmp_32, %tmp_33                ; [#uses=1 type=i1]
  %edge_val_1_i = select i1 %tmp_34, i8 %p_i, i8 %edge_val ; [#uses=4 type=i8]
  %tmp_38 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8 %edge_val_1_i, i8 %edge_val_1_i, i8 %edge_val_1_i, i8 %edge_val_1_i), !dbg !117 ; [#uses=1 type=i32] [debug line = 167:5]
  %gmem2_addr_req108 = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr, i32 1), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr, i32 %tmp_38, i4 -1), !dbg !117 ; [debug line = 167:5]
  %gmem2_addr_resp109 = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  %gmem_load_1_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %gmem_addr_1, i32 1), !dbg !78 ; [#uses=0 type=i1] [debug line = 168:5]
  %gmem_addr_1_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %gmem_addr_1), !dbg !78 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp_70, label %branch39 [
    i2 0, label %branch36
    i2 1, label %branch37
    i2 -2, label %branch38
  ], !dbg !78                                     ; [debug line = 168:5]

.preheader.2:                                     ; preds = %12
  %lastLine_3_1 = add i12 %tmp_98, 1, !dbg !87    ; [#uses=2 type=i12] [debug line = 172:4]
  %tmp_147 = call i23 @_ssdm_op_BitConcatenate.i23.i12.i11(i12 %lastLine_3_1, i11 0) ; [#uses=1 type=i23]
  %p_shl32_cast = zext i23 %tmp_147 to i24        ; [#uses=1 type=i24]
  %tmp_151 = call i19 @_ssdm_op_BitConcatenate.i19.i12.i7(i12 %lastLine_3_1, i7 0) ; [#uses=1 type=i19]
  %p_shl33_cast = zext i19 %tmp_151 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_155 = sub i24 %p_shl32_cast, %p_shl33_cast, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_218_cast = sext i24 %tmp_155 to i25, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %empty_11 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str9, i32 %tmp_5) nounwind, !dbg !90 ; [#uses=0 type=i32] [debug line = 174:2]
  %i_2_1 = add i11 %i1, 2, !dbg !91               ; [#uses=2 type=i11] [debug line = 157:37]
  %tmp_166 = call i22 @_ssdm_op_BitConcatenate.i22.i11.i11(i11 %i_2_1, i11 0) ; [#uses=1 type=i22]
  %p_shl30_cast = zext i22 %tmp_166 to i23        ; [#uses=1 type=i23]
  %tmp_167 = call i18 @_ssdm_op_BitConcatenate.i18.i11.i7(i11 %i_2_1, i7 0) ; [#uses=1 type=i18]
  %p_shl31_cast = zext i18 %tmp_167 to i23, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_168 = sub i23 %p_shl30_cast, %p_shl31_cast, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_221_cast = sext i23 %tmp_168 to i24, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_11 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str9) nounwind, !dbg !92 ; [#uses=1 type=i32] [debug line = 157:43]
  br label %16, !dbg !93                          ; [debug line = 159:25]

; <label>:12                                      ; preds = %13, %.preheader.1
  %row_assign_1 = phi i11 [ 0, %.preheader.1 ], [ %j_1_1, %13 ] ; [#uses=7 type=i11]
  %row_assign_1_cast1 = zext i11 %row_assign_1 to i32, !dbg !93 ; [#uses=5 type=i32] [debug line = 159:25]
  %row_assign_1_cast1_c = zext i11 %row_assign_1 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_126 = add i32 %tmp_97, %row_assign_1_cast1, !dbg !78 ; [#uses=1 type=i32] [debug line = 168:5]
  %inter_pix2_sum2 = add i32 %inter_pix_read, %tmp_126 ; [#uses=1 type=i32]
  %gmem_addr_2 = getelementptr i8* %gmem, i32 %inter_pix2_sum2 ; [#uses=2 type=i8*]
  %tmp_127 = add i24 %tmp_204_cast, %row_assign_1_cast1_c, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_215_cast = sext i24 %tmp_127 to i32, !dbg !84 ; [#uses=1 type=i32] [debug line = 163:5]
  %out_pix4_sum1 = add i32 %tmp_215_cast, %tmp_9  ; [#uses=1 type=i32]
  %gmem2_addr_1 = getelementptr i32* %gmem2, i32 %out_pix4_sum1 ; [#uses=6 type=i32*]
  %row_assign_1_cast = zext i11 %row_assign_1 to i12, !dbg !93 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp_8_1 = icmp eq i11 %row_assign_1, -128, !dbg !93 ; [#uses=1 type=i1] [debug line = 159:25]
  %empty_12 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  %j_1_1 = add i11 %row_assign_1, 1, !dbg !94     ; [#uses=2 type=i11] [debug line = 159:37]
  br i1 %tmp_8_1, label %.preheader.2, label %15, !dbg !93 ; [debug line = 159:25]

; <label>:13                                      ; preds = %sobel_operator_cache.exit.1496, %14
  %empty_13 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str10, i32 %tmp_12) nounwind, !dbg !96 ; [#uses=0 type=i32] [debug line = 170:3]
  br label %12, !dbg !94                          ; [debug line = 159:37]

; <label>:14                                      ; preds = %15
  %gmem2_addr_1_req = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_1, i32 1), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_1, i32 0, i4 -1), !dbg !84 ; [debug line = 163:5]
  %gmem2_addr_1_resp = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_1), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  br label %13, !dbg !97                          ; [debug line = 164:4]

; <label>:15                                      ; preds = %12
  %tmp_12 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str10) nounwind, !dbg !98 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind, !dbg !99 ; [debug line = 160:1]
  %tmp_172 = icmp eq i11 %row_assign_1, -129      ; [#uses=1 type=i1]
  %tmp_184 = icmp eq i11 %row_assign_1, 0         ; [#uses=1 type=i1]
  %tmp_188 = or i1 %tmp_184, %tmp_172             ; [#uses=1 type=i1]
  br i1 %tmp_188, label %14, label %.preheader9.preheader.1_ifconv

sobel_operator_cache.exit.1496:                   ; preds = %branch35, %branch34, %branch33, %branch32
  br label %13

.preheader9.preheader.1_ifconv:                   ; preds = %15
  %tmp_28_1 = add i12 -1, %row_assign_1_cast, !dbg !100 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp_28_1_cast = sext i12 %tmp_28_1 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_4 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_1_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_3 = load i8* %lineBuffer_0_addr_4, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_4 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_1_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_3 = load i8* %lineBuffer_1_addr_4, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_4 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_1_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_3 = load i8* %lineBuffer_2_addr_4, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_3 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_1_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_3 = load i8* %lineBuffer_3_addr_3, align 1 ; [#uses=3 type=i8]
  %tmp_39 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_3, i8 %lineBuffer_1_load_3, i8 %lineBuffer_2_load_3, i8 %lineBuffer_3_load_3, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_1_cast = zext i8 %tmp_39 to i9          ; [#uses=2 type=i9]
  %lineBuffer_0_addr_5 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %row_assign_1_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_0_load_4 = load i8* %lineBuffer_0_addr_5, align 1 ; [#uses=2 type=i8]
  %lineBuffer_1_addr_5 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %row_assign_1_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_1_load_4 = load i8* %lineBuffer_1_addr_5, align 1 ; [#uses=2 type=i8]
  %lineBuffer_2_addr_5 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %row_assign_1_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_2_load_4 = load i8* %lineBuffer_2_addr_5, align 1 ; [#uses=2 type=i8]
  %lineBuffer_3_addr_4 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %row_assign_1_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_3_load_4 = load i8* %lineBuffer_3_addr_4, align 1 ; [#uses=2 type=i8]
  %tmp_40 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_4, i8 %lineBuffer_1_load_4, i8 %lineBuffer_2_load_4, i8 %lineBuffer_3_load_4, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_33_1_0_1 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_40, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp_33_1_0_1_cast = zext i9 %tmp_33_1_0_1 to i10, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp_28_1_0_2_cast = zext i11 %j_1_1 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_6 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_1_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_5 = load i8* %lineBuffer_0_addr_6, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_6 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_1_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_5 = load i8* %lineBuffer_1_addr_6, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_6 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_1_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_5 = load i8* %lineBuffer_2_addr_6, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_5 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_1_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_5 = load i8* %lineBuffer_3_addr_5, align 1 ; [#uses=3 type=i8]
  %tmp_41 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_5, i8 %lineBuffer_1_load_5, i8 %lineBuffer_2_load_5, i8 %lineBuffer_3_load_5, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_1_0_2_cast = zext i8 %tmp_41 to i9, !dbg !100 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight_1_0_2 = sub i9 %tmp_29_1_0_2_cast, %tmp_29_1_cast, !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight_1_0_2_cast = sext i9 %x_weight_1_0_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_42 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_3, i8 %lineBuffer_1_load_3, i8 %lineBuffer_2_load_3, i8 %lineBuffer_3_load_3, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %p_shl2 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_42, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %p_shl2_cast = zext i9 %p_shl2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_1_1_1 = sub i11 %x_weight_1_0_2_cast, %p_shl2_cast, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_43 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_5, i8 %lineBuffer_1_load_5, i8 %lineBuffer_2_load_5, i8 %lineBuffer_3_load_5, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %tmp_31_1_1_2 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_43, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp_31_1_1_2_cast = zext i9 %tmp_31_1_1_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_1_1_2 = add i11 %tmp_31_1_1_2_cast, %x_weight_1_1_1, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp4 = add i9 %tmp_29_1_0_2_cast, %tmp_29_1_cast, !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp4_cast = zext i9 %tmp4 to i10, !dbg !112    ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_1_1_2 = add i10 %tmp_33_1_0_1_cast, %tmp4_cast, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_1_1_2_cast = zext i10 %y_weight_1_1_2 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_51 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_3, i8 %lineBuffer_1_load_3, i8 %lineBuffer_2_load_3, i8 %lineBuffer_3_load_3, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_1_2_cast = zext i8 %tmp_51 to i11, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight_1_2 = sub i11 %x_weight_1_1_2, %tmp_29_1_2_cast, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight_1_2 = sub i11 %y_weight_1_1_2_cast, %tmp_29_1_2_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_52 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_4, i8 %lineBuffer_1_load_4, i8 %lineBuffer_2_load_4, i8 %lineBuffer_3_load_4, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %p_shl3 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_52, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %p_shl3_cast = zext i9 %p_shl3 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight_1_2_1 = sub i11 %y_weight_1_2, %p_shl3_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_53 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_5, i8 %lineBuffer_1_load_5, i8 %lineBuffer_2_load_5, i8 %lineBuffer_3_load_5, i2 %tmp_19_1_2_t) nounwind ; [#uses=2 type=i8]
  %tmp_29_1_2_2_cast = zext i8 %tmp_53 to i11     ; [#uses=2 type=i11]
  %tmp_214 = trunc i11 %x_weight_1_2 to i8        ; [#uses=1 type=i8]
  %x_weight_1_2_2 = add i11 %tmp_29_1_2_2_cast, %x_weight_1_2, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight_1_2_2 = sub i11 %y_weight_1_2_1, %tmp_29_1_2_2_cast, !dbg !112 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp_9_1 = icmp sgt i11 %x_weight_1_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_45 = add i8 %tmp_214, %tmp_53, !dbg !113   ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_46 = sub i8 0, %tmp_45, !dbg !113          ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_47 = select i1 %tmp_9_1, i8 %tmp_45, i8 %tmp_46, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_12_1 = icmp sgt i11 %y_weight_1_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_215 = trunc i11 %y_weight_1_2_2 to i8, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_49 = sub i8 0, %tmp_215, !dbg !113         ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_50 = select i1 %tmp_12_1, i8 %tmp_215, i8 %tmp_49, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_15_1 = add i8 %tmp_50, %tmp_47, !dbg !114  ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val_1 = xor i8 %tmp_15_1, -1, !dbg !114   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp_16_1 = icmp ult i8 %tmp_15_1, 55, !dbg !115 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp_20_1 = icmp ugt i8 %tmp_15_1, -101, !dbg !116 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %p_i_1 = select i1 %tmp_16_1, i8 -1, i8 0       ; [#uses=1 type=i8]
  %tmp_54 = or i1 %tmp_16_1, %tmp_20_1            ; [#uses=1 type=i1]
  %edge_val_1_i_1 = select i1 %tmp_54, i8 %p_i_1, i8 %edge_val_1 ; [#uses=4 type=i8]
  %tmp_26_1 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8 %edge_val_1_i_1, i8 %edge_val_1_i_1, i8 %edge_val_1_i_1, i8 %edge_val_1_i_1), !dbg !117 ; [#uses=1 type=i32] [debug line = 167:5]
  %gmem2_addr_1_req106 = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_1, i32 1), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_1, i32 %tmp_26_1, i4 -1), !dbg !117 ; [debug line = 167:5]
  %gmem2_addr_1_resp107 = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_1), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  %gmem_load_2_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %gmem_addr_2, i32 1), !dbg !78 ; [#uses=0 type=i1] [debug line = 168:5]
  %gmem_addr_2_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %gmem_addr_2), !dbg !78 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp_121, label %branch35 [
    i2 0, label %branch32
    i2 1, label %branch33
    i2 -2, label %branch34
  ], !dbg !78                                     ; [debug line = 168:5]

.preheader.3:                                     ; preds = %16
  %lastLine_3_2 = add i12 %tmp_98, 2, !dbg !87    ; [#uses=2 type=i12] [debug line = 172:4]
  %tmp_216 = call i23 @_ssdm_op_BitConcatenate.i23.i12.i11(i12 %lastLine_3_2, i11 0) ; [#uses=1 type=i23]
  %p_shl36_cast = zext i23 %tmp_216 to i24        ; [#uses=1 type=i24]
  %tmp_217 = call i19 @_ssdm_op_BitConcatenate.i19.i12.i7(i12 %lastLine_3_2, i7 0) ; [#uses=1 type=i19]
  %p_shl37_cast = zext i19 %tmp_217 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_218 = sub i24 %p_shl36_cast, %p_shl37_cast, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_226_cast = sext i24 %tmp_218 to i25, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %empty_14 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str9, i32 %tmp_11) nounwind, !dbg !90 ; [#uses=0 type=i32] [debug line = 174:2]
  %i_2_2 = add i11 %i1, 3, !dbg !91               ; [#uses=2 type=i11] [debug line = 157:37]
  %tmp_219 = call i22 @_ssdm_op_BitConcatenate.i22.i11.i11(i11 %i_2_2, i11 0) ; [#uses=1 type=i22]
  %p_shl34_cast = zext i22 %tmp_219 to i23        ; [#uses=1 type=i23]
  %tmp_220 = call i18 @_ssdm_op_BitConcatenate.i18.i11.i7(i11 %i_2_2, i7 0) ; [#uses=1 type=i18]
  %p_shl35_cast = zext i18 %tmp_220 to i23, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_221 = sub i23 %p_shl34_cast, %p_shl35_cast, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_229_cast = sext i23 %tmp_221 to i24, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_56 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str9) nounwind, !dbg !92 ; [#uses=1 type=i32] [debug line = 157:43]
  br label %20, !dbg !93                          ; [debug line = 159:25]

; <label>:16                                      ; preds = %17, %.preheader.2
  %row_assign_2 = phi i11 [ 0, %.preheader.2 ], [ %j_1_2, %17 ] ; [#uses=8 type=i11]
  %row_assign_2_cast1 = zext i11 %row_assign_2 to i32, !dbg !93 ; [#uses=4 type=i32] [debug line = 159:25]
  %row_assign_2_cast1_c = zext i11 %row_assign_2 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %row_assign_2_cast1_c_1 = zext i11 %row_assign_2 to i25, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %tmp_203 = add i25 %tmp_218_cast, %row_assign_2_cast1_c_1, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %tmp_222_cast = sext i25 %tmp_203 to i32, !dbg !78 ; [#uses=1 type=i32] [debug line = 168:5]
  %inter_pix2_sum3 = add i32 %inter_pix_read, %tmp_222_cast ; [#uses=1 type=i32]
  %gmem_addr_3 = getelementptr i8* %gmem, i32 %inter_pix2_sum3 ; [#uses=2 type=i8*]
  %tmp_204 = add i24 %tmp_221_cast, %row_assign_2_cast1_c, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_223_cast = sext i24 %tmp_204 to i32, !dbg !84 ; [#uses=1 type=i32] [debug line = 163:5]
  %out_pix4_sum2 = add i32 %tmp_223_cast, %tmp_9  ; [#uses=1 type=i32]
  %gmem2_addr_2 = getelementptr i32* %gmem2, i32 %out_pix4_sum2 ; [#uses=6 type=i32*]
  %row_assign_2_cast = zext i11 %row_assign_2 to i12, !dbg !93 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp_8_2 = icmp eq i11 %row_assign_2, -128, !dbg !93 ; [#uses=1 type=i1] [debug line = 159:25]
  %empty_15 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  %j_1_2 = add i11 %row_assign_2, 1, !dbg !94     ; [#uses=2 type=i11] [debug line = 159:37]
  br i1 %tmp_8_2, label %.preheader.3, label %19, !dbg !93 ; [debug line = 159:25]

; <label>:17                                      ; preds = %sobel_operator_cache.exit.2491, %18
  %empty_16 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str10, i32 %tmp_57) nounwind, !dbg !96 ; [#uses=0 type=i32] [debug line = 170:3]
  br label %16, !dbg !94                          ; [debug line = 159:37]

; <label>:18                                      ; preds = %19
  %gmem2_addr_2_req = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_2, i32 1), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_2, i32 0, i4 -1), !dbg !84 ; [debug line = 163:5]
  %gmem2_addr_2_resp = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_2), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  br label %17, !dbg !97                          ; [debug line = 164:4]

; <label>:19                                      ; preds = %16
  %tmp_57 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str10) nounwind, !dbg !98 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind, !dbg !99 ; [debug line = 160:1]
  %tmp_222 = icmp eq i11 %row_assign_2, -129      ; [#uses=1 type=i1]
  %tmp_223 = icmp eq i11 %row_assign_2, 0         ; [#uses=1 type=i1]
  %tmp_224 = or i1 %tmp_223, %tmp_222             ; [#uses=1 type=i1]
  br i1 %tmp_224, label %18, label %.preheader9.preheader.2_ifconv

sobel_operator_cache.exit.2491:                   ; preds = %branch31, %branch30, %branch29, %branch28
  br label %17

.preheader9.preheader.2_ifconv:                   ; preds = %19
  %tmp_28_2 = add i12 -1, %row_assign_2_cast, !dbg !100 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp_28_2_cast = sext i12 %tmp_28_2 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_7 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_6 = load i8* %lineBuffer_0_addr_7, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_7 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_6 = load i8* %lineBuffer_1_addr_7, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_7 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_6 = load i8* %lineBuffer_2_addr_7, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_6 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_6 = load i8* %lineBuffer_3_addr_6, align 1 ; [#uses=3 type=i8]
  %tmp_59 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_6, i8 %lineBuffer_1_load_6, i8 %lineBuffer_2_load_6, i8 %lineBuffer_3_load_6, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_2_cast = zext i8 %tmp_59 to i9          ; [#uses=2 type=i9]
  %lineBuffer_0_addr_8 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %row_assign_2_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_0_load_7 = load i8* %lineBuffer_0_addr_8, align 1 ; [#uses=2 type=i8]
  %lineBuffer_1_addr_8 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %row_assign_2_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_1_load_7 = load i8* %lineBuffer_1_addr_8, align 1 ; [#uses=2 type=i8]
  %lineBuffer_2_addr_8 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %row_assign_2_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_2_load_7 = load i8* %lineBuffer_2_addr_8, align 1 ; [#uses=2 type=i8]
  %lineBuffer_3_addr_7 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %row_assign_2_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_3_load_7 = load i8* %lineBuffer_3_addr_7, align 1 ; [#uses=2 type=i8]
  %tmp_60 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_7, i8 %lineBuffer_1_load_7, i8 %lineBuffer_2_load_7, i8 %lineBuffer_3_load_7, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %tmp_33_2_0_1 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_60, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp_33_2_0_1_cast = zext i9 %tmp_33_2_0_1 to i10, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp_28_2_0_2_cast = zext i11 %j_1_2 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_9 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_2_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_8 = load i8* %lineBuffer_0_addr_9, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_9 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_2_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_8 = load i8* %lineBuffer_1_addr_9, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_9 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_2_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_8 = load i8* %lineBuffer_2_addr_9, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_8 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_2_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_8 = load i8* %lineBuffer_3_addr_8, align 1 ; [#uses=3 type=i8]
  %tmp_61 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_8, i8 %lineBuffer_1_load_8, i8 %lineBuffer_2_load_8, i8 %lineBuffer_3_load_8, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_2_0_2_cast = zext i8 %tmp_61 to i9, !dbg !100 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight_2_0_2 = sub i9 %tmp_29_2_0_2_cast, %tmp_29_2_cast, !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight_2_0_2_cast = sext i9 %x_weight_2_0_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_62 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_6, i8 %lineBuffer_1_load_6, i8 %lineBuffer_2_load_6, i8 %lineBuffer_3_load_6, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %p_shl4 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_62, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %p_shl4_cast = zext i9 %p_shl4 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_2_1_1 = sub i11 %x_weight_2_0_2_cast, %p_shl4_cast, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_63 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_8, i8 %lineBuffer_1_load_8, i8 %lineBuffer_2_load_8, i8 %lineBuffer_3_load_8, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %tmp_31_2_1_2 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_63, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp_31_2_1_2_cast = zext i9 %tmp_31_2_1_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_2_1_2 = add i11 %tmp_31_2_1_2_cast, %x_weight_2_1_1, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp6 = add i9 %tmp_29_2_0_2_cast, %tmp_29_2_cast, !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp6_cast = zext i9 %tmp6 to i10, !dbg !112    ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_2_1_2 = add i10 %tmp_33_2_0_1_cast, %tmp6_cast, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_2_1_2_cast = zext i10 %y_weight_2_1_2 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_64 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_6, i8 %lineBuffer_1_load_6, i8 %lineBuffer_2_load_6, i8 %lineBuffer_3_load_6, i2 %tmp_121) nounwind ; [#uses=1 type=i8]
  %tmp_29_2_2_cast = zext i8 %tmp_64 to i11, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight_2_2 = sub i11 %x_weight_2_1_2, %tmp_29_2_2_cast, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight_2_2 = sub i11 %y_weight_2_1_2_cast, %tmp_29_2_2_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_65 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_7, i8 %lineBuffer_1_load_7, i8 %lineBuffer_2_load_7, i8 %lineBuffer_3_load_7, i2 %tmp_121) nounwind ; [#uses=1 type=i8]
  %p_shl5 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_65, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %p_shl5_cast = zext i9 %p_shl5 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight_2_2_1 = sub i11 %y_weight_2_2, %p_shl5_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_75 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_8, i8 %lineBuffer_1_load_8, i8 %lineBuffer_2_load_8, i8 %lineBuffer_3_load_8, i2 %tmp_121) nounwind ; [#uses=2 type=i8]
  %tmp_29_2_2_2_cast = zext i8 %tmp_75 to i11     ; [#uses=2 type=i11]
  %tmp_227 = trunc i11 %x_weight_2_2 to i8        ; [#uses=1 type=i8]
  %x_weight_2_2_2 = add i11 %tmp_29_2_2_2_cast, %x_weight_2_2, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight_2_2_2 = sub i11 %y_weight_2_2_1, %tmp_29_2_2_2_cast, !dbg !112 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp_9_2 = icmp sgt i11 %x_weight_2_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_67 = add i8 %tmp_227, %tmp_75, !dbg !113   ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_68 = sub i8 0, %tmp_67, !dbg !113          ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_69 = select i1 %tmp_9_2, i8 %tmp_67, i8 %tmp_68, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_12_2 = icmp sgt i11 %y_weight_2_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_228 = trunc i11 %y_weight_2_2_2 to i8, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_71 = sub i8 0, %tmp_228, !dbg !113         ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_72 = select i1 %tmp_12_2, i8 %tmp_228, i8 %tmp_71, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_15_2 = add i8 %tmp_72, %tmp_69, !dbg !114  ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val_2 = xor i8 %tmp_15_2, -1, !dbg !114   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp_16_2 = icmp ult i8 %tmp_15_2, 55, !dbg !115 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp_20_2 = icmp ugt i8 %tmp_15_2, -101, !dbg !116 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %p_i_2 = select i1 %tmp_16_2, i8 -1, i8 0       ; [#uses=1 type=i8]
  %tmp_76 = or i1 %tmp_16_2, %tmp_20_2            ; [#uses=1 type=i1]
  %edge_val_1_i_2 = select i1 %tmp_76, i8 %p_i_2, i8 %edge_val_2 ; [#uses=4 type=i8]
  %tmp_26_2 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8 %edge_val_1_i_2, i8 %edge_val_1_i_2, i8 %edge_val_1_i_2, i8 %edge_val_1_i_2), !dbg !117 ; [#uses=1 type=i32] [debug line = 167:5]
  %gmem2_addr_2_req104 = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_2, i32 1), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_2, i32 %tmp_26_2, i4 -1), !dbg !117 ; [debug line = 167:5]
  %gmem2_addr_2_resp105 = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_2), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  %gmem_load_3_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %gmem_addr_3, i32 1), !dbg !78 ; [#uses=0 type=i1] [debug line = 168:5]
  %gmem_addr_3_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %gmem_addr_3), !dbg !78 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp_121, label %branch31 [
    i2 -1, label %branch28
    i2 0, label %branch29
    i2 1, label %branch30
  ], !dbg !78                                     ; [debug line = 168:5]

.preheader.4:                                     ; preds = %20
  %lastLine_3_3 = add i12 %tmp_98, 3, !dbg !87    ; [#uses=2 type=i12] [debug line = 172:4]
  %tmp_229 = call i23 @_ssdm_op_BitConcatenate.i23.i12.i11(i12 %lastLine_3_3, i11 0) ; [#uses=1 type=i23]
  %p_shl40_cast = zext i23 %tmp_229 to i24        ; [#uses=1 type=i24]
  %tmp_230 = call i19 @_ssdm_op_BitConcatenate.i19.i12.i7(i12 %lastLine_3_3, i7 0) ; [#uses=1 type=i19]
  %p_shl41_cast = zext i19 %tmp_230 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_231 = sub i24 %p_shl40_cast, %p_shl41_cast, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_234_cast = sext i24 %tmp_231 to i25, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %empty_17 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str9, i32 %tmp_56) nounwind, !dbg !90 ; [#uses=0 type=i32] [debug line = 174:2]
  %i_2_3 = add i11 %i1, 4, !dbg !91               ; [#uses=2 type=i11] [debug line = 157:37]
  %tmp_232 = call i22 @_ssdm_op_BitConcatenate.i22.i11.i11(i11 %i_2_3, i11 0) ; [#uses=1 type=i22]
  %p_shl38_cast = zext i22 %tmp_232 to i23        ; [#uses=1 type=i23]
  %tmp_233 = call i18 @_ssdm_op_BitConcatenate.i18.i11.i7(i11 %i_2_3, i7 0) ; [#uses=1 type=i18]
  %p_shl39_cast = zext i18 %tmp_233 to i23, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_234 = sub i23 %p_shl38_cast, %p_shl39_cast, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_237_cast = sext i23 %tmp_234 to i24, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_73 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str9) nounwind, !dbg !92 ; [#uses=1 type=i32] [debug line = 157:43]
  br label %24, !dbg !93                          ; [debug line = 159:25]

; <label>:20                                      ; preds = %21, %.preheader.3
  %row_assign_3 = phi i11 [ 0, %.preheader.3 ], [ %j_1_3, %21 ] ; [#uses=8 type=i11]
  %row_assign_3_cast1 = zext i11 %row_assign_3 to i32, !dbg !93 ; [#uses=4 type=i32] [debug line = 159:25]
  %row_assign_3_cast1_c = zext i11 %row_assign_3 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %row_assign_3_cast1_c_1 = zext i11 %row_assign_3 to i25, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %tmp_225 = add i25 %tmp_226_cast, %row_assign_3_cast1_c_1, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %tmp_230_cast = sext i25 %tmp_225 to i32, !dbg !78 ; [#uses=1 type=i32] [debug line = 168:5]
  %inter_pix2_sum4 = add i32 %inter_pix_read, %tmp_230_cast ; [#uses=1 type=i32]
  %gmem_addr_4 = getelementptr i8* %gmem, i32 %inter_pix2_sum4 ; [#uses=2 type=i8*]
  %tmp_226 = add i24 %tmp_229_cast, %row_assign_3_cast1_c, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_231_cast = sext i24 %tmp_226 to i32, !dbg !84 ; [#uses=1 type=i32] [debug line = 163:5]
  %out_pix4_sum3 = add i32 %tmp_231_cast, %tmp_9  ; [#uses=1 type=i32]
  %gmem2_addr_3 = getelementptr i32* %gmem2, i32 %out_pix4_sum3 ; [#uses=6 type=i32*]
  %row_assign_3_cast = zext i11 %row_assign_3 to i12, !dbg !93 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp_8_3 = icmp eq i11 %row_assign_3, -128, !dbg !93 ; [#uses=1 type=i1] [debug line = 159:25]
  %empty_18 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  %j_1_3 = add i11 %row_assign_3, 1, !dbg !94     ; [#uses=2 type=i11] [debug line = 159:37]
  br i1 %tmp_8_3, label %.preheader.4, label %23, !dbg !93 ; [debug line = 159:25]

; <label>:21                                      ; preds = %sobel_operator_cache.exit.3486, %22
  %empty_19 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str10, i32 %tmp_74) nounwind, !dbg !96 ; [#uses=0 type=i32] [debug line = 170:3]
  br label %20, !dbg !94                          ; [debug line = 159:37]

; <label>:22                                      ; preds = %23
  %gmem2_addr_3_req = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_3, i32 1), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_3, i32 0, i4 -1), !dbg !84 ; [debug line = 163:5]
  %gmem2_addr_3_resp = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_3), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  br label %21, !dbg !97                          ; [debug line = 164:4]

; <label>:23                                      ; preds = %20
  %tmp_74 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str10) nounwind, !dbg !98 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind, !dbg !99 ; [debug line = 160:1]
  %tmp_235 = icmp eq i11 %row_assign_3, -129      ; [#uses=1 type=i1]
  %tmp_236 = icmp eq i11 %row_assign_3, 0         ; [#uses=1 type=i1]
  %tmp_237 = or i1 %tmp_236, %tmp_235             ; [#uses=1 type=i1]
  br i1 %tmp_237, label %22, label %.preheader9.preheader.3_ifconv

sobel_operator_cache.exit.3486:                   ; preds = %branch27, %branch26, %branch25, %branch24
  br label %21

.preheader9.preheader.3_ifconv:                   ; preds = %23
  %tmp_28_3 = add i12 -1, %row_assign_3_cast, !dbg !100 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp_28_3_cast = sext i12 %tmp_28_3 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_10 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_3_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_9 = load i8* %lineBuffer_0_addr_10, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_10 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_3_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_9 = load i8* %lineBuffer_1_addr_10, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_10 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_3_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_9 = load i8* %lineBuffer_2_addr_10, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_9 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_3_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_9 = load i8* %lineBuffer_3_addr_9, align 1 ; [#uses=3 type=i8]
  %tmp_79 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_9, i8 %lineBuffer_1_load_9, i8 %lineBuffer_2_load_9, i8 %lineBuffer_3_load_9, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_3_cast = zext i8 %tmp_79 to i9          ; [#uses=2 type=i9]
  %lineBuffer_0_addr_11 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %row_assign_3_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_0_load_10 = load i8* %lineBuffer_0_addr_11, align 1 ; [#uses=2 type=i8]
  %lineBuffer_1_addr_11 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %row_assign_3_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_1_load_10 = load i8* %lineBuffer_1_addr_11, align 1 ; [#uses=2 type=i8]
  %lineBuffer_2_addr_11 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %row_assign_3_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_2_load_10 = load i8* %lineBuffer_2_addr_11, align 1 ; [#uses=2 type=i8]
  %lineBuffer_3_addr_10 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %row_assign_3_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_3_load_10 = load i8* %lineBuffer_3_addr_10, align 1 ; [#uses=2 type=i8]
  %tmp_80 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_10, i8 %lineBuffer_1_load_10, i8 %lineBuffer_2_load_10, i8 %lineBuffer_3_load_10, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %tmp_33_3_0_1 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_80, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp_33_3_0_1_cast = zext i9 %tmp_33_3_0_1 to i10, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp_28_3_0_2_cast = zext i11 %j_1_3 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_12 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_3_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_11 = load i8* %lineBuffer_0_addr_12, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_12 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_3_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_11 = load i8* %lineBuffer_1_addr_12, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_12 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_3_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_11 = load i8* %lineBuffer_2_addr_12, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_11 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_3_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_11 = load i8* %lineBuffer_3_addr_11, align 1 ; [#uses=3 type=i8]
  %tmp_81 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_11, i8 %lineBuffer_1_load_11, i8 %lineBuffer_2_load_11, i8 %lineBuffer_3_load_11, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_3_0_2_cast = zext i8 %tmp_81 to i9, !dbg !100 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight_3_0_2 = sub i9 %tmp_29_3_0_2_cast, %tmp_29_3_cast, !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight_3_0_2_cast = sext i9 %x_weight_3_0_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_82 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_9, i8 %lineBuffer_1_load_9, i8 %lineBuffer_2_load_9, i8 %lineBuffer_3_load_9, i2 %tmp_121) nounwind ; [#uses=1 type=i8]
  %p_shl6 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_82, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %p_shl6_cast = zext i9 %p_shl6 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_3_1_1 = sub i11 %x_weight_3_0_2_cast, %p_shl6_cast, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_92 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_11, i8 %lineBuffer_1_load_11, i8 %lineBuffer_2_load_11, i8 %lineBuffer_3_load_11, i2 %tmp_121) nounwind ; [#uses=1 type=i8]
  %tmp_31_3_1_2 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_92, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp_31_3_1_2_cast = zext i9 %tmp_31_3_1_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_3_1_2 = add i11 %tmp_31_3_1_2_cast, %x_weight_3_1_1, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp8 = add i9 %tmp_29_3_0_2_cast, %tmp_29_3_cast, !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp8_cast = zext i9 %tmp8 to i10, !dbg !112    ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_3_1_2 = add i10 %tmp_33_3_0_1_cast, %tmp8_cast, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_3_1_2_cast = zext i10 %y_weight_3_1_2 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_93 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_9, i8 %lineBuffer_1_load_9, i8 %lineBuffer_2_load_9, i8 %lineBuffer_3_load_9, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_3_2_cast = zext i8 %tmp_93 to i11, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight_3_2 = sub i11 %x_weight_3_1_2, %tmp_29_3_2_cast, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight_3_2 = sub i11 %y_weight_3_1_2_cast, %tmp_29_3_2_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_94 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_10, i8 %lineBuffer_1_load_10, i8 %lineBuffer_2_load_10, i8 %lineBuffer_3_load_10, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %p_shl7 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_94, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %p_shl7_cast = zext i9 %p_shl7 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight_3_2_1 = sub i11 %y_weight_3_2, %p_shl7_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_95 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_11, i8 %lineBuffer_1_load_11, i8 %lineBuffer_2_load_11, i8 %lineBuffer_3_load_11, i2 %tmp_19_1_0_t) nounwind ; [#uses=2 type=i8]
  %tmp_29_3_2_2_cast = zext i8 %tmp_95 to i11     ; [#uses=2 type=i11]
  %tmp_272 = trunc i11 %x_weight_3_2 to i8        ; [#uses=1 type=i8]
  %x_weight_3_2_2 = add i11 %tmp_29_3_2_2_cast, %x_weight_3_2, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight_3_2_2 = sub i11 %y_weight_3_2_1, %tmp_29_3_2_2_cast, !dbg !112 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp_9_3 = icmp sgt i11 %x_weight_3_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_84 = add i8 %tmp_272, %tmp_95, !dbg !113   ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_85 = sub i8 0, %tmp_84, !dbg !113          ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_86 = select i1 %tmp_9_3, i8 %tmp_84, i8 %tmp_85, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_12_3 = icmp sgt i11 %y_weight_3_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_273 = trunc i11 %y_weight_3_2_2 to i8, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_88 = sub i8 0, %tmp_273, !dbg !113         ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_89 = select i1 %tmp_12_3, i8 %tmp_273, i8 %tmp_88, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_15_3 = add i8 %tmp_89, %tmp_86, !dbg !114  ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val_3 = xor i8 %tmp_15_3, -1, !dbg !114   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp_16_3 = icmp ult i8 %tmp_15_3, 55, !dbg !115 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp_20_3 = icmp ugt i8 %tmp_15_3, -101, !dbg !116 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %p_i_3 = select i1 %tmp_16_3, i8 -1, i8 0       ; [#uses=1 type=i8]
  %tmp_96 = or i1 %tmp_16_3, %tmp_20_3            ; [#uses=1 type=i1]
  %edge_val_1_i_3 = select i1 %tmp_96, i8 %p_i_3, i8 %edge_val_3 ; [#uses=4 type=i8]
  %tmp_26_3 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8 %edge_val_1_i_3, i8 %edge_val_1_i_3, i8 %edge_val_1_i_3, i8 %edge_val_1_i_3), !dbg !117 ; [#uses=1 type=i32] [debug line = 167:5]
  %gmem2_addr_3_req102 = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_3, i32 1), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_3, i32 %tmp_26_3, i4 -1), !dbg !117 ; [debug line = 167:5]
  %gmem2_addr_3_resp103 = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_3), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  %gmem_load_4_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %gmem_addr_4, i32 1), !dbg !78 ; [#uses=0 type=i1] [debug line = 168:5]
  %gmem_addr_4_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %gmem_addr_4), !dbg !78 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp_19_1_1_t, label %branch27 [
    i2 0, label %branch24
    i2 1, label %branch25
    i2 -2, label %branch26
  ], !dbg !78                                     ; [debug line = 168:5]

.preheader.5:                                     ; preds = %24
  %lastLine_3_4 = add i12 %tmp_98, 4, !dbg !87    ; [#uses=2 type=i12] [debug line = 172:4]
  %tmp_240 = call i23 @_ssdm_op_BitConcatenate.i23.i12.i11(i12 %lastLine_3_4, i11 0) ; [#uses=1 type=i23]
  %p_shl44_cast = zext i23 %tmp_240 to i24        ; [#uses=1 type=i24]
  %tmp_241 = call i19 @_ssdm_op_BitConcatenate.i19.i12.i7(i12 %lastLine_3_4, i7 0) ; [#uses=1 type=i19]
  %p_shl45_cast = zext i19 %tmp_241 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_242 = sub i24 %p_shl44_cast, %p_shl45_cast, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_242_cast = sext i24 %tmp_242 to i25, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %empty_20 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str9, i32 %tmp_73) nounwind, !dbg !90 ; [#uses=0 type=i32] [debug line = 174:2]
  %i_2_4 = add i11 %i1, 5, !dbg !91               ; [#uses=2 type=i11] [debug line = 157:37]
  %tmp_243 = call i22 @_ssdm_op_BitConcatenate.i22.i11.i11(i11 %i_2_4, i11 0) ; [#uses=1 type=i22]
  %p_shl42_cast = zext i22 %tmp_243 to i23        ; [#uses=1 type=i23]
  %tmp_244 = call i18 @_ssdm_op_BitConcatenate.i18.i11.i7(i11 %i_2_4, i7 0) ; [#uses=1 type=i18]
  %p_shl43_cast = zext i18 %tmp_244 to i23, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_245 = sub i23 %p_shl42_cast, %p_shl43_cast, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_245_cast = sext i23 %tmp_245 to i24, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_90 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str9) nounwind, !dbg !92 ; [#uses=1 type=i32] [debug line = 157:43]
  br label %28, !dbg !93                          ; [debug line = 159:25]

; <label>:24                                      ; preds = %25, %.preheader.4
  %row_assign_4 = phi i11 [ 0, %.preheader.4 ], [ %j_1_4, %25 ] ; [#uses=8 type=i11]
  %row_assign_4_cast1 = zext i11 %row_assign_4 to i32, !dbg !93 ; [#uses=4 type=i32] [debug line = 159:25]
  %row_assign_4_cast1_c = zext i11 %row_assign_4 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %row_assign_4_cast1_c_1 = zext i11 %row_assign_4 to i25, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %tmp_238 = add i25 %tmp_234_cast, %row_assign_4_cast1_c_1, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %tmp_238_cast = sext i25 %tmp_238 to i32, !dbg !78 ; [#uses=1 type=i32] [debug line = 168:5]
  %inter_pix2_sum5 = add i32 %inter_pix_read, %tmp_238_cast ; [#uses=1 type=i32]
  %gmem_addr_5 = getelementptr i8* %gmem, i32 %inter_pix2_sum5 ; [#uses=2 type=i8*]
  %tmp_239 = add i24 %tmp_237_cast, %row_assign_4_cast1_c, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_239_cast = sext i24 %tmp_239 to i32, !dbg !84 ; [#uses=1 type=i32] [debug line = 163:5]
  %out_pix4_sum4 = add i32 %tmp_239_cast, %tmp_9  ; [#uses=1 type=i32]
  %gmem2_addr_4 = getelementptr i32* %gmem2, i32 %out_pix4_sum4 ; [#uses=6 type=i32*]
  %row_assign_4_cast = zext i11 %row_assign_4 to i12, !dbg !93 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp_8_4 = icmp eq i11 %row_assign_4, -128, !dbg !93 ; [#uses=1 type=i1] [debug line = 159:25]
  %empty_21 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  %j_1_4 = add i11 %row_assign_4, 1, !dbg !94     ; [#uses=2 type=i11] [debug line = 159:37]
  br i1 %tmp_8_4, label %.preheader.5, label %27, !dbg !93 ; [debug line = 159:25]

; <label>:25                                      ; preds = %sobel_operator_cache.exit.4481, %26
  %empty_22 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str10, i32 %tmp_91) nounwind, !dbg !96 ; [#uses=0 type=i32] [debug line = 170:3]
  br label %24, !dbg !94                          ; [debug line = 159:37]

; <label>:26                                      ; preds = %27
  %gmem2_addr_4_req = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_4, i32 1), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_4, i32 0, i4 -1), !dbg !84 ; [debug line = 163:5]
  %gmem2_addr_4_resp = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_4), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  br label %25, !dbg !97                          ; [debug line = 164:4]

; <label>:27                                      ; preds = %24
  %tmp_91 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str10) nounwind, !dbg !98 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind, !dbg !99 ; [debug line = 160:1]
  %tmp_280 = icmp eq i11 %row_assign_4, -129      ; [#uses=1 type=i1]
  %tmp_281 = icmp eq i11 %row_assign_4, 0         ; [#uses=1 type=i1]
  %tmp_282 = or i1 %tmp_281, %tmp_280             ; [#uses=1 type=i1]
  br i1 %tmp_282, label %26, label %.preheader9.preheader.4_ifconv

sobel_operator_cache.exit.4481:                   ; preds = %branch23, %branch22, %branch21, %branch20
  br label %25

.preheader9.preheader.4_ifconv:                   ; preds = %27
  %tmp_28_4 = add i12 -1, %row_assign_4_cast, !dbg !100 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp_28_4_cast = sext i12 %tmp_28_4 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_13 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_4_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_12 = load i8* %lineBuffer_0_addr_13, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_13 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_4_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_12 = load i8* %lineBuffer_1_addr_13, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_13 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_4_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_12 = load i8* %lineBuffer_2_addr_13, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_12 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_4_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_12 = load i8* %lineBuffer_3_addr_12, align 1 ; [#uses=3 type=i8]
  %tmp_99 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_12, i8 %lineBuffer_1_load_12, i8 %lineBuffer_2_load_12, i8 %lineBuffer_3_load_12, i2 %tmp_121) nounwind ; [#uses=1 type=i8]
  %tmp_29_4_cast = zext i8 %tmp_99 to i9          ; [#uses=2 type=i9]
  %lineBuffer_0_addr_14 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %row_assign_4_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_0_load_13 = load i8* %lineBuffer_0_addr_14, align 1 ; [#uses=2 type=i8]
  %lineBuffer_1_addr_14 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %row_assign_4_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_1_load_13 = load i8* %lineBuffer_1_addr_14, align 1 ; [#uses=2 type=i8]
  %lineBuffer_2_addr_14 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %row_assign_4_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_2_load_13 = load i8* %lineBuffer_2_addr_14, align 1 ; [#uses=2 type=i8]
  %lineBuffer_3_addr_13 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %row_assign_4_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_3_load_13 = load i8* %lineBuffer_3_addr_13, align 1 ; [#uses=2 type=i8]
  %tmp_109 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_13, i8 %lineBuffer_1_load_13, i8 %lineBuffer_2_load_13, i8 %lineBuffer_3_load_13, i2 %tmp_121) nounwind ; [#uses=1 type=i8]
  %tmp_33_4_0_1 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_109, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp_33_4_0_1_cast = zext i9 %tmp_33_4_0_1 to i10, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp_28_4_0_2_cast = zext i11 %j_1_4 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_15 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_4_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_14 = load i8* %lineBuffer_0_addr_15, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_15 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_4_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_14 = load i8* %lineBuffer_1_addr_15, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_15 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_4_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_14 = load i8* %lineBuffer_2_addr_15, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_14 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_4_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_14 = load i8* %lineBuffer_3_addr_14, align 1 ; [#uses=3 type=i8]
  %tmp_110 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_14, i8 %lineBuffer_1_load_14, i8 %lineBuffer_2_load_14, i8 %lineBuffer_3_load_14, i2 %tmp_121) nounwind ; [#uses=1 type=i8]
  %tmp_29_4_0_2_cast = zext i8 %tmp_110 to i9, !dbg !100 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight_4_0_2 = sub i9 %tmp_29_4_0_2_cast, %tmp_29_4_cast, !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight_4_0_2_cast = sext i9 %x_weight_4_0_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_111 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_12, i8 %lineBuffer_1_load_12, i8 %lineBuffer_2_load_12, i8 %lineBuffer_3_load_12, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %p_shl8 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_111, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %p_shl8_cast = zext i9 %p_shl8 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_4_1_1 = sub i11 %x_weight_4_0_2_cast, %p_shl8_cast, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_112 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_14, i8 %lineBuffer_1_load_14, i8 %lineBuffer_2_load_14, i8 %lineBuffer_3_load_14, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_31_4_1_2 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_112, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp_31_4_1_2_cast = zext i9 %tmp_31_4_1_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_4_1_2 = add i11 %tmp_31_4_1_2_cast, %x_weight_4_1_1, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp10 = add i9 %tmp_29_4_0_2_cast, %tmp_29_4_cast, !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp10_cast = zext i9 %tmp10 to i10, !dbg !112  ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_4_1_2 = add i10 %tmp_33_4_0_1_cast, %tmp10_cast, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_4_1_2_cast = zext i10 %y_weight_4_1_2 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_113 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_12, i8 %lineBuffer_1_load_12, i8 %lineBuffer_2_load_12, i8 %lineBuffer_3_load_12, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_4_2_cast = zext i8 %tmp_113 to i11, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight_4_2 = sub i11 %x_weight_4_1_2, %tmp_29_4_2_cast, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight_4_2 = sub i11 %y_weight_4_1_2_cast, %tmp_29_4_2_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_114 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_13, i8 %lineBuffer_1_load_13, i8 %lineBuffer_2_load_13, i8 %lineBuffer_3_load_13, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %p_shl9 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_114, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %p_shl9_cast = zext i9 %p_shl9 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight_4_2_1 = sub i11 %y_weight_4_2, %p_shl9_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_115 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_14, i8 %lineBuffer_1_load_14, i8 %lineBuffer_2_load_14, i8 %lineBuffer_3_load_14, i2 %tmp_19_1_1_t) nounwind ; [#uses=2 type=i8]
  %tmp_29_4_2_2_cast = zext i8 %tmp_115 to i11    ; [#uses=2 type=i11]
  %tmp_283 = trunc i11 %x_weight_4_2 to i8        ; [#uses=1 type=i8]
  %x_weight_4_2_2 = add i11 %tmp_29_4_2_2_cast, %x_weight_4_2, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight_4_2_2 = sub i11 %y_weight_4_2_1, %tmp_29_4_2_2_cast, !dbg !112 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp_9_4 = icmp sgt i11 %x_weight_4_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_101 = add i8 %tmp_283, %tmp_115, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_102 = sub i8 0, %tmp_101, !dbg !113        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_103 = select i1 %tmp_9_4, i8 %tmp_101, i8 %tmp_102, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_12_4 = icmp sgt i11 %y_weight_4_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_284 = trunc i11 %y_weight_4_2_2 to i8, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_105 = sub i8 0, %tmp_284, !dbg !113        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_106 = select i1 %tmp_12_4, i8 %tmp_284, i8 %tmp_105, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_15_4 = add i8 %tmp_106, %tmp_103, !dbg !114 ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val_4 = xor i8 %tmp_15_4, -1, !dbg !114   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp_16_4 = icmp ult i8 %tmp_15_4, 55, !dbg !115 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp_20_4 = icmp ugt i8 %tmp_15_4, -101, !dbg !116 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %p_i_4 = select i1 %tmp_16_4, i8 -1, i8 0       ; [#uses=1 type=i8]
  %tmp_116 = or i1 %tmp_16_4, %tmp_20_4           ; [#uses=1 type=i1]
  %edge_val_1_i_4 = select i1 %tmp_116, i8 %p_i_4, i8 %edge_val_4 ; [#uses=4 type=i8]
  %tmp_26_4 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8 %edge_val_1_i_4, i8 %edge_val_1_i_4, i8 %edge_val_1_i_4, i8 %edge_val_1_i_4), !dbg !117 ; [#uses=1 type=i32] [debug line = 167:5]
  %gmem2_addr_4_req100 = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_4, i32 1), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_4, i32 %tmp_26_4, i4 -1), !dbg !117 ; [debug line = 167:5]
  %gmem2_addr_4_resp101 = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_4), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  %gmem_load_5_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %gmem_addr_5, i32 1), !dbg !78 ; [#uses=0 type=i1] [debug line = 168:5]
  %gmem_addr_5_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %gmem_addr_5), !dbg !78 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp_121, label %branch23 [
    i2 1, label %branch20
    i2 -2, label %branch21
    i2 -1, label %branch22
  ], !dbg !78                                     ; [debug line = 168:5]

.preheader.6:                                     ; preds = %28
  %lastLine_3_5 = add i12 %tmp_98, 5, !dbg !87    ; [#uses=2 type=i12] [debug line = 172:4]
  %tmp_248 = call i23 @_ssdm_op_BitConcatenate.i23.i12.i11(i12 %lastLine_3_5, i11 0) ; [#uses=1 type=i23]
  %p_shl48_cast = zext i23 %tmp_248 to i24        ; [#uses=1 type=i24]
  %tmp_249 = call i19 @_ssdm_op_BitConcatenate.i19.i12.i7(i12 %lastLine_3_5, i7 0) ; [#uses=1 type=i19]
  %p_shl49_cast = zext i19 %tmp_249 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_250 = sub i24 %p_shl48_cast, %p_shl49_cast, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_250_cast = sext i24 %tmp_250 to i25, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %empty_23 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str9, i32 %tmp_90) nounwind, !dbg !90 ; [#uses=0 type=i32] [debug line = 174:2]
  %i_2_5 = add i11 %i1, 6, !dbg !91               ; [#uses=2 type=i11] [debug line = 157:37]
  %tmp_251 = call i22 @_ssdm_op_BitConcatenate.i22.i11.i11(i11 %i_2_5, i11 0) ; [#uses=1 type=i22]
  %p_shl46_cast = zext i22 %tmp_251 to i23        ; [#uses=1 type=i23]
  %tmp_252 = call i18 @_ssdm_op_BitConcatenate.i18.i11.i7(i11 %i_2_5, i7 0) ; [#uses=1 type=i18]
  %p_shl47_cast = zext i18 %tmp_252 to i23, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_253 = sub i23 %p_shl46_cast, %p_shl47_cast, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_253_cast = sext i23 %tmp_253 to i24, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_107 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str9) nounwind, !dbg !92 ; [#uses=1 type=i32] [debug line = 157:43]
  br label %32, !dbg !93                          ; [debug line = 159:25]

; <label>:28                                      ; preds = %29, %.preheader.5
  %row_assign_5 = phi i11 [ 0, %.preheader.5 ], [ %j_1_5, %29 ] ; [#uses=8 type=i11]
  %row_assign_5_cast1 = zext i11 %row_assign_5 to i32, !dbg !93 ; [#uses=4 type=i32] [debug line = 159:25]
  %row_assign_5_cast1_c = zext i11 %row_assign_5 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %row_assign_5_cast1_c_1 = zext i11 %row_assign_5 to i25, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %tmp_246 = add i25 %tmp_242_cast, %row_assign_5_cast1_c_1, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %tmp_246_cast = sext i25 %tmp_246 to i32, !dbg !78 ; [#uses=1 type=i32] [debug line = 168:5]
  %inter_pix2_sum6 = add i32 %inter_pix_read, %tmp_246_cast ; [#uses=1 type=i32]
  %gmem_addr_6 = getelementptr i8* %gmem, i32 %inter_pix2_sum6 ; [#uses=2 type=i8*]
  %tmp_247 = add i24 %tmp_245_cast, %row_assign_5_cast1_c, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_247_cast = sext i24 %tmp_247 to i32, !dbg !84 ; [#uses=1 type=i32] [debug line = 163:5]
  %out_pix4_sum5 = add i32 %tmp_247_cast, %tmp_9  ; [#uses=1 type=i32]
  %gmem2_addr_5 = getelementptr i32* %gmem2, i32 %out_pix4_sum5 ; [#uses=6 type=i32*]
  %row_assign_5_cast = zext i11 %row_assign_5 to i12, !dbg !93 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp_8_5 = icmp eq i11 %row_assign_5, -128, !dbg !93 ; [#uses=1 type=i1] [debug line = 159:25]
  %empty_24 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  %j_1_5 = add i11 %row_assign_5, 1, !dbg !94     ; [#uses=2 type=i11] [debug line = 159:37]
  br i1 %tmp_8_5, label %.preheader.6, label %31, !dbg !93 ; [debug line = 159:25]

; <label>:29                                      ; preds = %sobel_operator_cache.exit.5476, %30
  %empty_25 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str10, i32 %tmp_108) nounwind, !dbg !96 ; [#uses=0 type=i32] [debug line = 170:3]
  br label %28, !dbg !94                          ; [debug line = 159:37]

; <label>:30                                      ; preds = %31
  %gmem2_addr_5_req = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_5, i32 1), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_5, i32 0, i4 -1), !dbg !84 ; [debug line = 163:5]
  %gmem2_addr_5_resp = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_5), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  br label %29, !dbg !97                          ; [debug line = 164:4]

; <label>:31                                      ; preds = %28
  %tmp_108 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str10) nounwind, !dbg !98 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind, !dbg !99 ; [debug line = 160:1]
  %tmp_285 = icmp eq i11 %row_assign_5, -129      ; [#uses=1 type=i1]
  %tmp_286 = icmp eq i11 %row_assign_5, 0         ; [#uses=1 type=i1]
  %tmp_287 = or i1 %tmp_286, %tmp_285             ; [#uses=1 type=i1]
  br i1 %tmp_287, label %30, label %.preheader9.preheader.5_ifconv

sobel_operator_cache.exit.5476:                   ; preds = %branch19, %branch18, %branch17, %branch16
  br label %29

.preheader9.preheader.5_ifconv:                   ; preds = %31
  %tmp_28_5 = add i12 -1, %row_assign_5_cast, !dbg !100 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp_28_5_cast = sext i12 %tmp_28_5 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_16 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_5_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_15 = load i8* %lineBuffer_0_addr_16, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_16 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_5_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_15 = load i8* %lineBuffer_1_addr_16, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_16 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_5_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_15 = load i8* %lineBuffer_2_addr_16, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_15 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_5_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_15 = load i8* %lineBuffer_3_addr_15, align 1 ; [#uses=3 type=i8]
  %tmp_128 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_15, i8 %lineBuffer_1_load_15, i8 %lineBuffer_2_load_15, i8 %lineBuffer_3_load_15, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_5_cast = zext i8 %tmp_128 to i9         ; [#uses=2 type=i9]
  %lineBuffer_0_addr_17 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %row_assign_5_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_0_load_16 = load i8* %lineBuffer_0_addr_17, align 1 ; [#uses=2 type=i8]
  %lineBuffer_1_addr_17 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %row_assign_5_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_1_load_16 = load i8* %lineBuffer_1_addr_17, align 1 ; [#uses=2 type=i8]
  %lineBuffer_2_addr_17 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %row_assign_5_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_2_load_16 = load i8* %lineBuffer_2_addr_17, align 1 ; [#uses=2 type=i8]
  %lineBuffer_3_addr_16 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %row_assign_5_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_3_load_16 = load i8* %lineBuffer_3_addr_16, align 1 ; [#uses=2 type=i8]
  %tmp_129 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_16, i8 %lineBuffer_1_load_16, i8 %lineBuffer_2_load_16, i8 %lineBuffer_3_load_16, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_33_5_0_1 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_129, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp_33_5_0_1_cast = zext i9 %tmp_33_5_0_1 to i10, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp_28_5_0_2_cast = zext i11 %j_1_5 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_18 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_5_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_17 = load i8* %lineBuffer_0_addr_18, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_18 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_5_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_17 = load i8* %lineBuffer_1_addr_18, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_18 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_5_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_17 = load i8* %lineBuffer_2_addr_18, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_17 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_5_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_17 = load i8* %lineBuffer_3_addr_17, align 1 ; [#uses=3 type=i8]
  %tmp_130 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_17, i8 %lineBuffer_1_load_17, i8 %lineBuffer_2_load_17, i8 %lineBuffer_3_load_17, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_5_0_2_cast = zext i8 %tmp_130 to i9, !dbg !100 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight_5_0_2 = sub i9 %tmp_29_5_0_2_cast, %tmp_29_5_cast, !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight_5_0_2_cast = sext i9 %x_weight_5_0_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_131 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_15, i8 %lineBuffer_1_load_15, i8 %lineBuffer_2_load_15, i8 %lineBuffer_3_load_15, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %p_shl10 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_131, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %p_shl10_cast = zext i9 %p_shl10 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_5_1_1 = sub i11 %x_weight_5_0_2_cast, %p_shl10_cast, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_132 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_17, i8 %lineBuffer_1_load_17, i8 %lineBuffer_2_load_17, i8 %lineBuffer_3_load_17, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %tmp_31_5_1_2 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_132, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp_31_5_1_2_cast = zext i9 %tmp_31_5_1_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_5_1_2 = add i11 %tmp_31_5_1_2_cast, %x_weight_5_1_1, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp12 = add i9 %tmp_29_5_0_2_cast, %tmp_29_5_cast, !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp12_cast = zext i9 %tmp12 to i10, !dbg !112  ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_5_1_2 = add i10 %tmp_33_5_0_1_cast, %tmp12_cast, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_5_1_2_cast = zext i10 %y_weight_5_1_2 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_133 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_15, i8 %lineBuffer_1_load_15, i8 %lineBuffer_2_load_15, i8 %lineBuffer_3_load_15, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_5_2_cast = zext i8 %tmp_133 to i11, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight_5_2 = sub i11 %x_weight_5_1_2, %tmp_29_5_2_cast, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight_5_2 = sub i11 %y_weight_5_1_2_cast, %tmp_29_5_2_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_143 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_16, i8 %lineBuffer_1_load_16, i8 %lineBuffer_2_load_16, i8 %lineBuffer_3_load_16, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %p_shl11 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_143, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %p_shl11_cast = zext i9 %p_shl11 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight_5_2_1 = sub i11 %y_weight_5_2, %p_shl11_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_144 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_17, i8 %lineBuffer_1_load_17, i8 %lineBuffer_2_load_17, i8 %lineBuffer_3_load_17, i2 %tmp_19_1_2_t) nounwind ; [#uses=2 type=i8]
  %tmp_29_5_2_2_cast = zext i8 %tmp_144 to i11    ; [#uses=2 type=i11]
  %tmp_288 = trunc i11 %x_weight_5_2 to i8        ; [#uses=1 type=i8]
  %x_weight_5_2_2 = add i11 %tmp_29_5_2_2_cast, %x_weight_5_2, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight_5_2_2 = sub i11 %y_weight_5_2_1, %tmp_29_5_2_2_cast, !dbg !112 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp_9_5 = icmp sgt i11 %x_weight_5_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_118 = add i8 %tmp_288, %tmp_144, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_119 = sub i8 0, %tmp_118, !dbg !113        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_120 = select i1 %tmp_9_5, i8 %tmp_118, i8 %tmp_119, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_12_5 = icmp sgt i11 %y_weight_5_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_289 = trunc i11 %y_weight_5_2_2 to i8, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_122 = sub i8 0, %tmp_289, !dbg !113        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_123 = select i1 %tmp_12_5, i8 %tmp_289, i8 %tmp_122, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_15_5 = add i8 %tmp_123, %tmp_120, !dbg !114 ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val_5 = xor i8 %tmp_15_5, -1, !dbg !114   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp_16_5 = icmp ult i8 %tmp_15_5, 55, !dbg !115 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp_20_5 = icmp ugt i8 %tmp_15_5, -101, !dbg !116 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %p_i_5 = select i1 %tmp_16_5, i8 -1, i8 0       ; [#uses=1 type=i8]
  %tmp_145 = or i1 %tmp_16_5, %tmp_20_5           ; [#uses=1 type=i1]
  %edge_val_1_i_5 = select i1 %tmp_145, i8 %p_i_5, i8 %edge_val_5 ; [#uses=4 type=i8]
  %tmp_26_5 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8 %edge_val_1_i_5, i8 %edge_val_1_i_5, i8 %edge_val_1_i_5, i8 %edge_val_1_i_5), !dbg !117 ; [#uses=1 type=i32] [debug line = 167:5]
  %gmem2_addr_5_req98 = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_5, i32 1), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_5, i32 %tmp_26_5, i4 -1), !dbg !117 ; [debug line = 167:5]
  %gmem2_addr_5_resp99 = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_5), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  %gmem_load_6_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %gmem_addr_6, i32 1), !dbg !78 ; [#uses=0 type=i1] [debug line = 168:5]
  %gmem_addr_6_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %gmem_addr_6), !dbg !78 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp_121, label %branch19 [
    i2 0, label %branch16
    i2 1, label %branch17
    i2 -2, label %branch18
  ], !dbg !78                                     ; [debug line = 168:5]

.preheader.7:                                     ; preds = %32
  %lastLine_3_6 = add i12 %tmp_98, 6, !dbg !87    ; [#uses=2 type=i12] [debug line = 172:4]
  %tmp_256 = call i23 @_ssdm_op_BitConcatenate.i23.i12.i11(i12 %lastLine_3_6, i11 0) ; [#uses=1 type=i23]
  %p_shl52_cast = zext i23 %tmp_256 to i24        ; [#uses=1 type=i24]
  %tmp_257 = call i19 @_ssdm_op_BitConcatenate.i19.i12.i7(i12 %lastLine_3_6, i7 0) ; [#uses=1 type=i19]
  %p_shl53_cast = zext i19 %tmp_257 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_258 = sub i24 %p_shl52_cast, %p_shl53_cast, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_258_cast = sext i24 %tmp_258 to i25, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %empty_26 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str9, i32 %tmp_107) nounwind, !dbg !90 ; [#uses=0 type=i32] [debug line = 174:2]
  %i_2_6 = add i11 %i1, 7, !dbg !91               ; [#uses=2 type=i11] [debug line = 157:37]
  %tmp_259 = call i22 @_ssdm_op_BitConcatenate.i22.i11.i11(i11 %i_2_6, i11 0) ; [#uses=1 type=i22]
  %p_shl50_cast = zext i22 %tmp_259 to i23        ; [#uses=1 type=i23]
  %tmp_260 = call i18 @_ssdm_op_BitConcatenate.i18.i11.i7(i11 %i_2_6, i7 0) ; [#uses=1 type=i18]
  %p_shl51_cast = zext i18 %tmp_260 to i23, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_261 = sub i23 %p_shl50_cast, %p_shl51_cast, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_261_cast = sext i23 %tmp_261 to i24, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_124 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str9) nounwind, !dbg !92 ; [#uses=1 type=i32] [debug line = 157:43]
  br label %36, !dbg !93                          ; [debug line = 159:25]

; <label>:32                                      ; preds = %33, %.preheader.6
  %row_assign_6 = phi i11 [ 0, %.preheader.6 ], [ %j_1_6, %33 ] ; [#uses=8 type=i11]
  %row_assign_6_cast1 = zext i11 %row_assign_6 to i32, !dbg !93 ; [#uses=4 type=i32] [debug line = 159:25]
  %row_assign_6_cast1_c = zext i11 %row_assign_6 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %row_assign_6_cast1_c_1 = zext i11 %row_assign_6 to i25, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %tmp_254 = add i25 %tmp_250_cast, %row_assign_6_cast1_c_1, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %tmp_254_cast = sext i25 %tmp_254 to i32, !dbg !78 ; [#uses=1 type=i32] [debug line = 168:5]
  %inter_pix2_sum7 = add i32 %inter_pix_read, %tmp_254_cast ; [#uses=1 type=i32]
  %gmem_addr_7 = getelementptr i8* %gmem, i32 %inter_pix2_sum7 ; [#uses=2 type=i8*]
  %tmp_255 = add i24 %tmp_253_cast, %row_assign_6_cast1_c, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_255_cast = sext i24 %tmp_255 to i32, !dbg !84 ; [#uses=1 type=i32] [debug line = 163:5]
  %out_pix4_sum6 = add i32 %tmp_255_cast, %tmp_9  ; [#uses=1 type=i32]
  %gmem2_addr_6 = getelementptr i32* %gmem2, i32 %out_pix4_sum6 ; [#uses=6 type=i32*]
  %row_assign_6_cast = zext i11 %row_assign_6 to i12, !dbg !93 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp_8_6 = icmp eq i11 %row_assign_6, -128, !dbg !93 ; [#uses=1 type=i1] [debug line = 159:25]
  %empty_27 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  %j_1_6 = add i11 %row_assign_6, 1, !dbg !94     ; [#uses=2 type=i11] [debug line = 159:37]
  br i1 %tmp_8_6, label %.preheader.7, label %35, !dbg !93 ; [debug line = 159:25]

; <label>:33                                      ; preds = %sobel_operator_cache.exit.6471, %34
  %empty_28 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str10, i32 %tmp_125) nounwind, !dbg !96 ; [#uses=0 type=i32] [debug line = 170:3]
  br label %32, !dbg !94                          ; [debug line = 159:37]

; <label>:34                                      ; preds = %35
  %gmem2_addr_6_req = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_6, i32 1), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_6, i32 0, i4 -1), !dbg !84 ; [debug line = 163:5]
  %gmem2_addr_6_resp = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_6), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  br label %33, !dbg !97                          ; [debug line = 164:4]

; <label>:35                                      ; preds = %32
  %tmp_125 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str10) nounwind, !dbg !98 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind, !dbg !99 ; [debug line = 160:1]
  %tmp_290 = icmp eq i11 %row_assign_6, -129      ; [#uses=1 type=i1]
  %tmp_291 = icmp eq i11 %row_assign_6, 0         ; [#uses=1 type=i1]
  %tmp_292 = or i1 %tmp_291, %tmp_290             ; [#uses=1 type=i1]
  br i1 %tmp_292, label %34, label %.preheader9.preheader.6_ifconv

sobel_operator_cache.exit.6471:                   ; preds = %branch15, %branch14, %branch13, %branch12
  br label %33

.preheader9.preheader.6_ifconv:                   ; preds = %35
  %tmp_28_6 = add i12 -1, %row_assign_6_cast, !dbg !100 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp_28_6_cast = sext i12 %tmp_28_6 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_19 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_6_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_18 = load i8* %lineBuffer_0_addr_19, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_19 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_6_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_18 = load i8* %lineBuffer_1_addr_19, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_19 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_6_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_18 = load i8* %lineBuffer_2_addr_19, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_18 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_6_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_18 = load i8* %lineBuffer_3_addr_18, align 1 ; [#uses=3 type=i8]
  %tmp_148 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_18, i8 %lineBuffer_1_load_18, i8 %lineBuffer_2_load_18, i8 %lineBuffer_3_load_18, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_6_cast = zext i8 %tmp_148 to i9         ; [#uses=2 type=i9]
  %lineBuffer_0_addr_20 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %row_assign_6_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_0_load_19 = load i8* %lineBuffer_0_addr_20, align 1 ; [#uses=2 type=i8]
  %lineBuffer_1_addr_20 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %row_assign_6_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_1_load_19 = load i8* %lineBuffer_1_addr_20, align 1 ; [#uses=2 type=i8]
  %lineBuffer_2_addr_20 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %row_assign_6_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_2_load_19 = load i8* %lineBuffer_2_addr_20, align 1 ; [#uses=2 type=i8]
  %lineBuffer_3_addr_19 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %row_assign_6_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_3_load_19 = load i8* %lineBuffer_3_addr_19, align 1 ; [#uses=2 type=i8]
  %tmp_149 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_19, i8 %lineBuffer_1_load_19, i8 %lineBuffer_2_load_19, i8 %lineBuffer_3_load_19, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %tmp_33_6_0_1 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_149, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp_33_6_0_1_cast = zext i9 %tmp_33_6_0_1 to i10, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp_28_6_0_2_cast = zext i11 %j_1_6 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_21 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_6_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_20 = load i8* %lineBuffer_0_addr_21, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_21 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_6_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_20 = load i8* %lineBuffer_1_addr_21, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_21 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_6_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_20 = load i8* %lineBuffer_2_addr_21, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_20 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_6_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_20 = load i8* %lineBuffer_3_addr_20, align 1 ; [#uses=3 type=i8]
  %tmp_150 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_20, i8 %lineBuffer_1_load_20, i8 %lineBuffer_2_load_20, i8 %lineBuffer_3_load_20, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_6_0_2_cast = zext i8 %tmp_150 to i9, !dbg !100 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight_6_0_2 = sub i9 %tmp_29_6_0_2_cast, %tmp_29_6_cast, !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight_6_0_2_cast = sext i9 %x_weight_6_0_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_160 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_18, i8 %lineBuffer_1_load_18, i8 %lineBuffer_2_load_18, i8 %lineBuffer_3_load_18, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %p_shl12 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_160, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %p_shl12_cast = zext i9 %p_shl12 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_6_1_1 = sub i11 %x_weight_6_0_2_cast, %p_shl12_cast, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_161 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_20, i8 %lineBuffer_1_load_20, i8 %lineBuffer_2_load_20, i8 %lineBuffer_3_load_20, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %tmp_31_6_1_2 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_161, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp_31_6_1_2_cast = zext i9 %tmp_31_6_1_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_6_1_2 = add i11 %tmp_31_6_1_2_cast, %x_weight_6_1_1, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp14 = add i9 %tmp_29_6_0_2_cast, %tmp_29_6_cast, !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp14_cast = zext i9 %tmp14 to i10, !dbg !112  ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_6_1_2 = add i10 %tmp_33_6_0_1_cast, %tmp14_cast, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_6_1_2_cast = zext i10 %y_weight_6_1_2 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_162 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_18, i8 %lineBuffer_1_load_18, i8 %lineBuffer_2_load_18, i8 %lineBuffer_3_load_18, i2 %tmp_121) nounwind ; [#uses=1 type=i8]
  %tmp_29_6_2_cast = zext i8 %tmp_162 to i11, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight_6_2 = sub i11 %x_weight_6_1_2, %tmp_29_6_2_cast, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight_6_2 = sub i11 %y_weight_6_1_2_cast, %tmp_29_6_2_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_163 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_19, i8 %lineBuffer_1_load_19, i8 %lineBuffer_2_load_19, i8 %lineBuffer_3_load_19, i2 %tmp_121) nounwind ; [#uses=1 type=i8]
  %p_shl13 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_163, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %p_shl13_cast = zext i9 %p_shl13 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight_6_2_1 = sub i11 %y_weight_6_2, %p_shl13_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_164 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_20, i8 %lineBuffer_1_load_20, i8 %lineBuffer_2_load_20, i8 %lineBuffer_3_load_20, i2 %tmp_121) nounwind ; [#uses=2 type=i8]
  %tmp_29_6_2_2_cast = zext i8 %tmp_164 to i11    ; [#uses=2 type=i11]
  %tmp_293 = trunc i11 %x_weight_6_2 to i8        ; [#uses=1 type=i8]
  %x_weight_6_2_2 = add i11 %tmp_29_6_2_2_cast, %x_weight_6_2, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight_6_2_2 = sub i11 %y_weight_6_2_1, %tmp_29_6_2_2_cast, !dbg !112 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp_9_6 = icmp sgt i11 %x_weight_6_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_135 = add i8 %tmp_293, %tmp_164, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_136 = sub i8 0, %tmp_135, !dbg !113        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_137 = select i1 %tmp_9_6, i8 %tmp_135, i8 %tmp_136, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_12_6 = icmp sgt i11 %y_weight_6_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_294 = trunc i11 %y_weight_6_2_2 to i8, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_139 = sub i8 0, %tmp_294, !dbg !113        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_140 = select i1 %tmp_12_6, i8 %tmp_294, i8 %tmp_139, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_15_6 = add i8 %tmp_140, %tmp_137, !dbg !114 ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val_6 = xor i8 %tmp_15_6, -1, !dbg !114   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp_16_6 = icmp ult i8 %tmp_15_6, 55, !dbg !115 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp_20_6 = icmp ugt i8 %tmp_15_6, -101, !dbg !116 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %p_i_6 = select i1 %tmp_16_6, i8 -1, i8 0       ; [#uses=1 type=i8]
  %tmp_165 = or i1 %tmp_16_6, %tmp_20_6           ; [#uses=1 type=i1]
  %edge_val_1_i_6 = select i1 %tmp_165, i8 %p_i_6, i8 %edge_val_6 ; [#uses=4 type=i8]
  %tmp_26_6 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8 %edge_val_1_i_6, i8 %edge_val_1_i_6, i8 %edge_val_1_i_6, i8 %edge_val_1_i_6), !dbg !117 ; [#uses=1 type=i32] [debug line = 167:5]
  %gmem2_addr_6_req96 = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_6, i32 1), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_6, i32 %tmp_26_6, i4 -1), !dbg !117 ; [debug line = 167:5]
  %gmem2_addr_6_resp97 = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_6), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  %gmem_load_7_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %gmem_addr_7, i32 1), !dbg !78 ; [#uses=0 type=i1] [debug line = 168:5]
  %gmem_addr_7_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %gmem_addr_7), !dbg !78 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp_121, label %branch15 [
    i2 -1, label %branch12
    i2 0, label %branch13
    i2 1, label %branch14
  ], !dbg !78                                     ; [debug line = 168:5]

.preheader.8:                                     ; preds = %36
  %lastLine_3_7 = add i12 %tmp_98, 7, !dbg !87    ; [#uses=2 type=i12] [debug line = 172:4]
  %tmp_264 = call i23 @_ssdm_op_BitConcatenate.i23.i12.i11(i12 %lastLine_3_7, i11 0) ; [#uses=1 type=i23]
  %p_shl56_cast = zext i23 %tmp_264 to i24        ; [#uses=1 type=i24]
  %tmp_265 = call i19 @_ssdm_op_BitConcatenate.i19.i12.i7(i12 %lastLine_3_7, i7 0) ; [#uses=1 type=i19]
  %p_shl57_cast = zext i19 %tmp_265 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_266 = sub i24 %p_shl56_cast, %p_shl57_cast, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_266_cast = sext i24 %tmp_266 to i25, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %empty_29 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str9, i32 %tmp_124) nounwind, !dbg !90 ; [#uses=0 type=i32] [debug line = 174:2]
  %i_2_7 = add i11 %i1, 8, !dbg !91               ; [#uses=2 type=i11] [debug line = 157:37]
  %tmp_267 = call i22 @_ssdm_op_BitConcatenate.i22.i11.i11(i11 %i_2_7, i11 0) ; [#uses=1 type=i22]
  %p_shl54_cast = zext i22 %tmp_267 to i23        ; [#uses=1 type=i23]
  %tmp_268 = call i18 @_ssdm_op_BitConcatenate.i18.i11.i7(i11 %i_2_7, i7 0) ; [#uses=1 type=i18]
  %p_shl55_cast = zext i18 %tmp_268 to i23, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_269 = sub i23 %p_shl54_cast, %p_shl55_cast, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_269_cast = sext i23 %tmp_269 to i24, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_141 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str9) nounwind, !dbg !92 ; [#uses=1 type=i32] [debug line = 157:43]
  br label %40, !dbg !93                          ; [debug line = 159:25]

; <label>:36                                      ; preds = %37, %.preheader.7
  %row_assign_7 = phi i11 [ 0, %.preheader.7 ], [ %j_1_7, %37 ] ; [#uses=8 type=i11]
  %row_assign_7_cast1 = zext i11 %row_assign_7 to i32, !dbg !93 ; [#uses=4 type=i32] [debug line = 159:25]
  %row_assign_7_cast1_c = zext i11 %row_assign_7 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %row_assign_7_cast1_c_1 = zext i11 %row_assign_7 to i25, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %tmp_262 = add i25 %tmp_258_cast, %row_assign_7_cast1_c_1, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %tmp_262_cast = sext i25 %tmp_262 to i32, !dbg !78 ; [#uses=1 type=i32] [debug line = 168:5]
  %inter_pix2_sum8 = add i32 %inter_pix_read, %tmp_262_cast ; [#uses=1 type=i32]
  %gmem_addr_8 = getelementptr i8* %gmem, i32 %inter_pix2_sum8 ; [#uses=2 type=i8*]
  %tmp_263 = add i24 %tmp_261_cast, %row_assign_7_cast1_c, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_263_cast = sext i24 %tmp_263 to i32, !dbg !84 ; [#uses=1 type=i32] [debug line = 163:5]
  %out_pix4_sum7 = add i32 %tmp_263_cast, %tmp_9  ; [#uses=1 type=i32]
  %gmem2_addr_7 = getelementptr i32* %gmem2, i32 %out_pix4_sum7 ; [#uses=6 type=i32*]
  %row_assign_7_cast = zext i11 %row_assign_7 to i12, !dbg !93 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp_8_7 = icmp eq i11 %row_assign_7, -128, !dbg !93 ; [#uses=1 type=i1] [debug line = 159:25]
  %empty_30 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  %j_1_7 = add i11 %row_assign_7, 1, !dbg !94     ; [#uses=2 type=i11] [debug line = 159:37]
  br i1 %tmp_8_7, label %.preheader.8, label %39, !dbg !93 ; [debug line = 159:25]

; <label>:37                                      ; preds = %sobel_operator_cache.exit.7466, %38
  %empty_31 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str10, i32 %tmp_142) nounwind, !dbg !96 ; [#uses=0 type=i32] [debug line = 170:3]
  br label %36, !dbg !94                          ; [debug line = 159:37]

; <label>:38                                      ; preds = %39
  %gmem2_addr_7_req = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_7, i32 1), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_7, i32 0, i4 -1), !dbg !84 ; [debug line = 163:5]
  %gmem2_addr_7_resp = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_7), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  br label %37, !dbg !97                          ; [debug line = 164:4]

; <label>:39                                      ; preds = %36
  %tmp_142 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str10) nounwind, !dbg !98 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind, !dbg !99 ; [debug line = 160:1]
  %tmp_295 = icmp eq i11 %row_assign_7, -129      ; [#uses=1 type=i1]
  %tmp_296 = icmp eq i11 %row_assign_7, 0         ; [#uses=1 type=i1]
  %tmp_297 = or i1 %tmp_296, %tmp_295             ; [#uses=1 type=i1]
  br i1 %tmp_297, label %38, label %.preheader9.preheader.7_ifconv

sobel_operator_cache.exit.7466:                   ; preds = %branch11, %branch10, %branch9, %branch8
  br label %37

.preheader9.preheader.7_ifconv:                   ; preds = %39
  %tmp_28_7 = add i12 -1, %row_assign_7_cast, !dbg !100 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp_28_7_cast = sext i12 %tmp_28_7 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_22 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_7_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_21 = load i8* %lineBuffer_0_addr_22, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_22 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_7_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_21 = load i8* %lineBuffer_1_addr_22, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_22 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_7_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_21 = load i8* %lineBuffer_2_addr_22, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_21 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_7_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_21 = load i8* %lineBuffer_3_addr_21, align 1 ; [#uses=3 type=i8]
  %tmp_176 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_21, i8 %lineBuffer_1_load_21, i8 %lineBuffer_2_load_21, i8 %lineBuffer_3_load_21, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_7_cast = zext i8 %tmp_176 to i9         ; [#uses=2 type=i9]
  %lineBuffer_0_addr_23 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %row_assign_7_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_0_load_22 = load i8* %lineBuffer_0_addr_23, align 1 ; [#uses=2 type=i8]
  %lineBuffer_1_addr_23 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %row_assign_7_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_1_load_22 = load i8* %lineBuffer_1_addr_23, align 1 ; [#uses=2 type=i8]
  %lineBuffer_2_addr_23 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %row_assign_7_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_2_load_22 = load i8* %lineBuffer_2_addr_23, align 1 ; [#uses=2 type=i8]
  %lineBuffer_3_addr_22 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %row_assign_7_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_3_load_22 = load i8* %lineBuffer_3_addr_22, align 1 ; [#uses=2 type=i8]
  %tmp_177 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_22, i8 %lineBuffer_1_load_22, i8 %lineBuffer_2_load_22, i8 %lineBuffer_3_load_22, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %tmp_33_7_0_1 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_177, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp_33_7_0_1_cast = zext i9 %tmp_33_7_0_1 to i10, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp_28_7_0_2_cast = zext i11 %j_1_7 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_24 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_7_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_23 = load i8* %lineBuffer_0_addr_24, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_24 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_7_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_23 = load i8* %lineBuffer_1_addr_24, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_24 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_7_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_23 = load i8* %lineBuffer_2_addr_24, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_23 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_7_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_23 = load i8* %lineBuffer_3_addr_23, align 1 ; [#uses=3 type=i8]
  %tmp_178 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_23, i8 %lineBuffer_1_load_23, i8 %lineBuffer_2_load_23, i8 %lineBuffer_3_load_23, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_7_0_2_cast = zext i8 %tmp_178 to i9, !dbg !100 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight_7_0_2 = sub i9 %tmp_29_7_0_2_cast, %tmp_29_7_cast, !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight_7_0_2_cast = sext i9 %x_weight_7_0_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_179 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_21, i8 %lineBuffer_1_load_21, i8 %lineBuffer_2_load_21, i8 %lineBuffer_3_load_21, i2 %tmp_121) nounwind ; [#uses=1 type=i8]
  %p_shl14 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_179, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %p_shl14_cast = zext i9 %p_shl14 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_7_1_1 = sub i11 %x_weight_7_0_2_cast, %p_shl14_cast, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_180 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_23, i8 %lineBuffer_1_load_23, i8 %lineBuffer_2_load_23, i8 %lineBuffer_3_load_23, i2 %tmp_121) nounwind ; [#uses=1 type=i8]
  %tmp_31_7_1_2 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_180, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp_31_7_1_2_cast = zext i9 %tmp_31_7_1_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_7_1_2 = add i11 %tmp_31_7_1_2_cast, %x_weight_7_1_1, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp16 = add i9 %tmp_29_7_0_2_cast, %tmp_29_7_cast, !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp16_cast = zext i9 %tmp16 to i10, !dbg !112  ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_7_1_2 = add i10 %tmp_33_7_0_1_cast, %tmp16_cast, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_7_1_2_cast = zext i10 %y_weight_7_1_2 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_181 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_21, i8 %lineBuffer_1_load_21, i8 %lineBuffer_2_load_21, i8 %lineBuffer_3_load_21, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_7_2_cast = zext i8 %tmp_181 to i11, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight_7_2 = sub i11 %x_weight_7_1_2, %tmp_29_7_2_cast, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight_7_2 = sub i11 %y_weight_7_1_2_cast, %tmp_29_7_2_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_182 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_22, i8 %lineBuffer_1_load_22, i8 %lineBuffer_2_load_22, i8 %lineBuffer_3_load_22, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %p_shl15 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_182, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %p_shl15_cast = zext i9 %p_shl15 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight_7_2_1 = sub i11 %y_weight_7_2, %p_shl15_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_183 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_23, i8 %lineBuffer_1_load_23, i8 %lineBuffer_2_load_23, i8 %lineBuffer_3_load_23, i2 %tmp_19_1_0_t) nounwind ; [#uses=2 type=i8]
  %tmp_29_7_2_2_cast = zext i8 %tmp_183 to i11    ; [#uses=2 type=i11]
  %tmp_298 = trunc i11 %x_weight_7_2 to i8        ; [#uses=1 type=i8]
  %x_weight_7_2_2 = add i11 %tmp_29_7_2_2_cast, %x_weight_7_2, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight_7_2_2 = sub i11 %y_weight_7_2_1, %tmp_29_7_2_2_cast, !dbg !112 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp_9_7 = icmp sgt i11 %x_weight_7_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_152 = add i8 %tmp_298, %tmp_183, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_153 = sub i8 0, %tmp_152, !dbg !113        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_154 = select i1 %tmp_9_7, i8 %tmp_152, i8 %tmp_153, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_12_7 = icmp sgt i11 %y_weight_7_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_299 = trunc i11 %y_weight_7_2_2 to i8, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_156 = sub i8 0, %tmp_299, !dbg !113        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_157 = select i1 %tmp_12_7, i8 %tmp_299, i8 %tmp_156, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_15_7 = add i8 %tmp_157, %tmp_154, !dbg !114 ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val_7 = xor i8 %tmp_15_7, -1, !dbg !114   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp_16_7 = icmp ult i8 %tmp_15_7, 55, !dbg !115 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp_20_7 = icmp ugt i8 %tmp_15_7, -101, !dbg !116 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %p_i_7 = select i1 %tmp_16_7, i8 -1, i8 0       ; [#uses=1 type=i8]
  %tmp_191 = or i1 %tmp_16_7, %tmp_20_7           ; [#uses=1 type=i1]
  %edge_val_1_i_7 = select i1 %tmp_191, i8 %p_i_7, i8 %edge_val_7 ; [#uses=4 type=i8]
  %tmp_26_7 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8 %edge_val_1_i_7, i8 %edge_val_1_i_7, i8 %edge_val_1_i_7, i8 %edge_val_1_i_7), !dbg !117 ; [#uses=1 type=i32] [debug line = 167:5]
  %gmem2_addr_7_req94 = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_7, i32 1), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_7, i32 %tmp_26_7, i4 -1), !dbg !117 ; [debug line = 167:5]
  %gmem2_addr_7_resp95 = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_7), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  %gmem_load_8_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %gmem_addr_8, i32 1), !dbg !78 ; [#uses=0 type=i1] [debug line = 168:5]
  %gmem_addr_8_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %gmem_addr_8), !dbg !78 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp_19_1_1_t, label %branch11 [
    i2 0, label %branch8
    i2 1, label %branch9
    i2 -2, label %branch10
  ], !dbg !78                                     ; [debug line = 168:5]

.preheader.9:                                     ; preds = %40
  %lastLine_3_8 = add i32 8, %lastLine_2, !dbg !87 ; [#uses=3 type=i32] [debug line = 172:4]
  %tmp_300 = shl i32 %lastLine_3_8, 11, !dbg !78  ; [#uses=1 type=i32] [debug line = 168:5]
  %tmp_301 = shl i32 %lastLine_3_8, 7, !dbg !78   ; [#uses=1 type=i32] [debug line = 168:5]
  %tmp_274 = sub i32 %tmp_300, %tmp_301, !dbg !78 ; [#uses=1 type=i32] [debug line = 168:5]
  %empty_32 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str9, i32 %tmp_141) nounwind, !dbg !90 ; [#uses=0 type=i32] [debug line = 174:2]
  %i_2_8 = add i11 9, %i1, !dbg !91               ; [#uses=3 type=i11] [debug line = 157:37]
  %tmp_275 = call i22 @_ssdm_op_BitConcatenate.i22.i11.i11(i11 %i_2_8, i11 0) ; [#uses=1 type=i22]
  %p_shl58_cast = zext i22 %tmp_275 to i23        ; [#uses=1 type=i23]
  %tmp_276 = call i18 @_ssdm_op_BitConcatenate.i18.i11.i7(i11 %i_2_8, i7 0) ; [#uses=1 type=i18]
  %p_shl59_cast = zext i18 %tmp_276 to i23, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_277 = sub i23 %p_shl58_cast, %p_shl59_cast, !dbg !84 ; [#uses=1 type=i23] [debug line = 163:5]
  %tmp_277_cast = sext i23 %tmp_277 to i24, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_158 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str9) nounwind, !dbg !92 ; [#uses=1 type=i32] [debug line = 157:43]
  %tmp_4_9 = icmp eq i11 %i_2_8, -969, !dbg !95   ; [#uses=2 type=i1] [debug line = 162:2]
  br label %45, !dbg !93                          ; [debug line = 159:25]

; <label>:40                                      ; preds = %41, %.preheader.8
  %row_assign_8 = phi i11 [ 0, %.preheader.8 ], [ %j_1_8, %41 ] ; [#uses=8 type=i11]
  %row_assign_8_cast1 = zext i11 %row_assign_8 to i32, !dbg !93 ; [#uses=4 type=i32] [debug line = 159:25]
  %row_assign_8_cast1_c = zext i11 %row_assign_8 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %row_assign_8_cast1_c_1 = zext i11 %row_assign_8 to i25, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %tmp_270 = add i25 %tmp_266_cast, %row_assign_8_cast1_c_1, !dbg !78 ; [#uses=1 type=i25] [debug line = 168:5]
  %tmp_270_cast = sext i25 %tmp_270 to i32, !dbg !78 ; [#uses=1 type=i32] [debug line = 168:5]
  %inter_pix2_sum9 = add i32 %inter_pix_read, %tmp_270_cast ; [#uses=1 type=i32]
  %gmem_addr_9 = getelementptr i8* %gmem, i32 %inter_pix2_sum9 ; [#uses=2 type=i8*]
  %tmp_271 = add i24 %tmp_269_cast, %row_assign_8_cast1_c, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_271_cast = sext i24 %tmp_271 to i32, !dbg !84 ; [#uses=1 type=i32] [debug line = 163:5]
  %out_pix4_sum8 = add i32 %tmp_271_cast, %tmp_9  ; [#uses=1 type=i32]
  %gmem2_addr_8 = getelementptr i32* %gmem2, i32 %out_pix4_sum8 ; [#uses=6 type=i32*]
  %row_assign_8_cast = zext i11 %row_assign_8 to i12, !dbg !93 ; [#uses=1 type=i12] [debug line = 159:25]
  %tmp_8_8 = icmp eq i11 %row_assign_8, -128, !dbg !93 ; [#uses=1 type=i1] [debug line = 159:25]
  %empty_33 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  %j_1_8 = add i11 %row_assign_8, 1, !dbg !94     ; [#uses=2 type=i11] [debug line = 159:37]
  br i1 %tmp_8_8, label %.preheader.9, label %43, !dbg !93 ; [debug line = 159:25]

; <label>:41                                      ; preds = %sobel_operator_cache.exit.8461, %42
  %empty_34 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str10, i32 %tmp_159) nounwind, !dbg !96 ; [#uses=0 type=i32] [debug line = 170:3]
  br label %40, !dbg !94                          ; [debug line = 159:37]

; <label>:42                                      ; preds = %43
  %gmem2_addr_8_req = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_8, i32 1), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_8, i32 0, i4 -1), !dbg !84 ; [debug line = 163:5]
  %gmem2_addr_8_resp = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_8), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  br label %41, !dbg !97                          ; [debug line = 164:4]

; <label>:43                                      ; preds = %40
  %tmp_159 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str10) nounwind, !dbg !98 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind, !dbg !99 ; [debug line = 160:1]
  %tmp_302 = icmp eq i11 %row_assign_8, -129      ; [#uses=1 type=i1]
  %tmp_303 = icmp eq i11 %row_assign_8, 0         ; [#uses=1 type=i1]
  %tmp_304 = or i1 %tmp_303, %tmp_302             ; [#uses=1 type=i1]
  br i1 %tmp_304, label %42, label %.preheader9.preheader.8_ifconv

sobel_operator_cache.exit.8461:                   ; preds = %branch7, %branch6, %branch5, %branch4
  br label %41

.preheader9.preheader.8_ifconv:                   ; preds = %43
  %tmp_28_8 = add i12 -1, %row_assign_8_cast, !dbg !100 ; [#uses=1 type=i12] [debug line = 111:4@166:38]
  %tmp_28_8_cast = sext i12 %tmp_28_8 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_25 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_8_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_24 = load i8* %lineBuffer_0_addr_25, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_25 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_8_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_24 = load i8* %lineBuffer_1_addr_25, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_25 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_8_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_24 = load i8* %lineBuffer_2_addr_25, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_24 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_8_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_24 = load i8* %lineBuffer_3_addr_24, align 1 ; [#uses=3 type=i8]
  %tmp_194 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_24, i8 %lineBuffer_1_load_24, i8 %lineBuffer_2_load_24, i8 %lineBuffer_3_load_24, i2 %tmp_121) nounwind ; [#uses=1 type=i8]
  %tmp_29_8_cast = zext i8 %tmp_194 to i9         ; [#uses=2 type=i9]
  %lineBuffer_0_addr_26 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %row_assign_8_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_0_load_25 = load i8* %lineBuffer_0_addr_26, align 1 ; [#uses=2 type=i8]
  %lineBuffer_1_addr_26 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %row_assign_8_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_1_load_25 = load i8* %lineBuffer_1_addr_26, align 1 ; [#uses=2 type=i8]
  %lineBuffer_2_addr_26 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %row_assign_8_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_2_load_25 = load i8* %lineBuffer_2_addr_26, align 1 ; [#uses=2 type=i8]
  %lineBuffer_3_addr_25 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %row_assign_8_cast1 ; [#uses=2 type=i8*]
  %lineBuffer_3_load_25 = load i8* %lineBuffer_3_addr_25, align 1 ; [#uses=2 type=i8]
  %tmp_195 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_25, i8 %lineBuffer_1_load_25, i8 %lineBuffer_2_load_25, i8 %lineBuffer_3_load_25, i2 %tmp_121) nounwind ; [#uses=1 type=i8]
  %tmp_33_8_0_1 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_195, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp_33_8_0_1_cast = zext i9 %tmp_33_8_0_1 to i10, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp_28_8_0_2_cast = zext i11 %j_1_8 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_27 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_8_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_26 = load i8* %lineBuffer_0_addr_27, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_27 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_8_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_26 = load i8* %lineBuffer_1_addr_27, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_27 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_8_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_26 = load i8* %lineBuffer_2_addr_27, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_26 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_8_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_26 = load i8* %lineBuffer_3_addr_26, align 1 ; [#uses=3 type=i8]
  %tmp_196 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_26, i8 %lineBuffer_1_load_26, i8 %lineBuffer_2_load_26, i8 %lineBuffer_3_load_26, i2 %tmp_121) nounwind ; [#uses=1 type=i8]
  %tmp_29_8_0_2_cast = zext i8 %tmp_196 to i9, !dbg !100 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight_8_0_2 = sub i9 %tmp_29_8_0_2_cast, %tmp_29_8_cast, !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight_8_0_2_cast = sext i9 %x_weight_8_0_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_197 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_24, i8 %lineBuffer_1_load_24, i8 %lineBuffer_2_load_24, i8 %lineBuffer_3_load_24, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %p_shl16 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_197, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %p_shl16_cast = zext i9 %p_shl16 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_8_1_1 = sub i11 %x_weight_8_0_2_cast, %p_shl16_cast, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_198 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_26, i8 %lineBuffer_1_load_26, i8 %lineBuffer_2_load_26, i8 %lineBuffer_3_load_26, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_31_8_1_2 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_198, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp_31_8_1_2_cast = zext i9 %tmp_31_8_1_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_8_1_2 = add i11 %tmp_31_8_1_2_cast, %x_weight_8_1_1, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp18 = add i9 %tmp_29_8_0_2_cast, %tmp_29_8_cast, !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp18_cast = zext i9 %tmp18 to i10, !dbg !112  ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_8_1_2 = add i10 %tmp_33_8_0_1_cast, %tmp18_cast, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_8_1_2_cast = zext i10 %y_weight_8_1_2 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_199 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_24, i8 %lineBuffer_1_load_24, i8 %lineBuffer_2_load_24, i8 %lineBuffer_3_load_24, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_8_2_cast = zext i8 %tmp_199 to i11, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight_8_2 = sub i11 %x_weight_8_1_2, %tmp_29_8_2_cast, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight_8_2 = sub i11 %y_weight_8_1_2_cast, %tmp_29_8_2_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_200 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_25, i8 %lineBuffer_1_load_25, i8 %lineBuffer_2_load_25, i8 %lineBuffer_3_load_25, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %p_shl17 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_200, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %p_shl17_cast = zext i9 %p_shl17 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight_8_2_1 = sub i11 %y_weight_8_2, %p_shl17_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_201 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_26, i8 %lineBuffer_1_load_26, i8 %lineBuffer_2_load_26, i8 %lineBuffer_3_load_26, i2 %tmp_19_1_1_t) nounwind ; [#uses=2 type=i8]
  %tmp_29_8_2_2_cast = zext i8 %tmp_201 to i11    ; [#uses=2 type=i11]
  %tmp_305 = trunc i11 %x_weight_8_2 to i8        ; [#uses=1 type=i8]
  %x_weight_8_2_2 = add i11 %tmp_29_8_2_2_cast, %x_weight_8_2, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight_8_2_2 = sub i11 %y_weight_8_2_1, %tmp_29_8_2_2_cast, !dbg !112 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp_9_8 = icmp sgt i11 %x_weight_8_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_169 = add i8 %tmp_305, %tmp_201, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_170 = sub i8 0, %tmp_169, !dbg !113        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_171 = select i1 %tmp_9_8, i8 %tmp_169, i8 %tmp_170, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_12_8 = icmp sgt i11 %y_weight_8_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_306 = trunc i11 %y_weight_8_2_2 to i8, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_173 = sub i8 0, %tmp_306, !dbg !113        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_174 = select i1 %tmp_12_8, i8 %tmp_306, i8 %tmp_173, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_15_8 = add i8 %tmp_174, %tmp_171, !dbg !114 ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val_8 = xor i8 %tmp_15_8, -1, !dbg !114   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp_16_8 = icmp ult i8 %tmp_15_8, 55, !dbg !115 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp_20_8 = icmp ugt i8 %tmp_15_8, -101, !dbg !116 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %p_i_8 = select i1 %tmp_16_8, i8 -1, i8 0       ; [#uses=1 type=i8]
  %tmp_202 = or i1 %tmp_16_8, %tmp_20_8           ; [#uses=1 type=i1]
  %edge_val_1_i_8 = select i1 %tmp_202, i8 %p_i_8, i8 %edge_val_8 ; [#uses=4 type=i8]
  %tmp_26_8 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8 %edge_val_1_i_8, i8 %edge_val_1_i_8, i8 %edge_val_1_i_8, i8 %edge_val_1_i_8), !dbg !117 ; [#uses=1 type=i32] [debug line = 167:5]
  %gmem2_addr_8_req92 = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_8, i32 1), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_8, i32 %tmp_26_8, i4 -1), !dbg !117 ; [debug line = 167:5]
  %gmem2_addr_8_resp93 = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_8), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  %gmem_load_9_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %gmem_addr_9, i32 1), !dbg !78 ; [#uses=0 type=i1] [debug line = 168:5]
  %gmem_addr_9_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %gmem_addr_9), !dbg !78 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp_121, label %branch7 [
    i2 1, label %branch4
    i2 -2, label %branch5
    i2 -1, label %branch6
  ], !dbg !78                                     ; [debug line = 168:5]

; <label>:44                                      ; preds = %45
  %lastLine_3_9 = add i32 %lastLine_2, 9, !dbg !87 ; [#uses=1 type=i32] [debug line = 172:4]
  %lastLine_2_9 = select i1 %tmp_4_9, i32 %lastLine_3_8, i32 %lastLine_3_9, !dbg !89 ; [#uses=1 type=i32] [debug line = 171:3]
  %empty_35 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str9, i32 %tmp_158) nounwind, !dbg !90 ; [#uses=0 type=i32] [debug line = 174:2]
  %i_2_9 = add i11 %i1, 10, !dbg !91              ; [#uses=1 type=i11] [debug line = 157:37]
  br label %.preheader.0, !dbg !91                ; [debug line = 157:37]

; <label>:45                                      ; preds = %46, %.preheader.9
  %row_assign_9 = phi i11 [ 0, %.preheader.9 ], [ %j_1_9, %46 ] ; [#uses=7 type=i11]
  %row_assign_9_cast = zext i11 %row_assign_9 to i32, !dbg !93 ; [#uses=5 type=i32] [debug line = 159:25]
  %row_assign_9_cast_ca = zext i11 %row_assign_9 to i24, !dbg !78 ; [#uses=1 type=i24] [debug line = 168:5]
  %tmp_278 = add i32 %tmp_274, %row_assign_9_cast, !dbg !78 ; [#uses=1 type=i32] [debug line = 168:5]
  %inter_pix2_sum = add i32 %inter_pix_read, %tmp_278 ; [#uses=1 type=i32]
  %gmem_addr_10 = getelementptr i8* %gmem, i32 %inter_pix2_sum ; [#uses=2 type=i8*]
  %tmp_279 = add i24 %tmp_277_cast, %row_assign_9_cast_ca, !dbg !84 ; [#uses=1 type=i24] [debug line = 163:5]
  %tmp_279_cast = sext i24 %tmp_279 to i32, !dbg !84 ; [#uses=1 type=i32] [debug line = 163:5]
  %out_pix4_sum9 = add i32 %tmp_279_cast, %tmp_9  ; [#uses=1 type=i32]
  %gmem2_addr_9 = getelementptr i32* %gmem2, i32 %out_pix4_sum9 ; [#uses=6 type=i32*]
  %tmp_8_9 = icmp eq i11 %row_assign_9, -128, !dbg !93 ; [#uses=1 type=i1] [debug line = 159:25]
  %empty_36 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1920, i64 1920, i64 1920) nounwind ; [#uses=0 type=i32]
  %j_1_9 = add i11 %row_assign_9, 1, !dbg !94     ; [#uses=2 type=i11] [debug line = 159:37]
  br i1 %tmp_8_9, label %44, label %48, !dbg !93  ; [debug line = 159:25]

; <label>:46                                      ; preds = %sobel_operator_cache.exit.9456, %47
  %empty_37 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str10, i32 %tmp_175) nounwind, !dbg !96 ; [#uses=0 type=i32] [debug line = 170:3]
  br label %45, !dbg !94                          ; [debug line = 159:37]

; <label>:47                                      ; preds = %switch.early.test47, %48
  %gmem2_addr_9_req = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_9, i32 1), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_9, i32 0, i4 -1), !dbg !84 ; [debug line = 163:5]
  %gmem2_addr_9_resp = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_9), !dbg !84 ; [#uses=0 type=i1] [debug line = 163:5]
  br label %46, !dbg !97                          ; [debug line = 164:4]

; <label>:48                                      ; preds = %45
  %tmp_175 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str10) nounwind, !dbg !98 ; [#uses=1 type=i32] [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind, !dbg !99 ; [debug line = 160:1]
  br i1 %tmp_4_9, label %47, label %switch.early.test47

switch.early.test47:                              ; preds = %48
  %tmp_307 = icmp eq i11 %row_assign_9, -129      ; [#uses=1 type=i1]
  %tmp_308 = icmp eq i11 %row_assign_9, 0         ; [#uses=1 type=i1]
  %tmp_309 = or i1 %tmp_308, %tmp_307             ; [#uses=1 type=i1]
  br i1 %tmp_309, label %47, label %.preheader9.preheader.9_ifconv

sobel_operator_cache.exit.9456:                   ; preds = %branch3, %branch2, %branch1, %branch0
  br label %46

.preheader9.preheader.9_ifconv:                   ; preds = %switch.early.test47
  %tmp_28_9 = add i11 -1, %row_assign_9, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_28_9_cast = zext i11 %tmp_28_9 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_28 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_9_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_27 = load i8* %lineBuffer_0_addr_28, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_28 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_9_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_27 = load i8* %lineBuffer_1_addr_28, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_28 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_9_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_27 = load i8* %lineBuffer_2_addr_28, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_27 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_9_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_27 = load i8* %lineBuffer_3_addr_27, align 1 ; [#uses=3 type=i8]
  %tmp_205 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_27, i8 %lineBuffer_1_load_27, i8 %lineBuffer_2_load_27, i8 %lineBuffer_3_load_27, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_9_cast = zext i8 %tmp_205 to i9         ; [#uses=2 type=i9]
  %lineBuffer_0_addr_29 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %row_assign_9_cast ; [#uses=2 type=i8*]
  %lineBuffer_0_load_28 = load i8* %lineBuffer_0_addr_29, align 1 ; [#uses=2 type=i8]
  %lineBuffer_1_addr_29 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %row_assign_9_cast ; [#uses=2 type=i8*]
  %lineBuffer_1_load_28 = load i8* %lineBuffer_1_addr_29, align 1 ; [#uses=2 type=i8]
  %lineBuffer_2_addr_29 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %row_assign_9_cast ; [#uses=2 type=i8*]
  %lineBuffer_2_load_28 = load i8* %lineBuffer_2_addr_29, align 1 ; [#uses=2 type=i8]
  %lineBuffer_3_addr_28 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %row_assign_9_cast ; [#uses=2 type=i8*]
  %lineBuffer_3_load_28 = load i8* %lineBuffer_3_addr_28, align 1 ; [#uses=2 type=i8]
  %tmp_206 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_28, i8 %lineBuffer_1_load_28, i8 %lineBuffer_2_load_28, i8 %lineBuffer_3_load_28, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_33_9_0_1 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_206, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp_33_9_0_1_cast = zext i9 %tmp_33_9_0_1 to i10, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %tmp_28_9_0_2_cast = zext i11 %j_1_9 to i32, !dbg !100 ; [#uses=4 type=i32] [debug line = 111:4@166:38]
  %lineBuffer_0_addr_30 = getelementptr [1920 x i8]* %lineBuffer_0, i32 0, i32 %tmp_28_9_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_0_load_29 = load i8* %lineBuffer_0_addr_30, align 1 ; [#uses=3 type=i8]
  %lineBuffer_1_addr_30 = getelementptr [1920 x i8]* %lineBuffer_1, i32 0, i32 %tmp_28_9_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_1_load_29 = load i8* %lineBuffer_1_addr_30, align 1 ; [#uses=3 type=i8]
  %lineBuffer_2_addr_30 = getelementptr [1920 x i8]* %lineBuffer_2, i32 0, i32 %tmp_28_9_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_2_load_29 = load i8* %lineBuffer_2_addr_30, align 1 ; [#uses=3 type=i8]
  %lineBuffer_3_addr_29 = getelementptr [1920 x i8]* %lineBuffer_3, i32 0, i32 %tmp_28_9_0_2_cast ; [#uses=1 type=i8*]
  %lineBuffer_3_load_29 = load i8* %lineBuffer_3_addr_29, align 1 ; [#uses=3 type=i8]
  %tmp_207 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_29, i8 %lineBuffer_1_load_29, i8 %lineBuffer_2_load_29, i8 %lineBuffer_3_load_29, i2 %tmp_19_1_0_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_9_0_2_cast = zext i8 %tmp_207 to i9, !dbg !100 ; [#uses=2 type=i9] [debug line = 111:4@166:38]
  %x_weight_9_0_2 = sub i9 %tmp_29_9_0_2_cast, %tmp_29_9_cast, !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %x_weight_9_0_2_cast = sext i9 %x_weight_9_0_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_208 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_27, i8 %lineBuffer_1_load_27, i8 %lineBuffer_2_load_27, i8 %lineBuffer_3_load_27, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %p_shl18 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_208, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %p_shl18_cast = zext i9 %p_shl18 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_9_1_1 = sub i11 %x_weight_9_0_2_cast, %p_shl18_cast, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp_209 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_29, i8 %lineBuffer_1_load_29, i8 %lineBuffer_2_load_29, i8 %lineBuffer_3_load_29, i2 %tmp_19_1_1_t) nounwind ; [#uses=1 type=i8]
  %tmp_31_9_1_2 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_209, i1 false), !dbg !100 ; [#uses=1 type=i9] [debug line = 111:4@166:38]
  %tmp_31_9_1_2_cast = zext i9 %tmp_31_9_1_2 to i11, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %x_weight_9_1_2 = add i11 %tmp_31_9_1_2_cast, %x_weight_9_1_1, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %tmp21 = add i9 %tmp_29_9_0_2_cast, %tmp_29_9_cast, !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %tmp21_cast = zext i9 %tmp21 to i10, !dbg !112  ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_9_1_2 = add i10 %tmp_33_9_0_1_cast, %tmp21_cast, !dbg !112 ; [#uses=1 type=i10] [debug line = 115:4@166:38]
  %y_weight_9_1_2_cast = zext i10 %y_weight_9_1_2 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_210 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_27, i8 %lineBuffer_1_load_27, i8 %lineBuffer_2_load_27, i8 %lineBuffer_3_load_27, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %tmp_29_9_2_cast = zext i8 %tmp_210 to i11, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %x_weight_9_2 = sub i11 %x_weight_9_1_2, %tmp_29_9_2_cast, !dbg !100 ; [#uses=2 type=i11] [debug line = 111:4@166:38]
  %y_weight_9_2 = sub i11 %y_weight_9_1_2_cast, %tmp_29_9_2_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_211 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_28, i8 %lineBuffer_1_load_28, i8 %lineBuffer_2_load_28, i8 %lineBuffer_3_load_28, i2 %tmp_19_1_2_t) nounwind ; [#uses=1 type=i8]
  %p_shl19 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %tmp_211, i1 false), !dbg !112 ; [#uses=1 type=i9] [debug line = 115:4@166:38]
  %p_shl19_cast = zext i9 %p_shl19 to i11, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %y_weight_9_2_1 = sub i11 %y_weight_9_2, %p_shl19_cast, !dbg !112 ; [#uses=1 type=i11] [debug line = 115:4@166:38]
  %tmp_212 = call i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8 %lineBuffer_0_load_29, i8 %lineBuffer_1_load_29, i8 %lineBuffer_2_load_29, i8 %lineBuffer_3_load_29, i2 %tmp_19_1_2_t) nounwind ; [#uses=2 type=i8]
  %tmp_29_9_2_2_cast = zext i8 %tmp_212 to i11    ; [#uses=2 type=i11]
  %tmp_310 = trunc i11 %x_weight_9_2 to i8        ; [#uses=1 type=i8]
  %x_weight_9_2_2 = add i11 %tmp_29_9_2_2_cast, %x_weight_9_2, !dbg !100 ; [#uses=1 type=i11] [debug line = 111:4@166:38]
  %y_weight_9_2_2 = sub i11 %y_weight_9_2_1, %tmp_29_9_2_2_cast, !dbg !112 ; [#uses=2 type=i11] [debug line = 115:4@166:38]
  %tmp_9_9 = icmp sgt i11 %x_weight_9_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_185 = add i8 %tmp_310, %tmp_212, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_186 = sub i8 0, %tmp_185, !dbg !113        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_187 = select i1 %tmp_9_9, i8 %tmp_185, i8 %tmp_186, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_12_9 = icmp sgt i11 %y_weight_9_2_2, 0, !dbg !113 ; [#uses=1 type=i1] [debug line = 120:2@166:38]
  %tmp_311 = trunc i11 %y_weight_9_2_2 to i8, !dbg !113 ; [#uses=2 type=i8] [debug line = 120:2@166:38]
  %tmp_189 = sub i8 0, %tmp_311, !dbg !113        ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_190 = select i1 %tmp_12_9, i8 %tmp_311, i8 %tmp_189, !dbg !113 ; [#uses=1 type=i8] [debug line = 120:2@166:38]
  %tmp_15_9 = add i8 %tmp_190, %tmp_187, !dbg !114 ; [#uses=3 type=i8] [debug line = 122:2@166:38]
  %edge_val_9 = xor i8 %tmp_15_9, -1, !dbg !114   ; [#uses=1 type=i8] [debug line = 122:2@166:38]
  %tmp_16_9 = icmp ult i8 %tmp_15_9, 55, !dbg !115 ; [#uses=2 type=i1] [debug line = 125:2@166:38]
  %tmp_20_9 = icmp ugt i8 %tmp_15_9, -101, !dbg !116 ; [#uses=1 type=i1] [debug line = 127:7@166:38]
  %p_i_9 = select i1 %tmp_16_9, i8 -1, i8 0       ; [#uses=1 type=i8]
  %tmp_213 = or i1 %tmp_16_9, %tmp_20_9           ; [#uses=1 type=i1]
  %edge_val_1_i_9 = select i1 %tmp_213, i8 %p_i_9, i8 %edge_val_9 ; [#uses=4 type=i8]
  %tmp_26_9 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8 %edge_val_1_i_9, i8 %edge_val_1_i_9, i8 %edge_val_1_i_9, i8 %edge_val_1_i_9), !dbg !117 ; [#uses=1 type=i32] [debug line = 167:5]
  %gmem2_addr_9_req90 = call i1 @_ssdm_op_WriteReq.m_axi.i32P(i32* %gmem2_addr_9, i32 1), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  call void @_ssdm_op_Write.m_axi.i32P(i32* %gmem2_addr_9, i32 %tmp_26_9, i4 -1), !dbg !117 ; [debug line = 167:5]
  %gmem2_addr_9_resp91 = call i1 @_ssdm_op_WriteResp.m_axi.i32P(i32* %gmem2_addr_9), !dbg !117 ; [#uses=0 type=i1] [debug line = 167:5]
  %gmem_load_10_req = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %gmem_addr_10, i32 1), !dbg !78 ; [#uses=0 type=i1] [debug line = 168:5]
  %gmem_addr_10_read = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %gmem_addr_10), !dbg !78 ; [#uses=4 type=i8] [debug line = 168:5]
  switch i2 %tmp_121, label %branch3 [
    i2 0, label %branch0
    i2 1, label %branch1
    i2 -2, label %branch2
  ], !dbg !78                                     ; [debug line = 168:5]

; <label>:49                                      ; preds = %.preheader.0
  ret void, !dbg !118                             ; [debug line = 207:1]

branch0:                                          ; preds = %.preheader9.preheader.9_ifconv
  store i8 %gmem_addr_10_read, i8* %lineBuffer_0_addr_29, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.9456, !dbg !78 ; [debug line = 168:5]

branch1:                                          ; preds = %.preheader9.preheader.9_ifconv
  store i8 %gmem_addr_10_read, i8* %lineBuffer_1_addr_29, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.9456, !dbg !78 ; [debug line = 168:5]

branch2:                                          ; preds = %.preheader9.preheader.9_ifconv
  store i8 %gmem_addr_10_read, i8* %lineBuffer_2_addr_29, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.9456, !dbg !78 ; [debug line = 168:5]

branch3:                                          ; preds = %.preheader9.preheader.9_ifconv
  store i8 %gmem_addr_10_read, i8* %lineBuffer_3_addr_28, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.9456, !dbg !78 ; [debug line = 168:5]

branch4:                                          ; preds = %.preheader9.preheader.8_ifconv
  store i8 %gmem_addr_9_read, i8* %lineBuffer_0_addr_26, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.8461, !dbg !78 ; [debug line = 168:5]

branch5:                                          ; preds = %.preheader9.preheader.8_ifconv
  store i8 %gmem_addr_9_read, i8* %lineBuffer_1_addr_26, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.8461, !dbg !78 ; [debug line = 168:5]

branch6:                                          ; preds = %.preheader9.preheader.8_ifconv
  store i8 %gmem_addr_9_read, i8* %lineBuffer_2_addr_26, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.8461, !dbg !78 ; [debug line = 168:5]

branch7:                                          ; preds = %.preheader9.preheader.8_ifconv
  store i8 %gmem_addr_9_read, i8* %lineBuffer_3_addr_25, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.8461, !dbg !78 ; [debug line = 168:5]

branch8:                                          ; preds = %.preheader9.preheader.7_ifconv
  store i8 %gmem_addr_8_read, i8* %lineBuffer_0_addr_23, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.7466, !dbg !78 ; [debug line = 168:5]

branch9:                                          ; preds = %.preheader9.preheader.7_ifconv
  store i8 %gmem_addr_8_read, i8* %lineBuffer_1_addr_23, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.7466, !dbg !78 ; [debug line = 168:5]

branch10:                                         ; preds = %.preheader9.preheader.7_ifconv
  store i8 %gmem_addr_8_read, i8* %lineBuffer_2_addr_23, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.7466, !dbg !78 ; [debug line = 168:5]

branch11:                                         ; preds = %.preheader9.preheader.7_ifconv
  store i8 %gmem_addr_8_read, i8* %lineBuffer_3_addr_22, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.7466, !dbg !78 ; [debug line = 168:5]

branch12:                                         ; preds = %.preheader9.preheader.6_ifconv
  store i8 %gmem_addr_7_read, i8* %lineBuffer_0_addr_20, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.6471, !dbg !78 ; [debug line = 168:5]

branch13:                                         ; preds = %.preheader9.preheader.6_ifconv
  store i8 %gmem_addr_7_read, i8* %lineBuffer_1_addr_20, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.6471, !dbg !78 ; [debug line = 168:5]

branch14:                                         ; preds = %.preheader9.preheader.6_ifconv
  store i8 %gmem_addr_7_read, i8* %lineBuffer_2_addr_20, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.6471, !dbg !78 ; [debug line = 168:5]

branch15:                                         ; preds = %.preheader9.preheader.6_ifconv
  store i8 %gmem_addr_7_read, i8* %lineBuffer_3_addr_19, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.6471, !dbg !78 ; [debug line = 168:5]

branch16:                                         ; preds = %.preheader9.preheader.5_ifconv
  store i8 %gmem_addr_6_read, i8* %lineBuffer_0_addr_17, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.5476, !dbg !78 ; [debug line = 168:5]

branch17:                                         ; preds = %.preheader9.preheader.5_ifconv
  store i8 %gmem_addr_6_read, i8* %lineBuffer_1_addr_17, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.5476, !dbg !78 ; [debug line = 168:5]

branch18:                                         ; preds = %.preheader9.preheader.5_ifconv
  store i8 %gmem_addr_6_read, i8* %lineBuffer_2_addr_17, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.5476, !dbg !78 ; [debug line = 168:5]

branch19:                                         ; preds = %.preheader9.preheader.5_ifconv
  store i8 %gmem_addr_6_read, i8* %lineBuffer_3_addr_16, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.5476, !dbg !78 ; [debug line = 168:5]

branch20:                                         ; preds = %.preheader9.preheader.4_ifconv
  store i8 %gmem_addr_5_read, i8* %lineBuffer_0_addr_14, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.4481, !dbg !78 ; [debug line = 168:5]

branch21:                                         ; preds = %.preheader9.preheader.4_ifconv
  store i8 %gmem_addr_5_read, i8* %lineBuffer_1_addr_14, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.4481, !dbg !78 ; [debug line = 168:5]

branch22:                                         ; preds = %.preheader9.preheader.4_ifconv
  store i8 %gmem_addr_5_read, i8* %lineBuffer_2_addr_14, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.4481, !dbg !78 ; [debug line = 168:5]

branch23:                                         ; preds = %.preheader9.preheader.4_ifconv
  store i8 %gmem_addr_5_read, i8* %lineBuffer_3_addr_13, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.4481, !dbg !78 ; [debug line = 168:5]

branch24:                                         ; preds = %.preheader9.preheader.3_ifconv
  store i8 %gmem_addr_4_read, i8* %lineBuffer_0_addr_11, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.3486, !dbg !78 ; [debug line = 168:5]

branch25:                                         ; preds = %.preheader9.preheader.3_ifconv
  store i8 %gmem_addr_4_read, i8* %lineBuffer_1_addr_11, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.3486, !dbg !78 ; [debug line = 168:5]

branch26:                                         ; preds = %.preheader9.preheader.3_ifconv
  store i8 %gmem_addr_4_read, i8* %lineBuffer_2_addr_11, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.3486, !dbg !78 ; [debug line = 168:5]

branch27:                                         ; preds = %.preheader9.preheader.3_ifconv
  store i8 %gmem_addr_4_read, i8* %lineBuffer_3_addr_10, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.3486, !dbg !78 ; [debug line = 168:5]

branch28:                                         ; preds = %.preheader9.preheader.2_ifconv
  store i8 %gmem_addr_3_read, i8* %lineBuffer_0_addr_8, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.2491, !dbg !78 ; [debug line = 168:5]

branch29:                                         ; preds = %.preheader9.preheader.2_ifconv
  store i8 %gmem_addr_3_read, i8* %lineBuffer_1_addr_8, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.2491, !dbg !78 ; [debug line = 168:5]

branch30:                                         ; preds = %.preheader9.preheader.2_ifconv
  store i8 %gmem_addr_3_read, i8* %lineBuffer_2_addr_8, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.2491, !dbg !78 ; [debug line = 168:5]

branch31:                                         ; preds = %.preheader9.preheader.2_ifconv
  store i8 %gmem_addr_3_read, i8* %lineBuffer_3_addr_7, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.2491, !dbg !78 ; [debug line = 168:5]

branch32:                                         ; preds = %.preheader9.preheader.1_ifconv
  store i8 %gmem_addr_2_read, i8* %lineBuffer_0_addr_5, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.1496, !dbg !78 ; [debug line = 168:5]

branch33:                                         ; preds = %.preheader9.preheader.1_ifconv
  store i8 %gmem_addr_2_read, i8* %lineBuffer_1_addr_5, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.1496, !dbg !78 ; [debug line = 168:5]

branch34:                                         ; preds = %.preheader9.preheader.1_ifconv
  store i8 %gmem_addr_2_read, i8* %lineBuffer_2_addr_5, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.1496, !dbg !78 ; [debug line = 168:5]

branch35:                                         ; preds = %.preheader9.preheader.1_ifconv
  store i8 %gmem_addr_2_read, i8* %lineBuffer_3_addr_4, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.1496, !dbg !78 ; [debug line = 168:5]

branch36:                                         ; preds = %.preheader9.preheader.0_ifconv
  store i8 %gmem_addr_1_read, i8* %lineBuffer_0_addr_2, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.0501, !dbg !78 ; [debug line = 168:5]

branch37:                                         ; preds = %.preheader9.preheader.0_ifconv
  store i8 %gmem_addr_1_read, i8* %lineBuffer_1_addr_2, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.0501, !dbg !78 ; [debug line = 168:5]

branch38:                                         ; preds = %.preheader9.preheader.0_ifconv
  store i8 %gmem_addr_1_read, i8* %lineBuffer_2_addr_2, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.0501, !dbg !78 ; [debug line = 168:5]

branch39:                                         ; preds = %.preheader9.preheader.0_ifconv
  store i8 %gmem_addr_1_read, i8* %lineBuffer_3_addr_1, align 1, !dbg !78 ; [debug line = 168:5]
  br label %sobel_operator_cache.exit.0501, !dbg !78 ; [debug line = 168:5]

branch40:                                         ; preds = %4
  store i8 %gmem_addr_read, i8* %lineBuffer_0_addr, align 1, !dbg !67 ; [debug line = 153:4]
  br label %5, !dbg !67                           ; [debug line = 153:4]

branch41:                                         ; preds = %4
  store i8 %gmem_addr_read, i8* %lineBuffer_1_addr, align 1, !dbg !67 ; [debug line = 153:4]
  br label %5, !dbg !67                           ; [debug line = 153:4]

branch42:                                         ; preds = %4
  store i8 %gmem_addr_read, i8* %lineBuffer_2_addr, align 1, !dbg !67 ; [debug line = 153:4]
  br label %5, !dbg !67                           ; [debug line = 153:4]
}

; [#uses=1]
declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

; [#uses=5]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=4]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=20]
define weak i1 @_ssdm_op_WriteResp.m_axi.i32P(i32*) {
entry:
  ret i1 true
}

; [#uses=20]
define weak i1 @_ssdm_op_WriteReq.m_axi.i32P(i32*, i32) {
entry:
  ret i1 true
}

; [#uses=20]
define weak void @_ssdm_op_Write.m_axi.i32P(i32*, i32, i4) {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=21]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=21]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=10]
define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

; [#uses=13]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=2]
define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

; [#uses=5]
define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

; [#uses=2]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=11]
define weak i1 @_ssdm_op_ReadReq.m_axi.i8P(i8*, i32) {
entry:
  ret i1 true
}

; [#uses=2]
define weak i32 @_ssdm_op_Read.s_axilite.i32(i32) {
entry:
  ret i32 %0
}

; [#uses=11]
define weak i8 @_ssdm_op_Read.m_axi.i8P(i8*) {
entry:
  %empty = load i8* %0                            ; [#uses=1 type=i8]
  ret i8 %empty
}

; [#uses=0]
declare i8 @_ssdm_op_PartSelect.i8.i11.i32.i32(i11, i32, i32) nounwind readnone

; [#uses=1]
define weak i30 @_ssdm_op_PartSelect.i30.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_38 = trunc i32 %empty to i30             ; [#uses=1 type=i30]
  ret i30 %empty_38
}

; [#uses=0]
declare i25 @_ssdm_op_PartSelect.i25.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=0]
declare i21 @_ssdm_op_PartSelect.i21.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=0]
declare i2 @_ssdm_op_PartSelect.i2.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=0]
declare i12 @_ssdm_op_PartSelect.i12.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=80]
define weak i8 @_ssdm_op_Mux.ap_auto.4i8.i2(i8, i8, i8, i8, i2) {
entry:
  switch i2 %4, label %case3 [
    i2 0, label %case0
    i2 1, label %case1
    i2 -2, label %case2
  ]

case0:                                            ; preds = %case3, %case2, %case1, %entry
  %merge = phi i8 [ %0, %entry ], [ %1, %case1 ], [ %2, %case2 ], [ %3, %case3 ] ; [#uses=1 type=i8]
  ret i8 %merge

case1:                                            ; preds = %entry
  br label %case0

case2:                                            ; preds = %entry
  br label %case0

case3:                                            ; preds = %entry
  br label %case0
}

; [#uses=40]
define weak i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8, i1) nounwind readnone {
entry:
  %empty = zext i8 %0 to i9                       ; [#uses=1 type=i9]
  %empty_39 = zext i1 %1 to i9                    ; [#uses=1 type=i9]
  %empty_40 = shl i9 %empty, 1                    ; [#uses=1 type=i9]
  %empty_41 = or i9 %empty_40, %empty_39          ; [#uses=1 type=i9]
  ret i9 %empty_41
}

; [#uses=1]
define weak i9 @_ssdm_op_BitConcatenate.i9.i2.i7(i2, i7) nounwind readnone {
entry:
  %empty = zext i2 %0 to i9                       ; [#uses=1 type=i9]
  %empty_42 = zext i7 %1 to i9                    ; [#uses=1 type=i9]
  %empty_43 = shl i9 %empty, 7                    ; [#uses=1 type=i9]
  %empty_44 = or i9 %empty_43, %empty_42          ; [#uses=1 type=i9]
  ret i9 %empty_44
}

; [#uses=10]
define weak i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8, i8, i8, i8) nounwind readnone {
entry:
  %empty = zext i8 %2 to i16                      ; [#uses=1 type=i16]
  %empty_45 = zext i8 %3 to i16                   ; [#uses=1 type=i16]
  %empty_46 = shl i16 %empty, 8                   ; [#uses=1 type=i16]
  %empty_47 = or i16 %empty_46, %empty_45         ; [#uses=1 type=i16]
  %empty_48 = zext i8 %1 to i24                   ; [#uses=1 type=i24]
  %empty_49 = zext i16 %empty_47 to i24           ; [#uses=1 type=i24]
  %empty_50 = shl i24 %empty_48, 16               ; [#uses=1 type=i24]
  %empty_51 = or i24 %empty_50, %empty_49         ; [#uses=1 type=i24]
  %empty_52 = zext i8 %0 to i32                   ; [#uses=1 type=i32]
  %empty_53 = zext i24 %empty_51 to i32           ; [#uses=1 type=i32]
  %empty_54 = shl i32 %empty_52, 24               ; [#uses=1 type=i32]
  %empty_55 = or i32 %empty_54, %empty_53         ; [#uses=1 type=i32]
  ret i32 %empty_55
}

; [#uses=0]
declare i32 @_ssdm_op_BitConcatenate.i32.i25.i7(i25, i7) nounwind readnone

; [#uses=0]
declare i32 @_ssdm_op_BitConcatenate.i32.i21.i11(i21, i11) nounwind readnone

; [#uses=7]
define weak i23 @_ssdm_op_BitConcatenate.i23.i12.i11(i12, i11) nounwind readnone {
entry:
  %empty = zext i12 %0 to i23                     ; [#uses=1 type=i23]
  %empty_56 = zext i11 %1 to i23                  ; [#uses=1 type=i23]
  %empty_57 = shl i23 %empty, 11                  ; [#uses=1 type=i23]
  %empty_58 = or i23 %empty_57, %empty_56         ; [#uses=1 type=i23]
  ret i23 %empty_58
}

; [#uses=10]
define weak i22 @_ssdm_op_BitConcatenate.i22.i11.i11(i11, i11) nounwind readnone {
entry:
  %empty = zext i11 %0 to i22                     ; [#uses=1 type=i22]
  %empty_59 = zext i11 %1 to i22                  ; [#uses=1 type=i22]
  %empty_60 = shl i22 %empty, 11                  ; [#uses=1 type=i22]
  %empty_61 = or i22 %empty_60, %empty_59         ; [#uses=1 type=i22]
  ret i22 %empty_61
}

; [#uses=7]
define weak i19 @_ssdm_op_BitConcatenate.i19.i12.i7(i12, i7) nounwind readnone {
entry:
  %empty = zext i12 %0 to i19                     ; [#uses=1 type=i19]
  %empty_62 = zext i7 %1 to i19                   ; [#uses=1 type=i19]
  %empty_63 = shl i19 %empty, 7                   ; [#uses=1 type=i19]
  %empty_64 = or i19 %empty_63, %empty_62         ; [#uses=1 type=i19]
  ret i19 %empty_64
}

; [#uses=10]
define weak i18 @_ssdm_op_BitConcatenate.i18.i11.i7(i11, i7) nounwind readnone {
entry:
  %empty = zext i11 %0 to i18                     ; [#uses=1 type=i18]
  %empty_65 = zext i7 %1 to i18                   ; [#uses=1 type=i18]
  %empty_66 = shl i18 %empty, 7                   ; [#uses=1 type=i18]
  %empty_67 = or i18 %empty_66, %empty_65         ; [#uses=1 type=i18]
  ret i18 %empty_67
}

; [#uses=1]
define weak i13 @_ssdm_op_BitConcatenate.i13.i2.i11(i2, i11) nounwind readnone {
entry:
  %empty = zext i2 %0 to i13                      ; [#uses=1 type=i13]
  %empty_68 = zext i11 %1 to i13                  ; [#uses=1 type=i13]
  %empty_69 = shl i13 %empty, 11                  ; [#uses=1 type=i13]
  %empty_70 = or i13 %empty_69, %empty_68         ; [#uses=1 type=i13]
  ret i13 %empty_70
}

!opencl.kernels = !{!0, !7, !9}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}
!axi4.master.portmap = !{!15, !16}
!axi4.slave.bundlemap = !{!17, !18}

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
!15 = metadata !{metadata !"gmem", metadata !"inter_pix", metadata !"READONLY"}
!16 = metadata !{metadata !"gmem2", metadata !"out_pix", metadata !"WRITEONLY"}
!17 = metadata !{metadata !"inter_pix", metadata !""}
!18 = metadata !{metadata !"out_pix", metadata !""}
!19 = metadata !{i32 786689, metadata !20, metadata !"out_pix", null, i32 134, metadata !35, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!20 = metadata !{i32 786478, i32 0, metadata !21, metadata !"sobel_filter", metadata !"sobel_filter", metadata !"_Z12sobel_filterPA1920_hPA1920_j", metadata !21, i32 134, metadata !22, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !33, i32 135} ; [ DW_TAG_subprogram ]
!21 = metadata !{i32 786473, metadata !"SobelLab4/Sobel.cpp", metadata !"C:\5CTEMP\5CLabo4", null} ; [ DW_TAG_file_type ]
!22 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !23, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!23 = metadata !{null, metadata !24, metadata !30}
!24 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !25} ; [ DW_TAG_pointer_type ]
!25 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 15360, i64 8, i32 0, i32 0, metadata !26, metadata !28, i32 0, i32 0} ; [ DW_TAG_array_type ]
!26 = metadata !{i32 786454, null, metadata !"uint8_t", metadata !21, i32 36, i64 0, i64 0, i64 0, i32 0, metadata !27} ; [ DW_TAG_typedef ]
!27 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!28 = metadata !{metadata !29}
!29 = metadata !{i32 786465, i64 0, i64 1919}     ; [ DW_TAG_subrange_type ]
!30 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !31} ; [ DW_TAG_pointer_type ]
!31 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 61440, i64 32, i32 0, i32 0, metadata !32, metadata !28, i32 0, i32 0} ; [ DW_TAG_array_type ]
!32 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!33 = metadata !{metadata !34}
!34 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!35 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 66355200, i64 32, i32 0, i32 0, metadata !32, metadata !36, i32 0, i32 0} ; [ DW_TAG_array_type ]
!36 = metadata !{metadata !37, metadata !29}
!37 = metadata !{i32 786465, i64 0, i64 1079}     ; [ DW_TAG_subrange_type ]
!38 = metadata !{i32 134, i32 59, metadata !20, null}
!39 = metadata !{i32 786689, metadata !20, metadata !"inter_pix", null, i32 134, metadata !40, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!40 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 16588800, i64 8, i32 0, i32 0, metadata !26, metadata !36, i32 0, i32 0} ; [ DW_TAG_array_type ]
!41 = metadata !{i32 134, i32 27, metadata !20, null}
!42 = metadata !{metadata !43}
!43 = metadata !{i32 0, i32 31, metadata !44}
!44 = metadata !{metadata !45}
!45 = metadata !{metadata !"out_pix", metadata !46, metadata !"unsigned int", i32 0, i32 31}
!46 = metadata !{metadata !47, metadata !48}
!47 = metadata !{i32 0, i32 1079, i32 1}
!48 = metadata !{i32 0, i32 1919, i32 1}
!49 = metadata !{metadata !50}
!50 = metadata !{i32 0, i32 7, metadata !51}
!51 = metadata !{metadata !52}
!52 = metadata !{metadata !"inter_pix", metadata !46, metadata !"unsigned char", i32 0, i32 7}
!53 = metadata !{i32 145, i32 1, metadata !54, null}
!54 = metadata !{i32 786443, metadata !20, i32 135, i32 1, metadata !21, i32 10} ; [ DW_TAG_lexical_block ]
!55 = metadata !{i32 790529, metadata !56, metadata !"lineBuffer[0]", null, i32 148, metadata !60, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!56 = metadata !{i32 786688, metadata !54, metadata !"lineBuffer", metadata !21, i32 148, metadata !57, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!57 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 61440, i64 8, i32 0, i32 0, metadata !26, metadata !58, i32 0, i32 0} ; [ DW_TAG_array_type ]
!58 = metadata !{metadata !59, metadata !29}
!59 = metadata !{i32 786465, i64 0, i64 3}        ; [ DW_TAG_subrange_type ]
!60 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 15360, i64 8, i32 0, i32 0, metadata !26, metadata !58, i32 0, i32 0} ; [ DW_TAG_array_type ]
!61 = metadata !{i32 148, i32 10, metadata !54, null}
!62 = metadata !{i32 790529, metadata !56, metadata !"lineBuffer[1]", null, i32 148, metadata !60, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!63 = metadata !{i32 790529, metadata !56, metadata !"lineBuffer[2]", null, i32 148, metadata !60, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!64 = metadata !{i32 790529, metadata !56, metadata !"lineBuffer[3]", null, i32 148, metadata !60, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!65 = metadata !{i32 151, i32 14, metadata !66, null}
!66 = metadata !{i32 786443, metadata !54, i32 151, i32 14, metadata !21, i32 11} ; [ DW_TAG_lexical_block ]
!67 = metadata !{i32 153, i32 4, metadata !68, null}
!68 = metadata !{i32 786443, metadata !69, i32 152, i32 53, metadata !21, i32 14} ; [ DW_TAG_lexical_block ]
!69 = metadata !{i32 786443, metadata !70, i32 152, i32 14, metadata !21, i32 13} ; [ DW_TAG_lexical_block ]
!70 = metadata !{i32 786443, metadata !66, i32 151, i32 45, metadata !21, i32 12} ; [ DW_TAG_lexical_block ]
!71 = metadata !{i32 151, i32 34, metadata !66, null}
!72 = metadata !{i32 151, i32 46, metadata !70, null}
!73 = metadata !{i32 152, i32 37, metadata !69, null}
!74 = metadata !{i32 152, i32 49, metadata !69, null}
!75 = metadata !{i32 152, i32 54, metadata !68, null}
!76 = metadata !{i32 786688, metadata !69, metadata !"i", metadata !21, i32 152, metadata !32, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!77 = metadata !{i32 156, i32 2, metadata !70, null}
!78 = metadata !{i32 168, i32 5, metadata !79, null}
!79 = metadata !{i32 786443, metadata !80, i32 165, i32 9, metadata !21, i32 20} ; [ DW_TAG_lexical_block ]
!80 = metadata !{i32 786443, metadata !81, i32 159, i32 42, metadata !21, i32 18} ; [ DW_TAG_lexical_block ]
!81 = metadata !{i32 786443, metadata !82, i32 159, i32 2, metadata !21, i32 17} ; [ DW_TAG_lexical_block ]
!82 = metadata !{i32 786443, metadata !83, i32 157, i32 42, metadata !21, i32 16} ; [ DW_TAG_lexical_block ]
!83 = metadata !{i32 786443, metadata !54, i32 157, i32 2, metadata !21, i32 15} ; [ DW_TAG_lexical_block ]
!84 = metadata !{i32 163, i32 5, metadata !85, null}
!85 = metadata !{i32 786443, metadata !80, i32 162, i32 50, metadata !21, i32 19} ; [ DW_TAG_lexical_block ]
!86 = metadata !{i32 157, i32 25, metadata !83, null}
!87 = metadata !{i32 172, i32 4, metadata !88, null}
!88 = metadata !{i32 786443, metadata !82, i32 171, i32 27, metadata !21, i32 21} ; [ DW_TAG_lexical_block ]
!89 = metadata !{i32 171, i32 3, metadata !82, null}
!90 = metadata !{i32 174, i32 2, metadata !82, null}
!91 = metadata !{i32 157, i32 37, metadata !83, null}
!92 = metadata !{i32 157, i32 43, metadata !82, null}
!93 = metadata !{i32 159, i32 25, metadata !81, null}
!94 = metadata !{i32 159, i32 37, metadata !81, null}
!95 = metadata !{i32 162, i32 2, metadata !80, null}
!96 = metadata !{i32 170, i32 3, metadata !80, null}
!97 = metadata !{i32 164, i32 4, metadata !85, null}
!98 = metadata !{i32 159, i32 43, metadata !80, null}
!99 = metadata !{i32 160, i32 1, metadata !80, null}
!100 = metadata !{i32 111, i32 4, metadata !101, metadata !111}
!101 = metadata !{i32 786443, metadata !102, i32 108, i32 39, metadata !21, i32 9} ; [ DW_TAG_lexical_block ]
!102 = metadata !{i32 786443, metadata !103, i32 108, i32 11, metadata !21, i32 8} ; [ DW_TAG_lexical_block ]
!103 = metadata !{i32 786443, metadata !104, i32 106, i32 39, metadata !21, i32 7} ; [ DW_TAG_lexical_block ]
!104 = metadata !{i32 786443, metadata !105, i32 106, i32 11, metadata !21, i32 6} ; [ DW_TAG_lexical_block ]
!105 = metadata !{i32 786443, metadata !106, i32 76, i32 1, metadata !21, i32 5} ; [ DW_TAG_lexical_block ]
!106 = metadata !{i32 786478, i32 0, metadata !21, metadata !"sobel_operator_cache", metadata !"sobel_operator_cache", metadata !"_Z20sobel_operator_cacheiiPA1920_h", metadata !21, i32 75, metadata !107, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !33, i32 76} ; [ DW_TAG_subprogram ]
!107 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !108, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!108 = metadata !{metadata !26, metadata !109, metadata !109, metadata !24}
!109 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !110} ; [ DW_TAG_const_type ]
!110 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!111 = metadata !{i32 166, i32 38, metadata !79, null}
!112 = metadata !{i32 115, i32 4, metadata !101, metadata !111}
!113 = metadata !{i32 120, i32 2, metadata !105, metadata !111}
!114 = metadata !{i32 122, i32 2, metadata !105, metadata !111}
!115 = metadata !{i32 125, i32 2, metadata !105, metadata !111}
!116 = metadata !{i32 127, i32 7, metadata !105, metadata !111}
!117 = metadata !{i32 167, i32 5, metadata !79, null}
!118 = metadata !{i32 207, i32 1, metadata !54, null}
