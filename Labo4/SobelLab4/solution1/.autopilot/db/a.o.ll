; ModuleID = 'C:/TEMP/Labo4/SobelLab4/solution1/.autopilot/db/a.o.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@.str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@_ZZ14sobel_operatoriiPA1920_hE4x_op = internal constant [3 x [3 x i8]] [[3 x i8] c"\FF\00\01", [3 x i8] c"\FE\00\02", [3 x i8] c"\FF\00\01"], align 1 ; [#uses=2 type=[3 x [3 x i8]]*]
@_ZZ14sobel_operatoriiPA1920_hE4y_op = internal constant [3 x [3 x i8]] [[3 x i8] c"\01\02\01", [3 x i8] zeroinitializer, [3 x i8] c"\FF\FE\FF"], align 1 ; [#uses=2 type=[3 x [3 x i8]]*]
@_ZZ20sobel_operator_cacheiiPA1920_hE4x_op = internal constant [3 x [3 x i8]] [[3 x i8] c"\FF\00\01", [3 x i8] c"\FE\00\02", [3 x i8] c"\FF\00\01"], align 1 ; [#uses=2 type=[3 x [3 x i8]]*]
@_ZZ20sobel_operator_cacheiiPA1920_hE4y_op = internal constant [3 x [3 x i8]] [[3 x i8] c"\01\02\01", [3 x i8] zeroinitializer, [3 x i8] c"\FF\FE\FF"], align 1 ; [#uses=2 type=[3 x [3 x i8]]*]
@.str1 = private unnamed_addr constant [7 x i8] c"SobelX\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str2 = private unnamed_addr constant [7 x i8] c"SobelY\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str3 = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1 ; [#uses=1 type=[6 x i8]*]
@.str4 = private unnamed_addr constant [6 x i8] c"slave\00", align 1 ; [#uses=1 type=[6 x i8]*]
@.str5 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str6 = private unnamed_addr constant [9 x i8] c"COMPLETE\00", align 1 ; [#uses=1 type=[9 x i8]*]
@.str7 = private unnamed_addr constant [10 x i8] c"LoadCache\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str8 = private unnamed_addr constant [9 x i8] c"LoadLine\00", align 1 ; [#uses=1 type=[9 x i8]*]
@.str9 = private unnamed_addr constant [12 x i8] c"hls_label_1\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str10 = private unnamed_addr constant [12 x i8] c"hls_label_0\00", align 1 ; [#uses=1 type=[12 x i8]*]

; [#uses=0]
define zeroext i8 @_Z14sobel_operatoriiPA1920_h(i32 %col, i32 %row, [1920 x i8]* %image) nounwind {
  %1 = alloca i32, align 4                        ; [#uses=3 type=i32*]
  %2 = alloca i32, align 4                        ; [#uses=3 type=i32*]
  %3 = alloca [1920 x i8]*, align 4               ; [#uses=4 type=[1920 x i8]**]
  %x_weight = alloca i32, align 4                 ; [#uses=6 type=i32*]
  %y_weight = alloca i32, align 4                 ; [#uses=6 type=i32*]
  %edge_weight = alloca i32, align 4              ; [#uses=2 type=i32*]
  %edge_val = alloca i8, align 1                  ; [#uses=6 type=i8*]
  %i = alloca i32, align 4                        ; [#uses=8 type=i32*]
  %j = alloca i32, align 4                        ; [#uses=8 type=i32*]
  store i32 %col, i32* %1, align 4
  call void @llvm.dbg.declare(metadata !{i32* %1}, metadata !52), !dbg !53 ; [debug line = 20:34] [debug variable = col]
  store i32 %row, i32* %2, align 4
  call void @llvm.dbg.declare(metadata !{i32* %2}, metadata !54), !dbg !55 ; [debug line = 20:49] [debug variable = row]
  store [1920 x i8]* %image, [1920 x i8]** %3, align 4
  call void @llvm.dbg.declare(metadata !{[1920 x i8]** %3}, metadata !56), !dbg !57 ; [debug line = 20:62] [debug variable = image]
  %4 = load [1920 x i8]** %3, align 4, !dbg !58   ; [#uses=1 type=[1920 x i8]*] [debug line = 21:2]
  call void (...)* @_ssdm_SpecArrayDimSize([1920 x i8]* %4, i32 1080) nounwind, !dbg !58 ; [debug line = 21:2]
  call void (...)* @_ssdm_InlineSelf(i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !60 ; [debug line = 22:1]
  call void @llvm.dbg.declare(metadata !{i32* %x_weight}, metadata !61), !dbg !62 ; [debug line = 35:6] [debug variable = x_weight]
  store i32 0, i32* %x_weight, align 4, !dbg !63  ; [debug line = 35:18]
  call void @llvm.dbg.declare(metadata !{i32* %y_weight}, metadata !64), !dbg !65 ; [debug line = 36:6] [debug variable = y_weight]
  store i32 0, i32* %y_weight, align 4, !dbg !66  ; [debug line = 36:18]
  call void @llvm.dbg.declare(metadata !{i32* %edge_weight}, metadata !67), !dbg !68 ; [debug line = 38:11] [debug variable = edge_weight]
  call void @llvm.dbg.declare(metadata !{i8* %edge_val}, metadata !69), !dbg !70 ; [debug line = 39:10] [debug variable = edge_val]
  call void (...)* @_ssdm_SpecConstant([3 x i8]* getelementptr inbounds ([3 x [3 x i8]]* @_ZZ14sobel_operatoriiPA1920_hE4x_op, i32 0, i32 0)) nounwind, !dbg !71 ; [debug line = 44:1]
  call void (...)* @_ssdm_SpecConstant([3 x i8]* getelementptr inbounds ([3 x [3 x i8]]* @_ZZ14sobel_operatoriiPA1920_hE4y_op, i32 0, i32 0)) nounwind, !dbg !72 ; [debug line = 48:1]
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !73), !dbg !75 ; [debug line = 50:11] [debug variable = i]
  store i32 0, i32* %i, align 4, !dbg !76         ; [debug line = 50:16]
  br label %5, !dbg !76                           ; [debug line = 50:16]

; <label>:5                                       ; preds = %61, %0
  %6 = load i32* %i, align 4, !dbg !76            ; [#uses=1 type=i32] [debug line = 50:16]
  %7 = icmp slt i32 %6, 3, !dbg !76               ; [#uses=1 type=i1] [debug line = 50:16]
  br i1 %7, label %8, label %64, !dbg !76         ; [debug line = 50:16]

; <label>:8                                       ; preds = %5
  call void @llvm.dbg.declare(metadata !{i32* %j}, metadata !77), !dbg !80 ; [debug line = 51:12] [debug variable = j]
  store i32 0, i32* %j, align 4, !dbg !81         ; [debug line = 51:17]
  br label %9, !dbg !81                           ; [debug line = 51:17]

; <label>:9                                       ; preds = %57, %8
  %10 = load i32* %j, align 4, !dbg !81           ; [#uses=1 type=i32] [debug line = 51:17]
  %11 = icmp slt i32 %10, 3, !dbg !81             ; [#uses=1 type=i1] [debug line = 51:17]
  br i1 %11, label %12, label %60, !dbg !81       ; [debug line = 51:17]

; <label>:12                                      ; preds = %9
  %13 = load i32* %x_weight, align 4, !dbg !82    ; [#uses=1 type=i32] [debug line = 53:4]
  %14 = load i32* %2, align 4, !dbg !82           ; [#uses=1 type=i32] [debug line = 53:4]
  %15 = load i32* %j, align 4, !dbg !82           ; [#uses=1 type=i32] [debug line = 53:4]
  %16 = add nsw i32 %14, %15, !dbg !82            ; [#uses=1 type=i32] [debug line = 53:4]
  %17 = sub nsw i32 %16, 1, !dbg !82              ; [#uses=1 type=i32] [debug line = 53:4]
  %18 = load i32* %1, align 4, !dbg !82           ; [#uses=1 type=i32] [debug line = 53:4]
  %19 = load i32* %i, align 4, !dbg !82           ; [#uses=1 type=i32] [debug line = 53:4]
  %20 = add nsw i32 %18, %19, !dbg !82            ; [#uses=1 type=i32] [debug line = 53:4]
  %21 = sub nsw i32 %20, 1, !dbg !82              ; [#uses=1 type=i32] [debug line = 53:4]
  %22 = load [1920 x i8]** %3, align 4, !dbg !82  ; [#uses=1 type=[1920 x i8]*] [debug line = 53:4]
  %23 = getelementptr inbounds [1920 x i8]* %22, i32 %21, !dbg !82 ; [#uses=1 type=[1920 x i8]*] [debug line = 53:4]
  %24 = getelementptr inbounds [1920 x i8]* %23, i32 0, i32 %17, !dbg !82 ; [#uses=1 type=i8*] [debug line = 53:4]
  %25 = load i8* %24, align 1, !dbg !82           ; [#uses=1 type=i8] [debug line = 53:4]
  %26 = zext i8 %25 to i32, !dbg !82              ; [#uses=1 type=i32] [debug line = 53:4]
  %27 = load i32* %j, align 4, !dbg !82           ; [#uses=1 type=i32] [debug line = 53:4]
  %28 = load i32* %i, align 4, !dbg !82           ; [#uses=1 type=i32] [debug line = 53:4]
  %29 = getelementptr inbounds [3 x [3 x i8]]* @_ZZ14sobel_operatoriiPA1920_hE4x_op, i32 0, i32 %28, !dbg !82 ; [#uses=1 type=[3 x i8]*] [debug line = 53:4]
  %30 = getelementptr inbounds [3 x i8]* %29, i32 0, i32 %27, !dbg !82 ; [#uses=1 type=i8*] [debug line = 53:4]
  %31 = load i8* %30, align 1, !dbg !82           ; [#uses=1 type=i8] [debug line = 53:4]
  %32 = sext i8 %31 to i32, !dbg !82              ; [#uses=1 type=i32] [debug line = 53:4]
  %33 = mul nsw i32 %26, %32, !dbg !82            ; [#uses=1 type=i32] [debug line = 53:4]
  %34 = add nsw i32 %13, %33, !dbg !82            ; [#uses=1 type=i32] [debug line = 53:4]
  store i32 %34, i32* %x_weight, align 4, !dbg !82 ; [debug line = 53:4]
  %35 = load i32* %y_weight, align 4, !dbg !84    ; [#uses=1 type=i32] [debug line = 57:4]
  %36 = load i32* %2, align 4, !dbg !84           ; [#uses=1 type=i32] [debug line = 57:4]
  %37 = load i32* %j, align 4, !dbg !84           ; [#uses=1 type=i32] [debug line = 57:4]
  %38 = add nsw i32 %36, %37, !dbg !84            ; [#uses=1 type=i32] [debug line = 57:4]
  %39 = sub nsw i32 %38, 1, !dbg !84              ; [#uses=1 type=i32] [debug line = 57:4]
  %40 = load i32* %1, align 4, !dbg !84           ; [#uses=1 type=i32] [debug line = 57:4]
  %41 = load i32* %i, align 4, !dbg !84           ; [#uses=1 type=i32] [debug line = 57:4]
  %42 = add nsw i32 %40, %41, !dbg !84            ; [#uses=1 type=i32] [debug line = 57:4]
  %43 = sub nsw i32 %42, 1, !dbg !84              ; [#uses=1 type=i32] [debug line = 57:4]
  %44 = load [1920 x i8]** %3, align 4, !dbg !84  ; [#uses=1 type=[1920 x i8]*] [debug line = 57:4]
  %45 = getelementptr inbounds [1920 x i8]* %44, i32 %43, !dbg !84 ; [#uses=1 type=[1920 x i8]*] [debug line = 57:4]
  %46 = getelementptr inbounds [1920 x i8]* %45, i32 0, i32 %39, !dbg !84 ; [#uses=1 type=i8*] [debug line = 57:4]
  %47 = load i8* %46, align 1, !dbg !84           ; [#uses=1 type=i8] [debug line = 57:4]
  %48 = zext i8 %47 to i32, !dbg !84              ; [#uses=1 type=i32] [debug line = 57:4]
  %49 = load i32* %j, align 4, !dbg !84           ; [#uses=1 type=i32] [debug line = 57:4]
  %50 = load i32* %i, align 4, !dbg !84           ; [#uses=1 type=i32] [debug line = 57:4]
  %51 = getelementptr inbounds [3 x [3 x i8]]* @_ZZ14sobel_operatoriiPA1920_hE4y_op, i32 0, i32 %50, !dbg !84 ; [#uses=1 type=[3 x i8]*] [debug line = 57:4]
  %52 = getelementptr inbounds [3 x i8]* %51, i32 0, i32 %49, !dbg !84 ; [#uses=1 type=i8*] [debug line = 57:4]
  %53 = load i8* %52, align 1, !dbg !84           ; [#uses=1 type=i8] [debug line = 57:4]
  %54 = sext i8 %53 to i32, !dbg !84              ; [#uses=1 type=i32] [debug line = 57:4]
  %55 = mul nsw i32 %48, %54, !dbg !84            ; [#uses=1 type=i32] [debug line = 57:4]
  %56 = add nsw i32 %35, %55, !dbg !84            ; [#uses=1 type=i32] [debug line = 57:4]
  store i32 %56, i32* %y_weight, align 4, !dbg !84 ; [debug line = 57:4]
  br label %57, !dbg !85                          ; [debug line = 59:3]

; <label>:57                                      ; preds = %12
  %58 = load i32* %j, align 4, !dbg !86           ; [#uses=1 type=i32] [debug line = 51:26]
  %59 = add nsw i32 %58, 1, !dbg !86              ; [#uses=1 type=i32] [debug line = 51:26]
  store i32 %59, i32* %j, align 4, !dbg !86       ; [debug line = 51:26]
  br label %9, !dbg !86                           ; [debug line = 51:26]

; <label>:60                                      ; preds = %9
  br label %61, !dbg !87                          ; [debug line = 60:2]

; <label>:61                                      ; preds = %60
  %62 = load i32* %i, align 4, !dbg !88           ; [#uses=1 type=i32] [debug line = 50:25]
  %63 = add nsw i32 %62, 1, !dbg !88              ; [#uses=1 type=i32] [debug line = 50:25]
  store i32 %63, i32* %i, align 4, !dbg !88       ; [debug line = 50:25]
  br label %5, !dbg !88                           ; [debug line = 50:25]

; <label>:64                                      ; preds = %5
  %65 = load i32* %x_weight, align 4, !dbg !89    ; [#uses=1 type=i32] [debug line = 62:2]
  %66 = icmp sgt i32 %65, 0, !dbg !89             ; [#uses=1 type=i1] [debug line = 62:2]
  br i1 %66, label %67, label %69, !dbg !89       ; [debug line = 62:2]

; <label>:67                                      ; preds = %64
  %68 = load i32* %x_weight, align 4, !dbg !89    ; [#uses=1 type=i32] [debug line = 62:2]
  br label %72, !dbg !89                          ; [debug line = 62:2]

; <label>:69                                      ; preds = %64
  %70 = load i32* %x_weight, align 4, !dbg !89    ; [#uses=1 type=i32] [debug line = 62:2]
  %71 = sub nsw i32 0, %70, !dbg !89              ; [#uses=1 type=i32] [debug line = 62:2]
  br label %72, !dbg !89                          ; [debug line = 62:2]

; <label>:72                                      ; preds = %69, %67
  %73 = phi i32 [ %68, %67 ], [ %71, %69 ], !dbg !89 ; [#uses=1 type=i32] [debug line = 62:2]
  %74 = load i32* %y_weight, align 4, !dbg !89    ; [#uses=1 type=i32] [debug line = 62:2]
  %75 = icmp sgt i32 %74, 0, !dbg !89             ; [#uses=1 type=i1] [debug line = 62:2]
  br i1 %75, label %76, label %78, !dbg !89       ; [debug line = 62:2]

; <label>:76                                      ; preds = %72
  %77 = load i32* %y_weight, align 4, !dbg !89    ; [#uses=1 type=i32] [debug line = 62:2]
  br label %81, !dbg !89                          ; [debug line = 62:2]

; <label>:78                                      ; preds = %72
  %79 = load i32* %y_weight, align 4, !dbg !89    ; [#uses=1 type=i32] [debug line = 62:2]
  %80 = sub nsw i32 0, %79, !dbg !89              ; [#uses=1 type=i32] [debug line = 62:2]
  br label %81, !dbg !89                          ; [debug line = 62:2]

; <label>:81                                      ; preds = %78, %76
  %82 = phi i32 [ %77, %76 ], [ %80, %78 ], !dbg !89 ; [#uses=1 type=i32] [debug line = 62:2]
  %83 = add nsw i32 %73, %82, !dbg !89            ; [#uses=1 type=i32] [debug line = 62:2]
  store i32 %83, i32* %edge_weight, align 4, !dbg !89 ; [debug line = 62:2]
  %84 = load i32* %edge_weight, align 4, !dbg !90 ; [#uses=1 type=i32] [debug line = 64:2]
  %85 = trunc i32 %84 to i8, !dbg !90             ; [#uses=1 type=i8] [debug line = 64:2]
  %86 = zext i8 %85 to i32, !dbg !90              ; [#uses=1 type=i32] [debug line = 64:2]
  %87 = sub nsw i32 255, %86, !dbg !90            ; [#uses=1 type=i32] [debug line = 64:2]
  %88 = trunc i32 %87 to i8, !dbg !90             ; [#uses=1 type=i8] [debug line = 64:2]
  store i8 %88, i8* %edge_val, align 1, !dbg !90  ; [debug line = 64:2]
  %89 = load i8* %edge_val, align 1, !dbg !91     ; [#uses=1 type=i8] [debug line = 67:2]
  %90 = zext i8 %89 to i32, !dbg !91              ; [#uses=1 type=i32] [debug line = 67:2]
  %91 = icmp sgt i32 %90, 200, !dbg !91           ; [#uses=1 type=i1] [debug line = 67:2]
  br i1 %91, label %92, label %93, !dbg !91       ; [debug line = 67:2]

; <label>:92                                      ; preds = %81
  store i8 -1, i8* %edge_val, align 1, !dbg !92   ; [debug line = 68:3]
  br label %99, !dbg !92                          ; [debug line = 68:3]

; <label>:93                                      ; preds = %81
  %94 = load i8* %edge_val, align 1, !dbg !93     ; [#uses=1 type=i8] [debug line = 69:7]
  %95 = zext i8 %94 to i32, !dbg !93              ; [#uses=1 type=i32] [debug line = 69:7]
  %96 = icmp slt i32 %95, 100, !dbg !93           ; [#uses=1 type=i1] [debug line = 69:7]
  br i1 %96, label %97, label %98, !dbg !93       ; [debug line = 69:7]

; <label>:97                                      ; preds = %93
  store i8 0, i8* %edge_val, align 1, !dbg !94    ; [debug line = 70:3]
  br label %98, !dbg !94                          ; [debug line = 70:3]

; <label>:98                                      ; preds = %97, %93
  br label %99

; <label>:99                                      ; preds = %98, %92
  %100 = load i8* %edge_val, align 1, !dbg !95    ; [#uses=1 type=i8] [debug line = 72:2]
  ret i8 %100, !dbg !95                           ; [debug line = 72:2]
}

; [#uses=26]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=4]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

; [#uses=2]
declare void @_ssdm_InlineSelf(...) nounwind

; [#uses=4]
declare void @_ssdm_SpecConstant(...) nounwind

; [#uses=1]
define zeroext i8 @_Z20sobel_operator_cacheiiPA1920_h(i32 %col, i32 %row, [1920 x i8]* %cache) nounwind {
  %1 = alloca i32, align 4                        ; [#uses=3 type=i32*]
  %2 = alloca i32, align 4                        ; [#uses=3 type=i32*]
  %3 = alloca [1920 x i8]*, align 4               ; [#uses=4 type=[1920 x i8]**]
  %x_weight = alloca i32, align 4                 ; [#uses=6 type=i32*]
  %y_weight = alloca i32, align 4                 ; [#uses=6 type=i32*]
  %edge_weight = alloca i32, align 4              ; [#uses=2 type=i32*]
  %edge_val = alloca i8, align 1                  ; [#uses=6 type=i8*]
  %i = alloca i32, align 4                        ; [#uses=8 type=i32*]
  %j = alloca i32, align 4                        ; [#uses=8 type=i32*]
  store i32 %col, i32* %1, align 4
  call void @llvm.dbg.declare(metadata !{i32* %1}, metadata !96), !dbg !97 ; [debug line = 75:40] [debug variable = col]
  store i32 %row, i32* %2, align 4
  call void @llvm.dbg.declare(metadata !{i32* %2}, metadata !98), !dbg !99 ; [debug line = 75:55] [debug variable = row]
  store [1920 x i8]* %cache, [1920 x i8]** %3, align 4
  call void @llvm.dbg.declare(metadata !{[1920 x i8]** %3}, metadata !100), !dbg !101 ; [debug line = 75:68] [debug variable = cache]
  %4 = load [1920 x i8]** %3, align 4, !dbg !102  ; [#uses=1 type=[1920 x i8]*] [debug line = 76:2]
  call void (...)* @_ssdm_SpecArrayDimSize([1920 x i8]* %4, i32 4) nounwind, !dbg !102 ; [debug line = 76:2]
  call void (...)* @_ssdm_InlineSelf(i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !104 ; [debug line = 77:1]
  call void @llvm.dbg.declare(metadata !{i32* %x_weight}, metadata !105), !dbg !106 ; [debug line = 90:6] [debug variable = x_weight]
  store i32 0, i32* %x_weight, align 4, !dbg !107 ; [debug line = 90:18]
  call void @llvm.dbg.declare(metadata !{i32* %y_weight}, metadata !108), !dbg !109 ; [debug line = 91:6] [debug variable = y_weight]
  store i32 0, i32* %y_weight, align 4, !dbg !110 ; [debug line = 91:18]
  call void @llvm.dbg.declare(metadata !{i32* %edge_weight}, metadata !111), !dbg !112 ; [debug line = 93:11] [debug variable = edge_weight]
  call void @llvm.dbg.declare(metadata !{i8* %edge_val}, metadata !113), !dbg !114 ; [debug line = 94:10] [debug variable = edge_val]
  call void (...)* @_ssdm_SpecConstant([3 x i8]* getelementptr inbounds ([3 x [3 x i8]]* @_ZZ20sobel_operator_cacheiiPA1920_hE4x_op, i32 0, i32 0)) nounwind, !dbg !115 ; [debug line = 99:1]
  call void (...)* @_ssdm_SpecConstant([3 x i8]* getelementptr inbounds ([3 x [3 x i8]]* @_ZZ20sobel_operator_cacheiiPA1920_hE4y_op, i32 0, i32 0)) nounwind, !dbg !116 ; [debug line = 103:1]
  br label %5, !dbg !116                          ; [debug line = 103:1]

; <label>:5                                       ; preds = %0
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !117), !dbg !119 ; [debug line = 106:20] [debug variable = i]
  store i32 0, i32* %i, align 4, !dbg !120        ; [debug line = 106:25]
  br label %6, !dbg !120                          ; [debug line = 106:25]

; <label>:6                                       ; preds = %67, %5
  %7 = load i32* %i, align 4, !dbg !120           ; [#uses=1 type=i32] [debug line = 106:25]
  %8 = icmp slt i32 %7, 3, !dbg !120              ; [#uses=1 type=i1] [debug line = 106:25]
  br i1 %8, label %9, label %70, !dbg !120        ; [debug line = 106:25]

; <label>:9                                       ; preds = %6
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([7 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !121 ; [debug line = 106:40]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([7 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !121 ; [debug line = 106:40]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !123 ; [debug line = 107:1]
  br label %10, !dbg !123                         ; [debug line = 107:1]

; <label>:10                                      ; preds = %9
  call void @llvm.dbg.declare(metadata !{i32* %j}, metadata !124), !dbg !126 ; [debug line = 108:20] [debug variable = j]
  store i32 0, i32* %j, align 4, !dbg !127        ; [debug line = 108:25]
  br label %11, !dbg !127                         ; [debug line = 108:25]

; <label>:11                                      ; preds = %63, %10
  %12 = load i32* %j, align 4, !dbg !127          ; [#uses=1 type=i32] [debug line = 108:25]
  %13 = icmp slt i32 %12, 3, !dbg !127            ; [#uses=1 type=i1] [debug line = 108:25]
  br i1 %13, label %14, label %66, !dbg !127      ; [debug line = 108:25]

; <label>:14                                      ; preds = %11
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([7 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !128 ; [debug line = 108:40]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([7 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !128 ; [debug line = 108:40]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !130 ; [debug line = 109:1]
  %15 = load i32* %x_weight, align 4, !dbg !131   ; [#uses=1 type=i32] [debug line = 111:4]
  %16 = load i32* %2, align 4, !dbg !131          ; [#uses=1 type=i32] [debug line = 111:4]
  %17 = load i32* %j, align 4, !dbg !131          ; [#uses=1 type=i32] [debug line = 111:4]
  %18 = add nsw i32 %16, %17, !dbg !131           ; [#uses=1 type=i32] [debug line = 111:4]
  %19 = sub nsw i32 %18, 1, !dbg !131             ; [#uses=1 type=i32] [debug line = 111:4]
  %20 = load i32* %1, align 4, !dbg !131          ; [#uses=1 type=i32] [debug line = 111:4]
  %21 = load i32* %i, align 4, !dbg !131          ; [#uses=1 type=i32] [debug line = 111:4]
  %22 = add nsw i32 %20, %21, !dbg !131           ; [#uses=1 type=i32] [debug line = 111:4]
  %23 = sub nsw i32 %22, 1, !dbg !131             ; [#uses=1 type=i32] [debug line = 111:4]
  %24 = add nsw i32 %23, 4, !dbg !131             ; [#uses=1 type=i32] [debug line = 111:4]
  %25 = and i32 %24, 3, !dbg !131                 ; [#uses=1 type=i32] [debug line = 111:4]
  %26 = load [1920 x i8]** %3, align 4, !dbg !131 ; [#uses=1 type=[1920 x i8]*] [debug line = 111:4]
  %27 = getelementptr inbounds [1920 x i8]* %26, i32 %25, !dbg !131 ; [#uses=1 type=[1920 x i8]*] [debug line = 111:4]
  %28 = getelementptr inbounds [1920 x i8]* %27, i32 0, i32 %19, !dbg !131 ; [#uses=1 type=i8*] [debug line = 111:4]
  %29 = load i8* %28, align 1, !dbg !131          ; [#uses=1 type=i8] [debug line = 111:4]
  %30 = zext i8 %29 to i32, !dbg !131             ; [#uses=1 type=i32] [debug line = 111:4]
  %31 = load i32* %j, align 4, !dbg !131          ; [#uses=1 type=i32] [debug line = 111:4]
  %32 = load i32* %i, align 4, !dbg !131          ; [#uses=1 type=i32] [debug line = 111:4]
  %33 = getelementptr inbounds [3 x [3 x i8]]* @_ZZ20sobel_operator_cacheiiPA1920_hE4x_op, i32 0, i32 %32, !dbg !131 ; [#uses=1 type=[3 x i8]*] [debug line = 111:4]
  %34 = getelementptr inbounds [3 x i8]* %33, i32 0, i32 %31, !dbg !131 ; [#uses=1 type=i8*] [debug line = 111:4]
  %35 = load i8* %34, align 1, !dbg !131          ; [#uses=1 type=i8] [debug line = 111:4]
  %36 = sext i8 %35 to i32, !dbg !131             ; [#uses=1 type=i32] [debug line = 111:4]
  %37 = mul nsw i32 %30, %36, !dbg !131           ; [#uses=1 type=i32] [debug line = 111:4]
  %38 = add nsw i32 %15, %37, !dbg !131           ; [#uses=1 type=i32] [debug line = 111:4]
  store i32 %38, i32* %x_weight, align 4, !dbg !131 ; [debug line = 111:4]
  %39 = load i32* %y_weight, align 4, !dbg !132   ; [#uses=1 type=i32] [debug line = 115:4]
  %40 = load i32* %2, align 4, !dbg !132          ; [#uses=1 type=i32] [debug line = 115:4]
  %41 = load i32* %j, align 4, !dbg !132          ; [#uses=1 type=i32] [debug line = 115:4]
  %42 = add nsw i32 %40, %41, !dbg !132           ; [#uses=1 type=i32] [debug line = 115:4]
  %43 = sub nsw i32 %42, 1, !dbg !132             ; [#uses=1 type=i32] [debug line = 115:4]
  %44 = load i32* %1, align 4, !dbg !132          ; [#uses=1 type=i32] [debug line = 115:4]
  %45 = load i32* %i, align 4, !dbg !132          ; [#uses=1 type=i32] [debug line = 115:4]
  %46 = add nsw i32 %44, %45, !dbg !132           ; [#uses=1 type=i32] [debug line = 115:4]
  %47 = sub nsw i32 %46, 1, !dbg !132             ; [#uses=1 type=i32] [debug line = 115:4]
  %48 = add nsw i32 %47, 4, !dbg !132             ; [#uses=1 type=i32] [debug line = 115:4]
  %49 = and i32 %48, 3, !dbg !132                 ; [#uses=1 type=i32] [debug line = 115:4]
  %50 = load [1920 x i8]** %3, align 4, !dbg !132 ; [#uses=1 type=[1920 x i8]*] [debug line = 115:4]
  %51 = getelementptr inbounds [1920 x i8]* %50, i32 %49, !dbg !132 ; [#uses=1 type=[1920 x i8]*] [debug line = 115:4]
  %52 = getelementptr inbounds [1920 x i8]* %51, i32 0, i32 %43, !dbg !132 ; [#uses=1 type=i8*] [debug line = 115:4]
  %53 = load i8* %52, align 1, !dbg !132          ; [#uses=1 type=i8] [debug line = 115:4]
  %54 = zext i8 %53 to i32, !dbg !132             ; [#uses=1 type=i32] [debug line = 115:4]
  %55 = load i32* %j, align 4, !dbg !132          ; [#uses=1 type=i32] [debug line = 115:4]
  %56 = load i32* %i, align 4, !dbg !132          ; [#uses=1 type=i32] [debug line = 115:4]
  %57 = getelementptr inbounds [3 x [3 x i8]]* @_ZZ20sobel_operator_cacheiiPA1920_hE4y_op, i32 0, i32 %56, !dbg !132 ; [#uses=1 type=[3 x i8]*] [debug line = 115:4]
  %58 = getelementptr inbounds [3 x i8]* %57, i32 0, i32 %55, !dbg !132 ; [#uses=1 type=i8*] [debug line = 115:4]
  %59 = load i8* %58, align 1, !dbg !132          ; [#uses=1 type=i8] [debug line = 115:4]
  %60 = sext i8 %59 to i32, !dbg !132             ; [#uses=1 type=i32] [debug line = 115:4]
  %61 = mul nsw i32 %54, %60, !dbg !132           ; [#uses=1 type=i32] [debug line = 115:4]
  %62 = add nsw i32 %39, %61, !dbg !132           ; [#uses=1 type=i32] [debug line = 115:4]
  store i32 %62, i32* %y_weight, align 4, !dbg !132 ; [debug line = 115:4]
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([7 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !133 ; [debug line = 117:3]
  br label %63, !dbg !133                         ; [debug line = 117:3]

; <label>:63                                      ; preds = %14
  %64 = load i32* %j, align 4, !dbg !134          ; [#uses=1 type=i32] [debug line = 108:34]
  %65 = add nsw i32 %64, 1, !dbg !134             ; [#uses=1 type=i32] [debug line = 108:34]
  store i32 %65, i32* %j, align 4, !dbg !134      ; [debug line = 108:34]
  br label %11, !dbg !134                         ; [debug line = 108:34]

; <label>:66                                      ; preds = %11
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([7 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !135 ; [debug line = 118:2]
  br label %67, !dbg !135                         ; [debug line = 118:2]

; <label>:67                                      ; preds = %66
  %68 = load i32* %i, align 4, !dbg !136          ; [#uses=1 type=i32] [debug line = 106:34]
  %69 = add nsw i32 %68, 1, !dbg !136             ; [#uses=1 type=i32] [debug line = 106:34]
  store i32 %69, i32* %i, align 4, !dbg !136      ; [debug line = 106:34]
  br label %6, !dbg !136                          ; [debug line = 106:34]

; <label>:70                                      ; preds = %6
  %71 = load i32* %x_weight, align 4, !dbg !137   ; [#uses=1 type=i32] [debug line = 120:2]
  %72 = icmp sgt i32 %71, 0, !dbg !137            ; [#uses=1 type=i1] [debug line = 120:2]
  br i1 %72, label %73, label %75, !dbg !137      ; [debug line = 120:2]

; <label>:73                                      ; preds = %70
  %74 = load i32* %x_weight, align 4, !dbg !137   ; [#uses=1 type=i32] [debug line = 120:2]
  br label %78, !dbg !137                         ; [debug line = 120:2]

; <label>:75                                      ; preds = %70
  %76 = load i32* %x_weight, align 4, !dbg !137   ; [#uses=1 type=i32] [debug line = 120:2]
  %77 = sub nsw i32 0, %76, !dbg !137             ; [#uses=1 type=i32] [debug line = 120:2]
  br label %78, !dbg !137                         ; [debug line = 120:2]

; <label>:78                                      ; preds = %75, %73
  %79 = phi i32 [ %74, %73 ], [ %77, %75 ], !dbg !137 ; [#uses=1 type=i32] [debug line = 120:2]
  %80 = load i32* %y_weight, align 4, !dbg !137   ; [#uses=1 type=i32] [debug line = 120:2]
  %81 = icmp sgt i32 %80, 0, !dbg !137            ; [#uses=1 type=i1] [debug line = 120:2]
  br i1 %81, label %82, label %84, !dbg !137      ; [debug line = 120:2]

; <label>:82                                      ; preds = %78
  %83 = load i32* %y_weight, align 4, !dbg !137   ; [#uses=1 type=i32] [debug line = 120:2]
  br label %87, !dbg !137                         ; [debug line = 120:2]

; <label>:84                                      ; preds = %78
  %85 = load i32* %y_weight, align 4, !dbg !137   ; [#uses=1 type=i32] [debug line = 120:2]
  %86 = sub nsw i32 0, %85, !dbg !137             ; [#uses=1 type=i32] [debug line = 120:2]
  br label %87, !dbg !137                         ; [debug line = 120:2]

; <label>:87                                      ; preds = %84, %82
  %88 = phi i32 [ %83, %82 ], [ %86, %84 ], !dbg !137 ; [#uses=1 type=i32] [debug line = 120:2]
  %89 = add nsw i32 %79, %88, !dbg !137           ; [#uses=1 type=i32] [debug line = 120:2]
  store i32 %89, i32* %edge_weight, align 4, !dbg !137 ; [debug line = 120:2]
  %90 = load i32* %edge_weight, align 4, !dbg !138 ; [#uses=1 type=i32] [debug line = 122:2]
  %91 = trunc i32 %90 to i8, !dbg !138            ; [#uses=1 type=i8] [debug line = 122:2]
  %92 = zext i8 %91 to i32, !dbg !138             ; [#uses=1 type=i32] [debug line = 122:2]
  %93 = sub nsw i32 255, %92, !dbg !138           ; [#uses=1 type=i32] [debug line = 122:2]
  %94 = trunc i32 %93 to i8, !dbg !138            ; [#uses=1 type=i8] [debug line = 122:2]
  store i8 %94, i8* %edge_val, align 1, !dbg !138 ; [debug line = 122:2]
  %95 = load i8* %edge_val, align 1, !dbg !139    ; [#uses=1 type=i8] [debug line = 125:2]
  %96 = zext i8 %95 to i32, !dbg !139             ; [#uses=1 type=i32] [debug line = 125:2]
  %97 = icmp sgt i32 %96, 200, !dbg !139          ; [#uses=1 type=i1] [debug line = 125:2]
  br i1 %97, label %98, label %99, !dbg !139      ; [debug line = 125:2]

; <label>:98                                      ; preds = %87
  store i8 -1, i8* %edge_val, align 1, !dbg !140  ; [debug line = 126:3]
  br label %105, !dbg !140                        ; [debug line = 126:3]

; <label>:99                                      ; preds = %87
  %100 = load i8* %edge_val, align 1, !dbg !141   ; [#uses=1 type=i8] [debug line = 127:7]
  %101 = zext i8 %100 to i32, !dbg !141           ; [#uses=1 type=i32] [debug line = 127:7]
  %102 = icmp slt i32 %101, 100, !dbg !141        ; [#uses=1 type=i1] [debug line = 127:7]
  br i1 %102, label %103, label %104, !dbg !141   ; [debug line = 127:7]

; <label>:103                                     ; preds = %99
  store i8 0, i8* %edge_val, align 1, !dbg !142   ; [debug line = 128:3]
  br label %104, !dbg !142                        ; [debug line = 128:3]

; <label>:104                                     ; preds = %103, %99
  br label %105

; <label>:105                                     ; preds = %104, %98
  %106 = load i8* %edge_val, align 1, !dbg !143   ; [#uses=1 type=i8] [debug line = 130:2]
  ret i8 %106, !dbg !143                          ; [debug line = 130:2]
}

; [#uses=4]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=6]
declare void @_ssdm_RegionBegin(...) nounwind

; [#uses=3]
declare void @_ssdm_Unroll(...) nounwind

; [#uses=6]
declare void @_ssdm_RegionEnd(...) nounwind

; [#uses=0]
define void @_Z12sobel_filterPA1920_hPA1920_j([1920 x i8]* %inter_pix, [1920 x i32]* %out_pix) nounwind {
  %1 = alloca [1920 x i8]*, align 4               ; [#uses=5 type=[1920 x i8]**]
  %2 = alloca [1920 x i32]*, align 4              ; [#uses=5 type=[1920 x i32]**]
  %lineBuffer = alloca [4 x [1920 x i8]], align 1 ; [#uses=4 type=[4 x [1920 x i8]]*]
  %lastLine = alloca i32, align 4                 ; [#uses=11 type=i32*]
  %i = alloca i32, align 4                        ; [#uses=6 type=i32*]
  %i1 = alloca i32, align 4                       ; [#uses=10 type=i32*]
  %j = alloca i32, align 4                        ; [#uses=11 type=i32*]
  %val = alloca i32, align 4                      ; [#uses=5 type=i32*]
  store [1920 x i8]* %inter_pix, [1920 x i8]** %1, align 4
  call void @llvm.dbg.declare(metadata !{[1920 x i8]** %1}, metadata !144), !dbg !145 ; [debug line = 134:27] [debug variable = inter_pix]
  store [1920 x i32]* %out_pix, [1920 x i32]** %2, align 4
  call void @llvm.dbg.declare(metadata !{[1920 x i32]** %2}, metadata !146), !dbg !147 ; [debug line = 134:59] [debug variable = out_pix]
  %3 = load [1920 x i32]** %2, align 4, !dbg !148 ; [#uses=1 type=[1920 x i32]*] [debug line = 135:2]
  call void (...)* @_ssdm_SpecArrayDimSize([1920 x i32]* %3, i32 1080) nounwind, !dbg !148 ; [debug line = 135:2]
  %4 = load [1920 x i8]** %1, align 4, !dbg !150  ; [#uses=1 type=[1920 x i8]*] [debug line = 135:39]
  call void (...)* @_ssdm_SpecArrayDimSize([1920 x i8]* %4, i32 1080) nounwind, !dbg !150 ; [debug line = 135:39]
  %5 = load [1920 x i8]** %1, align 4, !dbg !151  ; [#uses=1 type=[1920 x i8]*] [debug line = 143:1]
  call void (...)* @_ssdm_op_SpecInterface([1920 x i8]* %5, i8* getelementptr inbounds ([6 x i8]* @.str3, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8]* @.str4, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 16, i32 16, i32 16, i32 16, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !151 ; [debug line = 143:1]
  %6 = load [1920 x i32]** %2, align 4, !dbg !152 ; [#uses=1 type=[1920 x i32]*] [debug line = 144:1]
  call void (...)* @_ssdm_op_SpecInterface([1920 x i32]* %6, i8* getelementptr inbounds ([6 x i8]* @.str3, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8]* @.str4, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 16, i32 16, i32 16, i32 16, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !152 ; [debug line = 144:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 0, i8* getelementptr inbounds ([10 x i8]* @.str5, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !153 ; [debug line = 145:1]
  call void @llvm.dbg.declare(metadata !{[4 x [1920 x i8]]* %lineBuffer}, metadata !154), !dbg !158 ; [debug line = 148:10] [debug variable = lineBuffer]
  %7 = getelementptr inbounds [4 x [1920 x i8]]* %lineBuffer, i32 0, i32 0, !dbg !159 ; [#uses=1 type=[1920 x i8]*] [debug line = 149:1]
  call void (...)* @_ssdm_SpecArrayPartition([1920 x i8]* %7, i32 1, i8* getelementptr inbounds ([9 x i8]* @.str6, i32 0, i32 0), i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !159 ; [debug line = 149:1]
  call void @llvm.dbg.declare(metadata !{i32* %lastLine}, metadata !160), !dbg !161 ; [debug line = 150:15] [debug variable = lastLine]
  store i32 0, i32* %lastLine, align 4, !dbg !162 ; [debug line = 150:27]
  br label %8, !dbg !162                          ; [debug line = 150:27]

; <label>:8                                       ; preds = %0
  br label %9, !dbg !163                          ; [debug line = 151:14]

; <label>:9                                       ; preds = %32, %8
  %10 = load i32* %lastLine, align 4, !dbg !163   ; [#uses=1 type=i32] [debug line = 151:14]
  %11 = icmp ult i32 %10, 3, !dbg !163            ; [#uses=1 type=i1] [debug line = 151:14]
  br i1 %11, label %12, label %35, !dbg !163      ; [debug line = 151:14]

; <label>:12                                      ; preds = %9
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0)) nounwind, !dbg !165 ; [debug line = 151:46]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0)) nounwind, !dbg !165 ; [debug line = 151:46]
  br label %13, !dbg !165                         ; [debug line = 151:46]

; <label>:13                                      ; preds = %12
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !167), !dbg !169 ; [debug line = 152:32] [debug variable = i]
  store i32 0, i32* %i, align 4, !dbg !170        ; [debug line = 152:37]
  br label %14, !dbg !170                         ; [debug line = 152:37]

; <label>:14                                      ; preds = %28, %13
  %15 = load i32* %i, align 4, !dbg !170          ; [#uses=1 type=i32] [debug line = 152:37]
  %16 = icmp ult i32 %15, 1920, !dbg !170         ; [#uses=1 type=i1] [debug line = 152:37]
  br i1 %16, label %17, label %31, !dbg !170      ; [debug line = 152:37]

; <label>:17                                      ; preds = %14
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([9 x i8]* @.str8, i32 0, i32 0)) nounwind, !dbg !171 ; [debug line = 152:54]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([9 x i8]* @.str8, i32 0, i32 0)) nounwind, !dbg !171 ; [debug line = 152:54]
  %18 = load i32* %i, align 4, !dbg !173          ; [#uses=1 type=i32] [debug line = 153:4]
  %19 = load i32* %lastLine, align 4, !dbg !173   ; [#uses=1 type=i32] [debug line = 153:4]
  %20 = load [1920 x i8]** %1, align 4, !dbg !173 ; [#uses=1 type=[1920 x i8]*] [debug line = 153:4]
  %21 = getelementptr inbounds [1920 x i8]* %20, i32 %19, !dbg !173 ; [#uses=1 type=[1920 x i8]*] [debug line = 153:4]
  %22 = getelementptr inbounds [1920 x i8]* %21, i32 0, i32 %18, !dbg !173 ; [#uses=1 type=i8*] [debug line = 153:4]
  %23 = load i8* %22, align 1, !dbg !173          ; [#uses=1 type=i8] [debug line = 153:4]
  %24 = load i32* %i, align 4, !dbg !173          ; [#uses=1 type=i32] [debug line = 153:4]
  %25 = load i32* %lastLine, align 4, !dbg !173   ; [#uses=1 type=i32] [debug line = 153:4]
  %26 = getelementptr inbounds [4 x [1920 x i8]]* %lineBuffer, i32 0, i32 %25, !dbg !173 ; [#uses=1 type=[1920 x i8]*] [debug line = 153:4]
  %27 = getelementptr inbounds [1920 x i8]* %26, i32 0, i32 %24, !dbg !173 ; [#uses=1 type=i8*] [debug line = 153:4]
  store i8 %23, i8* %27, align 1, !dbg !173       ; [debug line = 153:4]
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([9 x i8]* @.str8, i32 0, i32 0)) nounwind, !dbg !174 ; [debug line = 154:3]
  br label %28, !dbg !174                         ; [debug line = 154:3]

; <label>:28                                      ; preds = %17
  %29 = load i32* %i, align 4, !dbg !175          ; [#uses=1 type=i32] [debug line = 152:49]
  %30 = add i32 %29, 1, !dbg !175                 ; [#uses=1 type=i32] [debug line = 152:49]
  store i32 %30, i32* %i, align 4, !dbg !175      ; [debug line = 152:49]
  br label %14, !dbg !175                         ; [debug line = 152:49]

; <label>:31                                      ; preds = %14
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0)) nounwind, !dbg !176 ; [debug line = 156:2]
  br label %32, !dbg !176                         ; [debug line = 156:2]

; <label>:32                                      ; preds = %31
  %33 = load i32* %lastLine, align 4, !dbg !177   ; [#uses=1 type=i32] [debug line = 151:34]
  %34 = add i32 %33, 1, !dbg !177                 ; [#uses=1 type=i32] [debug line = 151:34]
  store i32 %34, i32* %lastLine, align 4, !dbg !177 ; [debug line = 151:34]
  br label %9, !dbg !177                          ; [debug line = 151:34]

; <label>:35                                      ; preds = %9
  call void @llvm.dbg.declare(metadata !{i32* %i1}, metadata !178), !dbg !180 ; [debug line = 157:20] [debug variable = i]
  store i32 0, i32* %i1, align 4, !dbg !181       ; [debug line = 157:25]
  br label %36, !dbg !181                         ; [debug line = 157:25]

; <label>:36                                      ; preds = %109, %35
  %37 = load i32* %i1, align 4, !dbg !181         ; [#uses=1 type=i32] [debug line = 157:25]
  %38 = icmp ult i32 %37, 1080, !dbg !181         ; [#uses=1 type=i1] [debug line = 157:25]
  br i1 %38, label %39, label %112, !dbg !181     ; [debug line = 157:25]

; <label>:39                                      ; preds = %36
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str9, i32 0, i32 0)) nounwind, !dbg !182 ; [debug line = 157:43]
  call void (...)* @_ssdm_Unroll(i32 1, i32 0, i32 10, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !184 ; [debug line = 158:1]
  call void @llvm.dbg.declare(metadata !{i32* %j}, metadata !185), !dbg !187 ; [debug line = 159:20] [debug variable = j]
  store i32 0, i32* %j, align 4, !dbg !188        ; [debug line = 159:25]
  br label %40, !dbg !188                         ; [debug line = 159:25]

; <label>:40                                      ; preds = %96, %39
  %41 = load i32* %j, align 4, !dbg !188          ; [#uses=1 type=i32] [debug line = 159:25]
  %42 = icmp ult i32 %41, 1920, !dbg !188         ; [#uses=1 type=i1] [debug line = 159:25]
  br i1 %42, label %43, label %99, !dbg !188      ; [debug line = 159:25]

; <label>:43                                      ; preds = %40
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str10, i32 0, i32 0)) nounwind, !dbg !189 ; [debug line = 159:43]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !191 ; [debug line = 160:1]
  call void (...)* @_ssdm_SpecLoopFlatten(i32 1, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !192 ; [debug line = 161:1]
  %44 = load i32* %i1, align 4, !dbg !193         ; [#uses=1 type=i32] [debug line = 162:2]
  %45 = icmp eq i32 %44, 0, !dbg !193             ; [#uses=1 type=i1] [debug line = 162:2]
  br i1 %45, label %55, label %46, !dbg !193      ; [debug line = 162:2]

; <label>:46                                      ; preds = %43
  %47 = load i32* %i1, align 4, !dbg !193         ; [#uses=1 type=i32] [debug line = 162:2]
  %48 = icmp eq i32 %47, 1079, !dbg !193          ; [#uses=1 type=i1] [debug line = 162:2]
  br i1 %48, label %55, label %49, !dbg !193      ; [debug line = 162:2]

; <label>:49                                      ; preds = %46
  %50 = load i32* %j, align 4, !dbg !193          ; [#uses=1 type=i32] [debug line = 162:2]
  %51 = icmp eq i32 %50, 0, !dbg !193             ; [#uses=1 type=i1] [debug line = 162:2]
  br i1 %51, label %55, label %52, !dbg !193      ; [debug line = 162:2]

; <label>:52                                      ; preds = %49
  %53 = load i32* %j, align 4, !dbg !193          ; [#uses=1 type=i32] [debug line = 162:2]
  %54 = icmp eq i32 %53, 1919, !dbg !193          ; [#uses=1 type=i1] [debug line = 162:2]
  br i1 %54, label %55, label %61, !dbg !193      ; [debug line = 162:2]

; <label>:55                                      ; preds = %52, %49, %46, %43
  %56 = load i32* %j, align 4, !dbg !194          ; [#uses=1 type=i32] [debug line = 163:5]
  %57 = load i32* %i1, align 4, !dbg !194         ; [#uses=1 type=i32] [debug line = 163:5]
  %58 = load [1920 x i32]** %2, align 4, !dbg !194 ; [#uses=1 type=[1920 x i32]*] [debug line = 163:5]
  %59 = getelementptr inbounds [1920 x i32]* %58, i32 %57, !dbg !194 ; [#uses=1 type=[1920 x i32]*] [debug line = 163:5]
  %60 = getelementptr inbounds [1920 x i32]* %59, i32 0, i32 %56, !dbg !194 ; [#uses=1 type=i32*] [debug line = 163:5]
  store i32 0, i32* %60, align 4, !dbg !194       ; [debug line = 163:5]
  br label %95, !dbg !196                         ; [debug line = 164:4]

; <label>:61                                      ; preds = %52
  call void @llvm.dbg.declare(metadata !{i32* %val}, metadata !197), !dbg !199 ; [debug line = 166:18] [debug variable = val]
  %62 = load i32* %lastLine, align 4, !dbg !200   ; [#uses=1 type=i32] [debug line = 166:38]
  %63 = sub i32 %62, 2, !dbg !200                 ; [#uses=1 type=i32] [debug line = 166:38]
  %64 = and i32 %63, 3, !dbg !200                 ; [#uses=1 type=i32] [debug line = 166:38]
  %65 = load i32* %j, align 4, !dbg !200          ; [#uses=1 type=i32] [debug line = 166:38]
  %66 = getelementptr inbounds [4 x [1920 x i8]]* %lineBuffer, i32 0, i32 0, !dbg !200 ; [#uses=1 type=[1920 x i8]*] [debug line = 166:38]
  %67 = call zeroext i8 @_Z20sobel_operator_cacheiiPA1920_h(i32 %64, i32 %65, [1920 x i8]* %66), !dbg !200 ; [#uses=1 type=i8] [debug line = 166:38]
  %68 = zext i8 %67 to i32, !dbg !200             ; [#uses=1 type=i32] [debug line = 166:38]
  store i32 %68, i32* %val, align 4, !dbg !200    ; [debug line = 166:38]
  %69 = load i32* %val, align 4, !dbg !201        ; [#uses=1 type=i32] [debug line = 167:5]
  %70 = shl i32 %69, 24, !dbg !201                ; [#uses=1 type=i32] [debug line = 167:5]
  %71 = load i32* %val, align 4, !dbg !201        ; [#uses=1 type=i32] [debug line = 167:5]
  %72 = shl i32 %71, 16, !dbg !201                ; [#uses=1 type=i32] [debug line = 167:5]
  %73 = or i32 %70, %72, !dbg !201                ; [#uses=1 type=i32] [debug line = 167:5]
  %74 = load i32* %val, align 4, !dbg !201        ; [#uses=1 type=i32] [debug line = 167:5]
  %75 = shl i32 %74, 8, !dbg !201                 ; [#uses=1 type=i32] [debug line = 167:5]
  %76 = or i32 %73, %75, !dbg !201                ; [#uses=1 type=i32] [debug line = 167:5]
  %77 = load i32* %val, align 4, !dbg !201        ; [#uses=1 type=i32] [debug line = 167:5]
  %78 = or i32 %76, %77, !dbg !201                ; [#uses=1 type=i32] [debug line = 167:5]
  %79 = load i32* %j, align 4, !dbg !201          ; [#uses=1 type=i32] [debug line = 167:5]
  %80 = load i32* %i1, align 4, !dbg !201         ; [#uses=1 type=i32] [debug line = 167:5]
  %81 = load [1920 x i32]** %2, align 4, !dbg !201 ; [#uses=1 type=[1920 x i32]*] [debug line = 167:5]
  %82 = getelementptr inbounds [1920 x i32]* %81, i32 %80, !dbg !201 ; [#uses=1 type=[1920 x i32]*] [debug line = 167:5]
  %83 = getelementptr inbounds [1920 x i32]* %82, i32 0, i32 %79, !dbg !201 ; [#uses=1 type=i32*] [debug line = 167:5]
  store i32 %78, i32* %83, align 4, !dbg !201     ; [debug line = 167:5]
  %84 = load i32* %j, align 4, !dbg !202          ; [#uses=1 type=i32] [debug line = 168:5]
  %85 = load i32* %lastLine, align 4, !dbg !202   ; [#uses=1 type=i32] [debug line = 168:5]
  %86 = load [1920 x i8]** %1, align 4, !dbg !202 ; [#uses=1 type=[1920 x i8]*] [debug line = 168:5]
  %87 = getelementptr inbounds [1920 x i8]* %86, i32 %85, !dbg !202 ; [#uses=1 type=[1920 x i8]*] [debug line = 168:5]
  %88 = getelementptr inbounds [1920 x i8]* %87, i32 0, i32 %84, !dbg !202 ; [#uses=1 type=i8*] [debug line = 168:5]
  %89 = load i8* %88, align 1, !dbg !202          ; [#uses=1 type=i8] [debug line = 168:5]
  %90 = load i32* %j, align 4, !dbg !202          ; [#uses=1 type=i32] [debug line = 168:5]
  %91 = load i32* %lastLine, align 4, !dbg !202   ; [#uses=1 type=i32] [debug line = 168:5]
  %92 = and i32 %91, 3, !dbg !202                 ; [#uses=1 type=i32] [debug line = 168:5]
  %93 = getelementptr inbounds [4 x [1920 x i8]]* %lineBuffer, i32 0, i32 %92, !dbg !202 ; [#uses=1 type=[1920 x i8]*] [debug line = 168:5]
  %94 = getelementptr inbounds [1920 x i8]* %93, i32 0, i32 %90, !dbg !202 ; [#uses=1 type=i8*] [debug line = 168:5]
  store i8 %89, i8* %94, align 1, !dbg !202       ; [debug line = 168:5]
  br label %95

; <label>:95                                      ; preds = %61, %55
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str10, i32 0, i32 0)) nounwind, !dbg !203 ; [debug line = 170:3]
  br label %96, !dbg !203                         ; [debug line = 170:3]

; <label>:96                                      ; preds = %95
  %97 = load i32* %j, align 4, !dbg !204          ; [#uses=1 type=i32] [debug line = 159:37]
  %98 = add i32 %97, 1, !dbg !204                 ; [#uses=1 type=i32] [debug line = 159:37]
  store i32 %98, i32* %j, align 4, !dbg !204      ; [debug line = 159:37]
  br label %40, !dbg !204                         ; [debug line = 159:37]

; <label>:99                                      ; preds = %40
  %100 = load i32* %i1, align 4, !dbg !205        ; [#uses=1 type=i32] [debug line = 171:3]
  %101 = icmp ne i32 %100, 0, !dbg !205           ; [#uses=1 type=i1] [debug line = 171:3]
  br i1 %101, label %102, label %108, !dbg !205   ; [debug line = 171:3]

; <label>:102                                     ; preds = %99
  %103 = load i32* %i1, align 4, !dbg !205        ; [#uses=1 type=i32] [debug line = 171:3]
  %104 = icmp ne i32 %103, 1079, !dbg !205        ; [#uses=1 type=i1] [debug line = 171:3]
  br i1 %104, label %105, label %108, !dbg !205   ; [debug line = 171:3]

; <label>:105                                     ; preds = %102
  %106 = load i32* %lastLine, align 4, !dbg !206  ; [#uses=1 type=i32] [debug line = 172:4]
  %107 = add i32 %106, 1, !dbg !206               ; [#uses=1 type=i32] [debug line = 172:4]
  store i32 %107, i32* %lastLine, align 4, !dbg !206 ; [debug line = 172:4]
  br label %108, !dbg !208                        ; [debug line = 173:3]

; <label>:108                                     ; preds = %105, %102, %99
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str9, i32 0, i32 0)) nounwind, !dbg !209 ; [debug line = 174:2]
  br label %109, !dbg !209                        ; [debug line = 174:2]

; <label>:109                                     ; preds = %108
  %110 = load i32* %i1, align 4, !dbg !210        ; [#uses=1 type=i32] [debug line = 157:37]
  %111 = add i32 %110, 1, !dbg !210               ; [#uses=1 type=i32] [debug line = 157:37]
  store i32 %111, i32* %i1, align 4, !dbg !210    ; [debug line = 157:37]
  br label %36, !dbg !210                         ; [debug line = 157:37]

; <label>:112                                     ; preds = %36
  ret void, !dbg !211                             ; [debug line = 207:1]
}

; [#uses=3]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=1]
declare void @_ssdm_SpecArrayPartition(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=1]
declare void @_ssdm_SpecLoopFlatten(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!37, !44, !46}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 4, metadata !"C:/TEMP/Labo4/SobelLab4/solution1/.autopilot/db/Sobel.pragma.2.cpp", metadata !"C:\5CTEMP\5CLabo4", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !26} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !19, metadata !20}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"sobel_operator", metadata !"sobel_operator", metadata !"_Z14sobel_operatoriiPA1920_h", metadata !6, i32 20, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i8 (i32, i32, [1920 x i8]*)* @_Z14sobel_operatoriiPA1920_h, null, null, metadata !17, i32 21} ; [ DW_TAG_subprogram ]
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
!19 = metadata !{i32 786478, i32 0, metadata !6, metadata !"sobel_operator_cache", metadata !"sobel_operator_cache", metadata !"_Z20sobel_operator_cacheiiPA1920_h", metadata !6, i32 75, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i8 (i32, i32, [1920 x i8]*)* @_Z20sobel_operator_cacheiiPA1920_h, null, null, metadata !17, i32 76} ; [ DW_TAG_subprogram ]
!20 = metadata !{i32 786478, i32 0, metadata !6, metadata !"sobel_filter", metadata !"sobel_filter", metadata !"_Z12sobel_filterPA1920_hPA1920_j", metadata !6, i32 134, metadata !21, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ([1920 x i8]*, [1920 x i32]*)* @_Z12sobel_filterPA1920_hPA1920_j, null, null, metadata !17, i32 135} ; [ DW_TAG_subprogram ]
!21 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !22, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!22 = metadata !{null, metadata !13, metadata !23}
!23 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !24} ; [ DW_TAG_pointer_type ]
!24 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 61440, i64 32, i32 0, i32 0, metadata !25, metadata !15, i32 0, i32 0} ; [ DW_TAG_array_type ]
!25 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!26 = metadata !{metadata !27}
!27 = metadata !{metadata !28, metadata !34, metadata !35, metadata !36}
!28 = metadata !{i32 786484, i32 0, metadata !5, metadata !"x_op", metadata !"x_op", metadata !"", metadata !6, i32 41, metadata !29, i32 1, i32 1, [3 x [3 x i8]]* @_ZZ14sobel_operatoriiPA1920_hE4x_op} ; [ DW_TAG_variable ]
!29 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 72, i64 8, i32 0, i32 0, metadata !30, metadata !32, i32 0, i32 0} ; [ DW_TAG_array_type ]
!30 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !31} ; [ DW_TAG_const_type ]
!31 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!32 = metadata !{metadata !33, metadata !33}
!33 = metadata !{i32 786465, i64 0, i64 2}        ; [ DW_TAG_subrange_type ]
!34 = metadata !{i32 786484, i32 0, metadata !5, metadata !"y_op", metadata !"y_op", metadata !"", metadata !6, i32 45, metadata !29, i32 1, i32 1, [3 x [3 x i8]]* @_ZZ14sobel_operatoriiPA1920_hE4y_op} ; [ DW_TAG_variable ]
!35 = metadata !{i32 786484, i32 0, metadata !19, metadata !"x_op", metadata !"x_op", metadata !"", metadata !6, i32 96, metadata !29, i32 1, i32 1, [3 x [3 x i8]]* @_ZZ20sobel_operator_cacheiiPA1920_hE4x_op} ; [ DW_TAG_variable ]
!36 = metadata !{i32 786484, i32 0, metadata !19, metadata !"y_op", metadata !"y_op", metadata !"", metadata !6, i32 100, metadata !29, i32 1, i32 1, [3 x [3 x i8]]* @_ZZ20sobel_operator_cacheiiPA1920_hE4y_op} ; [ DW_TAG_variable ]
!37 = metadata !{i8 (i32, i32, [1920 x i8]*)* @_Z14sobel_operatoriiPA1920_h, metadata !38, metadata !39, metadata !40, metadata !41, metadata !42, metadata !43}
!38 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 1}
!39 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!40 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"int", metadata !"uint8_t [1920]*"}
!41 = metadata !{metadata !"kernel_arg_type_qual", metadata !"const", metadata !"const", metadata !""}
!42 = metadata !{metadata !"kernel_arg_name", metadata !"col", metadata !"row", metadata !"image"}
!43 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!44 = metadata !{i8 (i32, i32, [1920 x i8]*)* @_Z20sobel_operator_cacheiiPA1920_h, metadata !38, metadata !39, metadata !40, metadata !41, metadata !45, metadata !43}
!45 = metadata !{metadata !"kernel_arg_name", metadata !"col", metadata !"row", metadata !"cache"}
!46 = metadata !{void ([1920 x i8]*, [1920 x i32]*)* @_Z12sobel_filterPA1920_hPA1920_j, metadata !47, metadata !48, metadata !49, metadata !50, metadata !51, metadata !43}
!47 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!48 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!49 = metadata !{metadata !"kernel_arg_type", metadata !"uint8_t [1920]*", metadata !"uint [1920]*"}
!50 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!51 = metadata !{metadata !"kernel_arg_name", metadata !"inter_pix", metadata !"out_pix"}
!52 = metadata !{i32 786689, metadata !5, metadata !"col", metadata !6, i32 16777236, metadata !11, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!53 = metadata !{i32 20, i32 34, metadata !5, null}
!54 = metadata !{i32 786689, metadata !5, metadata !"row", metadata !6, i32 33554452, metadata !11, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!55 = metadata !{i32 20, i32 49, metadata !5, null}
!56 = metadata !{i32 786689, metadata !5, metadata !"image", metadata !6, i32 50331668, metadata !13, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!57 = metadata !{i32 20, i32 62, metadata !5, null}
!58 = metadata !{i32 21, i32 2, metadata !59, null}
!59 = metadata !{i32 786443, metadata !5, i32 21, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!60 = metadata !{i32 22, i32 1, metadata !59, null}
!61 = metadata !{i32 786688, metadata !59, metadata !"x_weight", metadata !6, i32 35, metadata !12, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!62 = metadata !{i32 35, i32 6, metadata !59, null}
!63 = metadata !{i32 35, i32 18, metadata !59, null}
!64 = metadata !{i32 786688, metadata !59, metadata !"y_weight", metadata !6, i32 36, metadata !12, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!65 = metadata !{i32 36, i32 6, metadata !59, null}
!66 = metadata !{i32 36, i32 18, metadata !59, null}
!67 = metadata !{i32 786688, metadata !59, metadata !"edge_weight", metadata !6, i32 38, metadata !25, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!68 = metadata !{i32 38, i32 11, metadata !59, null}
!69 = metadata !{i32 786688, metadata !59, metadata !"edge_val", metadata !6, i32 39, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!70 = metadata !{i32 39, i32 10, metadata !59, null}
!71 = metadata !{i32 44, i32 1, metadata !59, null}
!72 = metadata !{i32 48, i32 1, metadata !59, null}
!73 = metadata !{i32 786688, metadata !74, metadata !"i", metadata !6, i32 50, metadata !12, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!74 = metadata !{i32 786443, metadata !59, i32 50, i32 2, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!75 = metadata !{i32 50, i32 11, metadata !74, null}
!76 = metadata !{i32 50, i32 16, metadata !74, null}
!77 = metadata !{i32 786688, metadata !78, metadata !"j", metadata !6, i32 51, metadata !12, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!78 = metadata !{i32 786443, metadata !79, i32 51, i32 3, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!79 = metadata !{i32 786443, metadata !74, i32 50, i32 30, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!80 = metadata !{i32 51, i32 12, metadata !78, null}
!81 = metadata !{i32 51, i32 17, metadata !78, null}
!82 = metadata !{i32 53, i32 4, metadata !83, null}
!83 = metadata !{i32 786443, metadata !78, i32 51, i32 31, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!84 = metadata !{i32 57, i32 4, metadata !83, null}
!85 = metadata !{i32 59, i32 3, metadata !83, null}
!86 = metadata !{i32 51, i32 26, metadata !78, null}
!87 = metadata !{i32 60, i32 2, metadata !79, null}
!88 = metadata !{i32 50, i32 25, metadata !74, null}
!89 = metadata !{i32 62, i32 2, metadata !59, null}
!90 = metadata !{i32 64, i32 2, metadata !59, null}
!91 = metadata !{i32 67, i32 2, metadata !59, null}
!92 = metadata !{i32 68, i32 3, metadata !59, null}
!93 = metadata !{i32 69, i32 7, metadata !59, null}
!94 = metadata !{i32 70, i32 3, metadata !59, null}
!95 = metadata !{i32 72, i32 2, metadata !59, null}
!96 = metadata !{i32 786689, metadata !19, metadata !"col", metadata !6, i32 16777291, metadata !11, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!97 = metadata !{i32 75, i32 40, metadata !19, null}
!98 = metadata !{i32 786689, metadata !19, metadata !"row", metadata !6, i32 33554507, metadata !11, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!99 = metadata !{i32 75, i32 55, metadata !19, null}
!100 = metadata !{i32 786689, metadata !19, metadata !"cache", metadata !6, i32 50331723, metadata !13, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!101 = metadata !{i32 75, i32 68, metadata !19, null}
!102 = metadata !{i32 76, i32 2, metadata !103, null}
!103 = metadata !{i32 786443, metadata !19, i32 76, i32 1, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!104 = metadata !{i32 77, i32 1, metadata !103, null}
!105 = metadata !{i32 786688, metadata !103, metadata !"x_weight", metadata !6, i32 90, metadata !12, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!106 = metadata !{i32 90, i32 6, metadata !103, null}
!107 = metadata !{i32 90, i32 18, metadata !103, null}
!108 = metadata !{i32 786688, metadata !103, metadata !"y_weight", metadata !6, i32 91, metadata !12, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!109 = metadata !{i32 91, i32 6, metadata !103, null}
!110 = metadata !{i32 91, i32 18, metadata !103, null}
!111 = metadata !{i32 786688, metadata !103, metadata !"edge_weight", metadata !6, i32 93, metadata !25, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!112 = metadata !{i32 93, i32 11, metadata !103, null}
!113 = metadata !{i32 786688, metadata !103, metadata !"edge_val", metadata !6, i32 94, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!114 = metadata !{i32 94, i32 10, metadata !103, null}
!115 = metadata !{i32 99, i32 1, metadata !103, null}
!116 = metadata !{i32 103, i32 1, metadata !103, null}
!117 = metadata !{i32 786688, metadata !118, metadata !"i", metadata !6, i32 106, metadata !12, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!118 = metadata !{i32 786443, metadata !103, i32 106, i32 11, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!119 = metadata !{i32 106, i32 20, metadata !118, null}
!120 = metadata !{i32 106, i32 25, metadata !118, null}
!121 = metadata !{i32 106, i32 40, metadata !122, null}
!122 = metadata !{i32 786443, metadata !118, i32 106, i32 39, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!123 = metadata !{i32 107, i32 1, metadata !122, null}
!124 = metadata !{i32 786688, metadata !125, metadata !"j", metadata !6, i32 108, metadata !12, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!125 = metadata !{i32 786443, metadata !122, i32 108, i32 11, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!126 = metadata !{i32 108, i32 20, metadata !125, null}
!127 = metadata !{i32 108, i32 25, metadata !125, null}
!128 = metadata !{i32 108, i32 40, metadata !129, null}
!129 = metadata !{i32 786443, metadata !125, i32 108, i32 39, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!130 = metadata !{i32 109, i32 1, metadata !129, null}
!131 = metadata !{i32 111, i32 4, metadata !129, null}
!132 = metadata !{i32 115, i32 4, metadata !129, null}
!133 = metadata !{i32 117, i32 3, metadata !129, null}
!134 = metadata !{i32 108, i32 34, metadata !125, null}
!135 = metadata !{i32 118, i32 2, metadata !122, null}
!136 = metadata !{i32 106, i32 34, metadata !118, null}
!137 = metadata !{i32 120, i32 2, metadata !103, null}
!138 = metadata !{i32 122, i32 2, metadata !103, null}
!139 = metadata !{i32 125, i32 2, metadata !103, null}
!140 = metadata !{i32 126, i32 3, metadata !103, null}
!141 = metadata !{i32 127, i32 7, metadata !103, null}
!142 = metadata !{i32 128, i32 3, metadata !103, null}
!143 = metadata !{i32 130, i32 2, metadata !103, null}
!144 = metadata !{i32 786689, metadata !20, metadata !"inter_pix", metadata !6, i32 16777350, metadata !13, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!145 = metadata !{i32 134, i32 27, metadata !20, null}
!146 = metadata !{i32 786689, metadata !20, metadata !"out_pix", metadata !6, i32 33554566, metadata !23, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!147 = metadata !{i32 134, i32 59, metadata !20, null}
!148 = metadata !{i32 135, i32 2, metadata !149, null}
!149 = metadata !{i32 786443, metadata !20, i32 135, i32 1, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!150 = metadata !{i32 135, i32 39, metadata !149, null}
!151 = metadata !{i32 143, i32 1, metadata !149, null}
!152 = metadata !{i32 144, i32 1, metadata !149, null}
!153 = metadata !{i32 145, i32 1, metadata !149, null}
!154 = metadata !{i32 786688, metadata !149, metadata !"lineBuffer", metadata !6, i32 148, metadata !155, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!155 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 61440, i64 8, i32 0, i32 0, metadata !9, metadata !156, i32 0, i32 0} ; [ DW_TAG_array_type ]
!156 = metadata !{metadata !157, metadata !16}
!157 = metadata !{i32 786465, i64 0, i64 3}       ; [ DW_TAG_subrange_type ]
!158 = metadata !{i32 148, i32 10, metadata !149, null}
!159 = metadata !{i32 149, i32 1, metadata !149, null}
!160 = metadata !{i32 786688, metadata !149, metadata !"lastLine", metadata !6, i32 150, metadata !25, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!161 = metadata !{i32 150, i32 15, metadata !149, null}
!162 = metadata !{i32 150, i32 27, metadata !149, null}
!163 = metadata !{i32 151, i32 14, metadata !164, null}
!164 = metadata !{i32 786443, metadata !149, i32 151, i32 14, metadata !6, i32 11} ; [ DW_TAG_lexical_block ]
!165 = metadata !{i32 151, i32 46, metadata !166, null}
!166 = metadata !{i32 786443, metadata !164, i32 151, i32 45, metadata !6, i32 12} ; [ DW_TAG_lexical_block ]
!167 = metadata !{i32 786688, metadata !168, metadata !"i", metadata !6, i32 152, metadata !25, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!168 = metadata !{i32 786443, metadata !166, i32 152, i32 14, metadata !6, i32 13} ; [ DW_TAG_lexical_block ]
!169 = metadata !{i32 152, i32 32, metadata !168, null}
!170 = metadata !{i32 152, i32 37, metadata !168, null}
!171 = metadata !{i32 152, i32 54, metadata !172, null}
!172 = metadata !{i32 786443, metadata !168, i32 152, i32 53, metadata !6, i32 14} ; [ DW_TAG_lexical_block ]
!173 = metadata !{i32 153, i32 4, metadata !172, null}
!174 = metadata !{i32 154, i32 3, metadata !172, null}
!175 = metadata !{i32 152, i32 49, metadata !168, null}
!176 = metadata !{i32 156, i32 2, metadata !166, null}
!177 = metadata !{i32 151, i32 34, metadata !164, null}
!178 = metadata !{i32 786688, metadata !179, metadata !"i", metadata !6, i32 157, metadata !25, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!179 = metadata !{i32 786443, metadata !149, i32 157, i32 2, metadata !6, i32 15} ; [ DW_TAG_lexical_block ]
!180 = metadata !{i32 157, i32 20, metadata !179, null}
!181 = metadata !{i32 157, i32 25, metadata !179, null}
!182 = metadata !{i32 157, i32 43, metadata !183, null}
!183 = metadata !{i32 786443, metadata !179, i32 157, i32 42, metadata !6, i32 16} ; [ DW_TAG_lexical_block ]
!184 = metadata !{i32 158, i32 1, metadata !183, null}
!185 = metadata !{i32 786688, metadata !186, metadata !"j", metadata !6, i32 159, metadata !25, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!186 = metadata !{i32 786443, metadata !183, i32 159, i32 2, metadata !6, i32 17} ; [ DW_TAG_lexical_block ]
!187 = metadata !{i32 159, i32 20, metadata !186, null}
!188 = metadata !{i32 159, i32 25, metadata !186, null}
!189 = metadata !{i32 159, i32 43, metadata !190, null}
!190 = metadata !{i32 786443, metadata !186, i32 159, i32 42, metadata !6, i32 18} ; [ DW_TAG_lexical_block ]
!191 = metadata !{i32 160, i32 1, metadata !190, null}
!192 = metadata !{i32 161, i32 1, metadata !190, null}
!193 = metadata !{i32 162, i32 2, metadata !190, null}
!194 = metadata !{i32 163, i32 5, metadata !195, null}
!195 = metadata !{i32 786443, metadata !190, i32 162, i32 50, metadata !6, i32 19} ; [ DW_TAG_lexical_block ]
!196 = metadata !{i32 164, i32 4, metadata !195, null}
!197 = metadata !{i32 786688, metadata !198, metadata !"val", metadata !6, i32 166, metadata !25, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!198 = metadata !{i32 786443, metadata !190, i32 165, i32 9, metadata !6, i32 20} ; [ DW_TAG_lexical_block ]
!199 = metadata !{i32 166, i32 18, metadata !198, null}
!200 = metadata !{i32 166, i32 38, metadata !198, null}
!201 = metadata !{i32 167, i32 5, metadata !198, null}
!202 = metadata !{i32 168, i32 5, metadata !198, null}
!203 = metadata !{i32 170, i32 3, metadata !190, null}
!204 = metadata !{i32 159, i32 37, metadata !186, null}
!205 = metadata !{i32 171, i32 3, metadata !183, null}
!206 = metadata !{i32 172, i32 4, metadata !207, null}
!207 = metadata !{i32 786443, metadata !183, i32 171, i32 27, metadata !6, i32 21} ; [ DW_TAG_lexical_block ]
!208 = metadata !{i32 173, i32 3, metadata !207, null}
!209 = metadata !{i32 174, i32 2, metadata !183, null}
!210 = metadata !{i32 157, i32 37, metadata !179, null}
!211 = metadata !{i32 207, i32 1, metadata !149, null}
