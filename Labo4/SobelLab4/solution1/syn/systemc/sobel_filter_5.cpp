#include "sobel_filter.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sobel_filter::thread_tmp_310_fu_5705_p1() {
    tmp_310_fu_5705_p1 = x_weight_9_2_fu_5671_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_311_fu_5727_p1() {
    tmp_311_fu_5727_p1 = y_weight_9_2_2_fu_5715_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_31_0_1_2_cast_fu_1889_p1() {
    tmp_31_0_1_2_cast_fu_1889_p1 = esl_zext<11,9>(tmp_31_0_1_2_fu_1882_p3.read());
}

void sobel_filter::thread_tmp_31_0_1_2_fu_1882_p3() {
    tmp_31_0_1_2_fu_1882_p3 = esl_concat<8,1>(tmp_17_reg_6062.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_31_1_1_2_cast_fu_2314_p1() {
    tmp_31_1_1_2_cast_fu_2314_p1 = esl_zext<11,9>(tmp_31_1_1_2_fu_2306_p3.read());
}

void sobel_filter::thread_tmp_31_1_1_2_fu_2306_p3() {
    tmp_31_1_1_2_fu_2306_p3 = esl_concat<8,1>(reg_1441.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_31_2_1_2_cast_fu_2733_p1() {
    tmp_31_2_1_2_cast_fu_2733_p1 = esl_zext<11,9>(tmp_31_2_1_2_fu_2725_p3.read());
}

void sobel_filter::thread_tmp_31_2_1_2_fu_2725_p3() {
    tmp_31_2_1_2_fu_2725_p3 = esl_concat<8,1>(reg_1445.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_31_3_1_2_cast_fu_3152_p1() {
    tmp_31_3_1_2_cast_fu_3152_p1 = esl_zext<11,9>(tmp_31_3_1_2_fu_3144_p3.read());
}

void sobel_filter::thread_tmp_31_3_1_2_fu_3144_p3() {
    tmp_31_3_1_2_fu_3144_p3 = esl_concat<8,1>(reg_1449.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_31_4_1_2_cast_fu_3571_p1() {
    tmp_31_4_1_2_cast_fu_3571_p1 = esl_zext<11,9>(tmp_31_4_1_2_fu_3563_p3.read());
}

void sobel_filter::thread_tmp_31_4_1_2_fu_3563_p3() {
    tmp_31_4_1_2_fu_3563_p3 = esl_concat<8,1>(reg_1453.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_31_5_1_2_cast_fu_3990_p1() {
    tmp_31_5_1_2_cast_fu_3990_p1 = esl_zext<11,9>(tmp_31_5_1_2_fu_3982_p3.read());
}

void sobel_filter::thread_tmp_31_5_1_2_fu_3982_p3() {
    tmp_31_5_1_2_fu_3982_p3 = esl_concat<8,1>(reg_1441.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_31_6_1_2_cast_fu_4409_p1() {
    tmp_31_6_1_2_cast_fu_4409_p1 = esl_zext<11,9>(tmp_31_6_1_2_fu_4401_p3.read());
}

void sobel_filter::thread_tmp_31_6_1_2_fu_4401_p3() {
    tmp_31_6_1_2_fu_4401_p3 = esl_concat<8,1>(reg_1445.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_31_7_1_2_cast_fu_4828_p1() {
    tmp_31_7_1_2_cast_fu_4828_p1 = esl_zext<11,9>(tmp_31_7_1_2_fu_4820_p3.read());
}

void sobel_filter::thread_tmp_31_7_1_2_fu_4820_p3() {
    tmp_31_7_1_2_fu_4820_p3 = esl_concat<8,1>(reg_1449.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_31_8_1_2_cast_fu_5247_p1() {
    tmp_31_8_1_2_cast_fu_5247_p1 = esl_zext<11,9>(tmp_31_8_1_2_fu_5239_p3.read());
}

void sobel_filter::thread_tmp_31_8_1_2_fu_5239_p3() {
    tmp_31_8_1_2_fu_5239_p3 = esl_concat<8,1>(reg_1453.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_31_9_1_2_cast_fu_5644_p1() {
    tmp_31_9_1_2_cast_fu_5644_p1 = esl_zext<11,9>(tmp_31_9_1_2_fu_5636_p3.read());
}

void sobel_filter::thread_tmp_31_9_1_2_fu_5636_p3() {
    tmp_31_9_1_2_fu_5636_p3 = esl_concat<8,1>(reg_1441.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_31_fu_2006_p2() {
    tmp_31_fu_2006_p2 = (!tmp_26_fu_1999_p3.read().is_01() || !tmp_23_fu_1982_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_26_fu_1999_p3.read()) + sc_biguint<8>(tmp_23_fu_1982_p3.read()));
}

void sobel_filter::thread_tmp_32_fu_2017_p2() {
    tmp_32_fu_2017_p2 = (!tmp_31_reg_6105.read().is_01() || !ap_const_lv8_37.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_31_reg_6105.read()) < sc_biguint<8>(ap_const_lv8_37));
}

void sobel_filter::thread_tmp_33_0_0_1_cast_fu_1858_p1() {
    tmp_33_0_0_1_cast_fu_1858_p1 = esl_zext<10,9>(tmp_33_0_0_1_fu_1851_p3.read());
}

void sobel_filter::thread_tmp_33_0_0_1_fu_1851_p3() {
    tmp_33_0_0_1_fu_1851_p3 = esl_concat<8,1>(tmp_14_reg_6042.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_33_1_0_1_cast_fu_2281_p1() {
    tmp_33_1_0_1_cast_fu_2281_p1 = esl_zext<10,9>(tmp_33_1_0_1_fu_2273_p3.read());
}

void sobel_filter::thread_tmp_33_1_0_1_fu_2273_p3() {
    tmp_33_1_0_1_fu_2273_p3 = esl_concat<8,1>(reg_1357.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_33_2_0_1_cast_fu_2700_p1() {
    tmp_33_2_0_1_cast_fu_2700_p1 = esl_zext<10,9>(tmp_33_2_0_1_fu_2692_p3.read());
}

void sobel_filter::thread_tmp_33_2_0_1_fu_2692_p3() {
    tmp_33_2_0_1_fu_2692_p3 = esl_concat<8,1>(reg_1365.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_33_3_0_1_cast_fu_3119_p1() {
    tmp_33_3_0_1_cast_fu_3119_p1 = esl_zext<10,9>(tmp_33_3_0_1_fu_3111_p3.read());
}

void sobel_filter::thread_tmp_33_3_0_1_fu_3111_p3() {
    tmp_33_3_0_1_fu_3111_p3 = esl_concat<8,1>(reg_1361.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_33_4_0_1_cast_fu_3538_p1() {
    tmp_33_4_0_1_cast_fu_3538_p1 = esl_zext<10,9>(tmp_33_4_0_1_fu_3530_p3.read());
}

void sobel_filter::thread_tmp_33_4_0_1_fu_3530_p3() {
    tmp_33_4_0_1_fu_3530_p3 = esl_concat<8,1>(reg_1373.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_33_5_0_1_cast_fu_3957_p1() {
    tmp_33_5_0_1_cast_fu_3957_p1 = esl_zext<10,9>(tmp_33_5_0_1_fu_3949_p3.read());
}

void sobel_filter::thread_tmp_33_5_0_1_fu_3949_p3() {
    tmp_33_5_0_1_fu_3949_p3 = esl_concat<8,1>(reg_1357.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_33_6_0_1_cast_fu_4376_p1() {
    tmp_33_6_0_1_cast_fu_4376_p1 = esl_zext<10,9>(tmp_33_6_0_1_fu_4368_p3.read());
}

void sobel_filter::thread_tmp_33_6_0_1_fu_4368_p3() {
    tmp_33_6_0_1_fu_4368_p3 = esl_concat<8,1>(reg_1365.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_33_7_0_1_cast_fu_4795_p1() {
    tmp_33_7_0_1_cast_fu_4795_p1 = esl_zext<10,9>(tmp_33_7_0_1_fu_4787_p3.read());
}

void sobel_filter::thread_tmp_33_7_0_1_fu_4787_p3() {
    tmp_33_7_0_1_fu_4787_p3 = esl_concat<8,1>(reg_1361.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_33_8_0_1_cast_fu_5214_p1() {
    tmp_33_8_0_1_cast_fu_5214_p1 = esl_zext<10,9>(tmp_33_8_0_1_fu_5206_p3.read());
}

void sobel_filter::thread_tmp_33_8_0_1_fu_5206_p3() {
    tmp_33_8_0_1_fu_5206_p3 = esl_concat<8,1>(reg_1373.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_33_9_0_1_cast_fu_5611_p1() {
    tmp_33_9_0_1_cast_fu_5611_p1 = esl_zext<10,9>(tmp_33_9_0_1_fu_5603_p3.read());
}

void sobel_filter::thread_tmp_33_9_0_1_fu_5603_p3() {
    tmp_33_9_0_1_fu_5603_p3 = esl_concat<8,1>(reg_1357.read(), ap_const_lv1_0);
}

void sobel_filter::thread_tmp_33_fu_2022_p2() {
    tmp_33_fu_2022_p2 = (!tmp_31_reg_6105.read().is_01() || !ap_const_lv8_9B.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_31_reg_6105.read()) > sc_biguint<8>(ap_const_lv8_9B));
}

void sobel_filter::thread_tmp_34_fu_2035_p2() {
    tmp_34_fu_2035_p2 = (tmp_32_fu_2017_p2.read() | tmp_33_fu_2022_p2.read());
}

void sobel_filter::thread_tmp_35_fu_1513_p1() {
    tmp_35_fu_1513_p1 = esl_sext<32,14>(tmp_24_fu_1495_p2.read());
}

void sobel_filter::thread_tmp_36_fu_1517_p2() {
    tmp_36_fu_1517_p2 = (!tmp_35_fu_1513_p1.read().is_01() || !inter_pix_read_reg_5834.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_35_fu_1513_p1.read()) + sc_biguint<32>(inter_pix_read_reg_5834.read()));
}

void sobel_filter::thread_tmp_37_fu_1547_p2() {
    tmp_37_fu_1547_p2 = (!ap_const_lv32_B.is_01())? sc_lv<32>(): lastLine_1_reg_1144.read() << (unsigned short)ap_const_lv32_B.to_uint();
}

void sobel_filter::thread_tmp_38_fu_2049_p5() {
    tmp_38_fu_2049_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(edge_val_1_i_reg_6112.read(), edge_val_1_i_reg_6112.read()), edge_val_1_i_reg_6112.read()), edge_val_1_i_reg_6112.read());
}

void sobel_filter::thread_tmp_44_fu_1553_p2() {
    tmp_44_fu_1553_p2 = (!ap_const_lv32_7.is_01())? sc_lv<32>(): lastLine_1_reg_1144.read() << (unsigned short)ap_const_lv32_7.to_uint();
}

void sobel_filter::thread_tmp_45_fu_2391_p2() {
    tmp_45_fu_2391_p2 = (!tmp_214_fu_2375_p1.read().is_01() || !reg_1445.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_214_fu_2375_p1.read()) + sc_biguint<8>(reg_1445.read()));
}

void sobel_filter::thread_tmp_46_fu_2406_p2() {
    tmp_46_fu_2406_p2 = (!ap_const_lv8_0.is_01() || !tmp_45_reg_6293.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_45_reg_6293.read()));
}

void sobel_filter::thread_tmp_47_fu_2411_p3() {
    tmp_47_fu_2411_p3 = (!tmp_9_1_fu_2401_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_9_1_fu_2401_p2.read()[0].to_bool())? tmp_45_reg_6293.read(): tmp_46_fu_2406_p2.read());
}

void sobel_filter::thread_tmp_48_fu_1559_p2() {
    tmp_48_fu_1559_p2 = (!tmp_37_fu_1547_p2.read().is_01() || !tmp_44_fu_1553_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_37_fu_1547_p2.read()) - sc_biguint<32>(tmp_44_fu_1553_p2.read()));
}

void sobel_filter::thread_tmp_49_fu_2423_p2() {
    tmp_49_fu_2423_p2 = (!ap_const_lv8_0.is_01() || !tmp_215_reg_6299.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_215_reg_6299.read()));
}

void sobel_filter::thread_tmp_4_9_fu_5483_p2() {
    tmp_4_9_fu_5483_p2 = (!i_2_8_fu_5443_p2.read().is_01() || !ap_const_lv11_437.is_01())? sc_lv<1>(): sc_lv<1>(i_2_8_fu_5443_p2.read() == ap_const_lv11_437);
}

void sobel_filter::thread_tmp_50_fu_2428_p3() {
    tmp_50_fu_2428_p3 = (!tmp_12_1_fu_2418_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_12_1_fu_2418_p2.read()[0].to_bool())? tmp_215_reg_6299.read(): tmp_49_fu_2423_p2.read());
}

void sobel_filter::thread_tmp_54_fu_2464_p2() {
    tmp_54_fu_2464_p2 = (tmp_16_1_fu_2446_p2.read() | tmp_20_1_fu_2451_p2.read());
}

void sobel_filter::thread_tmp_55_fu_1565_p3() {
    tmp_55_fu_1565_p3 = esl_concat<11,11>(i1_reg_1156.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_58_fu_1577_p3() {
    tmp_58_fu_1577_p3 = esl_concat<11,7>(i1_reg_1156.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_66_fu_1589_p2() {
    tmp_66_fu_1589_p2 = (!p_shl22_cast_fu_1573_p1.read().is_01() || !p_shl23_cast_fu_1585_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(p_shl22_cast_fu_1573_p1.read()) - sc_biguint<23>(p_shl23_cast_fu_1585_p1.read()));
}

void sobel_filter::thread_tmp_67_fu_2810_p2() {
    tmp_67_fu_2810_p2 = (!tmp_227_fu_2794_p1.read().is_01() || !reg_1449.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_227_fu_2794_p1.read()) + sc_biguint<8>(reg_1449.read()));
}

void sobel_filter::thread_tmp_68_fu_2825_p2() {
    tmp_68_fu_2825_p2 = (!ap_const_lv8_0.is_01() || !tmp_67_reg_6452.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_67_reg_6452.read()));
}

void sobel_filter::thread_tmp_69_fu_2830_p3() {
    tmp_69_fu_2830_p3 = (!tmp_9_2_fu_2820_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_9_2_fu_2820_p2.read()[0].to_bool())? tmp_67_reg_6452.read(): tmp_68_fu_2825_p2.read());
}

void sobel_filter::thread_tmp_6_fu_1507_p2() {
    tmp_6_fu_1507_p2 = (!lastLine_reg_1121.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(lastLine_reg_1121.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void sobel_filter::thread_tmp_70_fu_1611_p1() {
    tmp_70_fu_1611_p1 = lastLine_1_reg_1144.read().range(2-1, 0);
}

void sobel_filter::thread_tmp_71_fu_2842_p2() {
    tmp_71_fu_2842_p2 = (!ap_const_lv8_0.is_01() || !tmp_228_reg_6458.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_228_reg_6458.read()));
}

void sobel_filter::thread_tmp_72_fu_2847_p3() {
    tmp_72_fu_2847_p3 = (!tmp_12_2_fu_2837_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_12_2_fu_2837_p2.read()[0].to_bool())? tmp_228_reg_6458.read(): tmp_71_fu_2842_p2.read());
}

void sobel_filter::thread_tmp_76_fu_2883_p2() {
    tmp_76_fu_2883_p2 = (tmp_16_2_fu_2865_p2.read() | tmp_20_2_fu_2870_p2.read());
}

void sobel_filter::thread_tmp_77_fu_1641_p2() {
    tmp_77_fu_1641_p2 = (!tmp_48_reg_5900.read().is_01() || !row_assign_cast_fu_1633_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_48_reg_5900.read()) + sc_biguint<32>(row_assign_cast_fu_1633_p1.read()));
}

void sobel_filter::thread_tmp_78_fu_1657_p2() {
    tmp_78_fu_1657_p2 = (!tmp_126_cast_reg_5905.read().is_01() || !row_assign_cast_cast_fu_1637_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(tmp_126_cast_reg_5905.read()) + sc_biguint<24>(row_assign_cast_cast_fu_1637_p1.read()));
}

void sobel_filter::thread_tmp_83_fu_2071_p2() {
    tmp_83_fu_2071_p2 = (!ap_const_lv32_B.is_01())? sc_lv<32>(): lastLine_2_fu_2064_p3.read() << (unsigned short)ap_const_lv32_B.to_uint();
}

void sobel_filter::thread_tmp_84_fu_3229_p2() {
    tmp_84_fu_3229_p2 = (!tmp_272_fu_3213_p1.read().is_01() || !reg_1453.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_272_fu_3213_p1.read()) + sc_biguint<8>(reg_1453.read()));
}

void sobel_filter::thread_tmp_85_fu_3244_p2() {
    tmp_85_fu_3244_p2 = (!ap_const_lv8_0.is_01() || !tmp_84_reg_6611.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_84_reg_6611.read()));
}

void sobel_filter::thread_tmp_86_fu_3249_p3() {
    tmp_86_fu_3249_p3 = (!tmp_9_3_fu_3239_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_9_3_fu_3239_p2.read()[0].to_bool())? tmp_84_reg_6611.read(): tmp_85_fu_3244_p2.read());
}

void sobel_filter::thread_tmp_87_fu_2077_p2() {
    tmp_87_fu_2077_p2 = (!ap_const_lv32_7.is_01())? sc_lv<32>(): lastLine_2_fu_2064_p3.read() << (unsigned short)ap_const_lv32_7.to_uint();
}

void sobel_filter::thread_tmp_88_fu_3261_p2() {
    tmp_88_fu_3261_p2 = (!ap_const_lv8_0.is_01() || !tmp_273_reg_6617.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_273_reg_6617.read()));
}

void sobel_filter::thread_tmp_89_fu_3266_p3() {
    tmp_89_fu_3266_p3 = (!tmp_12_3_fu_3256_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_12_3_fu_3256_p2.read()[0].to_bool())? tmp_273_reg_6617.read(): tmp_88_fu_3261_p2.read());
}

void sobel_filter::thread_tmp_8_1_fu_2203_p2() {
    tmp_8_1_fu_2203_p2 = (!row_assign_1_phi_fu_1183_p4.read().is_01() || !ap_const_lv11_780.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_1_phi_fu_1183_p4.read() == ap_const_lv11_780);
}

void sobel_filter::thread_tmp_8_2_fu_2622_p2() {
    tmp_8_2_fu_2622_p2 = (!row_assign_2_phi_fu_1194_p4.read().is_01() || !ap_const_lv11_780.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_2_phi_fu_1194_p4.read() == ap_const_lv11_780);
}

void sobel_filter::thread_tmp_8_3_fu_3041_p2() {
    tmp_8_3_fu_3041_p2 = (!row_assign_3_phi_fu_1205_p4.read().is_01() || !ap_const_lv11_780.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_3_phi_fu_1205_p4.read() == ap_const_lv11_780);
}

void sobel_filter::thread_tmp_8_4_fu_3460_p2() {
    tmp_8_4_fu_3460_p2 = (!row_assign_4_phi_fu_1216_p4.read().is_01() || !ap_const_lv11_780.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_4_phi_fu_1216_p4.read() == ap_const_lv11_780);
}

void sobel_filter::thread_tmp_8_5_fu_3879_p2() {
    tmp_8_5_fu_3879_p2 = (!row_assign_5_phi_fu_1227_p4.read().is_01() || !ap_const_lv11_780.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_5_phi_fu_1227_p4.read() == ap_const_lv11_780);
}

void sobel_filter::thread_tmp_8_6_fu_4298_p2() {
    tmp_8_6_fu_4298_p2 = (!row_assign_6_phi_fu_1238_p4.read().is_01() || !ap_const_lv11_780.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_6_phi_fu_1238_p4.read() == ap_const_lv11_780);
}

void sobel_filter::thread_tmp_8_7_fu_4717_p2() {
    tmp_8_7_fu_4717_p2 = (!row_assign_7_phi_fu_1249_p4.read().is_01() || !ap_const_lv11_780.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_7_phi_fu_1249_p4.read() == ap_const_lv11_780);
}

void sobel_filter::thread_tmp_8_8_fu_5136_p2() {
    tmp_8_8_fu_5136_p2 = (!row_assign_8_phi_fu_1260_p4.read().is_01() || !ap_const_lv11_780.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_8_phi_fu_1260_p4.read() == ap_const_lv11_780);
}

void sobel_filter::thread_tmp_8_9_fu_5533_p2() {
    tmp_8_9_fu_5533_p2 = (!row_assign_9_phi_fu_1271_p4.read().is_01() || !ap_const_lv11_780.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_9_phi_fu_1271_p4.read() == ap_const_lv11_780);
}

void sobel_filter::thread_tmp_8_fu_1677_p2() {
    tmp_8_fu_1677_p2 = (!row_assign_phi_fu_1172_p4.read().is_01() || !ap_const_lv11_780.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_phi_fu_1172_p4.read() == ap_const_lv11_780);
}

void sobel_filter::thread_tmp_96_fu_3302_p2() {
    tmp_96_fu_3302_p2 = (tmp_16_3_fu_3284_p2.read() | tmp_20_3_fu_3289_p2.read());
}

void sobel_filter::thread_tmp_97_fu_2083_p2() {
    tmp_97_fu_2083_p2 = (!tmp_83_fu_2071_p2.read().is_01() || !tmp_87_fu_2077_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_83_fu_2071_p2.read()) - sc_biguint<32>(tmp_87_fu_2077_p2.read()));
}

void sobel_filter::thread_tmp_98_fu_2089_p1() {
    tmp_98_fu_2089_p1 = lastLine_2_fu_2064_p3.read().range(12-1, 0);
}

void sobel_filter::thread_tmp_9_1_fu_2401_p2() {
    tmp_9_1_fu_2401_p2 = (!x_weight_1_2_2_reg_6283.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(x_weight_1_2_2_reg_6283.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_9_2_fu_2820_p2() {
    tmp_9_2_fu_2820_p2 = (!x_weight_2_2_2_reg_6442.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(x_weight_2_2_2_reg_6442.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_9_3_fu_3239_p2() {
    tmp_9_3_fu_3239_p2 = (!x_weight_3_2_2_reg_6601.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(x_weight_3_2_2_reg_6601.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_9_4_fu_3658_p2() {
    tmp_9_4_fu_3658_p2 = (!x_weight_4_2_2_reg_6760.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(x_weight_4_2_2_reg_6760.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_9_5_fu_4077_p2() {
    tmp_9_5_fu_4077_p2 = (!x_weight_5_2_2_reg_6919.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(x_weight_5_2_2_reg_6919.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_9_6_fu_4496_p2() {
    tmp_9_6_fu_4496_p2 = (!x_weight_6_2_2_reg_7078.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(x_weight_6_2_2_reg_7078.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_9_7_fu_4915_p2() {
    tmp_9_7_fu_4915_p2 = (!x_weight_7_2_2_reg_7237.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(x_weight_7_2_2_reg_7237.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_9_8_fu_5334_p2() {
    tmp_9_8_fu_5334_p2 = (!x_weight_8_2_2_reg_7396.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(x_weight_8_2_2_reg_7396.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_9_9_fu_5731_p2() {
    tmp_9_9_fu_5731_p2 = (!x_weight_9_2_2_reg_7565.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(x_weight_9_2_2_reg_7565.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_9_fu_1467_p1() {
    tmp_9_fu_1467_p1 = esl_zext<32,30>(out_pix3_fu_1457_p4.read());
}

void sobel_filter::thread_tmp_fu_1501_p2() {
    tmp_fu_1501_p2 = (!lastLine_reg_1121.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(lastLine_reg_1121.read() == ap_const_lv2_3);
}

void sobel_filter::thread_tmp_s_fu_1605_p2() {
    tmp_s_fu_1605_p2 = (!i1_reg_1156.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(i1_reg_1156.read() == ap_const_lv11_0);
}

void sobel_filter::thread_x_weight_0_0_2_cast_fu_1862_p1() {
    x_weight_0_0_2_cast_fu_1862_p1 = esl_sext<11,9>(x_weight_0_0_2_reg_6052.read());
}

void sobel_filter::thread_x_weight_0_0_2_fu_1787_p2() {
    x_weight_0_0_2_fu_1787_p2 = (!tmp_29_0_0_2_cast_fu_1783_p1.read().is_01() || !tmp_29_0_cast_fu_1766_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_0_0_2_cast_fu_1783_p1.read()) - sc_biguint<9>(tmp_29_0_cast_fu_1766_p1.read()));
}

void sobel_filter::thread_x_weight_0_1_1_fu_1876_p2() {
    x_weight_0_1_1_fu_1876_p2 = (!x_weight_0_0_2_cast_fu_1862_p1.read().is_01() || !p_shl1_cast_fu_1872_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(x_weight_0_0_2_cast_fu_1862_p1.read()) - sc_biguint<11>(p_shl1_cast_fu_1872_p1.read()));
}

void sobel_filter::thread_x_weight_0_1_2_fu_1893_p2() {
    x_weight_0_1_2_fu_1893_p2 = (!tmp_31_0_1_2_cast_fu_1889_p1.read().is_01() || !x_weight_0_1_1_fu_1876_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_31_0_1_2_cast_fu_1889_p1.read()) + sc_biguint<11>(x_weight_0_1_1_fu_1876_p2.read()));
}

void sobel_filter::thread_x_weight_0_2_2_fu_1951_p2() {
    x_weight_0_2_2_fu_1951_p2 = (!tmp_29_0_2_2_cast_fu_1944_p1.read().is_01() || !x_weight_0_2_fu_1915_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_29_0_2_2_cast_fu_1944_p1.read()) + sc_biguint<11>(x_weight_0_2_fu_1915_p2.read()));
}

void sobel_filter::thread_x_weight_0_2_fu_1915_p2() {
    x_weight_0_2_fu_1915_p2 = (!x_weight_0_1_2_fu_1893_p2.read().is_01() || !tmp_29_0_2_cast_fu_1912_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(x_weight_0_1_2_fu_1893_p2.read()) - sc_biguint<11>(tmp_29_0_2_cast_fu_1912_p1.read()));
}

void sobel_filter::thread_x_weight_1_0_2_cast_fu_2285_p1() {
    x_weight_1_0_2_cast_fu_2285_p1 = esl_sext<11,9>(x_weight_1_0_2_reg_6273.read());
}

void sobel_filter::thread_x_weight_1_0_2_fu_2261_p2() {
    x_weight_1_0_2_fu_2261_p2 = (!tmp_29_1_0_2_cast_fu_2257_p1.read().is_01() || !tmp_29_1_cast_fu_2253_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_1_0_2_cast_fu_2257_p1.read()) - sc_biguint<9>(tmp_29_1_cast_fu_2253_p1.read()));
}

void sobel_filter::thread_x_weight_1_1_1_fu_2300_p2() {
    x_weight_1_1_1_fu_2300_p2 = (!x_weight_1_0_2_cast_fu_2285_p1.read().is_01() || !p_shl2_cast_fu_2296_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(x_weight_1_0_2_cast_fu_2285_p1.read()) - sc_biguint<11>(p_shl2_cast_fu_2296_p1.read()));
}

void sobel_filter::thread_x_weight_1_1_2_fu_2318_p2() {
    x_weight_1_1_2_fu_2318_p2 = (!tmp_31_1_1_2_cast_fu_2314_p1.read().is_01() || !x_weight_1_1_1_fu_2300_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_31_1_1_2_cast_fu_2314_p1.read()) + sc_biguint<11>(x_weight_1_1_1_fu_2300_p2.read()));
}

void sobel_filter::thread_x_weight_1_2_2_fu_2379_p2() {
    x_weight_1_2_2_fu_2379_p2 = (!tmp_29_1_2_2_cast_fu_2371_p1.read().is_01() || !x_weight_1_2_fu_2341_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_29_1_2_2_cast_fu_2371_p1.read()) + sc_biguint<11>(x_weight_1_2_fu_2341_p2.read()));
}

void sobel_filter::thread_x_weight_1_2_fu_2341_p2() {
    x_weight_1_2_fu_2341_p2 = (!x_weight_1_1_2_fu_2318_p2.read().is_01() || !tmp_29_1_2_cast_fu_2337_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(x_weight_1_1_2_fu_2318_p2.read()) - sc_biguint<11>(tmp_29_1_2_cast_fu_2337_p1.read()));
}

void sobel_filter::thread_x_weight_2_0_2_cast_fu_2704_p1() {
    x_weight_2_0_2_cast_fu_2704_p1 = esl_sext<11,9>(x_weight_2_0_2_reg_6432.read());
}

void sobel_filter::thread_x_weight_2_0_2_fu_2680_p2() {
    x_weight_2_0_2_fu_2680_p2 = (!tmp_29_2_0_2_cast_fu_2676_p1.read().is_01() || !tmp_29_2_cast_fu_2672_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_2_0_2_cast_fu_2676_p1.read()) - sc_biguint<9>(tmp_29_2_cast_fu_2672_p1.read()));
}

void sobel_filter::thread_x_weight_2_1_1_fu_2719_p2() {
    x_weight_2_1_1_fu_2719_p2 = (!x_weight_2_0_2_cast_fu_2704_p1.read().is_01() || !p_shl4_cast_fu_2715_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(x_weight_2_0_2_cast_fu_2704_p1.read()) - sc_biguint<11>(p_shl4_cast_fu_2715_p1.read()));
}

void sobel_filter::thread_x_weight_2_1_2_fu_2737_p2() {
    x_weight_2_1_2_fu_2737_p2 = (!tmp_31_2_1_2_cast_fu_2733_p1.read().is_01() || !x_weight_2_1_1_fu_2719_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_31_2_1_2_cast_fu_2733_p1.read()) + sc_biguint<11>(x_weight_2_1_1_fu_2719_p2.read()));
}

void sobel_filter::thread_x_weight_2_2_2_fu_2798_p2() {
    x_weight_2_2_2_fu_2798_p2 = (!tmp_29_2_2_2_cast_fu_2790_p1.read().is_01() || !x_weight_2_2_fu_2760_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_29_2_2_2_cast_fu_2790_p1.read()) + sc_biguint<11>(x_weight_2_2_fu_2760_p2.read()));
}

void sobel_filter::thread_x_weight_2_2_fu_2760_p2() {
    x_weight_2_2_fu_2760_p2 = (!x_weight_2_1_2_fu_2737_p2.read().is_01() || !tmp_29_2_2_cast_fu_2756_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(x_weight_2_1_2_fu_2737_p2.read()) - sc_biguint<11>(tmp_29_2_2_cast_fu_2756_p1.read()));
}

void sobel_filter::thread_x_weight_3_0_2_cast_fu_3123_p1() {
    x_weight_3_0_2_cast_fu_3123_p1 = esl_sext<11,9>(x_weight_3_0_2_reg_6591.read());
}

void sobel_filter::thread_x_weight_3_0_2_fu_3099_p2() {
    x_weight_3_0_2_fu_3099_p2 = (!tmp_29_3_0_2_cast_fu_3095_p1.read().is_01() || !tmp_29_3_cast_fu_3091_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_3_0_2_cast_fu_3095_p1.read()) - sc_biguint<9>(tmp_29_3_cast_fu_3091_p1.read()));
}

void sobel_filter::thread_x_weight_3_1_1_fu_3138_p2() {
    x_weight_3_1_1_fu_3138_p2 = (!x_weight_3_0_2_cast_fu_3123_p1.read().is_01() || !p_shl6_cast_fu_3134_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(x_weight_3_0_2_cast_fu_3123_p1.read()) - sc_biguint<11>(p_shl6_cast_fu_3134_p1.read()));
}

void sobel_filter::thread_x_weight_3_1_2_fu_3156_p2() {
    x_weight_3_1_2_fu_3156_p2 = (!tmp_31_3_1_2_cast_fu_3152_p1.read().is_01() || !x_weight_3_1_1_fu_3138_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_31_3_1_2_cast_fu_3152_p1.read()) + sc_biguint<11>(x_weight_3_1_1_fu_3138_p2.read()));
}

void sobel_filter::thread_x_weight_3_2_2_fu_3217_p2() {
    x_weight_3_2_2_fu_3217_p2 = (!tmp_29_3_2_2_cast_fu_3209_p1.read().is_01() || !x_weight_3_2_fu_3179_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_29_3_2_2_cast_fu_3209_p1.read()) + sc_biguint<11>(x_weight_3_2_fu_3179_p2.read()));
}

void sobel_filter::thread_x_weight_3_2_fu_3179_p2() {
    x_weight_3_2_fu_3179_p2 = (!x_weight_3_1_2_fu_3156_p2.read().is_01() || !tmp_29_3_2_cast_fu_3175_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(x_weight_3_1_2_fu_3156_p2.read()) - sc_biguint<11>(tmp_29_3_2_cast_fu_3175_p1.read()));
}

void sobel_filter::thread_x_weight_4_0_2_cast_fu_3542_p1() {
    x_weight_4_0_2_cast_fu_3542_p1 = esl_sext<11,9>(x_weight_4_0_2_reg_6750.read());
}

void sobel_filter::thread_x_weight_4_0_2_fu_3518_p2() {
    x_weight_4_0_2_fu_3518_p2 = (!tmp_29_4_0_2_cast_fu_3514_p1.read().is_01() || !tmp_29_4_cast_fu_3510_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_4_0_2_cast_fu_3514_p1.read()) - sc_biguint<9>(tmp_29_4_cast_fu_3510_p1.read()));
}

void sobel_filter::thread_x_weight_4_1_1_fu_3557_p2() {
    x_weight_4_1_1_fu_3557_p2 = (!x_weight_4_0_2_cast_fu_3542_p1.read().is_01() || !p_shl8_cast_fu_3553_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(x_weight_4_0_2_cast_fu_3542_p1.read()) - sc_biguint<11>(p_shl8_cast_fu_3553_p1.read()));
}

void sobel_filter::thread_x_weight_4_1_2_fu_3575_p2() {
    x_weight_4_1_2_fu_3575_p2 = (!tmp_31_4_1_2_cast_fu_3571_p1.read().is_01() || !x_weight_4_1_1_fu_3557_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_31_4_1_2_cast_fu_3571_p1.read()) + sc_biguint<11>(x_weight_4_1_1_fu_3557_p2.read()));
}

void sobel_filter::thread_x_weight_4_2_2_fu_3636_p2() {
    x_weight_4_2_2_fu_3636_p2 = (!tmp_29_4_2_2_cast_fu_3628_p1.read().is_01() || !x_weight_4_2_fu_3598_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_29_4_2_2_cast_fu_3628_p1.read()) + sc_biguint<11>(x_weight_4_2_fu_3598_p2.read()));
}

void sobel_filter::thread_x_weight_4_2_fu_3598_p2() {
    x_weight_4_2_fu_3598_p2 = (!x_weight_4_1_2_fu_3575_p2.read().is_01() || !tmp_29_4_2_cast_fu_3594_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(x_weight_4_1_2_fu_3575_p2.read()) - sc_biguint<11>(tmp_29_4_2_cast_fu_3594_p1.read()));
}

void sobel_filter::thread_x_weight_5_0_2_cast_fu_3961_p1() {
    x_weight_5_0_2_cast_fu_3961_p1 = esl_sext<11,9>(x_weight_5_0_2_reg_6909.read());
}

void sobel_filter::thread_x_weight_5_0_2_fu_3937_p2() {
    x_weight_5_0_2_fu_3937_p2 = (!tmp_29_5_0_2_cast_fu_3933_p1.read().is_01() || !tmp_29_5_cast_fu_3929_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_5_0_2_cast_fu_3933_p1.read()) - sc_biguint<9>(tmp_29_5_cast_fu_3929_p1.read()));
}

void sobel_filter::thread_x_weight_5_1_1_fu_3976_p2() {
    x_weight_5_1_1_fu_3976_p2 = (!x_weight_5_0_2_cast_fu_3961_p1.read().is_01() || !p_shl10_cast_fu_3972_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(x_weight_5_0_2_cast_fu_3961_p1.read()) - sc_biguint<11>(p_shl10_cast_fu_3972_p1.read()));
}

void sobel_filter::thread_x_weight_5_1_2_fu_3994_p2() {
    x_weight_5_1_2_fu_3994_p2 = (!tmp_31_5_1_2_cast_fu_3990_p1.read().is_01() || !x_weight_5_1_1_fu_3976_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_31_5_1_2_cast_fu_3990_p1.read()) + sc_biguint<11>(x_weight_5_1_1_fu_3976_p2.read()));
}

void sobel_filter::thread_x_weight_5_2_2_fu_4055_p2() {
    x_weight_5_2_2_fu_4055_p2 = (!tmp_29_5_2_2_cast_fu_4047_p1.read().is_01() || !x_weight_5_2_fu_4017_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_29_5_2_2_cast_fu_4047_p1.read()) + sc_biguint<11>(x_weight_5_2_fu_4017_p2.read()));
}

void sobel_filter::thread_x_weight_5_2_fu_4017_p2() {
    x_weight_5_2_fu_4017_p2 = (!x_weight_5_1_2_fu_3994_p2.read().is_01() || !tmp_29_5_2_cast_fu_4013_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(x_weight_5_1_2_fu_3994_p2.read()) - sc_biguint<11>(tmp_29_5_2_cast_fu_4013_p1.read()));
}

void sobel_filter::thread_x_weight_6_0_2_cast_fu_4380_p1() {
    x_weight_6_0_2_cast_fu_4380_p1 = esl_sext<11,9>(x_weight_6_0_2_reg_7068.read());
}

void sobel_filter::thread_x_weight_6_0_2_fu_4356_p2() {
    x_weight_6_0_2_fu_4356_p2 = (!tmp_29_6_0_2_cast_fu_4352_p1.read().is_01() || !tmp_29_6_cast_fu_4348_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_6_0_2_cast_fu_4352_p1.read()) - sc_biguint<9>(tmp_29_6_cast_fu_4348_p1.read()));
}

void sobel_filter::thread_x_weight_6_1_1_fu_4395_p2() {
    x_weight_6_1_1_fu_4395_p2 = (!x_weight_6_0_2_cast_fu_4380_p1.read().is_01() || !p_shl12_cast_fu_4391_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(x_weight_6_0_2_cast_fu_4380_p1.read()) - sc_biguint<11>(p_shl12_cast_fu_4391_p1.read()));
}

void sobel_filter::thread_x_weight_6_1_2_fu_4413_p2() {
    x_weight_6_1_2_fu_4413_p2 = (!tmp_31_6_1_2_cast_fu_4409_p1.read().is_01() || !x_weight_6_1_1_fu_4395_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_31_6_1_2_cast_fu_4409_p1.read()) + sc_biguint<11>(x_weight_6_1_1_fu_4395_p2.read()));
}

void sobel_filter::thread_x_weight_6_2_2_fu_4474_p2() {
    x_weight_6_2_2_fu_4474_p2 = (!tmp_29_6_2_2_cast_fu_4466_p1.read().is_01() || !x_weight_6_2_fu_4436_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_29_6_2_2_cast_fu_4466_p1.read()) + sc_biguint<11>(x_weight_6_2_fu_4436_p2.read()));
}

void sobel_filter::thread_x_weight_6_2_fu_4436_p2() {
    x_weight_6_2_fu_4436_p2 = (!x_weight_6_1_2_fu_4413_p2.read().is_01() || !tmp_29_6_2_cast_fu_4432_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(x_weight_6_1_2_fu_4413_p2.read()) - sc_biguint<11>(tmp_29_6_2_cast_fu_4432_p1.read()));
}

void sobel_filter::thread_x_weight_7_0_2_cast_fu_4799_p1() {
    x_weight_7_0_2_cast_fu_4799_p1 = esl_sext<11,9>(x_weight_7_0_2_reg_7227.read());
}

void sobel_filter::thread_x_weight_7_0_2_fu_4775_p2() {
    x_weight_7_0_2_fu_4775_p2 = (!tmp_29_7_0_2_cast_fu_4771_p1.read().is_01() || !tmp_29_7_cast_fu_4767_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_7_0_2_cast_fu_4771_p1.read()) - sc_biguint<9>(tmp_29_7_cast_fu_4767_p1.read()));
}

void sobel_filter::thread_x_weight_7_1_1_fu_4814_p2() {
    x_weight_7_1_1_fu_4814_p2 = (!x_weight_7_0_2_cast_fu_4799_p1.read().is_01() || !p_shl14_cast_fu_4810_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(x_weight_7_0_2_cast_fu_4799_p1.read()) - sc_biguint<11>(p_shl14_cast_fu_4810_p1.read()));
}

void sobel_filter::thread_x_weight_7_1_2_fu_4832_p2() {
    x_weight_7_1_2_fu_4832_p2 = (!tmp_31_7_1_2_cast_fu_4828_p1.read().is_01() || !x_weight_7_1_1_fu_4814_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_31_7_1_2_cast_fu_4828_p1.read()) + sc_biguint<11>(x_weight_7_1_1_fu_4814_p2.read()));
}

void sobel_filter::thread_x_weight_7_2_2_fu_4893_p2() {
    x_weight_7_2_2_fu_4893_p2 = (!tmp_29_7_2_2_cast_fu_4885_p1.read().is_01() || !x_weight_7_2_fu_4855_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_29_7_2_2_cast_fu_4885_p1.read()) + sc_biguint<11>(x_weight_7_2_fu_4855_p2.read()));
}

void sobel_filter::thread_x_weight_7_2_fu_4855_p2() {
    x_weight_7_2_fu_4855_p2 = (!x_weight_7_1_2_fu_4832_p2.read().is_01() || !tmp_29_7_2_cast_fu_4851_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(x_weight_7_1_2_fu_4832_p2.read()) - sc_biguint<11>(tmp_29_7_2_cast_fu_4851_p1.read()));
}

void sobel_filter::thread_x_weight_8_0_2_cast_fu_5218_p1() {
    x_weight_8_0_2_cast_fu_5218_p1 = esl_sext<11,9>(x_weight_8_0_2_reg_7386.read());
}

void sobel_filter::thread_x_weight_8_0_2_fu_5194_p2() {
    x_weight_8_0_2_fu_5194_p2 = (!tmp_29_8_0_2_cast_fu_5190_p1.read().is_01() || !tmp_29_8_cast_fu_5186_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_8_0_2_cast_fu_5190_p1.read()) - sc_biguint<9>(tmp_29_8_cast_fu_5186_p1.read()));
}

void sobel_filter::thread_x_weight_8_1_1_fu_5233_p2() {
    x_weight_8_1_1_fu_5233_p2 = (!x_weight_8_0_2_cast_fu_5218_p1.read().is_01() || !p_shl16_cast_fu_5229_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(x_weight_8_0_2_cast_fu_5218_p1.read()) - sc_biguint<11>(p_shl16_cast_fu_5229_p1.read()));
}

void sobel_filter::thread_x_weight_8_1_2_fu_5251_p2() {
    x_weight_8_1_2_fu_5251_p2 = (!tmp_31_8_1_2_cast_fu_5247_p1.read().is_01() || !x_weight_8_1_1_fu_5233_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_31_8_1_2_cast_fu_5247_p1.read()) + sc_biguint<11>(x_weight_8_1_1_fu_5233_p2.read()));
}

void sobel_filter::thread_x_weight_8_2_2_fu_5312_p2() {
    x_weight_8_2_2_fu_5312_p2 = (!tmp_29_8_2_2_cast_fu_5304_p1.read().is_01() || !x_weight_8_2_fu_5274_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_29_8_2_2_cast_fu_5304_p1.read()) + sc_biguint<11>(x_weight_8_2_fu_5274_p2.read()));
}

void sobel_filter::thread_x_weight_8_2_fu_5274_p2() {
    x_weight_8_2_fu_5274_p2 = (!x_weight_8_1_2_fu_5251_p2.read().is_01() || !tmp_29_8_2_cast_fu_5270_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(x_weight_8_1_2_fu_5251_p2.read()) - sc_biguint<11>(tmp_29_8_2_cast_fu_5270_p1.read()));
}

void sobel_filter::thread_x_weight_9_0_2_cast_fu_5615_p1() {
    x_weight_9_0_2_cast_fu_5615_p1 = esl_sext<11,9>(x_weight_9_0_2_reg_7555.read());
}

void sobel_filter::thread_x_weight_9_0_2_fu_5591_p2() {
    x_weight_9_0_2_fu_5591_p2 = (!tmp_29_9_0_2_cast_fu_5587_p1.read().is_01() || !tmp_29_9_cast_fu_5583_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_9_0_2_cast_fu_5587_p1.read()) - sc_biguint<9>(tmp_29_9_cast_fu_5583_p1.read()));
}

void sobel_filter::thread_x_weight_9_1_1_fu_5630_p2() {
    x_weight_9_1_1_fu_5630_p2 = (!x_weight_9_0_2_cast_fu_5615_p1.read().is_01() || !p_shl18_cast_fu_5626_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(x_weight_9_0_2_cast_fu_5615_p1.read()) - sc_biguint<11>(p_shl18_cast_fu_5626_p1.read()));
}

void sobel_filter::thread_x_weight_9_1_2_fu_5648_p2() {
    x_weight_9_1_2_fu_5648_p2 = (!tmp_31_9_1_2_cast_fu_5644_p1.read().is_01() || !x_weight_9_1_1_fu_5630_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_31_9_1_2_cast_fu_5644_p1.read()) + sc_biguint<11>(x_weight_9_1_1_fu_5630_p2.read()));
}

void sobel_filter::thread_x_weight_9_2_2_fu_5709_p2() {
    x_weight_9_2_2_fu_5709_p2 = (!tmp_29_9_2_2_cast_fu_5701_p1.read().is_01() || !x_weight_9_2_fu_5671_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_29_9_2_2_cast_fu_5701_p1.read()) + sc_biguint<11>(x_weight_9_2_fu_5671_p2.read()));
}

void sobel_filter::thread_x_weight_9_2_fu_5671_p2() {
    x_weight_9_2_fu_5671_p2 = (!x_weight_9_1_2_fu_5648_p2.read().is_01() || !tmp_29_9_2_cast_fu_5667_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(x_weight_9_1_2_fu_5648_p2.read()) - sc_biguint<11>(tmp_29_9_2_cast_fu_5667_p1.read()));
}

void sobel_filter::thread_y_weight_0_1_2_cast_fu_1908_p1() {
    y_weight_0_1_2_cast_fu_1908_p1 = esl_zext<11,10>(y_weight_0_1_2_fu_1902_p2.read());
}

void sobel_filter::thread_y_weight_0_1_2_fu_1902_p2() {
    y_weight_0_1_2_fu_1902_p2 = (!tmp_33_0_0_1_cast_fu_1858_p1.read().is_01() || !tmp2_cast_fu_1899_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_33_0_0_1_cast_fu_1858_p1.read()) + sc_biguint<10>(tmp2_cast_fu_1899_p1.read()));
}

void sobel_filter::thread_y_weight_0_2_1_fu_1938_p2() {
    y_weight_0_2_1_fu_1938_p2 = (!y_weight_0_2_fu_1921_p2.read().is_01() || !p_shl_cast_fu_1934_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_0_2_fu_1921_p2.read()) - sc_biguint<11>(p_shl_cast_fu_1934_p1.read()));
}

void sobel_filter::thread_y_weight_0_2_2_fu_1957_p2() {
    y_weight_0_2_2_fu_1957_p2 = (!y_weight_0_2_1_fu_1938_p2.read().is_01() || !tmp_29_0_2_2_cast_fu_1944_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_0_2_1_fu_1938_p2.read()) - sc_biguint<11>(tmp_29_0_2_2_cast_fu_1944_p1.read()));
}

void sobel_filter::thread_y_weight_0_2_fu_1921_p2() {
    y_weight_0_2_fu_1921_p2 = (!y_weight_0_1_2_cast_fu_1908_p1.read().is_01() || !tmp_29_0_2_cast_fu_1912_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_0_1_2_cast_fu_1908_p1.read()) - sc_biguint<11>(tmp_29_0_2_cast_fu_1912_p1.read()));
}

void sobel_filter::thread_y_weight_1_1_2_cast_fu_2333_p1() {
    y_weight_1_1_2_cast_fu_2333_p1 = esl_zext<11,10>(y_weight_1_1_2_fu_2327_p2.read());
}

void sobel_filter::thread_y_weight_1_1_2_fu_2327_p2() {
    y_weight_1_1_2_fu_2327_p2 = (!tmp_33_1_0_1_cast_fu_2281_p1.read().is_01() || !tmp4_cast_fu_2324_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_33_1_0_1_cast_fu_2281_p1.read()) + sc_biguint<10>(tmp4_cast_fu_2324_p1.read()));
}

void sobel_filter::thread_y_weight_1_2_1_fu_2365_p2() {
    y_weight_1_2_1_fu_2365_p2 = (!y_weight_1_2_fu_2347_p2.read().is_01() || !p_shl3_cast_fu_2361_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_1_2_fu_2347_p2.read()) - sc_biguint<11>(p_shl3_cast_fu_2361_p1.read()));
}

void sobel_filter::thread_y_weight_1_2_2_fu_2385_p2() {
    y_weight_1_2_2_fu_2385_p2 = (!y_weight_1_2_1_fu_2365_p2.read().is_01() || !tmp_29_1_2_2_cast_fu_2371_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_1_2_1_fu_2365_p2.read()) - sc_biguint<11>(tmp_29_1_2_2_cast_fu_2371_p1.read()));
}

void sobel_filter::thread_y_weight_1_2_fu_2347_p2() {
    y_weight_1_2_fu_2347_p2 = (!y_weight_1_1_2_cast_fu_2333_p1.read().is_01() || !tmp_29_1_2_cast_fu_2337_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_1_1_2_cast_fu_2333_p1.read()) - sc_biguint<11>(tmp_29_1_2_cast_fu_2337_p1.read()));
}

void sobel_filter::thread_y_weight_2_1_2_cast_fu_2752_p1() {
    y_weight_2_1_2_cast_fu_2752_p1 = esl_zext<11,10>(y_weight_2_1_2_fu_2746_p2.read());
}

void sobel_filter::thread_y_weight_2_1_2_fu_2746_p2() {
    y_weight_2_1_2_fu_2746_p2 = (!tmp_33_2_0_1_cast_fu_2700_p1.read().is_01() || !tmp6_cast_fu_2743_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_33_2_0_1_cast_fu_2700_p1.read()) + sc_biguint<10>(tmp6_cast_fu_2743_p1.read()));
}

void sobel_filter::thread_y_weight_2_2_1_fu_2784_p2() {
    y_weight_2_2_1_fu_2784_p2 = (!y_weight_2_2_fu_2766_p2.read().is_01() || !p_shl5_cast_fu_2780_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_2_2_fu_2766_p2.read()) - sc_biguint<11>(p_shl5_cast_fu_2780_p1.read()));
}

void sobel_filter::thread_y_weight_2_2_2_fu_2804_p2() {
    y_weight_2_2_2_fu_2804_p2 = (!y_weight_2_2_1_fu_2784_p2.read().is_01() || !tmp_29_2_2_2_cast_fu_2790_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_2_2_1_fu_2784_p2.read()) - sc_biguint<11>(tmp_29_2_2_2_cast_fu_2790_p1.read()));
}

void sobel_filter::thread_y_weight_2_2_fu_2766_p2() {
    y_weight_2_2_fu_2766_p2 = (!y_weight_2_1_2_cast_fu_2752_p1.read().is_01() || !tmp_29_2_2_cast_fu_2756_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_2_1_2_cast_fu_2752_p1.read()) - sc_biguint<11>(tmp_29_2_2_cast_fu_2756_p1.read()));
}

void sobel_filter::thread_y_weight_3_1_2_cast_fu_3171_p1() {
    y_weight_3_1_2_cast_fu_3171_p1 = esl_zext<11,10>(y_weight_3_1_2_fu_3165_p2.read());
}

void sobel_filter::thread_y_weight_3_1_2_fu_3165_p2() {
    y_weight_3_1_2_fu_3165_p2 = (!tmp_33_3_0_1_cast_fu_3119_p1.read().is_01() || !tmp8_cast_fu_3162_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_33_3_0_1_cast_fu_3119_p1.read()) + sc_biguint<10>(tmp8_cast_fu_3162_p1.read()));
}

void sobel_filter::thread_y_weight_3_2_1_fu_3203_p2() {
    y_weight_3_2_1_fu_3203_p2 = (!y_weight_3_2_fu_3185_p2.read().is_01() || !p_shl7_cast_fu_3199_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_3_2_fu_3185_p2.read()) - sc_biguint<11>(p_shl7_cast_fu_3199_p1.read()));
}

void sobel_filter::thread_y_weight_3_2_2_fu_3223_p2() {
    y_weight_3_2_2_fu_3223_p2 = (!y_weight_3_2_1_fu_3203_p2.read().is_01() || !tmp_29_3_2_2_cast_fu_3209_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_3_2_1_fu_3203_p2.read()) - sc_biguint<11>(tmp_29_3_2_2_cast_fu_3209_p1.read()));
}

void sobel_filter::thread_y_weight_3_2_fu_3185_p2() {
    y_weight_3_2_fu_3185_p2 = (!y_weight_3_1_2_cast_fu_3171_p1.read().is_01() || !tmp_29_3_2_cast_fu_3175_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_3_1_2_cast_fu_3171_p1.read()) - sc_biguint<11>(tmp_29_3_2_cast_fu_3175_p1.read()));
}

void sobel_filter::thread_y_weight_4_1_2_cast_fu_3590_p1() {
    y_weight_4_1_2_cast_fu_3590_p1 = esl_zext<11,10>(y_weight_4_1_2_fu_3584_p2.read());
}

void sobel_filter::thread_y_weight_4_1_2_fu_3584_p2() {
    y_weight_4_1_2_fu_3584_p2 = (!tmp_33_4_0_1_cast_fu_3538_p1.read().is_01() || !tmp10_cast_fu_3581_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_33_4_0_1_cast_fu_3538_p1.read()) + sc_biguint<10>(tmp10_cast_fu_3581_p1.read()));
}

void sobel_filter::thread_y_weight_4_2_1_fu_3622_p2() {
    y_weight_4_2_1_fu_3622_p2 = (!y_weight_4_2_fu_3604_p2.read().is_01() || !p_shl9_cast_fu_3618_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_4_2_fu_3604_p2.read()) - sc_biguint<11>(p_shl9_cast_fu_3618_p1.read()));
}

void sobel_filter::thread_y_weight_4_2_2_fu_3642_p2() {
    y_weight_4_2_2_fu_3642_p2 = (!y_weight_4_2_1_fu_3622_p2.read().is_01() || !tmp_29_4_2_2_cast_fu_3628_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_4_2_1_fu_3622_p2.read()) - sc_biguint<11>(tmp_29_4_2_2_cast_fu_3628_p1.read()));
}

void sobel_filter::thread_y_weight_4_2_fu_3604_p2() {
    y_weight_4_2_fu_3604_p2 = (!y_weight_4_1_2_cast_fu_3590_p1.read().is_01() || !tmp_29_4_2_cast_fu_3594_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_4_1_2_cast_fu_3590_p1.read()) - sc_biguint<11>(tmp_29_4_2_cast_fu_3594_p1.read()));
}

void sobel_filter::thread_y_weight_5_1_2_cast_fu_4009_p1() {
    y_weight_5_1_2_cast_fu_4009_p1 = esl_zext<11,10>(y_weight_5_1_2_fu_4003_p2.read());
}

void sobel_filter::thread_y_weight_5_1_2_fu_4003_p2() {
    y_weight_5_1_2_fu_4003_p2 = (!tmp_33_5_0_1_cast_fu_3957_p1.read().is_01() || !tmp12_cast_fu_4000_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_33_5_0_1_cast_fu_3957_p1.read()) + sc_biguint<10>(tmp12_cast_fu_4000_p1.read()));
}

void sobel_filter::thread_y_weight_5_2_1_fu_4041_p2() {
    y_weight_5_2_1_fu_4041_p2 = (!y_weight_5_2_fu_4023_p2.read().is_01() || !p_shl11_cast_fu_4037_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_5_2_fu_4023_p2.read()) - sc_biguint<11>(p_shl11_cast_fu_4037_p1.read()));
}

void sobel_filter::thread_y_weight_5_2_2_fu_4061_p2() {
    y_weight_5_2_2_fu_4061_p2 = (!y_weight_5_2_1_fu_4041_p2.read().is_01() || !tmp_29_5_2_2_cast_fu_4047_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_5_2_1_fu_4041_p2.read()) - sc_biguint<11>(tmp_29_5_2_2_cast_fu_4047_p1.read()));
}

void sobel_filter::thread_y_weight_5_2_fu_4023_p2() {
    y_weight_5_2_fu_4023_p2 = (!y_weight_5_1_2_cast_fu_4009_p1.read().is_01() || !tmp_29_5_2_cast_fu_4013_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_5_1_2_cast_fu_4009_p1.read()) - sc_biguint<11>(tmp_29_5_2_cast_fu_4013_p1.read()));
}

void sobel_filter::thread_y_weight_6_1_2_cast_fu_4428_p1() {
    y_weight_6_1_2_cast_fu_4428_p1 = esl_zext<11,10>(y_weight_6_1_2_fu_4422_p2.read());
}

void sobel_filter::thread_y_weight_6_1_2_fu_4422_p2() {
    y_weight_6_1_2_fu_4422_p2 = (!tmp_33_6_0_1_cast_fu_4376_p1.read().is_01() || !tmp14_cast_fu_4419_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_33_6_0_1_cast_fu_4376_p1.read()) + sc_biguint<10>(tmp14_cast_fu_4419_p1.read()));
}

void sobel_filter::thread_y_weight_6_2_1_fu_4460_p2() {
    y_weight_6_2_1_fu_4460_p2 = (!y_weight_6_2_fu_4442_p2.read().is_01() || !p_shl13_cast_fu_4456_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_6_2_fu_4442_p2.read()) - sc_biguint<11>(p_shl13_cast_fu_4456_p1.read()));
}

void sobel_filter::thread_y_weight_6_2_2_fu_4480_p2() {
    y_weight_6_2_2_fu_4480_p2 = (!y_weight_6_2_1_fu_4460_p2.read().is_01() || !tmp_29_6_2_2_cast_fu_4466_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_6_2_1_fu_4460_p2.read()) - sc_biguint<11>(tmp_29_6_2_2_cast_fu_4466_p1.read()));
}

void sobel_filter::thread_y_weight_6_2_fu_4442_p2() {
    y_weight_6_2_fu_4442_p2 = (!y_weight_6_1_2_cast_fu_4428_p1.read().is_01() || !tmp_29_6_2_cast_fu_4432_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_6_1_2_cast_fu_4428_p1.read()) - sc_biguint<11>(tmp_29_6_2_cast_fu_4432_p1.read()));
}

void sobel_filter::thread_y_weight_7_1_2_cast_fu_4847_p1() {
    y_weight_7_1_2_cast_fu_4847_p1 = esl_zext<11,10>(y_weight_7_1_2_fu_4841_p2.read());
}

void sobel_filter::thread_y_weight_7_1_2_fu_4841_p2() {
    y_weight_7_1_2_fu_4841_p2 = (!tmp_33_7_0_1_cast_fu_4795_p1.read().is_01() || !tmp16_cast_fu_4838_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_33_7_0_1_cast_fu_4795_p1.read()) + sc_biguint<10>(tmp16_cast_fu_4838_p1.read()));
}

void sobel_filter::thread_y_weight_7_2_1_fu_4879_p2() {
    y_weight_7_2_1_fu_4879_p2 = (!y_weight_7_2_fu_4861_p2.read().is_01() || !p_shl15_cast_fu_4875_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_7_2_fu_4861_p2.read()) - sc_biguint<11>(p_shl15_cast_fu_4875_p1.read()));
}

void sobel_filter::thread_y_weight_7_2_2_fu_4899_p2() {
    y_weight_7_2_2_fu_4899_p2 = (!y_weight_7_2_1_fu_4879_p2.read().is_01() || !tmp_29_7_2_2_cast_fu_4885_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_7_2_1_fu_4879_p2.read()) - sc_biguint<11>(tmp_29_7_2_2_cast_fu_4885_p1.read()));
}

void sobel_filter::thread_y_weight_7_2_fu_4861_p2() {
    y_weight_7_2_fu_4861_p2 = (!y_weight_7_1_2_cast_fu_4847_p1.read().is_01() || !tmp_29_7_2_cast_fu_4851_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_7_1_2_cast_fu_4847_p1.read()) - sc_biguint<11>(tmp_29_7_2_cast_fu_4851_p1.read()));
}

void sobel_filter::thread_y_weight_8_1_2_cast_fu_5266_p1() {
    y_weight_8_1_2_cast_fu_5266_p1 = esl_zext<11,10>(y_weight_8_1_2_fu_5260_p2.read());
}

void sobel_filter::thread_y_weight_8_1_2_fu_5260_p2() {
    y_weight_8_1_2_fu_5260_p2 = (!tmp_33_8_0_1_cast_fu_5214_p1.read().is_01() || !tmp18_cast_fu_5257_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_33_8_0_1_cast_fu_5214_p1.read()) + sc_biguint<10>(tmp18_cast_fu_5257_p1.read()));
}

void sobel_filter::thread_y_weight_8_2_1_fu_5298_p2() {
    y_weight_8_2_1_fu_5298_p2 = (!y_weight_8_2_fu_5280_p2.read().is_01() || !p_shl17_cast_fu_5294_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_8_2_fu_5280_p2.read()) - sc_biguint<11>(p_shl17_cast_fu_5294_p1.read()));
}

void sobel_filter::thread_y_weight_8_2_2_fu_5318_p2() {
    y_weight_8_2_2_fu_5318_p2 = (!y_weight_8_2_1_fu_5298_p2.read().is_01() || !tmp_29_8_2_2_cast_fu_5304_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_8_2_1_fu_5298_p2.read()) - sc_biguint<11>(tmp_29_8_2_2_cast_fu_5304_p1.read()));
}

void sobel_filter::thread_y_weight_8_2_fu_5280_p2() {
    y_weight_8_2_fu_5280_p2 = (!y_weight_8_1_2_cast_fu_5266_p1.read().is_01() || !tmp_29_8_2_cast_fu_5270_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_8_1_2_cast_fu_5266_p1.read()) - sc_biguint<11>(tmp_29_8_2_cast_fu_5270_p1.read()));
}

void sobel_filter::thread_y_weight_9_1_2_cast_fu_5663_p1() {
    y_weight_9_1_2_cast_fu_5663_p1 = esl_zext<11,10>(y_weight_9_1_2_fu_5657_p2.read());
}

void sobel_filter::thread_y_weight_9_1_2_fu_5657_p2() {
    y_weight_9_1_2_fu_5657_p2 = (!tmp_33_9_0_1_cast_fu_5611_p1.read().is_01() || !tmp21_cast_fu_5654_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_33_9_0_1_cast_fu_5611_p1.read()) + sc_biguint<10>(tmp21_cast_fu_5654_p1.read()));
}

void sobel_filter::thread_y_weight_9_2_1_fu_5695_p2() {
    y_weight_9_2_1_fu_5695_p2 = (!y_weight_9_2_fu_5677_p2.read().is_01() || !p_shl19_cast_fu_5691_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_9_2_fu_5677_p2.read()) - sc_biguint<11>(p_shl19_cast_fu_5691_p1.read()));
}

void sobel_filter::thread_y_weight_9_2_2_fu_5715_p2() {
    y_weight_9_2_2_fu_5715_p2 = (!y_weight_9_2_1_fu_5695_p2.read().is_01() || !tmp_29_9_2_2_cast_fu_5701_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_9_2_1_fu_5695_p2.read()) - sc_biguint<11>(tmp_29_9_2_2_cast_fu_5701_p1.read()));
}

void sobel_filter::thread_y_weight_9_2_fu_5677_p2() {
    y_weight_9_2_fu_5677_p2 = (!y_weight_9_1_2_cast_fu_5663_p1.read().is_01() || !tmp_29_9_2_cast_fu_5667_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(y_weight_9_1_2_cast_fu_5663_p1.read()) - sc_biguint<11>(tmp_29_9_2_cast_fu_5667_p1.read()));
}

}

