#include "sobel_filter.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sobel_filter::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[12];
}

void sobel_filter::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[13];
}

void sobel_filter::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[15];
}

void sobel_filter::thread_ap_CS_fsm_pp1_stage1() {
    ap_CS_fsm_pp1_stage1 = ap_CS_fsm.read()[16];
}

void sobel_filter::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[18];
}

void sobel_filter::thread_ap_CS_fsm_pp2_stage1() {
    ap_CS_fsm_pp2_stage1 = ap_CS_fsm.read()[19];
}

void sobel_filter::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[21];
}

void sobel_filter::thread_ap_CS_fsm_pp3_stage1() {
    ap_CS_fsm_pp3_stage1 = ap_CS_fsm.read()[22];
}

void sobel_filter::thread_ap_CS_fsm_pp4_stage0() {
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[24];
}

void sobel_filter::thread_ap_CS_fsm_pp4_stage1() {
    ap_CS_fsm_pp4_stage1 = ap_CS_fsm.read()[25];
}

void sobel_filter::thread_ap_CS_fsm_pp5_stage0() {
    ap_CS_fsm_pp5_stage0 = ap_CS_fsm.read()[27];
}

void sobel_filter::thread_ap_CS_fsm_pp5_stage1() {
    ap_CS_fsm_pp5_stage1 = ap_CS_fsm.read()[28];
}

void sobel_filter::thread_ap_CS_fsm_pp6_stage0() {
    ap_CS_fsm_pp6_stage0 = ap_CS_fsm.read()[30];
}

void sobel_filter::thread_ap_CS_fsm_pp6_stage1() {
    ap_CS_fsm_pp6_stage1 = ap_CS_fsm.read()[31];
}

void sobel_filter::thread_ap_CS_fsm_pp7_stage0() {
    ap_CS_fsm_pp7_stage0 = ap_CS_fsm.read()[33];
}

void sobel_filter::thread_ap_CS_fsm_pp7_stage1() {
    ap_CS_fsm_pp7_stage1 = ap_CS_fsm.read()[34];
}

void sobel_filter::thread_ap_CS_fsm_pp8_stage0() {
    ap_CS_fsm_pp8_stage0 = ap_CS_fsm.read()[36];
}

void sobel_filter::thread_ap_CS_fsm_pp8_stage1() {
    ap_CS_fsm_pp8_stage1 = ap_CS_fsm.read()[37];
}

void sobel_filter::thread_ap_CS_fsm_pp9_stage0() {
    ap_CS_fsm_pp9_stage0 = ap_CS_fsm.read()[39];
}

void sobel_filter::thread_ap_CS_fsm_pp9_stage1() {
    ap_CS_fsm_pp9_stage1 = ap_CS_fsm.read()[40];
}

void sobel_filter::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void sobel_filter::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void sobel_filter::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void sobel_filter::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[26];
}

void sobel_filter::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void sobel_filter::thread_ap_CS_fsm_state138() {
    ap_CS_fsm_state138 = ap_CS_fsm.read()[29];
}

void sobel_filter::thread_ap_CS_fsm_state159() {
    ap_CS_fsm_state159 = ap_CS_fsm.read()[32];
}

void sobel_filter::thread_ap_CS_fsm_state180() {
    ap_CS_fsm_state180 = ap_CS_fsm.read()[35];
}

void sobel_filter::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void sobel_filter::thread_ap_CS_fsm_state201() {
    ap_CS_fsm_state201 = ap_CS_fsm.read()[38];
}

void sobel_filter::thread_ap_CS_fsm_state222() {
    ap_CS_fsm_state222 = ap_CS_fsm.read()[41];
}

void sobel_filter::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void sobel_filter::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[14];
}

void sobel_filter::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[17];
}

void sobel_filter::thread_ap_CS_fsm_state75() {
    ap_CS_fsm_state75 = ap_CS_fsm.read()[20];
}

void sobel_filter::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void sobel_filter::thread_ap_CS_fsm_state96() {
    ap_CS_fsm_state96 = ap_CS_fsm.read()[23];
}

void sobel_filter::thread_ap_block_pp0_stage0_flag00000000() {
    ap_block_pp0_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp0_stage0_flag00001001() {
    ap_block_pp0_stage0_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op357_read_state21.read()));
}

void sobel_filter::thread_ap_block_pp0_stage0_flag00011001() {
    ap_block_pp0_stage0_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op357_read_state21.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state27_io.read())));
}

void sobel_filter::thread_ap_block_pp0_stage0_flag00011011() {
    ap_block_pp0_stage0_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op357_read_state21.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state27_io.read())));
}

void sobel_filter::thread_ap_block_pp0_stage1_flag00000000() {
    ap_block_pp0_stage1_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp0_stage1_flag00001001() {
    ap_block_pp0_stage1_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && ((esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op449_writeresp_state32.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op450_writeresp_state32.read()))));
}

void sobel_filter::thread_ap_block_pp0_stage1_flag00011001() {
    ap_block_pp0_stage1_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state14_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state26_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op449_writeresp_state32.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op450_writeresp_state32.read())))));
}

void sobel_filter::thread_ap_block_pp0_stage1_flag00011011() {
    ap_block_pp0_stage1_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state14_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state26_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op449_writeresp_state32.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op450_writeresp_state32.read())))));
}

void sobel_filter::thread_ap_block_pp1_stage0_flag00000000() {
    ap_block_pp1_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp1_stage0_flag00001001() {
    ap_block_pp1_stage0_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter3_tmp_188_reg_6205.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_pp1_stage0_flag00011001() {
    ap_block_pp1_stage0_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter3_tmp_188_reg_6205.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state48_io.read())));
}

void sobel_filter::thread_ap_block_pp1_stage0_flag00011011() {
    ap_block_pp1_stage0_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter3_tmp_188_reg_6205.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state48_io.read())));
}

void sobel_filter::thread_ap_block_pp1_stage1_flag00000000() {
    ap_block_pp1_stage1_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp1_stage1_flag00001001() {
    ap_block_pp1_stage1_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()) && ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter9_tmp_188_reg_6205.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
  (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter9_tmp_188_reg_6205.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()))));
}

void sobel_filter::thread_ap_block_pp1_stage1_flag00011001() {
    ap_block_pp1_stage1_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state35_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state47_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter9_tmp_188_reg_6205.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter9_tmp_188_reg_6205.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp1_stage1_flag00011011() {
    ap_block_pp1_stage1_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state35_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state47_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter9_tmp_188_reg_6205.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter9_tmp_188_reg_6205.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp2_stage0_flag00000000() {
    ap_block_pp2_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp2_stage0_flag00001001() {
    ap_block_pp2_stage0_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter3_tmp_224_reg_6364.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_pp2_stage0_flag00011001() {
    ap_block_pp2_stage0_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter3_tmp_224_reg_6364.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state69_io.read())));
}

void sobel_filter::thread_ap_block_pp2_stage0_flag00011011() {
    ap_block_pp2_stage0_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter3_tmp_224_reg_6364.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state69_io.read())));
}

void sobel_filter::thread_ap_block_pp2_stage1_flag00000000() {
    ap_block_pp2_stage1_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp2_stage1_flag00001001() {
    ap_block_pp2_stage1_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()) && ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter9_tmp_224_reg_6364.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
  (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter9_tmp_224_reg_6364.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()))));
}

void sobel_filter::thread_ap_block_pp2_stage1_flag00011001() {
    ap_block_pp2_stage1_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state56_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state68_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter9_tmp_224_reg_6364.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter9_tmp_224_reg_6364.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp2_stage1_flag00011011() {
    ap_block_pp2_stage1_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state56_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state68_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter9_tmp_224_reg_6364.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter9_tmp_224_reg_6364.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp3_stage0_flag00000000() {
    ap_block_pp3_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp3_stage0_flag00001001() {
    ap_block_pp3_stage0_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter3_tmp_237_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_pp3_stage0_flag00011001() {
    ap_block_pp3_stage0_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter3_tmp_237_reg_6523.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state90_io.read())));
}

void sobel_filter::thread_ap_block_pp3_stage0_flag00011011() {
    ap_block_pp3_stage0_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter3_tmp_237_reg_6523.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state90_io.read())));
}

void sobel_filter::thread_ap_block_pp3_stage1_flag00000000() {
    ap_block_pp3_stage1_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp3_stage1_flag00001001() {
    ap_block_pp3_stage1_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter9.read()) && ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter9_tmp_237_reg_6523.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
  (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter9_tmp_237_reg_6523.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()))));
}

void sobel_filter::thread_ap_block_pp3_stage1_flag00011001() {
    ap_block_pp3_stage1_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state77_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state89_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter9_tmp_237_reg_6523.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter9_tmp_237_reg_6523.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp3_stage1_flag00011011() {
    ap_block_pp3_stage1_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state77_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state89_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter9_tmp_237_reg_6523.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter9_tmp_237_reg_6523.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp4_stage0_flag00000000() {
    ap_block_pp4_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp4_stage0_flag00001001() {
    ap_block_pp4_stage0_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter3_tmp_282_reg_6682.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_pp4_stage0_flag00011001() {
    ap_block_pp4_stage0_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter3_tmp_282_reg_6682.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state111_io.read())));
}

void sobel_filter::thread_ap_block_pp4_stage0_flag00011011() {
    ap_block_pp4_stage0_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter3_tmp_282_reg_6682.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state111_io.read())));
}

void sobel_filter::thread_ap_block_pp4_stage1_flag00000000() {
    ap_block_pp4_stage1_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp4_stage1_flag00001001() {
    ap_block_pp4_stage1_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter9.read()) && ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter9_tmp_282_reg_6682.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
  (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp4_iter9_tmp_282_reg_6682.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()))));
}

void sobel_filter::thread_ap_block_pp4_stage1_flag00011001() {
    ap_block_pp4_stage1_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state98_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state110_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter9_tmp_282_reg_6682.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp4_iter9_tmp_282_reg_6682.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp4_stage1_flag00011011() {
    ap_block_pp4_stage1_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state98_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state110_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter9_tmp_282_reg_6682.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp4_iter9_tmp_282_reg_6682.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp5_stage0_flag00000000() {
    ap_block_pp5_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp5_stage0_flag00001001() {
    ap_block_pp5_stage0_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter3_tmp_287_reg_6841.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_pp5_stage0_flag00011001() {
    ap_block_pp5_stage0_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter3_tmp_287_reg_6841.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state132_io.read())));
}

void sobel_filter::thread_ap_block_pp5_stage0_flag00011011() {
    ap_block_pp5_stage0_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter3_tmp_287_reg_6841.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state132_io.read())));
}

void sobel_filter::thread_ap_block_pp5_stage1_flag00000000() {
    ap_block_pp5_stage1_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp5_stage1_flag00001001() {
    ap_block_pp5_stage1_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter9.read()) && ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter9_tmp_287_reg_6841.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
  (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp5_iter9_tmp_287_reg_6841.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()))));
}

void sobel_filter::thread_ap_block_pp5_stage1_flag00011001() {
    ap_block_pp5_stage1_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state119_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state131_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter9_tmp_287_reg_6841.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp5_iter9_tmp_287_reg_6841.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp5_stage1_flag00011011() {
    ap_block_pp5_stage1_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state119_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state131_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter9_tmp_287_reg_6841.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp5_iter9_tmp_287_reg_6841.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp6_stage0_flag00000000() {
    ap_block_pp6_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp6_stage0_flag00001001() {
    ap_block_pp6_stage0_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter3_tmp_292_reg_7000.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_pp6_stage0_flag00011001() {
    ap_block_pp6_stage0_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter3_tmp_292_reg_7000.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state153_io.read())));
}

void sobel_filter::thread_ap_block_pp6_stage0_flag00011011() {
    ap_block_pp6_stage0_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter3_tmp_292_reg_7000.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state153_io.read())));
}

void sobel_filter::thread_ap_block_pp6_stage1_flag00000000() {
    ap_block_pp6_stage1_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp6_stage1_flag00001001() {
    ap_block_pp6_stage1_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter9.read()) && ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter9_tmp_292_reg_7000.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
  (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp6_iter9_tmp_292_reg_7000.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()))));
}

void sobel_filter::thread_ap_block_pp6_stage1_flag00011001() {
    ap_block_pp6_stage1_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state140_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state152_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter9_tmp_292_reg_7000.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp6_iter9_tmp_292_reg_7000.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp6_stage1_flag00011011() {
    ap_block_pp6_stage1_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state140_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state152_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter9_tmp_292_reg_7000.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp6_iter9_tmp_292_reg_7000.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp7_stage0_flag00000000() {
    ap_block_pp7_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp7_stage0_flag00001001() {
    ap_block_pp7_stage0_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter3_tmp_297_reg_7159.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_pp7_stage0_flag00011001() {
    ap_block_pp7_stage0_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter3_tmp_297_reg_7159.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state174_io.read())));
}

void sobel_filter::thread_ap_block_pp7_stage0_flag00011011() {
    ap_block_pp7_stage0_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter3_tmp_297_reg_7159.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state174_io.read())));
}

void sobel_filter::thread_ap_block_pp7_stage1_flag00000000() {
    ap_block_pp7_stage1_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp7_stage1_flag00001001() {
    ap_block_pp7_stage1_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter9.read()) && ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter9_tmp_297_reg_7159.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
  (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp7_iter9_tmp_297_reg_7159.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()))));
}

void sobel_filter::thread_ap_block_pp7_stage1_flag00011001() {
    ap_block_pp7_stage1_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state161_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state173_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter9_tmp_297_reg_7159.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp7_iter9_tmp_297_reg_7159.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp7_stage1_flag00011011() {
    ap_block_pp7_stage1_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state161_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state173_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter9_tmp_297_reg_7159.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp7_iter9_tmp_297_reg_7159.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp8_stage0_flag00000000() {
    ap_block_pp8_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp8_stage0_flag00001001() {
    ap_block_pp8_stage0_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter3_tmp_304_reg_7318.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_pp8_stage0_flag00011001() {
    ap_block_pp8_stage0_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter3_tmp_304_reg_7318.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state195_io.read())));
}

void sobel_filter::thread_ap_block_pp8_stage0_flag00011011() {
    ap_block_pp8_stage0_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter3_tmp_304_reg_7318.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state195_io.read())));
}

void sobel_filter::thread_ap_block_pp8_stage1_flag00000000() {
    ap_block_pp8_stage1_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp8_stage1_flag00001001() {
    ap_block_pp8_stage1_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter9.read()) && ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter9_tmp_304_reg_7318.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
  (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp8_iter9_tmp_304_reg_7318.read()) && 
   esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()))));
}

void sobel_filter::thread_ap_block_pp8_stage1_flag00011001() {
    ap_block_pp8_stage1_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state182_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state194_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter9_tmp_304_reg_7318.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp8_iter9_tmp_304_reg_7318.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp8_stage1_flag00011011() {
    ap_block_pp8_stage1_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state182_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state194_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter9_tmp_304_reg_7318.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || 
   (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp8_iter9_tmp_304_reg_7318.read()) && 
    esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())))));
}

void sobel_filter::thread_ap_block_pp9_stage0_flag00000000() {
    ap_block_pp9_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp9_stage0_flag00001001() {
    ap_block_pp9_stage0_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1830_read_state210.read()));
}

void sobel_filter::thread_ap_block_pp9_stage0_flag00011001() {
    ap_block_pp9_stage0_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1830_read_state210.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state216_io.read())));
}

void sobel_filter::thread_ap_block_pp9_stage0_flag00011011() {
    ap_block_pp9_stage0_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1830_read_state210.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state216_io.read())));
}

void sobel_filter::thread_ap_block_pp9_stage1_flag00000000() {
    ap_block_pp9_stage1_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_pp9_stage1_flag00001001() {
    ap_block_pp9_stage1_flag00001001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter9.read()) && ((esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1922_writeresp_state221.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1923_writeresp_state221.read()))));
}

void sobel_filter::thread_ap_block_pp9_stage1_flag00011001() {
    ap_block_pp9_stage1_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state203_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state215_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1922_writeresp_state221.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1923_writeresp_state221.read())))));
}

void sobel_filter::thread_ap_block_pp9_stage1_flag00011011() {
    ap_block_pp9_stage1_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state203_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state215_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter9.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1922_writeresp_state221.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1923_writeresp_state221.read())))));
}

void sobel_filter::thread_ap_block_state10() {
    ap_block_state10 = (esl_seteq<1,1,1>(tmp_2_fu_1535_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_state100_pp4_stage1_iter1() {
    ap_block_state100_pp4_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state101_pp4_stage0_iter2() {
    ap_block_state101_pp4_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state102_pp4_stage1_iter2() {
    ap_block_state102_pp4_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state103_pp4_stage0_iter3() {
    ap_block_state103_pp4_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state104_pp4_stage1_iter3() {
    ap_block_state104_pp4_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state105_pp4_stage0_iter4() {
    ap_block_state105_pp4_stage0_iter4 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter3_tmp_282_reg_6682.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_state106_pp4_stage1_iter4() {
    ap_block_state106_pp4_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state107_pp4_stage0_iter5() {
    ap_block_state107_pp4_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state108_pp4_stage1_iter5() {
    ap_block_state108_pp4_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state109_pp4_stage0_iter6() {
    ap_block_state109_pp4_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state110_io() {
    ap_block_state110_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter6_tmp_282_reg_6682.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp4_iter6_tmp_282_reg_6682.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())));
}

void sobel_filter::thread_ap_block_state110_pp4_stage1_iter6() {
    ap_block_state110_pp4_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state111_io() {
    ap_block_state111_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter6_tmp_282_reg_6682.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp4_iter6_tmp_282_reg_6682.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())));
}

void sobel_filter::thread_ap_block_state111_pp4_stage0_iter7() {
    ap_block_state111_pp4_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state112_pp4_stage1_iter7() {
    ap_block_state112_pp4_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state113_pp4_stage0_iter8() {
    ap_block_state113_pp4_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state114_pp4_stage1_iter8() {
    ap_block_state114_pp4_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state115_pp4_stage0_iter9() {
    ap_block_state115_pp4_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state116_pp4_stage1_iter9() {
    ap_block_state116_pp4_stage1_iter9 = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter9_tmp_282_reg_6682.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp4_iter9_tmp_282_reg_6682.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())));
}

void sobel_filter::thread_ap_block_state118_pp5_stage0_iter0() {
    ap_block_state118_pp5_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state119_io() {
    ap_block_state119_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1152_readreq_state119.read()));
}

void sobel_filter::thread_ap_block_state119_pp5_stage1_iter0() {
    ap_block_state119_pp5_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state120_pp5_stage0_iter1() {
    ap_block_state120_pp5_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state121_pp5_stage1_iter1() {
    ap_block_state121_pp5_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state122_pp5_stage0_iter2() {
    ap_block_state122_pp5_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state123_pp5_stage1_iter2() {
    ap_block_state123_pp5_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state124_pp5_stage0_iter3() {
    ap_block_state124_pp5_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state125_pp5_stage1_iter3() {
    ap_block_state125_pp5_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state126_pp5_stage0_iter4() {
    ap_block_state126_pp5_stage0_iter4 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter3_tmp_287_reg_6841.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_state127_pp5_stage1_iter4() {
    ap_block_state127_pp5_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state128_pp5_stage0_iter5() {
    ap_block_state128_pp5_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state129_pp5_stage1_iter5() {
    ap_block_state129_pp5_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state130_pp5_stage0_iter6() {
    ap_block_state130_pp5_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state131_io() {
    ap_block_state131_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter6_tmp_287_reg_6841.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp5_iter6_tmp_287_reg_6841.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())));
}

void sobel_filter::thread_ap_block_state131_pp5_stage1_iter6() {
    ap_block_state131_pp5_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state132_io() {
    ap_block_state132_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter6_tmp_287_reg_6841.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp5_iter6_tmp_287_reg_6841.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())));
}

void sobel_filter::thread_ap_block_state132_pp5_stage0_iter7() {
    ap_block_state132_pp5_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state133_pp5_stage1_iter7() {
    ap_block_state133_pp5_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state134_pp5_stage0_iter8() {
    ap_block_state134_pp5_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state135_pp5_stage1_iter8() {
    ap_block_state135_pp5_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state136_pp5_stage0_iter9() {
    ap_block_state136_pp5_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state137_pp5_stage1_iter9() {
    ap_block_state137_pp5_stage1_iter9 = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter9_tmp_287_reg_6841.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp5_iter9_tmp_287_reg_6841.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())));
}

void sobel_filter::thread_ap_block_state139_pp6_stage0_iter0() {
    ap_block_state139_pp6_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state13_pp0_stage0_iter0() {
    ap_block_state13_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state140_io() {
    ap_block_state140_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1316_readreq_state140.read()));
}

void sobel_filter::thread_ap_block_state140_pp6_stage1_iter0() {
    ap_block_state140_pp6_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state141_pp6_stage0_iter1() {
    ap_block_state141_pp6_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state142_pp6_stage1_iter1() {
    ap_block_state142_pp6_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state143_pp6_stage0_iter2() {
    ap_block_state143_pp6_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state144_pp6_stage1_iter2() {
    ap_block_state144_pp6_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state145_pp6_stage0_iter3() {
    ap_block_state145_pp6_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state146_pp6_stage1_iter3() {
    ap_block_state146_pp6_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state147_pp6_stage0_iter4() {
    ap_block_state147_pp6_stage0_iter4 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter3_tmp_292_reg_7000.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_state148_pp6_stage1_iter4() {
    ap_block_state148_pp6_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state149_pp6_stage0_iter5() {
    ap_block_state149_pp6_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state14_io() {
    ap_block_state14_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op333_readreq_state14.read()));
}

void sobel_filter::thread_ap_block_state14_pp0_stage1_iter0() {
    ap_block_state14_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state150_pp6_stage1_iter5() {
    ap_block_state150_pp6_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state151_pp6_stage0_iter6() {
    ap_block_state151_pp6_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state152_io() {
    ap_block_state152_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter6_tmp_292_reg_7000.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp6_iter6_tmp_292_reg_7000.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())));
}

void sobel_filter::thread_ap_block_state152_pp6_stage1_iter6() {
    ap_block_state152_pp6_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state153_io() {
    ap_block_state153_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter6_tmp_292_reg_7000.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp6_iter6_tmp_292_reg_7000.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())));
}

void sobel_filter::thread_ap_block_state153_pp6_stage0_iter7() {
    ap_block_state153_pp6_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state154_pp6_stage1_iter7() {
    ap_block_state154_pp6_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state155_pp6_stage0_iter8() {
    ap_block_state155_pp6_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state156_pp6_stage1_iter8() {
    ap_block_state156_pp6_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state157_pp6_stage0_iter9() {
    ap_block_state157_pp6_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state158_pp6_stage1_iter9() {
    ap_block_state158_pp6_stage1_iter9 = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter9_tmp_292_reg_7000.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp6_iter9_tmp_292_reg_7000.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())));
}

void sobel_filter::thread_ap_block_state15_pp0_stage0_iter1() {
    ap_block_state15_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state160_pp7_stage0_iter0() {
    ap_block_state160_pp7_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state161_io() {
    ap_block_state161_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1480_readreq_state161.read()));
}

void sobel_filter::thread_ap_block_state161_pp7_stage1_iter0() {
    ap_block_state161_pp7_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state162_pp7_stage0_iter1() {
    ap_block_state162_pp7_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state163_pp7_stage1_iter1() {
    ap_block_state163_pp7_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state164_pp7_stage0_iter2() {
    ap_block_state164_pp7_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state165_pp7_stage1_iter2() {
    ap_block_state165_pp7_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state166_pp7_stage0_iter3() {
    ap_block_state166_pp7_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state167_pp7_stage1_iter3() {
    ap_block_state167_pp7_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state168_pp7_stage0_iter4() {
    ap_block_state168_pp7_stage0_iter4 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter3_tmp_297_reg_7159.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_state169_pp7_stage1_iter4() {
    ap_block_state169_pp7_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state16_pp0_stage1_iter1() {
    ap_block_state16_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state170_pp7_stage0_iter5() {
    ap_block_state170_pp7_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state171_pp7_stage1_iter5() {
    ap_block_state171_pp7_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state172_pp7_stage0_iter6() {
    ap_block_state172_pp7_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state173_io() {
    ap_block_state173_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter6_tmp_297_reg_7159.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp7_iter6_tmp_297_reg_7159.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())));
}

void sobel_filter::thread_ap_block_state173_pp7_stage1_iter6() {
    ap_block_state173_pp7_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state174_io() {
    ap_block_state174_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter6_tmp_297_reg_7159.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp7_iter6_tmp_297_reg_7159.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())));
}

void sobel_filter::thread_ap_block_state174_pp7_stage0_iter7() {
    ap_block_state174_pp7_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state175_pp7_stage1_iter7() {
    ap_block_state175_pp7_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state176_pp7_stage0_iter8() {
    ap_block_state176_pp7_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state177_pp7_stage1_iter8() {
    ap_block_state177_pp7_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state178_pp7_stage0_iter9() {
    ap_block_state178_pp7_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state179_pp7_stage1_iter9() {
    ap_block_state179_pp7_stage1_iter9 = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter9_tmp_297_reg_7159.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp7_iter9_tmp_297_reg_7159.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())));
}

void sobel_filter::thread_ap_block_state17_pp0_stage0_iter2() {
    ap_block_state17_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state181_pp8_stage0_iter0() {
    ap_block_state181_pp8_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state182_io() {
    ap_block_state182_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1644_readreq_state182.read()));
}

void sobel_filter::thread_ap_block_state182_pp8_stage1_iter0() {
    ap_block_state182_pp8_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state183_pp8_stage0_iter1() {
    ap_block_state183_pp8_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state184_pp8_stage1_iter1() {
    ap_block_state184_pp8_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state185_pp8_stage0_iter2() {
    ap_block_state185_pp8_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state186_pp8_stage1_iter2() {
    ap_block_state186_pp8_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state187_pp8_stage0_iter3() {
    ap_block_state187_pp8_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state188_pp8_stage1_iter3() {
    ap_block_state188_pp8_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state189_pp8_stage0_iter4() {
    ap_block_state189_pp8_stage0_iter4 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter3_tmp_304_reg_7318.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_state18_pp0_stage1_iter2() {
    ap_block_state18_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state190_pp8_stage1_iter4() {
    ap_block_state190_pp8_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state191_pp8_stage0_iter5() {
    ap_block_state191_pp8_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state192_pp8_stage1_iter5() {
    ap_block_state192_pp8_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state193_pp8_stage0_iter6() {
    ap_block_state193_pp8_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state194_io() {
    ap_block_state194_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter6_tmp_304_reg_7318.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp8_iter6_tmp_304_reg_7318.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())));
}

void sobel_filter::thread_ap_block_state194_pp8_stage1_iter6() {
    ap_block_state194_pp8_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state195_io() {
    ap_block_state195_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter6_tmp_304_reg_7318.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp8_iter6_tmp_304_reg_7318.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())));
}

void sobel_filter::thread_ap_block_state195_pp8_stage0_iter7() {
    ap_block_state195_pp8_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state196_pp8_stage1_iter7() {
    ap_block_state196_pp8_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state197_pp8_stage0_iter8() {
    ap_block_state197_pp8_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state198_pp8_stage1_iter8() {
    ap_block_state198_pp8_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state199_pp8_stage0_iter9() {
    ap_block_state199_pp8_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state19_pp0_stage0_iter3() {
    ap_block_state19_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state200_pp8_stage1_iter9() {
    ap_block_state200_pp8_stage1_iter9 = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter9_tmp_304_reg_7318.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp8_iter9_tmp_304_reg_7318.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())));
}

void sobel_filter::thread_ap_block_state202_pp9_stage0_iter0() {
    ap_block_state202_pp9_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state203_io() {
    ap_block_state203_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1806_readreq_state203.read()));
}

void sobel_filter::thread_ap_block_state203_pp9_stage1_iter0() {
    ap_block_state203_pp9_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state204_pp9_stage0_iter1() {
    ap_block_state204_pp9_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state205_pp9_stage1_iter1() {
    ap_block_state205_pp9_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state206_pp9_stage0_iter2() {
    ap_block_state206_pp9_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state207_pp9_stage1_iter2() {
    ap_block_state207_pp9_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state208_pp9_stage0_iter3() {
    ap_block_state208_pp9_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state209_pp9_stage1_iter3() {
    ap_block_state209_pp9_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state20_pp0_stage1_iter3() {
    ap_block_state20_pp0_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state210_pp9_stage0_iter4() {
    ap_block_state210_pp9_stage0_iter4 = (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1830_read_state210.read()));
}

void sobel_filter::thread_ap_block_state211_pp9_stage1_iter4() {
    ap_block_state211_pp9_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state212_pp9_stage0_iter5() {
    ap_block_state212_pp9_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state213_pp9_stage1_iter5() {
    ap_block_state213_pp9_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state214_pp9_stage0_iter6() {
    ap_block_state214_pp9_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state215_io() {
    ap_block_state215_io = ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1909_writereq_state215.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1910_writereq_state215.read())));
}

void sobel_filter::thread_ap_block_state215_pp9_stage1_iter6() {
    ap_block_state215_pp9_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state216_io() {
    ap_block_state216_io = ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1912_write_state216.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1913_write_state216.read())));
}

void sobel_filter::thread_ap_block_state216_pp9_stage0_iter7() {
    ap_block_state216_pp9_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state217_pp9_stage1_iter7() {
    ap_block_state217_pp9_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state218_pp9_stage0_iter8() {
    ap_block_state218_pp9_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state219_pp9_stage1_iter8() {
    ap_block_state219_pp9_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state21_pp0_stage0_iter4() {
    ap_block_state21_pp0_stage0_iter4 = (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op357_read_state21.read()));
}

void sobel_filter::thread_ap_block_state220_pp9_stage0_iter9() {
    ap_block_state220_pp9_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state221_pp9_stage1_iter9() {
    ap_block_state221_pp9_stage1_iter9 = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1922_writeresp_state221.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1923_writeresp_state221.read())));
}

void sobel_filter::thread_ap_block_state22_pp0_stage1_iter4() {
    ap_block_state22_pp0_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state23_pp0_stage0_iter5() {
    ap_block_state23_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state24_pp0_stage1_iter5() {
    ap_block_state24_pp0_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state25_pp0_stage0_iter6() {
    ap_block_state25_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state26_io() {
    ap_block_state26_io = ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op436_writereq_state26.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op437_writereq_state26.read())));
}

void sobel_filter::thread_ap_block_state26_pp0_stage1_iter6() {
    ap_block_state26_pp0_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state27_io() {
    ap_block_state27_io = ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op439_write_state27.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op440_write_state27.read())));
}

void sobel_filter::thread_ap_block_state27_pp0_stage0_iter7() {
    ap_block_state27_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state28_pp0_stage1_iter7() {
    ap_block_state28_pp0_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state29_pp0_stage0_iter8() {
    ap_block_state29_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state30_pp0_stage1_iter8() {
    ap_block_state30_pp0_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state31_pp0_stage0_iter9() {
    ap_block_state31_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state32_pp0_stage1_iter9() {
    ap_block_state32_pp0_stage1_iter9 = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op449_writeresp_state32.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op450_writeresp_state32.read())));
}

void sobel_filter::thread_ap_block_state34_pp1_stage0_iter0() {
    ap_block_state34_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state35_io() {
    ap_block_state35_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op496_readreq_state35.read()));
}

void sobel_filter::thread_ap_block_state35_pp1_stage1_iter0() {
    ap_block_state35_pp1_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state36_pp1_stage0_iter1() {
    ap_block_state36_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state37_pp1_stage1_iter1() {
    ap_block_state37_pp1_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state38_pp1_stage0_iter2() {
    ap_block_state38_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state39_pp1_stage1_iter2() {
    ap_block_state39_pp1_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state40_pp1_stage0_iter3() {
    ap_block_state40_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state41_pp1_stage1_iter3() {
    ap_block_state41_pp1_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state42_pp1_stage0_iter4() {
    ap_block_state42_pp1_stage0_iter4 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter3_tmp_188_reg_6205.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_state43_pp1_stage1_iter4() {
    ap_block_state43_pp1_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state44_pp1_stage0_iter5() {
    ap_block_state44_pp1_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state45_pp1_stage1_iter5() {
    ap_block_state45_pp1_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state46_pp1_stage0_iter6() {
    ap_block_state46_pp1_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state47_io() {
    ap_block_state47_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter6_tmp_188_reg_6205.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter6_tmp_188_reg_6205.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())));
}

void sobel_filter::thread_ap_block_state47_pp1_stage1_iter6() {
    ap_block_state47_pp1_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state48_io() {
    ap_block_state48_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter6_tmp_188_reg_6205.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter6_tmp_188_reg_6205.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())));
}

void sobel_filter::thread_ap_block_state48_pp1_stage0_iter7() {
    ap_block_state48_pp1_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state49_pp1_stage1_iter7() {
    ap_block_state49_pp1_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state50_pp1_stage0_iter8() {
    ap_block_state50_pp1_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state51_pp1_stage1_iter8() {
    ap_block_state51_pp1_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state52_pp1_stage0_iter9() {
    ap_block_state52_pp1_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state53_pp1_stage1_iter9() {
    ap_block_state53_pp1_stage1_iter9 = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter9_tmp_188_reg_6205.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter9_tmp_188_reg_6205.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())));
}

void sobel_filter::thread_ap_block_state55_pp2_stage0_iter0() {
    ap_block_state55_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state56_io() {
    ap_block_state56_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op660_readreq_state56.read()));
}

void sobel_filter::thread_ap_block_state56_pp2_stage1_iter0() {
    ap_block_state56_pp2_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state57_pp2_stage0_iter1() {
    ap_block_state57_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state58_pp2_stage1_iter1() {
    ap_block_state58_pp2_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state59_pp2_stage0_iter2() {
    ap_block_state59_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state60_pp2_stage1_iter2() {
    ap_block_state60_pp2_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state61_pp2_stage0_iter3() {
    ap_block_state61_pp2_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state62_pp2_stage1_iter3() {
    ap_block_state62_pp2_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state63_pp2_stage0_iter4() {
    ap_block_state63_pp2_stage0_iter4 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter3_tmp_224_reg_6364.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_state64_pp2_stage1_iter4() {
    ap_block_state64_pp2_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state65_pp2_stage0_iter5() {
    ap_block_state65_pp2_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state66_pp2_stage1_iter5() {
    ap_block_state66_pp2_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state67_pp2_stage0_iter6() {
    ap_block_state67_pp2_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state68_io() {
    ap_block_state68_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter6_tmp_224_reg_6364.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter6_tmp_224_reg_6364.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())));
}

void sobel_filter::thread_ap_block_state68_pp2_stage1_iter6() {
    ap_block_state68_pp2_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state69_io() {
    ap_block_state69_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter6_tmp_224_reg_6364.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter6_tmp_224_reg_6364.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())));
}

void sobel_filter::thread_ap_block_state69_pp2_stage0_iter7() {
    ap_block_state69_pp2_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state70_pp2_stage1_iter7() {
    ap_block_state70_pp2_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state71_pp2_stage0_iter8() {
    ap_block_state71_pp2_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state72_pp2_stage1_iter8() {
    ap_block_state72_pp2_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state73_pp2_stage0_iter9() {
    ap_block_state73_pp2_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state74_pp2_stage1_iter9() {
    ap_block_state74_pp2_stage1_iter9 = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter9_tmp_224_reg_6364.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter9_tmp_224_reg_6364.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())));
}

void sobel_filter::thread_ap_block_state76_pp3_stage0_iter0() {
    ap_block_state76_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state77_io() {
    ap_block_state77_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op824_readreq_state77.read()));
}

void sobel_filter::thread_ap_block_state77_pp3_stage1_iter0() {
    ap_block_state77_pp3_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state78_pp3_stage0_iter1() {
    ap_block_state78_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state79_pp3_stage1_iter1() {
    ap_block_state79_pp3_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state80_pp3_stage0_iter2() {
    ap_block_state80_pp3_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state81_pp3_stage1_iter2() {
    ap_block_state81_pp3_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state82_pp3_stage0_iter3() {
    ap_block_state82_pp3_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state83_pp3_stage1_iter3() {
    ap_block_state83_pp3_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state84_pp3_stage0_iter4() {
    ap_block_state84_pp3_stage0_iter4 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter3_tmp_237_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void sobel_filter::thread_ap_block_state85_pp3_stage1_iter4() {
    ap_block_state85_pp3_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state86_pp3_stage0_iter5() {
    ap_block_state86_pp3_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state87_pp3_stage1_iter5() {
    ap_block_state87_pp3_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state88_pp3_stage0_iter6() {
    ap_block_state88_pp3_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state89_io() {
    ap_block_state89_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter6_tmp_237_reg_6523.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter6_tmp_237_reg_6523.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_AWREADY.read())));
}

void sobel_filter::thread_ap_block_state89_pp3_stage1_iter6() {
    ap_block_state89_pp3_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state90_io() {
    ap_block_state90_io = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter6_tmp_237_reg_6523.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter6_tmp_237_reg_6523.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem2_WREADY.read())));
}

void sobel_filter::thread_ap_block_state90_pp3_stage0_iter7() {
    ap_block_state90_pp3_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state91_pp3_stage1_iter7() {
    ap_block_state91_pp3_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state92_pp3_stage0_iter8() {
    ap_block_state92_pp3_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state93_pp3_stage1_iter8() {
    ap_block_state93_pp3_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state94_pp3_stage0_iter9() {
    ap_block_state94_pp3_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state95_pp3_stage1_iter9() {
    ap_block_state95_pp3_stage1_iter9 = ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter9_tmp_237_reg_6523.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())) || (esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter9_tmp_237_reg_6523.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem2_BVALID.read())));
}

void sobel_filter::thread_ap_block_state97_pp4_stage0_iter0() {
    ap_block_state97_pp4_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state98_io() {
    ap_block_state98_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op988_readreq_state98.read()));
}

void sobel_filter::thread_ap_block_state98_pp4_stage1_iter0() {
    ap_block_state98_pp4_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_block_state99_pp4_stage0_iter1() {
    ap_block_state99_pp4_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sobel_filter::thread_ap_condition_3507() {
    ap_condition_3507 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op333_readreq_state14.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00001001.read(), ap_const_boolean_0));
}

void sobel_filter::thread_ap_condition_3519() {
    ap_condition_3519 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op496_readreq_state35.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00001001.read(), ap_const_boolean_0));
}

void sobel_filter::thread_ap_condition_3532() {
    ap_condition_3532 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op660_readreq_state56.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00001001.read(), ap_const_boolean_0));
}

void sobel_filter::thread_ap_condition_3545() {
    ap_condition_3545 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op824_readreq_state77.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00001001.read(), ap_const_boolean_0));
}

void sobel_filter::thread_ap_condition_3558() {
    ap_condition_3558 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op988_readreq_state98.read()) && esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00001001.read(), ap_const_boolean_0));
}

void sobel_filter::thread_ap_condition_3571() {
    ap_condition_3571 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1152_readreq_state119.read()) && esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00001001.read(), ap_const_boolean_0));
}

void sobel_filter::thread_ap_condition_3584() {
    ap_condition_3584 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1316_readreq_state140.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00001001.read(), ap_const_boolean_0));
}

void sobel_filter::thread_ap_condition_3597() {
    ap_condition_3597 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1480_readreq_state161.read()) && esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00001001.read(), ap_const_boolean_0));
}

void sobel_filter::thread_ap_condition_3610() {
    ap_condition_3610 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1644_readreq_state182.read()) && esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00001001.read(), ap_const_boolean_0));
}

void sobel_filter::thread_ap_condition_3623() {
    ap_condition_3623 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1806_readreq_state203.read()) && esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00001001.read(), ap_const_boolean_0));
}

void sobel_filter::thread_ap_condition_pp0_exit_iter0_state13() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_fu_1677_p2.read())) {
        ap_condition_pp0_exit_iter0_state13 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state13 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_condition_pp1_exit_iter0_state34() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_1_fu_2203_p2.read())) {
        ap_condition_pp1_exit_iter0_state34 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state34 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_condition_pp2_exit_iter0_state55() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_2_fu_2622_p2.read())) {
        ap_condition_pp2_exit_iter0_state55 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state55 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_condition_pp3_exit_iter0_state76() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_3_fu_3041_p2.read())) {
        ap_condition_pp3_exit_iter0_state76 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state76 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_condition_pp4_exit_iter0_state97() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_4_fu_3460_p2.read())) {
        ap_condition_pp4_exit_iter0_state97 = ap_const_logic_1;
    } else {
        ap_condition_pp4_exit_iter0_state97 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_condition_pp5_exit_iter0_state118() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_5_fu_3879_p2.read())) {
        ap_condition_pp5_exit_iter0_state118 = ap_const_logic_1;
    } else {
        ap_condition_pp5_exit_iter0_state118 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_condition_pp6_exit_iter0_state139() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_6_fu_4298_p2.read())) {
        ap_condition_pp6_exit_iter0_state139 = ap_const_logic_1;
    } else {
        ap_condition_pp6_exit_iter0_state139 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_condition_pp7_exit_iter0_state160() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_7_fu_4717_p2.read())) {
        ap_condition_pp7_exit_iter0_state160 = ap_const_logic_1;
    } else {
        ap_condition_pp7_exit_iter0_state160 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_condition_pp8_exit_iter0_state181() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_8_fu_5136_p2.read())) {
        ap_condition_pp8_exit_iter0_state181 = ap_const_logic_1;
    } else {
        ap_condition_pp8_exit_iter0_state181 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_condition_pp9_exit_iter0_state202() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_9_fu_5533_p2.read())) {
        ap_condition_pp9_exit_iter0_state202 = ap_const_logic_1;
    } else {
        ap_condition_pp9_exit_iter0_state202 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_1_fu_1599_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void sobel_filter::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void sobel_filter::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void sobel_filter::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void sobel_filter::thread_ap_enable_pp4() {
    ap_enable_pp4 = (ap_idle_pp4.read() ^ ap_const_logic_1);
}

void sobel_filter::thread_ap_enable_pp5() {
    ap_enable_pp5 = (ap_idle_pp5.read() ^ ap_const_logic_1);
}

void sobel_filter::thread_ap_enable_pp6() {
    ap_enable_pp6 = (ap_idle_pp6.read() ^ ap_const_logic_1);
}

void sobel_filter::thread_ap_enable_pp7() {
    ap_enable_pp7 = (ap_idle_pp7.read() ^ ap_const_logic_1);
}

void sobel_filter::thread_ap_enable_pp8() {
    ap_enable_pp8 = (ap_idle_pp8.read() ^ ap_const_logic_1);
}

void sobel_filter::thread_ap_enable_pp9() {
    ap_enable_pp9 = (ap_idle_pp9.read() ^ ap_const_logic_1);
}

void sobel_filter::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter9.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter9.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter9.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_idle_pp4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter9.read()))) {
        ap_idle_pp4 = ap_const_logic_1;
    } else {
        ap_idle_pp4 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_idle_pp5() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter9.read()))) {
        ap_idle_pp5 = ap_const_logic_1;
    } else {
        ap_idle_pp5 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_idle_pp6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter9.read()))) {
        ap_idle_pp6 = ap_const_logic_1;
    } else {
        ap_idle_pp6 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_idle_pp7() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter9.read()))) {
        ap_idle_pp7 = ap_const_logic_1;
    } else {
        ap_idle_pp7 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_idle_pp8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter9.read()))) {
        ap_idle_pp8 = ap_const_logic_1;
    } else {
        ap_idle_pp8 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_idle_pp9() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter9.read()))) {
        ap_idle_pp9 = ap_const_logic_1;
    } else {
        ap_idle_pp9 = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_predicate_op1152_readreq_state119() {
    ap_predicate_op1152_readreq_state119 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_5_reg_6831.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_287_reg_6841.read()));
}

void sobel_filter::thread_ap_predicate_op1316_readreq_state140() {
    ap_predicate_op1316_readreq_state140 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_6_reg_6990.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_292_reg_7000.read()));
}

void sobel_filter::thread_ap_predicate_op1480_readreq_state161() {
    ap_predicate_op1480_readreq_state161 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_7_reg_7149.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_297_reg_7159.read()));
}

void sobel_filter::thread_ap_predicate_op1644_readreq_state182() {
    ap_predicate_op1644_readreq_state182 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_8_reg_7308.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_304_reg_7318.read()));
}

void sobel_filter::thread_ap_predicate_op1806_readreq_state203() {
    ap_predicate_op1806_readreq_state203 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_9_reg_7472.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_9_reg_7448.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_309_reg_7482.read()));
}

void sobel_filter::thread_ap_predicate_op1830_read_state210() {
    ap_predicate_op1830_read_state210 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_9_reg_7448.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp9_iter3_tmp_309_reg_7482.read()));
}

void sobel_filter::thread_ap_predicate_op1909_writereq_state215() {
    ap_predicate_op1909_writereq_state215 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_9_reg_7448.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp9_iter6_tmp_309_reg_7482.read()));
}

void sobel_filter::thread_ap_predicate_op1910_writereq_state215() {
    ap_predicate_op1910_writereq_state215 = (esl_seteq<1,1,1>(tmp_4_9_reg_7448.read(), ap_const_lv1_1) || esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp9_iter6_tmp_309_reg_7482.read()));
}

void sobel_filter::thread_ap_predicate_op1912_write_state216() {
    ap_predicate_op1912_write_state216 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_9_reg_7448.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp9_iter6_tmp_309_reg_7482.read()));
}

void sobel_filter::thread_ap_predicate_op1913_write_state216() {
    ap_predicate_op1913_write_state216 = (esl_seteq<1,1,1>(tmp_4_9_reg_7448.read(), ap_const_lv1_1) || esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp9_iter6_tmp_309_reg_7482.read()));
}

void sobel_filter::thread_ap_predicate_op1922_writeresp_state221() {
    ap_predicate_op1922_writeresp_state221 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_9_reg_7448.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp9_iter9_tmp_309_reg_7482.read()));
}

void sobel_filter::thread_ap_predicate_op1923_writeresp_state221() {
    ap_predicate_op1923_writeresp_state221 = (esl_seteq<1,1,1>(tmp_4_9_reg_7448.read(), ap_const_lv1_1) || esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp9_iter9_tmp_309_reg_7482.read()));
}

void sobel_filter::thread_ap_predicate_op333_readreq_state14() {
    ap_predicate_op333_readreq_state14 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_reg_5962.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_reg_5914.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_146_reg_5972.read()));
}

void sobel_filter::thread_ap_predicate_op357_read_state21() {
    ap_predicate_op357_read_state21 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_reg_5914.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter3_tmp_146_reg_5972.read()));
}

void sobel_filter::thread_ap_predicate_op436_writereq_state26() {
    ap_predicate_op436_writereq_state26 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_reg_5914.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter6_tmp_146_reg_5972.read()));
}

void sobel_filter::thread_ap_predicate_op437_writereq_state26() {
    ap_predicate_op437_writereq_state26 = (esl_seteq<1,1,1>(tmp_s_reg_5914.read(), ap_const_lv1_1) || esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp0_iter6_tmp_146_reg_5972.read()));
}

void sobel_filter::thread_ap_predicate_op439_write_state27() {
    ap_predicate_op439_write_state27 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_reg_5914.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter6_tmp_146_reg_5972.read()));
}

void sobel_filter::thread_ap_predicate_op440_write_state27() {
    ap_predicate_op440_write_state27 = (esl_seteq<1,1,1>(tmp_s_reg_5914.read(), ap_const_lv1_1) || esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp0_iter6_tmp_146_reg_5972.read()));
}

void sobel_filter::thread_ap_predicate_op449_writeresp_state32() {
    ap_predicate_op449_writeresp_state32 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_reg_5914.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter9_tmp_146_reg_5972.read()));
}

void sobel_filter::thread_ap_predicate_op450_writeresp_state32() {
    ap_predicate_op450_writeresp_state32 = (esl_seteq<1,1,1>(tmp_s_reg_5914.read(), ap_const_lv1_1) || esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp0_iter9_tmp_146_reg_5972.read()));
}

void sobel_filter::thread_ap_predicate_op496_readreq_state35() {
    ap_predicate_op496_readreq_state35 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_1_reg_6195.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_188_reg_6205.read()));
}

void sobel_filter::thread_ap_predicate_op660_readreq_state56() {
    ap_predicate_op660_readreq_state56 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_2_reg_6354.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_224_reg_6364.read()));
}

void sobel_filter::thread_ap_predicate_op824_readreq_state77() {
    ap_predicate_op824_readreq_state77 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_3_reg_6513.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_237_reg_6523.read()));
}

void sobel_filter::thread_ap_predicate_op988_readreq_state98() {
    ap_predicate_op988_readreq_state98 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_4_reg_6672.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_282_reg_6682.read()));
}

void sobel_filter::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_1_fu_1599_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void sobel_filter::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void sobel_filter::thread_ap_sig_ioackin_gmem2_AWREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) {
        ap_sig_ioackin_gmem2_AWREADY = gmem2_AWREADY.read();
    } else {
        ap_sig_ioackin_gmem2_AWREADY = ap_const_logic_1;
    }
}

void sobel_filter::thread_ap_sig_ioackin_gmem2_WREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read())) {
        ap_sig_ioackin_gmem2_WREADY = gmem2_WREADY.read();
    } else {
        ap_sig_ioackin_gmem2_WREADY = ap_const_logic_1;
    }
}

void sobel_filter::thread_ap_sig_ioackin_gmem_ARREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) {
        ap_sig_ioackin_gmem_ARREADY = gmem_ARREADY.read();
    } else {
        ap_sig_ioackin_gmem_ARREADY = ap_const_logic_1;
    }
}

void sobel_filter::thread_edge_val_1_fu_2441_p2() {
    edge_val_1_fu_2441_p2 = (tmp_15_1_reg_6305.read() ^ ap_const_lv8_FF);
}

void sobel_filter::thread_edge_val_1_i_1_fu_2470_p3() {
    edge_val_1_i_1_fu_2470_p3 = (!tmp_54_fu_2464_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_54_fu_2464_p2.read()[0].to_bool())? p_i_1_fu_2456_p3.read(): edge_val_1_fu_2441_p2.read());
}

void sobel_filter::thread_edge_val_1_i_2_fu_2889_p3() {
    edge_val_1_i_2_fu_2889_p3 = (!tmp_76_fu_2883_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_76_fu_2883_p2.read()[0].to_bool())? p_i_2_fu_2875_p3.read(): edge_val_2_fu_2860_p2.read());
}

void sobel_filter::thread_edge_val_1_i_3_fu_3308_p3() {
    edge_val_1_i_3_fu_3308_p3 = (!tmp_96_fu_3302_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_96_fu_3302_p2.read()[0].to_bool())? p_i_3_fu_3294_p3.read(): edge_val_3_fu_3279_p2.read());
}

void sobel_filter::thread_edge_val_1_i_4_fu_3727_p3() {
    edge_val_1_i_4_fu_3727_p3 = (!tmp_116_fu_3721_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_116_fu_3721_p2.read()[0].to_bool())? p_i_4_fu_3713_p3.read(): edge_val_4_fu_3698_p2.read());
}

void sobel_filter::thread_edge_val_1_i_5_fu_4146_p3() {
    edge_val_1_i_5_fu_4146_p3 = (!tmp_145_fu_4140_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_145_fu_4140_p2.read()[0].to_bool())? p_i_5_fu_4132_p3.read(): edge_val_5_fu_4117_p2.read());
}

void sobel_filter::thread_edge_val_1_i_6_fu_4565_p3() {
    edge_val_1_i_6_fu_4565_p3 = (!tmp_165_fu_4559_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_165_fu_4559_p2.read()[0].to_bool())? p_i_6_fu_4551_p3.read(): edge_val_6_fu_4536_p2.read());
}

void sobel_filter::thread_edge_val_1_i_7_fu_4984_p3() {
    edge_val_1_i_7_fu_4984_p3 = (!tmp_191_fu_4978_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_191_fu_4978_p2.read()[0].to_bool())? p_i_7_fu_4970_p3.read(): edge_val_7_fu_4955_p2.read());
}

void sobel_filter::thread_edge_val_1_i_8_fu_5403_p3() {
    edge_val_1_i_8_fu_5403_p3 = (!tmp_202_fu_5397_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_202_fu_5397_p2.read()[0].to_bool())? p_i_8_fu_5389_p3.read(): edge_val_8_fu_5374_p2.read());
}

void sobel_filter::thread_edge_val_1_i_9_fu_5800_p3() {
    edge_val_1_i_9_fu_5800_p3 = (!tmp_213_fu_5794_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_213_fu_5794_p2.read()[0].to_bool())? p_i_9_fu_5786_p3.read(): edge_val_9_fu_5771_p2.read());
}

void sobel_filter::thread_edge_val_1_i_fu_2041_p3() {
    edge_val_1_i_fu_2041_p3 = (!tmp_34_fu_2035_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_34_fu_2035_p2.read()[0].to_bool())? p_i_fu_2027_p3.read(): edge_val_fu_2012_p2.read());
}

void sobel_filter::thread_edge_val_2_fu_2860_p2() {
    edge_val_2_fu_2860_p2 = (tmp_15_2_reg_6464.read() ^ ap_const_lv8_FF);
}

void sobel_filter::thread_edge_val_3_fu_3279_p2() {
    edge_val_3_fu_3279_p2 = (tmp_15_3_reg_6623.read() ^ ap_const_lv8_FF);
}

void sobel_filter::thread_edge_val_4_fu_3698_p2() {
    edge_val_4_fu_3698_p2 = (tmp_15_4_reg_6782.read() ^ ap_const_lv8_FF);
}

void sobel_filter::thread_edge_val_5_fu_4117_p2() {
    edge_val_5_fu_4117_p2 = (tmp_15_5_reg_6941.read() ^ ap_const_lv8_FF);
}

void sobel_filter::thread_edge_val_6_fu_4536_p2() {
    edge_val_6_fu_4536_p2 = (tmp_15_6_reg_7100.read() ^ ap_const_lv8_FF);
}

void sobel_filter::thread_edge_val_7_fu_4955_p2() {
    edge_val_7_fu_4955_p2 = (tmp_15_7_reg_7259.read() ^ ap_const_lv8_FF);
}

void sobel_filter::thread_edge_val_8_fu_5374_p2() {
    edge_val_8_fu_5374_p2 = (tmp_15_8_reg_7418.read() ^ ap_const_lv8_FF);
}

void sobel_filter::thread_edge_val_9_fu_5771_p2() {
    edge_val_9_fu_5771_p2 = (tmp_15_9_reg_7587.read() ^ ap_const_lv8_FF);
}

void sobel_filter::thread_edge_val_fu_2012_p2() {
    edge_val_fu_2012_p2 = (tmp_31_reg_6105.read() ^ ap_const_lv8_FF);
}

void sobel_filter::thread_gmem2_AWADDR() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1909_writereq_state215.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1910_writereq_state215.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())))) {
        gmem2_AWADDR = ap_reg_pp9_iter6_gmem2_addr_9_reg_7467.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter6_tmp_304_reg_7318.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp8_iter6_tmp_304_reg_7318.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())))) {
        gmem2_AWADDR = ap_reg_pp8_iter6_gmem2_addr_8_reg_7298.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter6_tmp_297_reg_7159.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp7_iter6_tmp_297_reg_7159.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())))) {
        gmem2_AWADDR = ap_reg_pp7_iter6_gmem2_addr_7_reg_7139.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter6_tmp_292_reg_7000.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp6_iter6_tmp_292_reg_7000.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())))) {
        gmem2_AWADDR = ap_reg_pp6_iter6_gmem2_addr_6_reg_6980.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter6_tmp_287_reg_6841.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp5_iter6_tmp_287_reg_6841.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())))) {
        gmem2_AWADDR = ap_reg_pp5_iter6_gmem2_addr_5_reg_6821.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter6_tmp_282_reg_6682.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp4_iter6_tmp_282_reg_6682.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())))) {
        gmem2_AWADDR = ap_reg_pp4_iter6_gmem2_addr_4_reg_6662.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter6_tmp_237_reg_6523.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter6_tmp_237_reg_6523.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())))) {
        gmem2_AWADDR = ap_reg_pp3_iter6_gmem2_addr_3_reg_6503.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter6_tmp_224_reg_6364.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter6_tmp_224_reg_6364.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())))) {
        gmem2_AWADDR = ap_reg_pp2_iter6_gmem2_addr_2_reg_6344.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter6_tmp_188_reg_6205.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter6_tmp_188_reg_6205.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())))) {
        gmem2_AWADDR = ap_reg_pp1_iter6_gmem2_addr_1_reg_6185.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op436_writereq_state26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op437_writereq_state26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())))) {
        gmem2_AWADDR = ap_reg_pp0_iter6_gmem2_addr_reg_5957.read();
    } else {
        gmem2_AWADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void sobel_filter::thread_gmem2_AWVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op436_writereq_state26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op437_writereq_state26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter6_tmp_188_reg_6205.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter6_tmp_188_reg_6205.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter6_tmp_224_reg_6364.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter6_tmp_224_reg_6364.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter6_tmp_237_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter6_tmp_237_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter6_tmp_282_reg_6682.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp4_iter6_tmp_282_reg_6682.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter6_tmp_287_reg_6841.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp5_iter6_tmp_287_reg_6841.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter6_tmp_292_reg_7000.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp6_iter6_tmp_292_reg_7000.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter6_tmp_297_reg_7159.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp7_iter6_tmp_297_reg_7159.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter6_tmp_304_reg_7318.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp8_iter6_tmp_304_reg_7318.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1909_writereq_state215.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1910_writereq_state215.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_AWREADY.read())))) {
        gmem2_AWVALID = ap_const_logic_1;
    } else {
        gmem2_AWVALID = ap_const_logic_0;
    }
}

void sobel_filter::thread_gmem2_BREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op449_writeresp_state32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op450_writeresp_state32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter9_tmp_188_reg_6205.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter9_tmp_188_reg_6205.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter9_tmp_224_reg_6364.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter9_tmp_224_reg_6364.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter9_tmp_237_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter9_tmp_237_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter9_tmp_282_reg_6682.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp4_iter9_tmp_282_reg_6682.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter9_tmp_287_reg_6841.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp5_iter9_tmp_287_reg_6841.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter9_tmp_292_reg_7000.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp6_iter9_tmp_292_reg_7000.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter9_tmp_297_reg_7159.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp7_iter9_tmp_297_reg_7159.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter9_tmp_304_reg_7318.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp8_iter9_tmp_304_reg_7318.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1922_writeresp_state221.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1923_writeresp_state221.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00011001.read(), ap_const_boolean_0)))) {
        gmem2_BREADY = ap_const_logic_1;
    } else {
        gmem2_BREADY = ap_const_logic_0;
    }
}

void sobel_filter::thread_gmem2_WDATA() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1912_write_state216.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00001001.read(), ap_const_boolean_0))) {
        gmem2_WDATA = tmp_26_9_fu_5808_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter6_tmp_304_reg_7318.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00001001.read(), ap_const_boolean_0))) {
        gmem2_WDATA = tmp_26_8_fu_5411_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter6_tmp_297_reg_7159.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00001001.read(), ap_const_boolean_0))) {
        gmem2_WDATA = tmp_26_7_fu_4992_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter6_tmp_292_reg_7000.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00001001.read(), ap_const_boolean_0))) {
        gmem2_WDATA = tmp_26_6_fu_4573_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter6_tmp_287_reg_6841.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00001001.read(), ap_const_boolean_0))) {
        gmem2_WDATA = tmp_26_5_fu_4154_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter6_tmp_282_reg_6682.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00001001.read(), ap_const_boolean_0))) {
        gmem2_WDATA = tmp_26_4_fu_3735_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter6_tmp_237_reg_6523.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00001001.read(), ap_const_boolean_0))) {
        gmem2_WDATA = tmp_26_3_fu_3316_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter6_tmp_224_reg_6364.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00001001.read(), ap_const_boolean_0))) {
        gmem2_WDATA = tmp_26_2_fu_2897_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter6_tmp_188_reg_6205.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00001001.read(), ap_const_boolean_0))) {
        gmem2_WDATA = tmp_26_1_fu_2478_p5.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                 esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op440_write_state27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00001001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter6_tmp_188_reg_6205.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter7.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00001001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter6_tmp_224_reg_6364.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter7.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00001001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter6_tmp_237_reg_6523.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter7.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00001001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp4_iter6_tmp_282_reg_6682.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter7.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00001001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp5_iter6_tmp_287_reg_6841.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter7.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00001001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp6_iter6_tmp_292_reg_7000.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00001001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp7_iter6_tmp_297_reg_7159.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter7.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00001001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp8_iter6_tmp_304_reg_7318.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter7.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00001001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter7.read()) && 
                 esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1913_write_state216.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00001001.read(), ap_const_boolean_0)))) {
        gmem2_WDATA = ap_const_lv32_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op439_write_state27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00001001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()))) {
        gmem2_WDATA = tmp_38_fu_2049_p5.read();
    } else {
        gmem2_WDATA = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void sobel_filter::thread_gmem2_WVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op439_write_state27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op440_write_state27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00001001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter6_tmp_188_reg_6205.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter6_tmp_188_reg_6205.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter6_tmp_224_reg_6364.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter6_tmp_224_reg_6364.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter6_tmp_237_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter6_tmp_237_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter6_tmp_282_reg_6682.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp4_iter6_tmp_282_reg_6682.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter6_tmp_287_reg_6841.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp5_iter6_tmp_287_reg_6841.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter6_tmp_292_reg_7000.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp6_iter6_tmp_292_reg_7000.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter6_tmp_297_reg_7159.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp7_iter6_tmp_297_reg_7159.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter6_tmp_304_reg_7318.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp8_iter6_tmp_304_reg_7318.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1912_write_state216.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1913_write_state216.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem2_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00001001.read(), ap_const_boolean_0)))) {
        gmem2_WVALID = ap_const_logic_1;
    } else {
        gmem2_WVALID = ap_const_logic_0;
    }
}

void sobel_filter::thread_gmem2_blk_n_AW() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          (esl_seteq<1,1,1>(tmp_s_reg_5914.read(), ap_const_lv1_1) || 
           esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp0_iter6_tmp_146_reg_5972.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_reg_5914.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter6_tmp_146_reg_5972.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter6_tmp_188_reg_6205.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter6_tmp_188_reg_6205.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter6_tmp_224_reg_6364.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter6_tmp_224_reg_6364.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter6_tmp_237_reg_6523.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter6_tmp_237_reg_6523.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp4_iter6_tmp_282_reg_6682.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter6_tmp_282_reg_6682.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp5_iter6_tmp_287_reg_6841.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter6_tmp_287_reg_6841.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp6_iter6_tmp_292_reg_7000.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter6_tmp_292_reg_7000.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp7_iter6_tmp_297_reg_7159.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter6_tmp_297_reg_7159.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp8_iter6_tmp_304_reg_7318.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter6_tmp_304_reg_7318.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter6.read()) && 
          (esl_seteq<1,1,1>(tmp_4_9_reg_7448.read(), ap_const_lv1_1) || 
           esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp9_iter6_tmp_309_reg_7482.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_9_reg_7448.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp9_iter6_tmp_309_reg_7482.read())))) {
        gmem2_blk_n_AW = m_axi_gmem2_AWREADY.read();
    } else {
        gmem2_blk_n_AW = ap_const_logic_1;
    }
}

void sobel_filter::thread_gmem2_blk_n_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
          (esl_seteq<1,1,1>(tmp_s_reg_5914.read(), ap_const_lv1_1) || 
           esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp0_iter9_tmp_146_reg_5972.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_reg_5914.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter9_tmp_146_reg_5972.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter9_tmp_188_reg_6205.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter9_tmp_188_reg_6205.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter9_tmp_224_reg_6364.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter9_tmp_224_reg_6364.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter9_tmp_237_reg_6523.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter9_tmp_237_reg_6523.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp4_iter9_tmp_282_reg_6682.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter9_tmp_282_reg_6682.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp5_iter9_tmp_287_reg_6841.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter9_tmp_287_reg_6841.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp6_iter9_tmp_292_reg_7000.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter9_tmp_292_reg_7000.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp7_iter9_tmp_297_reg_7159.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter9_tmp_297_reg_7159.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp8_iter9_tmp_304_reg_7318.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter9_tmp_304_reg_7318.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter9.read()) && 
          (esl_seteq<1,1,1>(tmp_4_9_reg_7448.read(), ap_const_lv1_1) || 
           esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp9_iter9_tmp_309_reg_7482.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_9_reg_7448.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp9_iter9_tmp_309_reg_7482.read())))) {
        gmem2_blk_n_B = m_axi_gmem2_BVALID.read();
    } else {
        gmem2_blk_n_B = ap_const_logic_1;
    }
}

void sobel_filter::thread_gmem2_blk_n_W() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
          (esl_seteq<1,1,1>(tmp_s_reg_5914.read(), ap_const_lv1_1) || 
           esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp0_iter6_tmp_146_reg_5972.read())) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_reg_5914.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter6_tmp_146_reg_5972.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter6_tmp_188_reg_6205.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter6_tmp_188_reg_6205.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter6_tmp_224_reg_6364.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter6_tmp_224_reg_6364.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter6_tmp_237_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter6_tmp_237_reg_6523.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp4_iter6_tmp_282_reg_6682.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter6_tmp_282_reg_6682.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp5_iter6_tmp_287_reg_6841.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter6_tmp_287_reg_6841.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp6_iter6_tmp_292_reg_7000.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter6_tmp_292_reg_7000.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp7_iter6_tmp_297_reg_7159.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter6_tmp_297_reg_7159.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp8_iter6_tmp_304_reg_7318.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter6_tmp_304_reg_7318.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00000000.read(), ap_const_boolean_0) && 
          (esl_seteq<1,1,1>(tmp_4_9_reg_7448.read(), ap_const_lv1_1) || 
           esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp9_iter6_tmp_309_reg_7482.read())) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter7.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_9_reg_7448.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp9_iter6_tmp_309_reg_7482.read())))) {
        gmem2_blk_n_W = m_axi_gmem2_WREADY.read();
    } else {
        gmem2_blk_n_W = ap_const_logic_1;
    }
}

void sobel_filter::thread_gmem_ARADDR() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) {
        if (esl_seteq<1,1,1>(ap_condition_3623.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_10_reg_7461.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3610.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_9_reg_7292.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3597.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_8_reg_7133.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3584.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_7_reg_6974.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3571.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_6_reg_6815.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3558.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_5_reg_6656.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3545.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_4_reg_6497.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3532.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_3_reg_6338.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3519.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_2_reg_6179.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3507.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_1_reg_5951.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
            gmem_ARADDR = gmem_addr_reg_5871.read();
        } else {
            gmem_ARADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        gmem_ARADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void sobel_filter::thread_gmem_ARLEN() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op333_readreq_state14.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op496_readreq_state35.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op660_readreq_state56.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op824_readreq_state77.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op988_readreq_state98.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1152_readreq_state119.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1316_readreq_state140.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1480_readreq_state161.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1644_readreq_state182.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1806_readreq_state203.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00001001.read(), ap_const_boolean_0)))) {
        gmem_ARLEN = ap_const_lv32_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()))) {
        gmem_ARLEN = ap_const_lv32_780;
    } else {
        gmem_ARLEN = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void sobel_filter::thread_gmem_ARVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op333_readreq_state14.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op496_readreq_state35.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op660_readreq_state56.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op824_readreq_state77.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op988_readreq_state98.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1152_readreq_state119.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1316_readreq_state140.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1480_readreq_state161.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1644_readreq_state182.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00001001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1806_readreq_state203.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00001001.read(), ap_const_boolean_0)))) {
        gmem_ARVALID = ap_const_logic_1;
    } else {
        gmem_ARVALID = ap_const_logic_0;
    }
}

void sobel_filter::thread_gmem_RREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(tmp_2_fu_1535_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(tmp_2_fu_1535_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op357_read_state21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter3_tmp_188_reg_6205.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter3_tmp_224_reg_6364.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter3_tmp_237_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter3_tmp_282_reg_6682.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter3_tmp_287_reg_6841.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter3_tmp_292_reg_7000.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter3_tmp_297_reg_7159.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter3_tmp_304_reg_7318.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1830_read_state210.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        gmem_RREADY = ap_const_logic_1;
    } else {
        gmem_RREADY = ap_const_logic_0;
    }
}

void sobel_filter::thread_gmem_blk_n_AR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_reg_5962.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_reg_5914.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_146_reg_5972.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_1_reg_6195.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_188_reg_6205.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_2_reg_6354.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_224_reg_6364.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_3_reg_6513.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_237_reg_6523.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_4_reg_6672.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_282_reg_6682.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_5_reg_6831.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_287_reg_6841.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_6_reg_6990.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_292_reg_7000.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_7_reg_7149.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_297_reg_7159.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_8_reg_7308.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_304_reg_7318.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_9_reg_7472.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_9_reg_7448.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_309_reg_7482.read())))) {
        gmem_blk_n_AR = m_axi_gmem_ARREADY.read();
    } else {
        gmem_blk_n_AR = ap_const_logic_1;
    }
}

void sobel_filter::thread_gmem_blk_n_R() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(tmp_2_fu_1535_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_reg_5914.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter3_tmp_146_reg_5972.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter3_tmp_188_reg_6205.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter3_tmp_224_reg_6364.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter3_tmp_237_reg_6523.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter3_tmp_282_reg_6682.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter3_tmp_287_reg_6841.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter3_tmp_292_reg_7000.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter3_tmp_297_reg_7159.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter3_tmp_304_reg_7318.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_9_reg_7448.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp9_iter3_tmp_309_reg_7482.read())))) {
        gmem_blk_n_R = m_axi_gmem_RVALID.read();
    } else {
        gmem_blk_n_R = ap_const_logic_1;
    }
}

void sobel_filter::thread_i_1_fu_1541_p2() {
    i_1_fu_1541_p2 = (!i_reg_1133.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(i_reg_1133.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void sobel_filter::thread_i_2_1_fu_2526_p2() {
    i_2_1_fu_2526_p2 = (!i1_reg_1156.read().is_01() || !ap_const_lv11_2.is_01())? sc_lv<11>(): (sc_biguint<11>(i1_reg_1156.read()) + sc_biguint<11>(ap_const_lv11_2));
}

void sobel_filter::thread_i_2_2_fu_2945_p2() {
    i_2_2_fu_2945_p2 = (!i1_reg_1156.read().is_01() || !ap_const_lv11_3.is_01())? sc_lv<11>(): (sc_biguint<11>(i1_reg_1156.read()) + sc_biguint<11>(ap_const_lv11_3));
}

void sobel_filter::thread_i_2_3_fu_3364_p2() {
    i_2_3_fu_3364_p2 = (!i1_reg_1156.read().is_01() || !ap_const_lv11_4.is_01())? sc_lv<11>(): (sc_biguint<11>(i1_reg_1156.read()) + sc_biguint<11>(ap_const_lv11_4));
}

void sobel_filter::thread_i_2_4_fu_3783_p2() {
    i_2_4_fu_3783_p2 = (!i1_reg_1156.read().is_01() || !ap_const_lv11_5.is_01())? sc_lv<11>(): (sc_biguint<11>(i1_reg_1156.read()) + sc_biguint<11>(ap_const_lv11_5));
}

void sobel_filter::thread_i_2_5_fu_4202_p2() {
    i_2_5_fu_4202_p2 = (!i1_reg_1156.read().is_01() || !ap_const_lv11_6.is_01())? sc_lv<11>(): (sc_biguint<11>(i1_reg_1156.read()) + sc_biguint<11>(ap_const_lv11_6));
}

void sobel_filter::thread_i_2_6_fu_4621_p2() {
    i_2_6_fu_4621_p2 = (!i1_reg_1156.read().is_01() || !ap_const_lv11_7.is_01())? sc_lv<11>(): (sc_biguint<11>(i1_reg_1156.read()) + sc_biguint<11>(ap_const_lv11_7));
}

void sobel_filter::thread_i_2_7_fu_5040_p2() {
    i_2_7_fu_5040_p2 = (!i1_reg_1156.read().is_01() || !ap_const_lv11_8.is_01())? sc_lv<11>(): (sc_biguint<11>(i1_reg_1156.read()) + sc_biguint<11>(ap_const_lv11_8));
}

void sobel_filter::thread_i_2_8_fu_5443_p2() {
    i_2_8_fu_5443_p2 = (!ap_const_lv11_9.is_01() || !i1_reg_1156.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_9) + sc_biguint<11>(i1_reg_1156.read()));
}

void sobel_filter::thread_i_2_9_fu_5828_p2() {
    i_2_9_fu_5828_p2 = (!i1_reg_1156.read().is_01() || !ap_const_lv11_A.is_01())? sc_lv<11>(): (sc_biguint<11>(i1_reg_1156.read()) + sc_biguint<11>(ap_const_lv11_A));
}

void sobel_filter::thread_i_2_s_fu_2093_p2() {
    i_2_s_fu_2093_p2 = (i1_reg_1156.read() | ap_const_lv11_1);
}

void sobel_filter::thread_i_cast_fu_1528_p1() {
    i_cast_fu_1528_p1 = esl_zext<32,11>(i_reg_1133.read());
}

void sobel_filter::thread_inter_pix2_sum1_fu_1646_p2() {
    inter_pix2_sum1_fu_1646_p2 = (!inter_pix_read_reg_5834.read().is_01() || !tmp_77_fu_1641_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(inter_pix_read_reg_5834.read()) + sc_biguint<32>(tmp_77_fu_1641_p2.read()));
}

void sobel_filter::thread_inter_pix2_sum2_fu_2168_p2() {
    inter_pix2_sum2_fu_2168_p2 = (!inter_pix_read_reg_5834.read().is_01() || !tmp_126_fu_2163_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(inter_pix_read_reg_5834.read()) + sc_biguint<32>(tmp_126_fu_2163_p2.read()));
}

void sobel_filter::thread_inter_pix2_sum3_fu_2587_p2() {
    inter_pix2_sum3_fu_2587_p2 = (!inter_pix_read_reg_5834.read().is_01() || !tmp_222_cast_fu_2583_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(inter_pix_read_reg_5834.read()) + sc_bigint<32>(tmp_222_cast_fu_2583_p1.read()));
}

void sobel_filter::thread_inter_pix2_sum4_fu_3006_p2() {
    inter_pix2_sum4_fu_3006_p2 = (!inter_pix_read_reg_5834.read().is_01() || !tmp_230_cast_fu_3002_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(inter_pix_read_reg_5834.read()) + sc_bigint<32>(tmp_230_cast_fu_3002_p1.read()));
}

void sobel_filter::thread_inter_pix2_sum5_fu_3425_p2() {
    inter_pix2_sum5_fu_3425_p2 = (!inter_pix_read_reg_5834.read().is_01() || !tmp_238_cast_fu_3421_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(inter_pix_read_reg_5834.read()) + sc_bigint<32>(tmp_238_cast_fu_3421_p1.read()));
}

void sobel_filter::thread_inter_pix2_sum6_fu_3844_p2() {
    inter_pix2_sum6_fu_3844_p2 = (!inter_pix_read_reg_5834.read().is_01() || !tmp_246_cast_fu_3840_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(inter_pix_read_reg_5834.read()) + sc_bigint<32>(tmp_246_cast_fu_3840_p1.read()));
}

void sobel_filter::thread_inter_pix2_sum7_fu_4263_p2() {
    inter_pix2_sum7_fu_4263_p2 = (!inter_pix_read_reg_5834.read().is_01() || !tmp_254_cast_fu_4259_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(inter_pix_read_reg_5834.read()) + sc_bigint<32>(tmp_254_cast_fu_4259_p1.read()));
}

void sobel_filter::thread_inter_pix2_sum8_fu_4682_p2() {
    inter_pix2_sum8_fu_4682_p2 = (!inter_pix_read_reg_5834.read().is_01() || !tmp_262_cast_fu_4678_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(inter_pix_read_reg_5834.read()) + sc_bigint<32>(tmp_262_cast_fu_4678_p1.read()));
}

void sobel_filter::thread_inter_pix2_sum9_fu_5101_p2() {
    inter_pix2_sum9_fu_5101_p2 = (!inter_pix_read_reg_5834.read().is_01() || !tmp_270_cast_fu_5097_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(inter_pix_read_reg_5834.read()) + sc_bigint<32>(tmp_270_cast_fu_5097_p1.read()));
}

void sobel_filter::thread_inter_pix2_sum_fu_5502_p2() {
    inter_pix2_sum_fu_5502_p2 = (!inter_pix_read_reg_5834.read().is_01() || !tmp_278_fu_5497_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(inter_pix_read_reg_5834.read()) + sc_biguint<32>(tmp_278_fu_5497_p2.read()));
}

void sobel_filter::thread_j_1_1_fu_2209_p2() {
    j_1_1_fu_2209_p2 = (!row_assign_1_phi_fu_1183_p4.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(row_assign_1_phi_fu_1183_p4.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void sobel_filter::thread_j_1_2_fu_2628_p2() {
    j_1_2_fu_2628_p2 = (!row_assign_2_phi_fu_1194_p4.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(row_assign_2_phi_fu_1194_p4.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void sobel_filter::thread_j_1_3_fu_3047_p2() {
    j_1_3_fu_3047_p2 = (!row_assign_3_phi_fu_1205_p4.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(row_assign_3_phi_fu_1205_p4.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void sobel_filter::thread_j_1_4_fu_3466_p2() {
    j_1_4_fu_3466_p2 = (!row_assign_4_phi_fu_1216_p4.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(row_assign_4_phi_fu_1216_p4.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void sobel_filter::thread_j_1_5_fu_3885_p2() {
    j_1_5_fu_3885_p2 = (!row_assign_5_phi_fu_1227_p4.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(row_assign_5_phi_fu_1227_p4.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void sobel_filter::thread_j_1_6_fu_4304_p2() {
    j_1_6_fu_4304_p2 = (!row_assign_6_phi_fu_1238_p4.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(row_assign_6_phi_fu_1238_p4.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void sobel_filter::thread_j_1_7_fu_4723_p2() {
    j_1_7_fu_4723_p2 = (!row_assign_7_phi_fu_1249_p4.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(row_assign_7_phi_fu_1249_p4.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void sobel_filter::thread_j_1_8_fu_5142_p2() {
    j_1_8_fu_5142_p2 = (!row_assign_8_phi_fu_1260_p4.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(row_assign_8_phi_fu_1260_p4.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void sobel_filter::thread_j_1_9_fu_5539_p2() {
    j_1_9_fu_5539_p2 = (!row_assign_9_phi_fu_1271_p4.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(row_assign_9_phi_fu_1271_p4.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void sobel_filter::thread_j_1_fu_1683_p2() {
    j_1_fu_1683_p2 = (!row_assign_phi_fu_1172_p4.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(row_assign_phi_fu_1172_p4.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void sobel_filter::thread_lastLine_2_9_fu_5822_p3() {
    lastLine_2_9_fu_5822_p3 = (!tmp_4_9_reg_7448.read()[0].is_01())? sc_lv<32>(): ((tmp_4_9_reg_7448.read()[0].to_bool())? lastLine_3_8_reg_7433.read(): lastLine_3_9_fu_5817_p2.read());
}

void sobel_filter::thread_lastLine_2_fu_2064_p3() {
    lastLine_2_fu_2064_p3 = (!tmp_s_reg_5914.read()[0].is_01())? sc_lv<32>(): ((tmp_s_reg_5914.read()[0].to_bool())? lastLine_1_reg_1144.read(): lastLine_3_fu_2058_p2.read());
}

void sobel_filter::thread_lastLine_3_1_fu_2487_p2() {
    lastLine_3_1_fu_2487_p2 = (!tmp_98_reg_6131.read().is_01() || !ap_const_lv12_1.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_98_reg_6131.read()) + sc_biguint<12>(ap_const_lv12_1));
}

void sobel_filter::thread_lastLine_3_2_fu_2906_p2() {
    lastLine_3_2_fu_2906_p2 = (!tmp_98_reg_6131.read().is_01() || !ap_const_lv12_2.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_98_reg_6131.read()) + sc_biguint<12>(ap_const_lv12_2));
}

void sobel_filter::thread_lastLine_3_3_fu_3325_p2() {
    lastLine_3_3_fu_3325_p2 = (!tmp_98_reg_6131.read().is_01() || !ap_const_lv12_3.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_98_reg_6131.read()) + sc_biguint<12>(ap_const_lv12_3));
}

void sobel_filter::thread_lastLine_3_4_fu_3744_p2() {
    lastLine_3_4_fu_3744_p2 = (!tmp_98_reg_6131.read().is_01() || !ap_const_lv12_4.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_98_reg_6131.read()) + sc_biguint<12>(ap_const_lv12_4));
}

void sobel_filter::thread_lastLine_3_5_fu_4163_p2() {
    lastLine_3_5_fu_4163_p2 = (!tmp_98_reg_6131.read().is_01() || !ap_const_lv12_5.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_98_reg_6131.read()) + sc_biguint<12>(ap_const_lv12_5));
}

void sobel_filter::thread_lastLine_3_6_fu_4582_p2() {
    lastLine_3_6_fu_4582_p2 = (!tmp_98_reg_6131.read().is_01() || !ap_const_lv12_6.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_98_reg_6131.read()) + sc_biguint<12>(ap_const_lv12_6));
}

void sobel_filter::thread_lastLine_3_7_fu_5001_p2() {
    lastLine_3_7_fu_5001_p2 = (!tmp_98_reg_6131.read().is_01() || !ap_const_lv12_7.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_98_reg_6131.read()) + sc_biguint<12>(ap_const_lv12_7));
}

void sobel_filter::thread_lastLine_3_8_fu_5420_p2() {
    lastLine_3_8_fu_5420_p2 = (!ap_const_lv32_8.is_01() || !lastLine_2_reg_6120.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_8) + sc_biguint<32>(lastLine_2_reg_6120.read()));
}

void sobel_filter::thread_lastLine_3_9_fu_5817_p2() {
    lastLine_3_9_fu_5817_p2 = (!lastLine_2_reg_6120.read().is_01() || !ap_const_lv32_9.is_01())? sc_lv<32>(): (sc_biguint<32>(lastLine_2_reg_6120.read()) + sc_biguint<32>(ap_const_lv32_9));
}

void sobel_filter::thread_lastLine_3_fu_2058_p2() {
    lastLine_3_fu_2058_p2 = (!ap_const_lv32_1.is_01() || !lastLine_1_reg_1144.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(lastLine_1_reg_1144.read()));
}

void sobel_filter::thread_lineBuffer_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()))) {
        lineBuffer_0_address0 = lineBuffer_0_addr_29_reg_7491.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address0 =  (sc_lv<11>) (tmp_28_9_0_2_cast_fu_5569_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()))) {
        lineBuffer_0_address0 = lineBuffer_0_addr_26_reg_7322.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address0 =  (sc_lv<11>) (tmp_28_8_0_2_cast_fu_5166_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()))) {
        lineBuffer_0_address0 = lineBuffer_0_addr_23_reg_7163.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address0 =  (sc_lv<11>) (tmp_28_7_0_2_cast_fu_4747_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()))) {
        lineBuffer_0_address0 = lineBuffer_0_addr_20_reg_7004.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address0 =  (sc_lv<11>) (tmp_28_6_0_2_cast_fu_4328_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()))) {
        lineBuffer_0_address0 = lineBuffer_0_addr_17_reg_6845.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address0 =  (sc_lv<11>) (tmp_28_5_0_2_cast_fu_3909_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()))) {
        lineBuffer_0_address0 = lineBuffer_0_addr_14_reg_6686.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address0 =  (sc_lv<11>) (tmp_28_4_0_2_cast_fu_3490_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()))) {
        lineBuffer_0_address0 = lineBuffer_0_addr_11_reg_6527.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address0 =  (sc_lv<11>) (tmp_28_3_0_2_cast_fu_3071_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        lineBuffer_0_address0 = lineBuffer_0_addr_8_reg_6368.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address0 =  (sc_lv<11>) (tmp_28_2_0_2_cast_fu_2652_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        lineBuffer_0_address0 = lineBuffer_0_addr_5_reg_6209.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address0 =  (sc_lv<11>) (tmp_28_1_0_2_cast_fu_2233_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        lineBuffer_0_address0 = lineBuffer_0_addr_2_reg_5981.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address0 =  (sc_lv<11>) (ap_reg_pp0_iter3_row_assign_cast_reg_5943.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        lineBuffer_0_address0 = lineBuffer_0_addr_reg_5885.read();
    } else {
        lineBuffer_0_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void sobel_filter::thread_lineBuffer_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (tmp_28_9_cast_fu_5576_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (ap_reg_pp9_iter3_row_assign_9_cast_reg_7453.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (tmp_28_8_cast_fu_5178_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (ap_reg_pp8_iter3_row_assign_8_cast1_reg_7284.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (tmp_28_7_cast_fu_4759_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (ap_reg_pp7_iter3_row_assign_7_cast1_reg_7125.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (tmp_28_6_cast_fu_4340_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (ap_reg_pp6_iter3_row_assign_6_cast1_reg_6966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (tmp_28_5_cast_fu_3921_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (ap_reg_pp5_iter3_row_assign_5_cast1_reg_6807.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (tmp_28_4_cast_fu_3502_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (ap_reg_pp4_iter3_row_assign_4_cast1_reg_6648.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (tmp_28_3_cast_fu_3083_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (ap_reg_pp3_iter3_row_assign_3_cast1_reg_6489.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (tmp_28_2_cast_fu_2664_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (ap_reg_pp2_iter3_row_assign_2_cast1_reg_6330.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (tmp_28_1_cast_fu_2245_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (ap_reg_pp1_iter3_row_assign_1_cast1_reg_6171.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (tmp_28_0_cast_fu_1720_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_0_address1 =  (sc_lv<11>) (tmp_28_0_0_2_cast_fu_1713_p1.read());
    } else {
        lineBuffer_0_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void sobel_filter::thread_lineBuffer_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        lineBuffer_0_ce0 = ap_const_logic_1;
    } else {
        lineBuffer_0_ce0 = ap_const_logic_0;
    }
}

void sobel_filter::thread_lineBuffer_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00011001.read(), ap_const_boolean_0)))) {
        lineBuffer_0_ce1 = ap_const_logic_1;
    } else {
        lineBuffer_0_ce1 = ap_const_logic_0;
    }
}

void sobel_filter::thread_lineBuffer_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, lastLine_reg_1121.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_reg_5914.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter4_tmp_146_reg_5972.read()) && 
          esl_seteq<1,2,2>(tmp_70_reg_5919.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter4_tmp_188_reg_6205.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter4_tmp_224_reg_6364.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter4_tmp_237_reg_6523.read()) && 
          esl_seteq<1,2,2>(tmp_19_1_1_t_reg_6159.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter4_tmp_282_reg_6682.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter4_tmp_287_reg_6841.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter4_tmp_292_reg_7000.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter4_tmp_297_reg_7159.read()) && 
          esl_seteq<1,2,2>(tmp_19_1_1_t_reg_6159.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter4_tmp_304_reg_7318.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_9_reg_7448.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp9_iter4_tmp_309_reg_7482.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_0)))) {
        lineBuffer_0_we0 = ap_const_logic_1;
    } else {
        lineBuffer_0_we0 = ap_const_logic_0;
    }
}

void sobel_filter::thread_lineBuffer_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()))) {
        lineBuffer_1_address0 = lineBuffer_1_addr_29_reg_7497.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address0 =  (sc_lv<11>) (tmp_28_9_0_2_cast_fu_5569_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()))) {
        lineBuffer_1_address0 = lineBuffer_1_addr_26_reg_7328.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address0 =  (sc_lv<11>) (tmp_28_8_0_2_cast_fu_5166_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()))) {
        lineBuffer_1_address0 = lineBuffer_1_addr_23_reg_7169.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address0 =  (sc_lv<11>) (tmp_28_7_0_2_cast_fu_4747_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()))) {
        lineBuffer_1_address0 = lineBuffer_1_addr_20_reg_7010.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address0 =  (sc_lv<11>) (tmp_28_6_0_2_cast_fu_4328_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()))) {
        lineBuffer_1_address0 = lineBuffer_1_addr_17_reg_6851.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address0 =  (sc_lv<11>) (tmp_28_5_0_2_cast_fu_3909_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()))) {
        lineBuffer_1_address0 = lineBuffer_1_addr_14_reg_6692.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address0 =  (sc_lv<11>) (tmp_28_4_0_2_cast_fu_3490_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()))) {
        lineBuffer_1_address0 = lineBuffer_1_addr_11_reg_6533.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address0 =  (sc_lv<11>) (tmp_28_3_0_2_cast_fu_3071_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        lineBuffer_1_address0 = lineBuffer_1_addr_8_reg_6374.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address0 =  (sc_lv<11>) (tmp_28_2_0_2_cast_fu_2652_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        lineBuffer_1_address0 = lineBuffer_1_addr_5_reg_6215.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address0 =  (sc_lv<11>) (tmp_28_1_0_2_cast_fu_2233_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        lineBuffer_1_address0 = lineBuffer_1_addr_2_reg_5986.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address0 =  (sc_lv<11>) (ap_reg_pp0_iter3_row_assign_cast_reg_5943.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        lineBuffer_1_address0 = lineBuffer_1_addr_reg_5890.read();
    } else {
        lineBuffer_1_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void sobel_filter::thread_lineBuffer_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (tmp_28_9_cast_fu_5576_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (ap_reg_pp9_iter3_row_assign_9_cast_reg_7453.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (tmp_28_8_cast_fu_5178_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (ap_reg_pp8_iter3_row_assign_8_cast1_reg_7284.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (tmp_28_7_cast_fu_4759_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (ap_reg_pp7_iter3_row_assign_7_cast1_reg_7125.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (tmp_28_6_cast_fu_4340_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (ap_reg_pp6_iter3_row_assign_6_cast1_reg_6966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (tmp_28_5_cast_fu_3921_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (ap_reg_pp5_iter3_row_assign_5_cast1_reg_6807.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (tmp_28_4_cast_fu_3502_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (ap_reg_pp4_iter3_row_assign_4_cast1_reg_6648.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (tmp_28_3_cast_fu_3083_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (ap_reg_pp3_iter3_row_assign_3_cast1_reg_6489.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (tmp_28_2_cast_fu_2664_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (ap_reg_pp2_iter3_row_assign_2_cast1_reg_6330.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (tmp_28_1_cast_fu_2245_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (ap_reg_pp1_iter3_row_assign_1_cast1_reg_6171.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (tmp_28_0_cast_fu_1720_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_1_address1 =  (sc_lv<11>) (tmp_28_0_0_2_cast_fu_1713_p1.read());
    } else {
        lineBuffer_1_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void sobel_filter::thread_lineBuffer_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        lineBuffer_1_ce0 = ap_const_logic_1;
    } else {
        lineBuffer_1_ce0 = ap_const_logic_0;
    }
}

void sobel_filter::thread_lineBuffer_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00011001.read(), ap_const_boolean_0)))) {
        lineBuffer_1_ce1 = ap_const_logic_1;
    } else {
        lineBuffer_1_ce1 = ap_const_logic_0;
    }
}

void sobel_filter::thread_lineBuffer_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
          esl_seteq<1,2,2>(lastLine_reg_1121.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_reg_5914.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter4_tmp_146_reg_5972.read()) && 
          esl_seteq<1,2,2>(tmp_70_reg_5919.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter4_tmp_188_reg_6205.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter4_tmp_224_reg_6364.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter4_tmp_237_reg_6523.read()) && 
          esl_seteq<1,2,2>(tmp_19_1_1_t_reg_6159.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter4_tmp_282_reg_6682.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter4_tmp_287_reg_6841.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter4_tmp_292_reg_7000.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter4_tmp_297_reg_7159.read()) && 
          esl_seteq<1,2,2>(tmp_19_1_1_t_reg_6159.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter4_tmp_304_reg_7318.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_9_reg_7448.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp9_iter4_tmp_309_reg_7482.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_1)))) {
        lineBuffer_1_we0 = ap_const_logic_1;
    } else {
        lineBuffer_1_we0 = ap_const_logic_0;
    }
}

void sobel_filter::thread_lineBuffer_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()))) {
        lineBuffer_2_address0 = lineBuffer_2_addr_29_reg_7503.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address0 =  (sc_lv<11>) (tmp_28_9_0_2_cast_fu_5569_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()))) {
        lineBuffer_2_address0 = lineBuffer_2_addr_26_reg_7334.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address0 =  (sc_lv<11>) (tmp_28_8_0_2_cast_fu_5166_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()))) {
        lineBuffer_2_address0 = lineBuffer_2_addr_23_reg_7175.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address0 =  (sc_lv<11>) (tmp_28_7_0_2_cast_fu_4747_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()))) {
        lineBuffer_2_address0 = lineBuffer_2_addr_20_reg_7016.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address0 =  (sc_lv<11>) (tmp_28_6_0_2_cast_fu_4328_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()))) {
        lineBuffer_2_address0 = lineBuffer_2_addr_17_reg_6857.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address0 =  (sc_lv<11>) (tmp_28_5_0_2_cast_fu_3909_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()))) {
        lineBuffer_2_address0 = lineBuffer_2_addr_14_reg_6698.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address0 =  (sc_lv<11>) (tmp_28_4_0_2_cast_fu_3490_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()))) {
        lineBuffer_2_address0 = lineBuffer_2_addr_11_reg_6539.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address0 =  (sc_lv<11>) (tmp_28_3_0_2_cast_fu_3071_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        lineBuffer_2_address0 = lineBuffer_2_addr_8_reg_6380.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address0 =  (sc_lv<11>) (tmp_28_2_0_2_cast_fu_2652_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        lineBuffer_2_address0 = lineBuffer_2_addr_5_reg_6221.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address0 =  (sc_lv<11>) (tmp_28_1_0_2_cast_fu_2233_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        lineBuffer_2_address0 = lineBuffer_2_addr_2_reg_5991.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address0 =  (sc_lv<11>) (ap_reg_pp0_iter3_row_assign_cast_reg_5943.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        lineBuffer_2_address0 = lineBuffer_2_addr_reg_5895.read();
    } else {
        lineBuffer_2_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void sobel_filter::thread_lineBuffer_2_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (tmp_28_9_cast_fu_5576_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (ap_reg_pp9_iter3_row_assign_9_cast_reg_7453.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (tmp_28_8_cast_fu_5178_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (ap_reg_pp8_iter3_row_assign_8_cast1_reg_7284.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (tmp_28_7_cast_fu_4759_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (ap_reg_pp7_iter3_row_assign_7_cast1_reg_7125.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (tmp_28_6_cast_fu_4340_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (ap_reg_pp6_iter3_row_assign_6_cast1_reg_6966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (tmp_28_5_cast_fu_3921_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (ap_reg_pp5_iter3_row_assign_5_cast1_reg_6807.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (tmp_28_4_cast_fu_3502_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (ap_reg_pp4_iter3_row_assign_4_cast1_reg_6648.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (tmp_28_3_cast_fu_3083_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (ap_reg_pp3_iter3_row_assign_3_cast1_reg_6489.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (tmp_28_2_cast_fu_2664_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (ap_reg_pp2_iter3_row_assign_2_cast1_reg_6330.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (tmp_28_1_cast_fu_2245_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (ap_reg_pp1_iter3_row_assign_1_cast1_reg_6171.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (tmp_28_0_cast_fu_1720_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_2_address1 =  (sc_lv<11>) (tmp_28_0_0_2_cast_fu_1713_p1.read());
    } else {
        lineBuffer_2_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void sobel_filter::thread_lineBuffer_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        lineBuffer_2_ce0 = ap_const_logic_1;
    } else {
        lineBuffer_2_ce0 = ap_const_logic_0;
    }
}

void sobel_filter::thread_lineBuffer_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00011001.read(), ap_const_boolean_0)))) {
        lineBuffer_2_ce1 = ap_const_logic_1;
    } else {
        lineBuffer_2_ce1 = ap_const_logic_0;
    }
}

void sobel_filter::thread_lineBuffer_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, lastLine_reg_1121.read()) && 
          !esl_seteq<1,2,2>(lastLine_reg_1121.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_reg_5914.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter4_tmp_146_reg_5972.read()) && 
          esl_seteq<1,2,2>(tmp_70_reg_5919.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter4_tmp_188_reg_6205.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter4_tmp_224_reg_6364.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter4_tmp_237_reg_6523.read()) && 
          esl_seteq<1,2,2>(tmp_19_1_1_t_reg_6159.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter4_tmp_282_reg_6682.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter4_tmp_287_reg_6841.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter4_tmp_292_reg_7000.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter4_tmp_297_reg_7159.read()) && 
          esl_seteq<1,2,2>(tmp_19_1_1_t_reg_6159.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter4_tmp_304_reg_7318.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_9_reg_7448.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp9_iter4_tmp_309_reg_7482.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_2)))) {
        lineBuffer_2_we0 = ap_const_logic_1;
    } else {
        lineBuffer_2_we0 = ap_const_logic_0;
    }
}

void sobel_filter::thread_lineBuffer_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (tmp_28_9_cast_fu_5576_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (ap_reg_pp9_iter3_row_assign_9_cast_reg_7453.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (tmp_28_8_cast_fu_5178_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (ap_reg_pp8_iter3_row_assign_8_cast1_reg_7284.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (tmp_28_7_cast_fu_4759_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (ap_reg_pp7_iter3_row_assign_7_cast1_reg_7125.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (tmp_28_6_cast_fu_4340_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (ap_reg_pp6_iter3_row_assign_6_cast1_reg_6966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (tmp_28_5_cast_fu_3921_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (ap_reg_pp5_iter3_row_assign_5_cast1_reg_6807.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (tmp_28_4_cast_fu_3502_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (ap_reg_pp4_iter3_row_assign_4_cast1_reg_6648.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (tmp_28_3_cast_fu_3083_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (ap_reg_pp3_iter3_row_assign_3_cast1_reg_6489.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (tmp_28_2_cast_fu_2664_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (ap_reg_pp2_iter3_row_assign_2_cast1_reg_6330.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (tmp_28_1_cast_fu_2245_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (ap_reg_pp1_iter3_row_assign_1_cast1_reg_6171.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (tmp_28_0_cast_fu_1720_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address0 =  (sc_lv<11>) (ap_reg_pp0_iter3_row_assign_cast_reg_5943.read());
    } else {
        lineBuffer_3_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void sobel_filter::thread_lineBuffer_3_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()))) {
        lineBuffer_3_address1 = lineBuffer_3_addr_28_reg_7509.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address1 =  (sc_lv<11>) (tmp_28_9_0_2_cast_fu_5569_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()))) {
        lineBuffer_3_address1 = lineBuffer_3_addr_25_reg_7340.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address1 =  (sc_lv<11>) (tmp_28_8_0_2_cast_fu_5166_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()))) {
        lineBuffer_3_address1 = lineBuffer_3_addr_22_reg_7181.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address1 =  (sc_lv<11>) (tmp_28_7_0_2_cast_fu_4747_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()))) {
        lineBuffer_3_address1 = lineBuffer_3_addr_19_reg_7022.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address1 =  (sc_lv<11>) (tmp_28_6_0_2_cast_fu_4328_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()))) {
        lineBuffer_3_address1 = lineBuffer_3_addr_16_reg_6863.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address1 =  (sc_lv<11>) (tmp_28_5_0_2_cast_fu_3909_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()))) {
        lineBuffer_3_address1 = lineBuffer_3_addr_13_reg_6704.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address1 =  (sc_lv<11>) (tmp_28_4_0_2_cast_fu_3490_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()))) {
        lineBuffer_3_address1 = lineBuffer_3_addr_10_reg_6545.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address1 =  (sc_lv<11>) (tmp_28_3_0_2_cast_fu_3071_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        lineBuffer_3_address1 = lineBuffer_3_addr_7_reg_6386.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address1 =  (sc_lv<11>) (tmp_28_2_0_2_cast_fu_2652_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        lineBuffer_3_address1 = lineBuffer_3_addr_4_reg_6227.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address1 =  (sc_lv<11>) (tmp_28_1_0_2_cast_fu_2233_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        lineBuffer_3_address1 = lineBuffer_3_addr_1_reg_5996.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        lineBuffer_3_address1 =  (sc_lv<11>) (tmp_28_0_0_2_cast_fu_1713_p1.read());
    } else {
        lineBuffer_3_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void sobel_filter::thread_lineBuffer_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00011001.read(), ap_const_boolean_0)))) {
        lineBuffer_3_ce0 = ap_const_logic_1;
    } else {
        lineBuffer_3_ce0 = ap_const_logic_0;
    }
}

void sobel_filter::thread_lineBuffer_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00011001.read(), ap_const_boolean_0)))) {
        lineBuffer_3_ce1 = ap_const_logic_1;
    } else {
        lineBuffer_3_ce1 = ap_const_logic_0;
    }
}

void sobel_filter::thread_lineBuffer_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_reg_5914.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter4_tmp_146_reg_5972.read()) && 
          esl_seteq<1,2,2>(tmp_70_reg_5919.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter4_tmp_188_reg_6205.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter4_tmp_224_reg_6364.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter4_tmp_237_reg_6523.read()) && 
          esl_seteq<1,2,2>(tmp_19_1_1_t_reg_6159.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter4_tmp_282_reg_6682.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter4_tmp_287_reg_6841.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp6_iter4_tmp_292_reg_7000.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp7_iter4_tmp_297_reg_7159.read()) && 
          esl_seteq<1,2,2>(tmp_19_1_1_t_reg_6159.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp8_iter4_tmp_304_reg_7318.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_9_reg_7448.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp9_iter4_tmp_309_reg_7482.read()) && 
          esl_seteq<1,2,2>(tmp_121_reg_6147.read(), ap_const_lv2_3)))) {
        lineBuffer_3_we1 = ap_const_logic_1;
    } else {
        lineBuffer_3_we1 = ap_const_logic_0;
    }
}

void sobel_filter::thread_out_pix3_fu_1457_p4() {
    out_pix3_fu_1457_p4 = out_pix.read().range(31, 2);
}

void sobel_filter::thread_out_pix4_sum1_fu_2188_p2() {
    out_pix4_sum1_fu_2188_p2 = (!tmp_215_cast_fu_2184_p1.read().is_01() || !tmp_9_reg_5849.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_215_cast_fu_2184_p1.read()) + sc_biguint<32>(tmp_9_reg_5849.read()));
}

void sobel_filter::thread_out_pix4_sum2_fu_2607_p2() {
    out_pix4_sum2_fu_2607_p2 = (!tmp_223_cast_fu_2603_p1.read().is_01() || !tmp_9_reg_5849.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_223_cast_fu_2603_p1.read()) + sc_biguint<32>(tmp_9_reg_5849.read()));
}

void sobel_filter::thread_out_pix4_sum3_fu_3026_p2() {
    out_pix4_sum3_fu_3026_p2 = (!tmp_231_cast_fu_3022_p1.read().is_01() || !tmp_9_reg_5849.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_231_cast_fu_3022_p1.read()) + sc_biguint<32>(tmp_9_reg_5849.read()));
}

void sobel_filter::thread_out_pix4_sum4_fu_3445_p2() {
    out_pix4_sum4_fu_3445_p2 = (!tmp_239_cast_fu_3441_p1.read().is_01() || !tmp_9_reg_5849.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_239_cast_fu_3441_p1.read()) + sc_biguint<32>(tmp_9_reg_5849.read()));
}

void sobel_filter::thread_out_pix4_sum5_fu_3864_p2() {
    out_pix4_sum5_fu_3864_p2 = (!tmp_247_cast_fu_3860_p1.read().is_01() || !tmp_9_reg_5849.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_247_cast_fu_3860_p1.read()) + sc_biguint<32>(tmp_9_reg_5849.read()));
}

void sobel_filter::thread_out_pix4_sum6_fu_4283_p2() {
    out_pix4_sum6_fu_4283_p2 = (!tmp_255_cast_fu_4279_p1.read().is_01() || !tmp_9_reg_5849.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_255_cast_fu_4279_p1.read()) + sc_biguint<32>(tmp_9_reg_5849.read()));
}

void sobel_filter::thread_out_pix4_sum7_fu_4702_p2() {
    out_pix4_sum7_fu_4702_p2 = (!tmp_263_cast_fu_4698_p1.read().is_01() || !tmp_9_reg_5849.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_263_cast_fu_4698_p1.read()) + sc_biguint<32>(tmp_9_reg_5849.read()));
}

void sobel_filter::thread_out_pix4_sum8_fu_5121_p2() {
    out_pix4_sum8_fu_5121_p2 = (!tmp_271_cast_fu_5117_p1.read().is_01() || !tmp_9_reg_5849.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_271_cast_fu_5117_p1.read()) + sc_biguint<32>(tmp_9_reg_5849.read()));
}

void sobel_filter::thread_out_pix4_sum9_fu_5522_p2() {
    out_pix4_sum9_fu_5522_p2 = (!tmp_279_cast_fu_5518_p1.read().is_01() || !tmp_9_reg_5849.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_279_cast_fu_5518_p1.read()) + sc_biguint<32>(tmp_9_reg_5849.read()));
}

void sobel_filter::thread_out_pix4_sum_fu_1666_p2() {
    out_pix4_sum_fu_1666_p2 = (!tmp_147_cast_fu_1662_p1.read().is_01() || !tmp_9_reg_5849.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_147_cast_fu_1662_p1.read()) + sc_biguint<32>(tmp_9_reg_5849.read()));
}

void sobel_filter::thread_p_i_1_fu_2456_p3() {
    p_i_1_fu_2456_p3 = (!tmp_16_1_fu_2446_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_16_1_fu_2446_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void sobel_filter::thread_p_i_2_fu_2875_p3() {
    p_i_2_fu_2875_p3 = (!tmp_16_2_fu_2865_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_16_2_fu_2865_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void sobel_filter::thread_p_i_3_fu_3294_p3() {
    p_i_3_fu_3294_p3 = (!tmp_16_3_fu_3284_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_16_3_fu_3284_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void sobel_filter::thread_p_i_4_fu_3713_p3() {
    p_i_4_fu_3713_p3 = (!tmp_16_4_fu_3703_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_16_4_fu_3703_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void sobel_filter::thread_p_i_5_fu_4132_p3() {
    p_i_5_fu_4132_p3 = (!tmp_16_5_fu_4122_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_16_5_fu_4122_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void sobel_filter::thread_p_i_6_fu_4551_p3() {
    p_i_6_fu_4551_p3 = (!tmp_16_6_fu_4541_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_16_6_fu_4541_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void sobel_filter::thread_p_i_7_fu_4970_p3() {
    p_i_7_fu_4970_p3 = (!tmp_16_7_fu_4960_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_16_7_fu_4960_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void sobel_filter::thread_p_i_8_fu_5389_p3() {
    p_i_8_fu_5389_p3 = (!tmp_16_8_fu_5379_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_16_8_fu_5379_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void sobel_filter::thread_p_i_9_fu_5786_p3() {
    p_i_9_fu_5786_p3 = (!tmp_16_9_fu_5776_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_16_9_fu_5776_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void sobel_filter::thread_p_i_fu_2027_p3() {
    p_i_fu_2027_p3 = (!tmp_32_fu_2017_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_32_fu_2017_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void sobel_filter::thread_p_shl10_cast_fu_3972_p1() {
    p_shl10_cast_fu_3972_p1 = esl_zext<11,9>(p_shl10_fu_3964_p3.read());
}

void sobel_filter::thread_p_shl10_fu_3964_p3() {
    p_shl10_fu_3964_p3 = esl_concat<8,1>(reg_1365.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl11_cast_fu_4037_p1() {
    p_shl11_cast_fu_4037_p1 = esl_zext<11,9>(p_shl11_fu_4029_p3.read());
}

void sobel_filter::thread_p_shl11_fu_4029_p3() {
    p_shl11_fu_4029_p3 = esl_concat<8,1>(reg_1361.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl12_cast_fu_4391_p1() {
    p_shl12_cast_fu_4391_p1 = esl_zext<11,9>(p_shl12_fu_4383_p3.read());
}

void sobel_filter::thread_p_shl12_fu_4383_p3() {
    p_shl12_fu_4383_p3 = esl_concat<8,1>(reg_1361.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl13_cast_fu_4456_p1() {
    p_shl13_cast_fu_4456_p1 = esl_zext<11,9>(p_shl13_fu_4448_p3.read());
}

void sobel_filter::thread_p_shl13_fu_4448_p3() {
    p_shl13_fu_4448_p3 = esl_concat<8,1>(reg_1373.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl14_cast_fu_4810_p1() {
    p_shl14_cast_fu_4810_p1 = esl_zext<11,9>(p_shl14_fu_4802_p3.read());
}

void sobel_filter::thread_p_shl14_fu_4802_p3() {
    p_shl14_fu_4802_p3 = esl_concat<8,1>(reg_1373.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl15_cast_fu_4875_p1() {
    p_shl15_cast_fu_4875_p1 = esl_zext<11,9>(p_shl15_fu_4867_p3.read());
}

void sobel_filter::thread_p_shl15_fu_4867_p3() {
    p_shl15_fu_4867_p3 = esl_concat<8,1>(reg_1357.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl16_cast_fu_5229_p1() {
    p_shl16_cast_fu_5229_p1 = esl_zext<11,9>(p_shl16_fu_5221_p3.read());
}

void sobel_filter::thread_p_shl16_fu_5221_p3() {
    p_shl16_fu_5221_p3 = esl_concat<8,1>(reg_1357.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl17_cast_fu_5294_p1() {
    p_shl17_cast_fu_5294_p1 = esl_zext<11,9>(p_shl17_fu_5286_p3.read());
}

void sobel_filter::thread_p_shl17_fu_5286_p3() {
    p_shl17_fu_5286_p3 = esl_concat<8,1>(reg_1365.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl18_cast_fu_5626_p1() {
    p_shl18_cast_fu_5626_p1 = esl_zext<11,9>(p_shl18_fu_5618_p3.read());
}

void sobel_filter::thread_p_shl18_fu_5618_p3() {
    p_shl18_fu_5618_p3 = esl_concat<8,1>(reg_1365.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl19_cast_fu_5691_p1() {
    p_shl19_cast_fu_5691_p1 = esl_zext<11,9>(p_shl19_fu_5683_p3.read());
}

void sobel_filter::thread_p_shl19_fu_5683_p3() {
    p_shl19_fu_5683_p3 = esl_concat<8,1>(reg_1361.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl1_cast_fu_1872_p1() {
    p_shl1_cast_fu_1872_p1 = esl_zext<11,9>(p_shl1_fu_1865_p3.read());
}

void sobel_filter::thread_p_shl1_fu_1865_p3() {
    p_shl1_fu_1865_p3 = esl_concat<8,1>(tmp_16_reg_6057.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl20_cast_fu_1479_p1() {
    p_shl20_cast_fu_1479_p1 = esl_zext<14,13>(tmp_10_fu_1471_p3.read());
}

void sobel_filter::thread_p_shl21_cast_fu_1491_p1() {
    p_shl21_cast_fu_1491_p1 = esl_zext<14,9>(tmp_20_fu_1483_p3.read());
}

void sobel_filter::thread_p_shl22_cast_fu_1573_p1() {
    p_shl22_cast_fu_1573_p1 = esl_zext<23,22>(tmp_55_fu_1565_p3.read());
}

void sobel_filter::thread_p_shl23_cast_fu_1585_p1() {
    p_shl23_cast_fu_1585_p1 = esl_zext<23,18>(tmp_58_fu_1577_p3.read());
}

void sobel_filter::thread_p_shl26_cast_fu_2107_p1() {
    p_shl26_cast_fu_2107_p1 = esl_zext<23,22>(tmp_100_fu_2099_p3.read());
}

void sobel_filter::thread_p_shl27_cast_fu_2119_p1() {
    p_shl27_cast_fu_2119_p1 = esl_zext<23,18>(tmp_104_fu_2111_p3.read());
}

void sobel_filter::thread_p_shl2_cast_fu_2296_p1() {
    p_shl2_cast_fu_2296_p1 = esl_zext<11,9>(p_shl2_fu_2288_p3.read());
}

void sobel_filter::thread_p_shl2_fu_2288_p3() {
    p_shl2_fu_2288_p3 = esl_concat<8,1>(reg_1365.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl30_cast_fu_2540_p1() {
    p_shl30_cast_fu_2540_p1 = esl_zext<23,22>(tmp_166_fu_2532_p3.read());
}

void sobel_filter::thread_p_shl31_cast_fu_2552_p1() {
    p_shl31_cast_fu_2552_p1 = esl_zext<23,18>(tmp_167_fu_2544_p3.read());
}

void sobel_filter::thread_p_shl32_cast_fu_2500_p1() {
    p_shl32_cast_fu_2500_p1 = esl_zext<24,23>(tmp_147_fu_2492_p3.read());
}

void sobel_filter::thread_p_shl33_cast_fu_2512_p1() {
    p_shl33_cast_fu_2512_p1 = esl_zext<24,19>(tmp_151_fu_2504_p3.read());
}

void sobel_filter::thread_p_shl34_cast_fu_2959_p1() {
    p_shl34_cast_fu_2959_p1 = esl_zext<23,22>(tmp_219_fu_2951_p3.read());
}

void sobel_filter::thread_p_shl35_cast_fu_2971_p1() {
    p_shl35_cast_fu_2971_p1 = esl_zext<23,18>(tmp_220_fu_2963_p3.read());
}

void sobel_filter::thread_p_shl36_cast_fu_2919_p1() {
    p_shl36_cast_fu_2919_p1 = esl_zext<24,23>(tmp_216_fu_2911_p3.read());
}

void sobel_filter::thread_p_shl37_cast_fu_2931_p1() {
    p_shl37_cast_fu_2931_p1 = esl_zext<24,19>(tmp_217_fu_2923_p3.read());
}

void sobel_filter::thread_p_shl38_cast_fu_3378_p1() {
    p_shl38_cast_fu_3378_p1 = esl_zext<23,22>(tmp_232_fu_3370_p3.read());
}

void sobel_filter::thread_p_shl39_cast_fu_3390_p1() {
    p_shl39_cast_fu_3390_p1 = esl_zext<23,18>(tmp_233_fu_3382_p3.read());
}

void sobel_filter::thread_p_shl3_cast_fu_2361_p1() {
    p_shl3_cast_fu_2361_p1 = esl_zext<11,9>(p_shl3_fu_2353_p3.read());
}

void sobel_filter::thread_p_shl3_fu_2353_p3() {
    p_shl3_fu_2353_p3 = esl_concat<8,1>(reg_1361.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl40_cast_fu_3338_p1() {
    p_shl40_cast_fu_3338_p1 = esl_zext<24,23>(tmp_229_fu_3330_p3.read());
}

void sobel_filter::thread_p_shl41_cast_fu_3350_p1() {
    p_shl41_cast_fu_3350_p1 = esl_zext<24,19>(tmp_230_fu_3342_p3.read());
}

void sobel_filter::thread_p_shl42_cast_fu_3797_p1() {
    p_shl42_cast_fu_3797_p1 = esl_zext<23,22>(tmp_243_fu_3789_p3.read());
}

void sobel_filter::thread_p_shl43_cast_fu_3809_p1() {
    p_shl43_cast_fu_3809_p1 = esl_zext<23,18>(tmp_244_fu_3801_p3.read());
}

void sobel_filter::thread_p_shl44_cast_fu_3757_p1() {
    p_shl44_cast_fu_3757_p1 = esl_zext<24,23>(tmp_240_fu_3749_p3.read());
}

void sobel_filter::thread_p_shl45_cast_fu_3769_p1() {
    p_shl45_cast_fu_3769_p1 = esl_zext<24,19>(tmp_241_fu_3761_p3.read());
}

void sobel_filter::thread_p_shl46_cast_fu_4216_p1() {
    p_shl46_cast_fu_4216_p1 = esl_zext<23,22>(tmp_251_fu_4208_p3.read());
}

void sobel_filter::thread_p_shl47_cast_fu_4228_p1() {
    p_shl47_cast_fu_4228_p1 = esl_zext<23,18>(tmp_252_fu_4220_p3.read());
}

void sobel_filter::thread_p_shl48_cast_fu_4176_p1() {
    p_shl48_cast_fu_4176_p1 = esl_zext<24,23>(tmp_248_fu_4168_p3.read());
}

void sobel_filter::thread_p_shl49_cast_fu_4188_p1() {
    p_shl49_cast_fu_4188_p1 = esl_zext<24,19>(tmp_249_fu_4180_p3.read());
}

void sobel_filter::thread_p_shl4_cast_fu_2715_p1() {
    p_shl4_cast_fu_2715_p1 = esl_zext<11,9>(p_shl4_fu_2707_p3.read());
}

void sobel_filter::thread_p_shl4_fu_2707_p3() {
    p_shl4_fu_2707_p3 = esl_concat<8,1>(reg_1361.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl50_cast_fu_4635_p1() {
    p_shl50_cast_fu_4635_p1 = esl_zext<23,22>(tmp_259_fu_4627_p3.read());
}

void sobel_filter::thread_p_shl51_cast_fu_4647_p1() {
    p_shl51_cast_fu_4647_p1 = esl_zext<23,18>(tmp_260_fu_4639_p3.read());
}

void sobel_filter::thread_p_shl52_cast_fu_4595_p1() {
    p_shl52_cast_fu_4595_p1 = esl_zext<24,23>(tmp_256_fu_4587_p3.read());
}

void sobel_filter::thread_p_shl53_cast_fu_4607_p1() {
    p_shl53_cast_fu_4607_p1 = esl_zext<24,19>(tmp_257_fu_4599_p3.read());
}

void sobel_filter::thread_p_shl54_cast_fu_5054_p1() {
    p_shl54_cast_fu_5054_p1 = esl_zext<23,22>(tmp_267_fu_5046_p3.read());
}

void sobel_filter::thread_p_shl55_cast_fu_5066_p1() {
    p_shl55_cast_fu_5066_p1 = esl_zext<23,18>(tmp_268_fu_5058_p3.read());
}

void sobel_filter::thread_p_shl56_cast_fu_5014_p1() {
    p_shl56_cast_fu_5014_p1 = esl_zext<24,23>(tmp_264_fu_5006_p3.read());
}

void sobel_filter::thread_p_shl57_cast_fu_5026_p1() {
    p_shl57_cast_fu_5026_p1 = esl_zext<24,19>(tmp_265_fu_5018_p3.read());
}

void sobel_filter::thread_p_shl58_cast_fu_5457_p1() {
    p_shl58_cast_fu_5457_p1 = esl_zext<23,22>(tmp_275_fu_5449_p3.read());
}

void sobel_filter::thread_p_shl59_cast_fu_5469_p1() {
    p_shl59_cast_fu_5469_p1 = esl_zext<23,18>(tmp_276_fu_5461_p3.read());
}

void sobel_filter::thread_p_shl5_cast_fu_2780_p1() {
    p_shl5_cast_fu_2780_p1 = esl_zext<11,9>(p_shl5_fu_2772_p3.read());
}

void sobel_filter::thread_p_shl5_fu_2772_p3() {
    p_shl5_fu_2772_p3 = esl_concat<8,1>(reg_1373.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl6_cast_fu_3134_p1() {
    p_shl6_cast_fu_3134_p1 = esl_zext<11,9>(p_shl6_fu_3126_p3.read());
}

void sobel_filter::thread_p_shl6_fu_3126_p3() {
    p_shl6_fu_3126_p3 = esl_concat<8,1>(reg_1373.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl7_cast_fu_3199_p1() {
    p_shl7_cast_fu_3199_p1 = esl_zext<11,9>(p_shl7_fu_3191_p3.read());
}

void sobel_filter::thread_p_shl7_fu_3191_p3() {
    p_shl7_fu_3191_p3 = esl_concat<8,1>(reg_1357.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl8_cast_fu_3553_p1() {
    p_shl8_cast_fu_3553_p1 = esl_zext<11,9>(p_shl8_fu_3545_p3.read());
}

void sobel_filter::thread_p_shl8_fu_3545_p3() {
    p_shl8_fu_3545_p3 = esl_concat<8,1>(reg_1357.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl9_cast_fu_3618_p1() {
    p_shl9_cast_fu_3618_p1 = esl_zext<11,9>(p_shl9_fu_3610_p3.read());
}

void sobel_filter::thread_p_shl9_fu_3610_p3() {
    p_shl9_fu_3610_p3 = esl_concat<8,1>(reg_1365.read(), ap_const_lv1_0);
}

void sobel_filter::thread_p_shl_cast_fu_1934_p1() {
    p_shl_cast_fu_1934_p1 = esl_zext<11,9>(p_shl_fu_1927_p3.read());
}

void sobel_filter::thread_p_shl_fu_1927_p3() {
    p_shl_fu_1927_p3 = esl_concat<8,1>(tmp_19_reg_6047.read(), ap_const_lv1_0);
}

void sobel_filter::thread_row_assign_1_cast1_c_fu_2159_p1() {
    row_assign_1_cast1_c_fu_2159_p1 = esl_zext<24,11>(row_assign_1_phi_fu_1183_p4.read());
}

void sobel_filter::thread_row_assign_1_cast1_fu_2155_p1() {
    row_assign_1_cast1_fu_2155_p1 = esl_zext<32,11>(row_assign_1_phi_fu_1183_p4.read());
}

void sobel_filter::thread_row_assign_1_cast_fu_2199_p1() {
    row_assign_1_cast_fu_2199_p1 = esl_zext<12,11>(row_assign_1_phi_fu_1183_p4.read());
}

void sobel_filter::thread_row_assign_1_phi_fu_1183_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_1_reg_6195.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        row_assign_1_phi_fu_1183_p4 = j_1_1_reg_6199.read();
    } else {
        row_assign_1_phi_fu_1183_p4 = row_assign_1_reg_1179.read();
    }
}

void sobel_filter::thread_row_assign_2_cast1_c_1_fu_2574_p1() {
    row_assign_2_cast1_c_1_fu_2574_p1 = esl_zext<25,11>(row_assign_2_phi_fu_1194_p4.read());
}

void sobel_filter::thread_row_assign_2_cast1_c_fu_2570_p1() {
    row_assign_2_cast1_c_fu_2570_p1 = esl_zext<24,11>(row_assign_2_phi_fu_1194_p4.read());
}

void sobel_filter::thread_row_assign_2_cast1_fu_2566_p1() {
    row_assign_2_cast1_fu_2566_p1 = esl_zext<32,11>(row_assign_2_phi_fu_1194_p4.read());
}

void sobel_filter::thread_row_assign_2_cast_fu_2618_p1() {
    row_assign_2_cast_fu_2618_p1 = esl_zext<12,11>(row_assign_2_phi_fu_1194_p4.read());
}

void sobel_filter::thread_row_assign_2_phi_fu_1194_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_2_reg_6354.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        row_assign_2_phi_fu_1194_p4 = j_1_2_reg_6358.read();
    } else {
        row_assign_2_phi_fu_1194_p4 = row_assign_2_reg_1190.read();
    }
}

void sobel_filter::thread_row_assign_3_cast1_c_1_fu_2993_p1() {
    row_assign_3_cast1_c_1_fu_2993_p1 = esl_zext<25,11>(row_assign_3_phi_fu_1205_p4.read());
}

void sobel_filter::thread_row_assign_3_cast1_c_fu_2989_p1() {
    row_assign_3_cast1_c_fu_2989_p1 = esl_zext<24,11>(row_assign_3_phi_fu_1205_p4.read());
}

void sobel_filter::thread_row_assign_3_cast1_fu_2985_p1() {
    row_assign_3_cast1_fu_2985_p1 = esl_zext<32,11>(row_assign_3_phi_fu_1205_p4.read());
}

void sobel_filter::thread_row_assign_3_cast_fu_3037_p1() {
    row_assign_3_cast_fu_3037_p1 = esl_zext<12,11>(row_assign_3_phi_fu_1205_p4.read());
}

void sobel_filter::thread_row_assign_3_phi_fu_1205_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_3_reg_6513.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        row_assign_3_phi_fu_1205_p4 = j_1_3_reg_6517.read();
    } else {
        row_assign_3_phi_fu_1205_p4 = row_assign_3_reg_1201.read();
    }
}

void sobel_filter::thread_row_assign_4_cast1_c_1_fu_3412_p1() {
    row_assign_4_cast1_c_1_fu_3412_p1 = esl_zext<25,11>(row_assign_4_phi_fu_1216_p4.read());
}

void sobel_filter::thread_row_assign_4_cast1_c_fu_3408_p1() {
    row_assign_4_cast1_c_fu_3408_p1 = esl_zext<24,11>(row_assign_4_phi_fu_1216_p4.read());
}

void sobel_filter::thread_row_assign_4_cast1_fu_3404_p1() {
    row_assign_4_cast1_fu_3404_p1 = esl_zext<32,11>(row_assign_4_phi_fu_1216_p4.read());
}

void sobel_filter::thread_row_assign_4_cast_fu_3456_p1() {
    row_assign_4_cast_fu_3456_p1 = esl_zext<12,11>(row_assign_4_phi_fu_1216_p4.read());
}

void sobel_filter::thread_row_assign_4_phi_fu_1216_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_4_reg_6672.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        row_assign_4_phi_fu_1216_p4 = j_1_4_reg_6676.read();
    } else {
        row_assign_4_phi_fu_1216_p4 = row_assign_4_reg_1212.read();
    }
}

void sobel_filter::thread_row_assign_5_cast1_c_1_fu_3831_p1() {
    row_assign_5_cast1_c_1_fu_3831_p1 = esl_zext<25,11>(row_assign_5_phi_fu_1227_p4.read());
}

void sobel_filter::thread_row_assign_5_cast1_c_fu_3827_p1() {
    row_assign_5_cast1_c_fu_3827_p1 = esl_zext<24,11>(row_assign_5_phi_fu_1227_p4.read());
}

void sobel_filter::thread_row_assign_5_cast1_fu_3823_p1() {
    row_assign_5_cast1_fu_3823_p1 = esl_zext<32,11>(row_assign_5_phi_fu_1227_p4.read());
}

void sobel_filter::thread_row_assign_5_cast_fu_3875_p1() {
    row_assign_5_cast_fu_3875_p1 = esl_zext<12,11>(row_assign_5_phi_fu_1227_p4.read());
}

void sobel_filter::thread_row_assign_5_phi_fu_1227_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_5_reg_6831.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()))) {
        row_assign_5_phi_fu_1227_p4 = j_1_5_reg_6835.read();
    } else {
        row_assign_5_phi_fu_1227_p4 = row_assign_5_reg_1223.read();
    }
}

void sobel_filter::thread_row_assign_6_cast1_c_1_fu_4250_p1() {
    row_assign_6_cast1_c_1_fu_4250_p1 = esl_zext<25,11>(row_assign_6_phi_fu_1238_p4.read());
}

void sobel_filter::thread_row_assign_6_cast1_c_fu_4246_p1() {
    row_assign_6_cast1_c_fu_4246_p1 = esl_zext<24,11>(row_assign_6_phi_fu_1238_p4.read());
}

void sobel_filter::thread_row_assign_6_cast1_fu_4242_p1() {
    row_assign_6_cast1_fu_4242_p1 = esl_zext<32,11>(row_assign_6_phi_fu_1238_p4.read());
}

void sobel_filter::thread_row_assign_6_cast_fu_4294_p1() {
    row_assign_6_cast_fu_4294_p1 = esl_zext<12,11>(row_assign_6_phi_fu_1238_p4.read());
}

void sobel_filter::thread_row_assign_6_phi_fu_1238_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_6_reg_6990.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()))) {
        row_assign_6_phi_fu_1238_p4 = j_1_6_reg_6994.read();
    } else {
        row_assign_6_phi_fu_1238_p4 = row_assign_6_reg_1234.read();
    }
}

void sobel_filter::thread_row_assign_7_cast1_c_1_fu_4669_p1() {
    row_assign_7_cast1_c_1_fu_4669_p1 = esl_zext<25,11>(row_assign_7_phi_fu_1249_p4.read());
}

void sobel_filter::thread_row_assign_7_cast1_c_fu_4665_p1() {
    row_assign_7_cast1_c_fu_4665_p1 = esl_zext<24,11>(row_assign_7_phi_fu_1249_p4.read());
}

void sobel_filter::thread_row_assign_7_cast1_fu_4661_p1() {
    row_assign_7_cast1_fu_4661_p1 = esl_zext<32,11>(row_assign_7_phi_fu_1249_p4.read());
}

void sobel_filter::thread_row_assign_7_cast_fu_4713_p1() {
    row_assign_7_cast_fu_4713_p1 = esl_zext<12,11>(row_assign_7_phi_fu_1249_p4.read());
}

void sobel_filter::thread_row_assign_7_phi_fu_1249_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_7_reg_7149.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read()))) {
        row_assign_7_phi_fu_1249_p4 = j_1_7_reg_7153.read();
    } else {
        row_assign_7_phi_fu_1249_p4 = row_assign_7_reg_1245.read();
    }
}

void sobel_filter::thread_row_assign_8_cast1_c_1_fu_5088_p1() {
    row_assign_8_cast1_c_1_fu_5088_p1 = esl_zext<25,11>(row_assign_8_phi_fu_1260_p4.read());
}

void sobel_filter::thread_row_assign_8_cast1_c_fu_5084_p1() {
    row_assign_8_cast1_c_fu_5084_p1 = esl_zext<24,11>(row_assign_8_phi_fu_1260_p4.read());
}

void sobel_filter::thread_row_assign_8_cast1_fu_5080_p1() {
    row_assign_8_cast1_fu_5080_p1 = esl_zext<32,11>(row_assign_8_phi_fu_1260_p4.read());
}

void sobel_filter::thread_row_assign_8_cast_fu_5132_p1() {
    row_assign_8_cast_fu_5132_p1 = esl_zext<12,11>(row_assign_8_phi_fu_1260_p4.read());
}

void sobel_filter::thread_row_assign_8_phi_fu_1260_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_8_reg_7308.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()))) {
        row_assign_8_phi_fu_1260_p4 = j_1_8_reg_7312.read();
    } else {
        row_assign_8_phi_fu_1260_p4 = row_assign_8_reg_1256.read();
    }
}

void sobel_filter::thread_row_assign_9_cast_ca_fu_5493_p1() {
    row_assign_9_cast_ca_fu_5493_p1 = esl_zext<24,11>(row_assign_9_phi_fu_1271_p4.read());
}

void sobel_filter::thread_row_assign_9_cast_fu_5489_p1() {
    row_assign_9_cast_fu_5489_p1 = esl_zext<32,11>(row_assign_9_phi_fu_1271_p4.read());
}

void sobel_filter::thread_row_assign_9_phi_fu_1271_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_9_reg_7472.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter1.read()))) {
        row_assign_9_phi_fu_1271_p4 = j_1_9_reg_7476.read();
    } else {
        row_assign_9_phi_fu_1271_p4 = row_assign_9_reg_1267.read();
    }
}

void sobel_filter::thread_row_assign_cast_cast_fu_1637_p1() {
    row_assign_cast_cast_fu_1637_p1 = esl_zext<24,11>(row_assign_phi_fu_1172_p4.read());
}

void sobel_filter::thread_row_assign_cast_fu_1633_p1() {
    row_assign_cast_fu_1633_p1 = esl_zext<32,11>(row_assign_phi_fu_1172_p4.read());
}

void sobel_filter::thread_row_assign_phi_fu_1172_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_reg_5962.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        row_assign_phi_fu_1172_p4 = j_1_reg_5966.read();
    } else {
        row_assign_phi_fu_1172_p4 = row_assign_reg_1168.read();
    }
}

void sobel_filter::thread_tmp10_cast_fu_3581_p1() {
    tmp10_cast_fu_3581_p1 = esl_zext<10,9>(tmp10_reg_6755.read());
}

void sobel_filter::thread_tmp10_fu_3524_p2() {
    tmp10_fu_3524_p2 = (!tmp_29_4_0_2_cast_fu_3514_p1.read().is_01() || !tmp_29_4_cast_fu_3510_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_4_0_2_cast_fu_3514_p1.read()) + sc_biguint<9>(tmp_29_4_cast_fu_3510_p1.read()));
}

void sobel_filter::thread_tmp12_cast_fu_4000_p1() {
    tmp12_cast_fu_4000_p1 = esl_zext<10,9>(tmp12_reg_6914.read());
}

void sobel_filter::thread_tmp12_fu_3943_p2() {
    tmp12_fu_3943_p2 = (!tmp_29_5_0_2_cast_fu_3933_p1.read().is_01() || !tmp_29_5_cast_fu_3929_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_5_0_2_cast_fu_3933_p1.read()) + sc_biguint<9>(tmp_29_5_cast_fu_3929_p1.read()));
}

void sobel_filter::thread_tmp14_cast_fu_4419_p1() {
    tmp14_cast_fu_4419_p1 = esl_zext<10,9>(tmp14_reg_7073.read());
}

void sobel_filter::thread_tmp14_fu_4362_p2() {
    tmp14_fu_4362_p2 = (!tmp_29_6_0_2_cast_fu_4352_p1.read().is_01() || !tmp_29_6_cast_fu_4348_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_6_0_2_cast_fu_4352_p1.read()) + sc_biguint<9>(tmp_29_6_cast_fu_4348_p1.read()));
}

void sobel_filter::thread_tmp16_cast_fu_4838_p1() {
    tmp16_cast_fu_4838_p1 = esl_zext<10,9>(tmp16_reg_7232.read());
}

void sobel_filter::thread_tmp16_fu_4781_p2() {
    tmp16_fu_4781_p2 = (!tmp_29_7_0_2_cast_fu_4771_p1.read().is_01() || !tmp_29_7_cast_fu_4767_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_7_0_2_cast_fu_4771_p1.read()) + sc_biguint<9>(tmp_29_7_cast_fu_4767_p1.read()));
}

void sobel_filter::thread_tmp18_cast_fu_5257_p1() {
    tmp18_cast_fu_5257_p1 = esl_zext<10,9>(tmp18_reg_7391.read());
}

void sobel_filter::thread_tmp18_fu_5200_p2() {
    tmp18_fu_5200_p2 = (!tmp_29_8_0_2_cast_fu_5190_p1.read().is_01() || !tmp_29_8_cast_fu_5186_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_8_0_2_cast_fu_5190_p1.read()) + sc_biguint<9>(tmp_29_8_cast_fu_5186_p1.read()));
}

void sobel_filter::thread_tmp21_cast_fu_5654_p1() {
    tmp21_cast_fu_5654_p1 = esl_zext<10,9>(tmp21_reg_7560.read());
}

void sobel_filter::thread_tmp21_fu_5597_p2() {
    tmp21_fu_5597_p2 = (!tmp_29_9_0_2_cast_fu_5587_p1.read().is_01() || !tmp_29_9_cast_fu_5583_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_9_0_2_cast_fu_5587_p1.read()) + sc_biguint<9>(tmp_29_9_cast_fu_5583_p1.read()));
}

void sobel_filter::thread_tmp2_cast_fu_1899_p1() {
    tmp2_cast_fu_1899_p1 = esl_zext<10,9>(tmp2_reg_6067.read());
}

void sobel_filter::thread_tmp2_fu_1819_p2() {
    tmp2_fu_1819_p2 = (!tmp_29_0_0_2_cast_fu_1783_p1.read().is_01() || !tmp_29_0_cast_fu_1766_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_0_0_2_cast_fu_1783_p1.read()) + sc_biguint<9>(tmp_29_0_cast_fu_1766_p1.read()));
}

void sobel_filter::thread_tmp4_cast_fu_2324_p1() {
    tmp4_cast_fu_2324_p1 = esl_zext<10,9>(tmp4_reg_6278.read());
}

void sobel_filter::thread_tmp4_fu_2267_p2() {
    tmp4_fu_2267_p2 = (!tmp_29_1_0_2_cast_fu_2257_p1.read().is_01() || !tmp_29_1_cast_fu_2253_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_1_0_2_cast_fu_2257_p1.read()) + sc_biguint<9>(tmp_29_1_cast_fu_2253_p1.read()));
}

void sobel_filter::thread_tmp6_cast_fu_2743_p1() {
    tmp6_cast_fu_2743_p1 = esl_zext<10,9>(tmp6_reg_6437.read());
}

void sobel_filter::thread_tmp6_fu_2686_p2() {
    tmp6_fu_2686_p2 = (!tmp_29_2_0_2_cast_fu_2676_p1.read().is_01() || !tmp_29_2_cast_fu_2672_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_2_0_2_cast_fu_2676_p1.read()) + sc_biguint<9>(tmp_29_2_cast_fu_2672_p1.read()));
}

void sobel_filter::thread_tmp8_cast_fu_3162_p1() {
    tmp8_cast_fu_3162_p1 = esl_zext<10,9>(tmp8_reg_6596.read());
}

void sobel_filter::thread_tmp8_fu_3105_p2() {
    tmp8_fu_3105_p2 = (!tmp_29_3_0_2_cast_fu_3095_p1.read().is_01() || !tmp_29_3_cast_fu_3091_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_29_3_0_2_cast_fu_3095_p1.read()) + sc_biguint<9>(tmp_29_3_cast_fu_3091_p1.read()));
}

void sobel_filter::thread_tmp_100_fu_2099_p3() {
    tmp_100_fu_2099_p3 = esl_concat<11,11>(i_2_s_fu_2093_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_101_fu_3648_p2() {
    tmp_101_fu_3648_p2 = (!tmp_283_fu_3632_p1.read().is_01() || !reg_1441.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_283_fu_3632_p1.read()) + sc_biguint<8>(reg_1441.read()));
}

void sobel_filter::thread_tmp_102_fu_3663_p2() {
    tmp_102_fu_3663_p2 = (!ap_const_lv8_0.is_01() || !tmp_101_reg_6770.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_101_reg_6770.read()));
}

void sobel_filter::thread_tmp_103_fu_3668_p3() {
    tmp_103_fu_3668_p3 = (!tmp_9_4_fu_3658_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_9_4_fu_3658_p2.read()[0].to_bool())? tmp_101_reg_6770.read(): tmp_102_fu_3663_p2.read());
}

void sobel_filter::thread_tmp_104_fu_2111_p3() {
    tmp_104_fu_2111_p3 = esl_concat<11,7>(i_2_s_fu_2093_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_105_fu_3680_p2() {
    tmp_105_fu_3680_p2 = (!ap_const_lv8_0.is_01() || !tmp_284_reg_6776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_284_reg_6776.read()));
}

void sobel_filter::thread_tmp_106_fu_3685_p3() {
    tmp_106_fu_3685_p3 = (!tmp_12_4_fu_3675_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_12_4_fu_3675_p2.read()[0].to_bool())? tmp_284_reg_6776.read(): tmp_105_fu_3680_p2.read());
}

void sobel_filter::thread_tmp_10_fu_1471_p3() {
    tmp_10_fu_1471_p3 = esl_concat<2,11>(lastLine_reg_1121.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_116_fu_3721_p2() {
    tmp_116_fu_3721_p2 = (tmp_16_4_fu_3703_p2.read() | tmp_20_4_fu_3708_p2.read());
}

void sobel_filter::thread_tmp_117_fu_2123_p2() {
    tmp_117_fu_2123_p2 = (!p_shl26_cast_fu_2107_p1.read().is_01() || !p_shl27_cast_fu_2119_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(p_shl26_cast_fu_2107_p1.read()) - sc_biguint<23>(p_shl27_cast_fu_2119_p1.read()));
}

void sobel_filter::thread_tmp_118_fu_4067_p2() {
    tmp_118_fu_4067_p2 = (!tmp_288_fu_4051_p1.read().is_01() || !reg_1445.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_288_fu_4051_p1.read()) + sc_biguint<8>(reg_1445.read()));
}

void sobel_filter::thread_tmp_119_fu_4082_p2() {
    tmp_119_fu_4082_p2 = (!ap_const_lv8_0.is_01() || !tmp_118_reg_6929.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_118_reg_6929.read()));
}

void sobel_filter::thread_tmp_120_fu_4087_p3() {
    tmp_120_fu_4087_p3 = (!tmp_9_5_fu_4077_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_9_5_fu_4077_p2.read()[0].to_bool())? tmp_118_reg_6929.read(): tmp_119_fu_4082_p2.read());
}

void sobel_filter::thread_tmp_121_fu_2133_p1() {
    tmp_121_fu_2133_p1 = lastLine_2_fu_2064_p3.read().range(2-1, 0);
}

void sobel_filter::thread_tmp_122_fu_4099_p2() {
    tmp_122_fu_4099_p2 = (!ap_const_lv8_0.is_01() || !tmp_289_reg_6935.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_289_reg_6935.read()));
}

void sobel_filter::thread_tmp_123_fu_4104_p3() {
    tmp_123_fu_4104_p3 = (!tmp_12_5_fu_4094_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_12_5_fu_4094_p2.read()[0].to_bool())? tmp_289_reg_6935.read(): tmp_122_fu_4099_p2.read());
}

void sobel_filter::thread_tmp_126_cast_fu_1595_p1() {
    tmp_126_cast_fu_1595_p1 = esl_sext<24,23>(tmp_66_fu_1589_p2.read());
}

void sobel_filter::thread_tmp_126_fu_2163_p2() {
    tmp_126_fu_2163_p2 = (!tmp_97_reg_6126.read().is_01() || !row_assign_1_cast1_fu_2155_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_97_reg_6126.read()) + sc_biguint<32>(row_assign_1_cast1_fu_2155_p1.read()));
}

void sobel_filter::thread_tmp_127_fu_2179_p2() {
    tmp_127_fu_2179_p2 = (!tmp_204_cast_reg_6142.read().is_01() || !row_assign_1_cast1_c_fu_2159_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(tmp_204_cast_reg_6142.read()) + sc_biguint<24>(row_assign_1_cast1_c_fu_2159_p1.read()));
}

void sobel_filter::thread_tmp_12_1_fu_2418_p2() {
    tmp_12_1_fu_2418_p2 = (!y_weight_1_2_2_reg_6288.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(y_weight_1_2_2_reg_6288.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_12_2_fu_2837_p2() {
    tmp_12_2_fu_2837_p2 = (!y_weight_2_2_2_reg_6447.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(y_weight_2_2_2_reg_6447.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_12_3_fu_3256_p2() {
    tmp_12_3_fu_3256_p2 = (!y_weight_3_2_2_reg_6606.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(y_weight_3_2_2_reg_6606.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_12_4_fu_3675_p2() {
    tmp_12_4_fu_3675_p2 = (!y_weight_4_2_2_reg_6765.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(y_weight_4_2_2_reg_6765.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_12_5_fu_4094_p2() {
    tmp_12_5_fu_4094_p2 = (!y_weight_5_2_2_reg_6924.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(y_weight_5_2_2_reg_6924.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_12_6_fu_4513_p2() {
    tmp_12_6_fu_4513_p2 = (!y_weight_6_2_2_reg_7083.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(y_weight_6_2_2_reg_7083.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_12_7_fu_4932_p2() {
    tmp_12_7_fu_4932_p2 = (!y_weight_7_2_2_reg_7242.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(y_weight_7_2_2_reg_7242.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_12_8_fu_5351_p2() {
    tmp_12_8_fu_5351_p2 = (!y_weight_8_2_2_reg_7401.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(y_weight_8_2_2_reg_7401.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_12_9_fu_5748_p2() {
    tmp_12_9_fu_5748_p2 = (!y_weight_9_2_2_reg_7570.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(y_weight_9_2_2_reg_7570.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_134_fu_1689_p2() {
    tmp_134_fu_1689_p2 = (!row_assign_phi_fu_1172_p4.read().is_01() || !ap_const_lv11_77F.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_phi_fu_1172_p4.read() == ap_const_lv11_77F);
}

void sobel_filter::thread_tmp_135_fu_4486_p2() {
    tmp_135_fu_4486_p2 = (!tmp_293_fu_4470_p1.read().is_01() || !reg_1449.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_293_fu_4470_p1.read()) + sc_biguint<8>(reg_1449.read()));
}

void sobel_filter::thread_tmp_136_fu_4501_p2() {
    tmp_136_fu_4501_p2 = (!ap_const_lv8_0.is_01() || !tmp_135_reg_7088.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_135_reg_7088.read()));
}

void sobel_filter::thread_tmp_137_fu_4506_p3() {
    tmp_137_fu_4506_p3 = (!tmp_9_6_fu_4496_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_9_6_fu_4496_p2.read()[0].to_bool())? tmp_135_reg_7088.read(): tmp_136_fu_4501_p2.read());
}

void sobel_filter::thread_tmp_138_fu_1695_p2() {
    tmp_138_fu_1695_p2 = (!row_assign_phi_fu_1172_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_phi_fu_1172_p4.read() == ap_const_lv11_0);
}

void sobel_filter::thread_tmp_139_fu_4518_p2() {
    tmp_139_fu_4518_p2 = (!ap_const_lv8_0.is_01() || !tmp_294_reg_7094.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_294_reg_7094.read()));
}

void sobel_filter::thread_tmp_140_fu_4523_p3() {
    tmp_140_fu_4523_p3 = (!tmp_12_6_fu_4513_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_12_6_fu_4513_p2.read()[0].to_bool())? tmp_294_reg_7094.read(): tmp_139_fu_4518_p2.read());
}

void sobel_filter::thread_tmp_145_fu_4140_p2() {
    tmp_145_fu_4140_p2 = (tmp_16_5_fu_4122_p2.read() | tmp_20_5_fu_4127_p2.read());
}

void sobel_filter::thread_tmp_146_fu_1701_p2() {
    tmp_146_fu_1701_p2 = (tmp_138_fu_1695_p2.read() | tmp_134_fu_1689_p2.read());
}

void sobel_filter::thread_tmp_147_cast_fu_1662_p1() {
    tmp_147_cast_fu_1662_p1 = esl_sext<32,24>(tmp_78_fu_1657_p2.read());
}

void sobel_filter::thread_tmp_147_fu_2492_p3() {
    tmp_147_fu_2492_p3 = esl_concat<12,11>(lastLine_3_1_fu_2487_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_151_fu_2504_p3() {
    tmp_151_fu_2504_p3 = esl_concat<12,7>(lastLine_3_1_fu_2487_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_152_fu_4905_p2() {
    tmp_152_fu_4905_p2 = (!tmp_298_fu_4889_p1.read().is_01() || !reg_1453.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_298_fu_4889_p1.read()) + sc_biguint<8>(reg_1453.read()));
}

void sobel_filter::thread_tmp_153_fu_4920_p2() {
    tmp_153_fu_4920_p2 = (!ap_const_lv8_0.is_01() || !tmp_152_reg_7247.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_152_reg_7247.read()));
}

void sobel_filter::thread_tmp_154_fu_4925_p3() {
    tmp_154_fu_4925_p3 = (!tmp_9_7_fu_4915_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_9_7_fu_4915_p2.read()[0].to_bool())? tmp_152_reg_7247.read(): tmp_153_fu_4920_p2.read());
}

void sobel_filter::thread_tmp_155_fu_2516_p2() {
    tmp_155_fu_2516_p2 = (!p_shl32_cast_fu_2500_p1.read().is_01() || !p_shl33_cast_fu_2512_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(p_shl32_cast_fu_2500_p1.read()) - sc_biguint<24>(p_shl33_cast_fu_2512_p1.read()));
}

void sobel_filter::thread_tmp_156_fu_4937_p2() {
    tmp_156_fu_4937_p2 = (!ap_const_lv8_0.is_01() || !tmp_299_reg_7253.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_299_reg_7253.read()));
}

void sobel_filter::thread_tmp_157_fu_4942_p3() {
    tmp_157_fu_4942_p3 = (!tmp_12_7_fu_4932_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_12_7_fu_4932_p2.read()[0].to_bool())? tmp_299_reg_7253.read(): tmp_156_fu_4937_p2.read());
}

void sobel_filter::thread_tmp_15_1_fu_2435_p2() {
    tmp_15_1_fu_2435_p2 = (!tmp_50_fu_2428_p3.read().is_01() || !tmp_47_fu_2411_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_50_fu_2428_p3.read()) + sc_biguint<8>(tmp_47_fu_2411_p3.read()));
}

void sobel_filter::thread_tmp_15_2_fu_2854_p2() {
    tmp_15_2_fu_2854_p2 = (!tmp_72_fu_2847_p3.read().is_01() || !tmp_69_fu_2830_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_72_fu_2847_p3.read()) + sc_biguint<8>(tmp_69_fu_2830_p3.read()));
}

void sobel_filter::thread_tmp_15_3_fu_3273_p2() {
    tmp_15_3_fu_3273_p2 = (!tmp_89_fu_3266_p3.read().is_01() || !tmp_86_fu_3249_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_89_fu_3266_p3.read()) + sc_biguint<8>(tmp_86_fu_3249_p3.read()));
}

void sobel_filter::thread_tmp_15_4_fu_3692_p2() {
    tmp_15_4_fu_3692_p2 = (!tmp_106_fu_3685_p3.read().is_01() || !tmp_103_fu_3668_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_106_fu_3685_p3.read()) + sc_biguint<8>(tmp_103_fu_3668_p3.read()));
}

void sobel_filter::thread_tmp_15_5_fu_4111_p2() {
    tmp_15_5_fu_4111_p2 = (!tmp_123_fu_4104_p3.read().is_01() || !tmp_120_fu_4087_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_123_fu_4104_p3.read()) + sc_biguint<8>(tmp_120_fu_4087_p3.read()));
}

void sobel_filter::thread_tmp_15_6_fu_4530_p2() {
    tmp_15_6_fu_4530_p2 = (!tmp_140_fu_4523_p3.read().is_01() || !tmp_137_fu_4506_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_140_fu_4523_p3.read()) + sc_biguint<8>(tmp_137_fu_4506_p3.read()));
}

void sobel_filter::thread_tmp_15_7_fu_4949_p2() {
    tmp_15_7_fu_4949_p2 = (!tmp_157_fu_4942_p3.read().is_01() || !tmp_154_fu_4925_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_157_fu_4942_p3.read()) + sc_biguint<8>(tmp_154_fu_4925_p3.read()));
}

void sobel_filter::thread_tmp_15_8_fu_5368_p2() {
    tmp_15_8_fu_5368_p2 = (!tmp_174_fu_5361_p3.read().is_01() || !tmp_171_fu_5344_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_174_fu_5361_p3.read()) + sc_biguint<8>(tmp_171_fu_5344_p3.read()));
}

void sobel_filter::thread_tmp_15_9_fu_5765_p2() {
    tmp_15_9_fu_5765_p2 = (!tmp_190_fu_5758_p3.read().is_01() || !tmp_187_fu_5741_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_190_fu_5758_p3.read()) + sc_biguint<8>(tmp_187_fu_5741_p3.read()));
}

void sobel_filter::thread_tmp_165_fu_4559_p2() {
    tmp_165_fu_4559_p2 = (tmp_16_6_fu_4541_p2.read() | tmp_20_6_fu_4546_p2.read());
}

void sobel_filter::thread_tmp_166_fu_2532_p3() {
    tmp_166_fu_2532_p3 = esl_concat<11,11>(i_2_1_fu_2526_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_167_fu_2544_p3() {
    tmp_167_fu_2544_p3 = esl_concat<11,7>(i_2_1_fu_2526_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_168_fu_2556_p2() {
    tmp_168_fu_2556_p2 = (!p_shl30_cast_fu_2540_p1.read().is_01() || !p_shl31_cast_fu_2552_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(p_shl30_cast_fu_2540_p1.read()) - sc_biguint<23>(p_shl31_cast_fu_2552_p1.read()));
}

void sobel_filter::thread_tmp_169_fu_5324_p2() {
    tmp_169_fu_5324_p2 = (!tmp_305_fu_5308_p1.read().is_01() || !reg_1441.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_305_fu_5308_p1.read()) + sc_biguint<8>(reg_1441.read()));
}

void sobel_filter::thread_tmp_16_1_fu_2446_p2() {
    tmp_16_1_fu_2446_p2 = (!tmp_15_1_reg_6305.read().is_01() || !ap_const_lv8_37.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_1_reg_6305.read()) < sc_biguint<8>(ap_const_lv8_37));
}

void sobel_filter::thread_tmp_16_2_fu_2865_p2() {
    tmp_16_2_fu_2865_p2 = (!tmp_15_2_reg_6464.read().is_01() || !ap_const_lv8_37.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_2_reg_6464.read()) < sc_biguint<8>(ap_const_lv8_37));
}

void sobel_filter::thread_tmp_16_3_fu_3284_p2() {
    tmp_16_3_fu_3284_p2 = (!tmp_15_3_reg_6623.read().is_01() || !ap_const_lv8_37.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_3_reg_6623.read()) < sc_biguint<8>(ap_const_lv8_37));
}

void sobel_filter::thread_tmp_16_4_fu_3703_p2() {
    tmp_16_4_fu_3703_p2 = (!tmp_15_4_reg_6782.read().is_01() || !ap_const_lv8_37.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_4_reg_6782.read()) < sc_biguint<8>(ap_const_lv8_37));
}

void sobel_filter::thread_tmp_16_5_fu_4122_p2() {
    tmp_16_5_fu_4122_p2 = (!tmp_15_5_reg_6941.read().is_01() || !ap_const_lv8_37.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_5_reg_6941.read()) < sc_biguint<8>(ap_const_lv8_37));
}

void sobel_filter::thread_tmp_16_6_fu_4541_p2() {
    tmp_16_6_fu_4541_p2 = (!tmp_15_6_reg_7100.read().is_01() || !ap_const_lv8_37.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_6_reg_7100.read()) < sc_biguint<8>(ap_const_lv8_37));
}

void sobel_filter::thread_tmp_16_7_fu_4960_p2() {
    tmp_16_7_fu_4960_p2 = (!tmp_15_7_reg_7259.read().is_01() || !ap_const_lv8_37.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_7_reg_7259.read()) < sc_biguint<8>(ap_const_lv8_37));
}

void sobel_filter::thread_tmp_16_8_fu_5379_p2() {
    tmp_16_8_fu_5379_p2 = (!tmp_15_8_reg_7418.read().is_01() || !ap_const_lv8_37.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_8_reg_7418.read()) < sc_biguint<8>(ap_const_lv8_37));
}

void sobel_filter::thread_tmp_16_9_fu_5776_p2() {
    tmp_16_9_fu_5776_p2 = (!tmp_15_9_reg_7587.read().is_01() || !ap_const_lv8_37.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_9_reg_7587.read()) < sc_biguint<8>(ap_const_lv8_37));
}

void sobel_filter::thread_tmp_170_fu_5339_p2() {
    tmp_170_fu_5339_p2 = (!ap_const_lv8_0.is_01() || !tmp_169_reg_7406.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_169_reg_7406.read()));
}

void sobel_filter::thread_tmp_171_fu_5344_p3() {
    tmp_171_fu_5344_p3 = (!tmp_9_8_fu_5334_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_9_8_fu_5334_p2.read()[0].to_bool())? tmp_169_reg_7406.read(): tmp_170_fu_5339_p2.read());
}

void sobel_filter::thread_tmp_172_fu_2215_p2() {
    tmp_172_fu_2215_p2 = (!row_assign_1_phi_fu_1183_p4.read().is_01() || !ap_const_lv11_77F.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_1_phi_fu_1183_p4.read() == ap_const_lv11_77F);
}

void sobel_filter::thread_tmp_173_fu_5356_p2() {
    tmp_173_fu_5356_p2 = (!ap_const_lv8_0.is_01() || !tmp_306_reg_7412.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_306_reg_7412.read()));
}

void sobel_filter::thread_tmp_174_fu_5361_p3() {
    tmp_174_fu_5361_p3 = (!tmp_12_8_fu_5351_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_12_8_fu_5351_p2.read()[0].to_bool())? tmp_306_reg_7412.read(): tmp_173_fu_5356_p2.read());
}

void sobel_filter::thread_tmp_184_fu_2221_p2() {
    tmp_184_fu_2221_p2 = (!row_assign_1_phi_fu_1183_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_1_phi_fu_1183_p4.read() == ap_const_lv11_0);
}

void sobel_filter::thread_tmp_185_fu_5721_p2() {
    tmp_185_fu_5721_p2 = (!tmp_310_fu_5705_p1.read().is_01() || !reg_1445.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_310_fu_5705_p1.read()) + sc_biguint<8>(reg_1445.read()));
}

void sobel_filter::thread_tmp_186_fu_5736_p2() {
    tmp_186_fu_5736_p2 = (!ap_const_lv8_0.is_01() || !tmp_185_reg_7575.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_185_reg_7575.read()));
}

void sobel_filter::thread_tmp_187_fu_5741_p3() {
    tmp_187_fu_5741_p3 = (!tmp_9_9_fu_5731_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_9_9_fu_5731_p2.read()[0].to_bool())? tmp_185_reg_7575.read(): tmp_186_fu_5736_p2.read());
}

void sobel_filter::thread_tmp_188_fu_2227_p2() {
    tmp_188_fu_2227_p2 = (tmp_184_fu_2221_p2.read() | tmp_172_fu_2215_p2.read());
}

void sobel_filter::thread_tmp_189_fu_5753_p2() {
    tmp_189_fu_5753_p2 = (!ap_const_lv8_0.is_01() || !tmp_311_reg_7581.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_311_reg_7581.read()));
}

void sobel_filter::thread_tmp_190_fu_5758_p3() {
    tmp_190_fu_5758_p3 = (!tmp_12_9_fu_5748_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_12_9_fu_5748_p2.read()[0].to_bool())? tmp_311_reg_7581.read(): tmp_189_fu_5753_p2.read());
}

void sobel_filter::thread_tmp_191_fu_4978_p2() {
    tmp_191_fu_4978_p2 = (tmp_16_7_fu_4960_p2.read() | tmp_20_7_fu_4965_p2.read());
}

void sobel_filter::thread_tmp_192_fu_1947_p1() {
    tmp_192_fu_1947_p1 = x_weight_0_2_fu_1915_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_193_fu_1968_p1() {
    tmp_193_fu_1968_p1 = y_weight_0_2_2_fu_1957_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_19_0_0_t_fu_1615_p2() {
    tmp_19_0_0_t_fu_1615_p2 = (!ap_const_lv2_1.is_01() || !tmp_70_fu_1611_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(tmp_70_fu_1611_p1.read()));
}

void sobel_filter::thread_tmp_19_0_1_t_fu_1621_p2() {
    tmp_19_0_1_t_fu_1621_p2 = (tmp_70_fu_1611_p1.read() ^ ap_const_lv2_2);
}

void sobel_filter::thread_tmp_19_0_2_t_fu_1627_p2() {
    tmp_19_0_2_t_fu_1627_p2 = (!ap_const_lv2_3.is_01() || !tmp_70_fu_1611_p1.read().is_01())? sc_lv<2>(): (sc_bigint<2>(ap_const_lv2_3) + sc_biguint<2>(tmp_70_fu_1611_p1.read()));
}

void sobel_filter::thread_tmp_19_1_0_t_fu_2137_p2() {
    tmp_19_1_0_t_fu_2137_p2 = (!ap_const_lv2_1.is_01() || !tmp_121_fu_2133_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(tmp_121_fu_2133_p1.read()));
}

void sobel_filter::thread_tmp_19_1_1_t_fu_2143_p2() {
    tmp_19_1_1_t_fu_2143_p2 = (tmp_121_fu_2133_p1.read() ^ ap_const_lv2_2);
}

void sobel_filter::thread_tmp_19_1_2_t_fu_2149_p2() {
    tmp_19_1_2_t_fu_2149_p2 = (!ap_const_lv2_3.is_01() || !tmp_121_fu_2133_p1.read().is_01())? sc_lv<2>(): (sc_bigint<2>(ap_const_lv2_3) + sc_biguint<2>(tmp_121_fu_2133_p1.read()));
}

void sobel_filter::thread_tmp_1_fu_1599_p2() {
    tmp_1_fu_1599_p2 = (!i1_reg_1156.read().is_01() || !ap_const_lv11_438.is_01())? sc_lv<1>(): sc_lv<1>(i1_reg_1156.read() == ap_const_lv11_438);
}

void sobel_filter::thread_tmp_202_fu_5397_p2() {
    tmp_202_fu_5397_p2 = (tmp_16_8_fu_5379_p2.read() | tmp_20_8_fu_5384_p2.read());
}

void sobel_filter::thread_tmp_203_fu_2578_p2() {
    tmp_203_fu_2578_p2 = (!tmp_218_cast_reg_6320.read().is_01() || !row_assign_2_cast1_c_1_fu_2574_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(tmp_218_cast_reg_6320.read()) + sc_biguint<25>(row_assign_2_cast1_c_1_fu_2574_p1.read()));
}

void sobel_filter::thread_tmp_204_cast_fu_2129_p1() {
    tmp_204_cast_fu_2129_p1 = esl_sext<24,23>(tmp_117_fu_2123_p2.read());
}

void sobel_filter::thread_tmp_204_fu_2598_p2() {
    tmp_204_fu_2598_p2 = (!tmp_221_cast_reg_6325.read().is_01() || !row_assign_2_cast1_c_fu_2570_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(tmp_221_cast_reg_6325.read()) + sc_biguint<24>(row_assign_2_cast1_c_fu_2570_p1.read()));
}

void sobel_filter::thread_tmp_20_1_fu_2451_p2() {
    tmp_20_1_fu_2451_p2 = (!tmp_15_1_reg_6305.read().is_01() || !ap_const_lv8_9B.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_1_reg_6305.read()) > sc_biguint<8>(ap_const_lv8_9B));
}

void sobel_filter::thread_tmp_20_2_fu_2870_p2() {
    tmp_20_2_fu_2870_p2 = (!tmp_15_2_reg_6464.read().is_01() || !ap_const_lv8_9B.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_2_reg_6464.read()) > sc_biguint<8>(ap_const_lv8_9B));
}

void sobel_filter::thread_tmp_20_3_fu_3289_p2() {
    tmp_20_3_fu_3289_p2 = (!tmp_15_3_reg_6623.read().is_01() || !ap_const_lv8_9B.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_3_reg_6623.read()) > sc_biguint<8>(ap_const_lv8_9B));
}

void sobel_filter::thread_tmp_20_4_fu_3708_p2() {
    tmp_20_4_fu_3708_p2 = (!tmp_15_4_reg_6782.read().is_01() || !ap_const_lv8_9B.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_4_reg_6782.read()) > sc_biguint<8>(ap_const_lv8_9B));
}

void sobel_filter::thread_tmp_20_5_fu_4127_p2() {
    tmp_20_5_fu_4127_p2 = (!tmp_15_5_reg_6941.read().is_01() || !ap_const_lv8_9B.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_5_reg_6941.read()) > sc_biguint<8>(ap_const_lv8_9B));
}

void sobel_filter::thread_tmp_20_6_fu_4546_p2() {
    tmp_20_6_fu_4546_p2 = (!tmp_15_6_reg_7100.read().is_01() || !ap_const_lv8_9B.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_6_reg_7100.read()) > sc_biguint<8>(ap_const_lv8_9B));
}

void sobel_filter::thread_tmp_20_7_fu_4965_p2() {
    tmp_20_7_fu_4965_p2 = (!tmp_15_7_reg_7259.read().is_01() || !ap_const_lv8_9B.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_7_reg_7259.read()) > sc_biguint<8>(ap_const_lv8_9B));
}

void sobel_filter::thread_tmp_20_8_fu_5384_p2() {
    tmp_20_8_fu_5384_p2 = (!tmp_15_8_reg_7418.read().is_01() || !ap_const_lv8_9B.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_8_reg_7418.read()) > sc_biguint<8>(ap_const_lv8_9B));
}

void sobel_filter::thread_tmp_20_9_fu_5781_p2() {
    tmp_20_9_fu_5781_p2 = (!tmp_15_9_reg_7587.read().is_01() || !ap_const_lv8_9B.is_01())? sc_lv<1>(): (sc_biguint<8>(tmp_15_9_reg_7587.read()) > sc_biguint<8>(ap_const_lv8_9B));
}

void sobel_filter::thread_tmp_20_fu_1483_p3() {
    tmp_20_fu_1483_p3 = esl_concat<2,7>(lastLine_reg_1121.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_213_fu_5794_p2() {
    tmp_213_fu_5794_p2 = (tmp_16_9_fu_5776_p2.read() | tmp_20_9_fu_5781_p2.read());
}

void sobel_filter::thread_tmp_214_fu_2375_p1() {
    tmp_214_fu_2375_p1 = x_weight_1_2_fu_2341_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_215_cast_fu_2184_p1() {
    tmp_215_cast_fu_2184_p1 = esl_sext<32,24>(tmp_127_fu_2179_p2.read());
}

void sobel_filter::thread_tmp_215_fu_2397_p1() {
    tmp_215_fu_2397_p1 = y_weight_1_2_2_fu_2385_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_216_fu_2911_p3() {
    tmp_216_fu_2911_p3 = esl_concat<12,11>(lastLine_3_2_fu_2906_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_217_fu_2923_p3() {
    tmp_217_fu_2923_p3 = esl_concat<12,7>(lastLine_3_2_fu_2906_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_218_cast_fu_2522_p1() {
    tmp_218_cast_fu_2522_p1 = esl_sext<25,24>(tmp_155_fu_2516_p2.read());
}

void sobel_filter::thread_tmp_218_fu_2935_p2() {
    tmp_218_fu_2935_p2 = (!p_shl36_cast_fu_2919_p1.read().is_01() || !p_shl37_cast_fu_2931_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(p_shl36_cast_fu_2919_p1.read()) - sc_biguint<24>(p_shl37_cast_fu_2931_p1.read()));
}

void sobel_filter::thread_tmp_219_fu_2951_p3() {
    tmp_219_fu_2951_p3 = esl_concat<11,11>(i_2_2_fu_2945_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_21_fu_1963_p2() {
    tmp_21_fu_1963_p2 = (!tmp_192_fu_1947_p1.read().is_01() || !tmp_27_reg_6077.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_192_fu_1947_p1.read()) + sc_biguint<8>(tmp_27_reg_6077.read()));
}

void sobel_filter::thread_tmp_220_fu_2963_p3() {
    tmp_220_fu_2963_p3 = esl_concat<11,7>(i_2_2_fu_2945_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_221_cast_fu_2562_p1() {
    tmp_221_cast_fu_2562_p1 = esl_sext<24,23>(tmp_168_fu_2556_p2.read());
}

void sobel_filter::thread_tmp_221_fu_2975_p2() {
    tmp_221_fu_2975_p2 = (!p_shl34_cast_fu_2959_p1.read().is_01() || !p_shl35_cast_fu_2971_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(p_shl34_cast_fu_2959_p1.read()) - sc_biguint<23>(p_shl35_cast_fu_2971_p1.read()));
}

void sobel_filter::thread_tmp_222_cast_fu_2583_p1() {
    tmp_222_cast_fu_2583_p1 = esl_sext<32,25>(tmp_203_fu_2578_p2.read());
}

void sobel_filter::thread_tmp_222_fu_2634_p2() {
    tmp_222_fu_2634_p2 = (!row_assign_2_phi_fu_1194_p4.read().is_01() || !ap_const_lv11_77F.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_2_phi_fu_1194_p4.read() == ap_const_lv11_77F);
}

void sobel_filter::thread_tmp_223_cast_fu_2603_p1() {
    tmp_223_cast_fu_2603_p1 = esl_sext<32,24>(tmp_204_fu_2598_p2.read());
}

void sobel_filter::thread_tmp_223_fu_2640_p2() {
    tmp_223_fu_2640_p2 = (!row_assign_2_phi_fu_1194_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_2_phi_fu_1194_p4.read() == ap_const_lv11_0);
}

void sobel_filter::thread_tmp_224_fu_2646_p2() {
    tmp_224_fu_2646_p2 = (tmp_223_fu_2640_p2.read() | tmp_222_fu_2634_p2.read());
}

void sobel_filter::thread_tmp_225_fu_2997_p2() {
    tmp_225_fu_2997_p2 = (!tmp_226_cast_reg_6479.read().is_01() || !row_assign_3_cast1_c_1_fu_2993_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(tmp_226_cast_reg_6479.read()) + sc_biguint<25>(row_assign_3_cast1_c_1_fu_2993_p1.read()));
}

void sobel_filter::thread_tmp_226_cast_fu_2941_p1() {
    tmp_226_cast_fu_2941_p1 = esl_sext<25,24>(tmp_218_fu_2935_p2.read());
}

void sobel_filter::thread_tmp_226_fu_3017_p2() {
    tmp_226_fu_3017_p2 = (!tmp_229_cast_reg_6484.read().is_01() || !row_assign_3_cast1_c_fu_2989_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(tmp_229_cast_reg_6484.read()) + sc_biguint<24>(row_assign_3_cast1_c_fu_2989_p1.read()));
}

void sobel_filter::thread_tmp_227_fu_2794_p1() {
    tmp_227_fu_2794_p1 = x_weight_2_2_fu_2760_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_228_fu_2816_p1() {
    tmp_228_fu_2816_p1 = y_weight_2_2_2_fu_2804_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_229_cast_fu_2981_p1() {
    tmp_229_cast_fu_2981_p1 = esl_sext<24,23>(tmp_221_fu_2975_p2.read());
}

void sobel_filter::thread_tmp_229_fu_3330_p3() {
    tmp_229_fu_3330_p3 = esl_concat<12,11>(lastLine_3_3_fu_3325_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_22_fu_1977_p2() {
    tmp_22_fu_1977_p2 = (!ap_const_lv8_0.is_01() || !tmp_21_reg_6093.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_21_reg_6093.read()));
}

void sobel_filter::thread_tmp_230_cast_fu_3002_p1() {
    tmp_230_cast_fu_3002_p1 = esl_sext<32,25>(tmp_225_fu_2997_p2.read());
}

void sobel_filter::thread_tmp_230_fu_3342_p3() {
    tmp_230_fu_3342_p3 = esl_concat<12,7>(lastLine_3_3_fu_3325_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_231_cast_fu_3022_p1() {
    tmp_231_cast_fu_3022_p1 = esl_sext<32,24>(tmp_226_fu_3017_p2.read());
}

void sobel_filter::thread_tmp_231_fu_3354_p2() {
    tmp_231_fu_3354_p2 = (!p_shl40_cast_fu_3338_p1.read().is_01() || !p_shl41_cast_fu_3350_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(p_shl40_cast_fu_3338_p1.read()) - sc_biguint<24>(p_shl41_cast_fu_3350_p1.read()));
}

void sobel_filter::thread_tmp_232_fu_3370_p3() {
    tmp_232_fu_3370_p3 = esl_concat<11,11>(i_2_3_fu_3364_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_233_fu_3382_p3() {
    tmp_233_fu_3382_p3 = esl_concat<11,7>(i_2_3_fu_3364_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_234_cast_fu_3360_p1() {
    tmp_234_cast_fu_3360_p1 = esl_sext<25,24>(tmp_231_fu_3354_p2.read());
}

void sobel_filter::thread_tmp_234_fu_3394_p2() {
    tmp_234_fu_3394_p2 = (!p_shl38_cast_fu_3378_p1.read().is_01() || !p_shl39_cast_fu_3390_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(p_shl38_cast_fu_3378_p1.read()) - sc_biguint<23>(p_shl39_cast_fu_3390_p1.read()));
}

void sobel_filter::thread_tmp_235_fu_3053_p2() {
    tmp_235_fu_3053_p2 = (!row_assign_3_phi_fu_1205_p4.read().is_01() || !ap_const_lv11_77F.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_3_phi_fu_1205_p4.read() == ap_const_lv11_77F);
}

void sobel_filter::thread_tmp_236_fu_3059_p2() {
    tmp_236_fu_3059_p2 = (!row_assign_3_phi_fu_1205_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_3_phi_fu_1205_p4.read() == ap_const_lv11_0);
}

void sobel_filter::thread_tmp_237_cast_fu_3400_p1() {
    tmp_237_cast_fu_3400_p1 = esl_sext<24,23>(tmp_234_fu_3394_p2.read());
}

void sobel_filter::thread_tmp_237_fu_3065_p2() {
    tmp_237_fu_3065_p2 = (tmp_236_fu_3059_p2.read() | tmp_235_fu_3053_p2.read());
}

void sobel_filter::thread_tmp_238_cast_fu_3421_p1() {
    tmp_238_cast_fu_3421_p1 = esl_sext<32,25>(tmp_238_fu_3416_p2.read());
}

void sobel_filter::thread_tmp_238_fu_3416_p2() {
    tmp_238_fu_3416_p2 = (!tmp_234_cast_reg_6638.read().is_01() || !row_assign_4_cast1_c_1_fu_3412_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(tmp_234_cast_reg_6638.read()) + sc_biguint<25>(row_assign_4_cast1_c_1_fu_3412_p1.read()));
}

void sobel_filter::thread_tmp_239_cast_fu_3441_p1() {
    tmp_239_cast_fu_3441_p1 = esl_sext<32,24>(tmp_239_fu_3436_p2.read());
}

void sobel_filter::thread_tmp_239_fu_3436_p2() {
    tmp_239_fu_3436_p2 = (!tmp_237_cast_reg_6643.read().is_01() || !row_assign_4_cast1_c_fu_3408_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(tmp_237_cast_reg_6643.read()) + sc_biguint<24>(row_assign_4_cast1_c_fu_3408_p1.read()));
}

void sobel_filter::thread_tmp_23_fu_1982_p3() {
    tmp_23_fu_1982_p3 = (!tmp_29_fu_1972_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_29_fu_1972_p2.read()[0].to_bool())? tmp_21_reg_6093.read(): tmp_22_fu_1977_p2.read());
}

void sobel_filter::thread_tmp_240_fu_3749_p3() {
    tmp_240_fu_3749_p3 = esl_concat<12,11>(lastLine_3_4_fu_3744_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_241_fu_3761_p3() {
    tmp_241_fu_3761_p3 = esl_concat<12,7>(lastLine_3_4_fu_3744_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_242_cast_fu_3779_p1() {
    tmp_242_cast_fu_3779_p1 = esl_sext<25,24>(tmp_242_fu_3773_p2.read());
}

void sobel_filter::thread_tmp_242_fu_3773_p2() {
    tmp_242_fu_3773_p2 = (!p_shl44_cast_fu_3757_p1.read().is_01() || !p_shl45_cast_fu_3769_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(p_shl44_cast_fu_3757_p1.read()) - sc_biguint<24>(p_shl45_cast_fu_3769_p1.read()));
}

void sobel_filter::thread_tmp_243_fu_3789_p3() {
    tmp_243_fu_3789_p3 = esl_concat<11,11>(i_2_4_fu_3783_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_244_fu_3801_p3() {
    tmp_244_fu_3801_p3 = esl_concat<11,7>(i_2_4_fu_3783_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_245_cast_fu_3819_p1() {
    tmp_245_cast_fu_3819_p1 = esl_sext<24,23>(tmp_245_fu_3813_p2.read());
}

void sobel_filter::thread_tmp_245_fu_3813_p2() {
    tmp_245_fu_3813_p2 = (!p_shl42_cast_fu_3797_p1.read().is_01() || !p_shl43_cast_fu_3809_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(p_shl42_cast_fu_3797_p1.read()) - sc_biguint<23>(p_shl43_cast_fu_3809_p1.read()));
}

void sobel_filter::thread_tmp_246_cast_fu_3840_p1() {
    tmp_246_cast_fu_3840_p1 = esl_sext<32,25>(tmp_246_fu_3835_p2.read());
}

void sobel_filter::thread_tmp_246_fu_3835_p2() {
    tmp_246_fu_3835_p2 = (!tmp_242_cast_reg_6797.read().is_01() || !row_assign_5_cast1_c_1_fu_3831_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(tmp_242_cast_reg_6797.read()) + sc_biguint<25>(row_assign_5_cast1_c_1_fu_3831_p1.read()));
}

void sobel_filter::thread_tmp_247_cast_fu_3860_p1() {
    tmp_247_cast_fu_3860_p1 = esl_sext<32,24>(tmp_247_fu_3855_p2.read());
}

void sobel_filter::thread_tmp_247_fu_3855_p2() {
    tmp_247_fu_3855_p2 = (!tmp_245_cast_reg_6802.read().is_01() || !row_assign_5_cast1_c_fu_3827_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(tmp_245_cast_reg_6802.read()) + sc_biguint<24>(row_assign_5_cast1_c_fu_3827_p1.read()));
}

void sobel_filter::thread_tmp_248_fu_4168_p3() {
    tmp_248_fu_4168_p3 = esl_concat<12,11>(lastLine_3_5_fu_4163_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_249_fu_4180_p3() {
    tmp_249_fu_4180_p3 = esl_concat<12,7>(lastLine_3_5_fu_4163_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_24_fu_1495_p2() {
    tmp_24_fu_1495_p2 = (!p_shl20_cast_fu_1479_p1.read().is_01() || !p_shl21_cast_fu_1491_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl20_cast_fu_1479_p1.read()) - sc_biguint<14>(p_shl21_cast_fu_1491_p1.read()));
}

void sobel_filter::thread_tmp_250_cast_fu_4198_p1() {
    tmp_250_cast_fu_4198_p1 = esl_sext<25,24>(tmp_250_fu_4192_p2.read());
}

void sobel_filter::thread_tmp_250_fu_4192_p2() {
    tmp_250_fu_4192_p2 = (!p_shl48_cast_fu_4176_p1.read().is_01() || !p_shl49_cast_fu_4188_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(p_shl48_cast_fu_4176_p1.read()) - sc_biguint<24>(p_shl49_cast_fu_4188_p1.read()));
}

void sobel_filter::thread_tmp_251_fu_4208_p3() {
    tmp_251_fu_4208_p3 = esl_concat<11,11>(i_2_5_fu_4202_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_252_fu_4220_p3() {
    tmp_252_fu_4220_p3 = esl_concat<11,7>(i_2_5_fu_4202_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_253_cast_fu_4238_p1() {
    tmp_253_cast_fu_4238_p1 = esl_sext<24,23>(tmp_253_fu_4232_p2.read());
}

void sobel_filter::thread_tmp_253_fu_4232_p2() {
    tmp_253_fu_4232_p2 = (!p_shl46_cast_fu_4216_p1.read().is_01() || !p_shl47_cast_fu_4228_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(p_shl46_cast_fu_4216_p1.read()) - sc_biguint<23>(p_shl47_cast_fu_4228_p1.read()));
}

void sobel_filter::thread_tmp_254_cast_fu_4259_p1() {
    tmp_254_cast_fu_4259_p1 = esl_sext<32,25>(tmp_254_fu_4254_p2.read());
}

void sobel_filter::thread_tmp_254_fu_4254_p2() {
    tmp_254_fu_4254_p2 = (!tmp_250_cast_reg_6956.read().is_01() || !row_assign_6_cast1_c_1_fu_4250_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(tmp_250_cast_reg_6956.read()) + sc_biguint<25>(row_assign_6_cast1_c_1_fu_4250_p1.read()));
}

void sobel_filter::thread_tmp_255_cast_fu_4279_p1() {
    tmp_255_cast_fu_4279_p1 = esl_sext<32,24>(tmp_255_fu_4274_p2.read());
}

void sobel_filter::thread_tmp_255_fu_4274_p2() {
    tmp_255_fu_4274_p2 = (!tmp_253_cast_reg_6961.read().is_01() || !row_assign_6_cast1_c_fu_4246_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(tmp_253_cast_reg_6961.read()) + sc_biguint<24>(row_assign_6_cast1_c_fu_4246_p1.read()));
}

void sobel_filter::thread_tmp_256_fu_4587_p3() {
    tmp_256_fu_4587_p3 = esl_concat<12,11>(lastLine_3_6_fu_4582_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_257_fu_4599_p3() {
    tmp_257_fu_4599_p3 = esl_concat<12,7>(lastLine_3_6_fu_4582_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_258_cast_fu_4617_p1() {
    tmp_258_cast_fu_4617_p1 = esl_sext<25,24>(tmp_258_fu_4611_p2.read());
}

void sobel_filter::thread_tmp_258_fu_4611_p2() {
    tmp_258_fu_4611_p2 = (!p_shl52_cast_fu_4595_p1.read().is_01() || !p_shl53_cast_fu_4607_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(p_shl52_cast_fu_4595_p1.read()) - sc_biguint<24>(p_shl53_cast_fu_4607_p1.read()));
}

void sobel_filter::thread_tmp_259_fu_4627_p3() {
    tmp_259_fu_4627_p3 = esl_concat<11,11>(i_2_6_fu_4621_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_25_fu_1994_p2() {
    tmp_25_fu_1994_p2 = (!ap_const_lv8_0.is_01() || !tmp_193_reg_6099.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_0) - sc_biguint<8>(tmp_193_reg_6099.read()));
}

void sobel_filter::thread_tmp_260_fu_4639_p3() {
    tmp_260_fu_4639_p3 = esl_concat<11,7>(i_2_6_fu_4621_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_261_cast_fu_4657_p1() {
    tmp_261_cast_fu_4657_p1 = esl_sext<24,23>(tmp_261_fu_4651_p2.read());
}

void sobel_filter::thread_tmp_261_fu_4651_p2() {
    tmp_261_fu_4651_p2 = (!p_shl50_cast_fu_4635_p1.read().is_01() || !p_shl51_cast_fu_4647_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(p_shl50_cast_fu_4635_p1.read()) - sc_biguint<23>(p_shl51_cast_fu_4647_p1.read()));
}

void sobel_filter::thread_tmp_262_cast_fu_4678_p1() {
    tmp_262_cast_fu_4678_p1 = esl_sext<32,25>(tmp_262_fu_4673_p2.read());
}

void sobel_filter::thread_tmp_262_fu_4673_p2() {
    tmp_262_fu_4673_p2 = (!tmp_258_cast_reg_7115.read().is_01() || !row_assign_7_cast1_c_1_fu_4669_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(tmp_258_cast_reg_7115.read()) + sc_biguint<25>(row_assign_7_cast1_c_1_fu_4669_p1.read()));
}

void sobel_filter::thread_tmp_263_cast_fu_4698_p1() {
    tmp_263_cast_fu_4698_p1 = esl_sext<32,24>(tmp_263_fu_4693_p2.read());
}

void sobel_filter::thread_tmp_263_fu_4693_p2() {
    tmp_263_fu_4693_p2 = (!tmp_261_cast_reg_7120.read().is_01() || !row_assign_7_cast1_c_fu_4665_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(tmp_261_cast_reg_7120.read()) + sc_biguint<24>(row_assign_7_cast1_c_fu_4665_p1.read()));
}

void sobel_filter::thread_tmp_264_fu_5006_p3() {
    tmp_264_fu_5006_p3 = esl_concat<12,11>(lastLine_3_7_fu_5001_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_265_fu_5018_p3() {
    tmp_265_fu_5018_p3 = esl_concat<12,7>(lastLine_3_7_fu_5001_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_266_cast_fu_5036_p1() {
    tmp_266_cast_fu_5036_p1 = esl_sext<25,24>(tmp_266_fu_5030_p2.read());
}

void sobel_filter::thread_tmp_266_fu_5030_p2() {
    tmp_266_fu_5030_p2 = (!p_shl56_cast_fu_5014_p1.read().is_01() || !p_shl57_cast_fu_5026_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(p_shl56_cast_fu_5014_p1.read()) - sc_biguint<24>(p_shl57_cast_fu_5026_p1.read()));
}

void sobel_filter::thread_tmp_267_fu_5046_p3() {
    tmp_267_fu_5046_p3 = esl_concat<11,11>(i_2_7_fu_5040_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_268_fu_5058_p3() {
    tmp_268_fu_5058_p3 = esl_concat<11,7>(i_2_7_fu_5040_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_269_cast_fu_5076_p1() {
    tmp_269_cast_fu_5076_p1 = esl_sext<24,23>(tmp_269_fu_5070_p2.read());
}

void sobel_filter::thread_tmp_269_fu_5070_p2() {
    tmp_269_fu_5070_p2 = (!p_shl54_cast_fu_5054_p1.read().is_01() || !p_shl55_cast_fu_5066_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(p_shl54_cast_fu_5054_p1.read()) - sc_biguint<23>(p_shl55_cast_fu_5066_p1.read()));
}

void sobel_filter::thread_tmp_26_1_fu_2478_p5() {
    tmp_26_1_fu_2478_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(edge_val_1_i_1_reg_6312.read(), edge_val_1_i_1_reg_6312.read()), edge_val_1_i_1_reg_6312.read()), edge_val_1_i_1_reg_6312.read());
}

void sobel_filter::thread_tmp_26_2_fu_2897_p5() {
    tmp_26_2_fu_2897_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(edge_val_1_i_2_reg_6471.read(), edge_val_1_i_2_reg_6471.read()), edge_val_1_i_2_reg_6471.read()), edge_val_1_i_2_reg_6471.read());
}

void sobel_filter::thread_tmp_26_3_fu_3316_p5() {
    tmp_26_3_fu_3316_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(edge_val_1_i_3_reg_6630.read(), edge_val_1_i_3_reg_6630.read()), edge_val_1_i_3_reg_6630.read()), edge_val_1_i_3_reg_6630.read());
}

void sobel_filter::thread_tmp_26_4_fu_3735_p5() {
    tmp_26_4_fu_3735_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(edge_val_1_i_4_reg_6789.read(), edge_val_1_i_4_reg_6789.read()), edge_val_1_i_4_reg_6789.read()), edge_val_1_i_4_reg_6789.read());
}

void sobel_filter::thread_tmp_26_5_fu_4154_p5() {
    tmp_26_5_fu_4154_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(edge_val_1_i_5_reg_6948.read(), edge_val_1_i_5_reg_6948.read()), edge_val_1_i_5_reg_6948.read()), edge_val_1_i_5_reg_6948.read());
}

void sobel_filter::thread_tmp_26_6_fu_4573_p5() {
    tmp_26_6_fu_4573_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(edge_val_1_i_6_reg_7107.read(), edge_val_1_i_6_reg_7107.read()), edge_val_1_i_6_reg_7107.read()), edge_val_1_i_6_reg_7107.read());
}

void sobel_filter::thread_tmp_26_7_fu_4992_p5() {
    tmp_26_7_fu_4992_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(edge_val_1_i_7_reg_7266.read(), edge_val_1_i_7_reg_7266.read()), edge_val_1_i_7_reg_7266.read()), edge_val_1_i_7_reg_7266.read());
}

void sobel_filter::thread_tmp_26_8_fu_5411_p5() {
    tmp_26_8_fu_5411_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(edge_val_1_i_8_reg_7425.read(), edge_val_1_i_8_reg_7425.read()), edge_val_1_i_8_reg_7425.read()), edge_val_1_i_8_reg_7425.read());
}

void sobel_filter::thread_tmp_26_9_fu_5808_p5() {
    tmp_26_9_fu_5808_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(edge_val_1_i_9_reg_7594.read(), edge_val_1_i_9_reg_7594.read()), edge_val_1_i_9_reg_7594.read()), edge_val_1_i_9_reg_7594.read());
}

void sobel_filter::thread_tmp_26_fu_1999_p3() {
    tmp_26_fu_1999_p3 = (!tmp_30_fu_1989_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_30_fu_1989_p2.read()[0].to_bool())? tmp_193_reg_6099.read(): tmp_25_fu_1994_p2.read());
}

void sobel_filter::thread_tmp_270_cast_fu_5097_p1() {
    tmp_270_cast_fu_5097_p1 = esl_sext<32,25>(tmp_270_fu_5092_p2.read());
}

void sobel_filter::thread_tmp_270_fu_5092_p2() {
    tmp_270_fu_5092_p2 = (!tmp_266_cast_reg_7274.read().is_01() || !row_assign_8_cast1_c_1_fu_5088_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(tmp_266_cast_reg_7274.read()) + sc_biguint<25>(row_assign_8_cast1_c_1_fu_5088_p1.read()));
}

void sobel_filter::thread_tmp_271_cast_fu_5117_p1() {
    tmp_271_cast_fu_5117_p1 = esl_sext<32,24>(tmp_271_fu_5112_p2.read());
}

void sobel_filter::thread_tmp_271_fu_5112_p2() {
    tmp_271_fu_5112_p2 = (!tmp_269_cast_reg_7279.read().is_01() || !row_assign_8_cast1_c_fu_5084_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(tmp_269_cast_reg_7279.read()) + sc_biguint<24>(row_assign_8_cast1_c_fu_5084_p1.read()));
}

void sobel_filter::thread_tmp_272_fu_3213_p1() {
    tmp_272_fu_3213_p1 = x_weight_3_2_fu_3179_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_273_fu_3235_p1() {
    tmp_273_fu_3235_p1 = y_weight_3_2_2_fu_3223_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_274_fu_5437_p2() {
    tmp_274_fu_5437_p2 = (!tmp_300_fu_5425_p2.read().is_01() || !tmp_301_fu_5431_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_300_fu_5425_p2.read()) - sc_biguint<32>(tmp_301_fu_5431_p2.read()));
}

void sobel_filter::thread_tmp_275_fu_5449_p3() {
    tmp_275_fu_5449_p3 = esl_concat<11,11>(i_2_8_fu_5443_p2.read(), ap_const_lv11_0);
}

void sobel_filter::thread_tmp_276_fu_5461_p3() {
    tmp_276_fu_5461_p3 = esl_concat<11,7>(i_2_8_fu_5443_p2.read(), ap_const_lv7_0);
}

void sobel_filter::thread_tmp_277_cast_fu_5479_p1() {
    tmp_277_cast_fu_5479_p1 = esl_sext<24,23>(tmp_277_fu_5473_p2.read());
}

void sobel_filter::thread_tmp_277_fu_5473_p2() {
    tmp_277_fu_5473_p2 = (!p_shl58_cast_fu_5457_p1.read().is_01() || !p_shl59_cast_fu_5469_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(p_shl58_cast_fu_5457_p1.read()) - sc_biguint<23>(p_shl59_cast_fu_5469_p1.read()));
}

void sobel_filter::thread_tmp_278_fu_5497_p2() {
    tmp_278_fu_5497_p2 = (!tmp_274_reg_7438.read().is_01() || !row_assign_9_cast_fu_5489_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_274_reg_7438.read()) + sc_biguint<32>(row_assign_9_cast_fu_5489_p1.read()));
}

void sobel_filter::thread_tmp_279_cast_fu_5518_p1() {
    tmp_279_cast_fu_5518_p1 = esl_sext<32,24>(tmp_279_fu_5513_p2.read());
}

void sobel_filter::thread_tmp_279_fu_5513_p2() {
    tmp_279_fu_5513_p2 = (!tmp_277_cast_reg_7443.read().is_01() || !row_assign_9_cast_ca_fu_5493_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(tmp_277_cast_reg_7443.read()) + sc_biguint<24>(row_assign_9_cast_ca_fu_5493_p1.read()));
}

void sobel_filter::thread_tmp_280_fu_3472_p2() {
    tmp_280_fu_3472_p2 = (!row_assign_4_phi_fu_1216_p4.read().is_01() || !ap_const_lv11_77F.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_4_phi_fu_1216_p4.read() == ap_const_lv11_77F);
}

void sobel_filter::thread_tmp_281_fu_3478_p2() {
    tmp_281_fu_3478_p2 = (!row_assign_4_phi_fu_1216_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_4_phi_fu_1216_p4.read() == ap_const_lv11_0);
}

void sobel_filter::thread_tmp_282_fu_3484_p2() {
    tmp_282_fu_3484_p2 = (tmp_281_fu_3478_p2.read() | tmp_280_fu_3472_p2.read());
}

void sobel_filter::thread_tmp_283_fu_3632_p1() {
    tmp_283_fu_3632_p1 = x_weight_4_2_fu_3598_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_284_fu_3654_p1() {
    tmp_284_fu_3654_p1 = y_weight_4_2_2_fu_3642_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_285_fu_3891_p2() {
    tmp_285_fu_3891_p2 = (!row_assign_5_phi_fu_1227_p4.read().is_01() || !ap_const_lv11_77F.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_5_phi_fu_1227_p4.read() == ap_const_lv11_77F);
}

void sobel_filter::thread_tmp_286_fu_3897_p2() {
    tmp_286_fu_3897_p2 = (!row_assign_5_phi_fu_1227_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_5_phi_fu_1227_p4.read() == ap_const_lv11_0);
}

void sobel_filter::thread_tmp_287_fu_3903_p2() {
    tmp_287_fu_3903_p2 = (tmp_286_fu_3897_p2.read() | tmp_285_fu_3891_p2.read());
}

void sobel_filter::thread_tmp_288_fu_4051_p1() {
    tmp_288_fu_4051_p1 = x_weight_5_2_fu_4017_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_289_fu_4073_p1() {
    tmp_289_fu_4073_p1 = y_weight_5_2_2_fu_4061_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_28_0_0_2_cast_fu_1713_p1() {
    tmp_28_0_0_2_cast_fu_1713_p1 = esl_zext<32,11>(ap_reg_pp0_iter3_j_1_reg_5966.read());
}

void sobel_filter::thread_tmp_28_0_cast_fu_1720_p1() {
    tmp_28_0_cast_fu_1720_p1 = esl_zext<32,11>(ap_reg_pp0_iter4_tmp_28_reg_5976.read());
}

void sobel_filter::thread_tmp_28_1_0_2_cast_fu_2233_p1() {
    tmp_28_1_0_2_cast_fu_2233_p1 = esl_zext<32,11>(ap_reg_pp1_iter3_j_1_1_reg_6199.read());
}

void sobel_filter::thread_tmp_28_1_cast_fu_2245_p1() {
    tmp_28_1_cast_fu_2245_p1 = esl_sext<32,12>(tmp_28_1_fu_2240_p2.read());
}

void sobel_filter::thread_tmp_28_1_fu_2240_p2() {
    tmp_28_1_fu_2240_p2 = (!ap_const_lv12_FFF.is_01() || !ap_reg_pp1_iter4_row_assign_1_cast_reg_6190.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FFF) + sc_biguint<12>(ap_reg_pp1_iter4_row_assign_1_cast_reg_6190.read()));
}

void sobel_filter::thread_tmp_28_2_0_2_cast_fu_2652_p1() {
    tmp_28_2_0_2_cast_fu_2652_p1 = esl_zext<32,11>(ap_reg_pp2_iter3_j_1_2_reg_6358.read());
}

void sobel_filter::thread_tmp_28_2_cast_fu_2664_p1() {
    tmp_28_2_cast_fu_2664_p1 = esl_sext<32,12>(tmp_28_2_fu_2659_p2.read());
}

void sobel_filter::thread_tmp_28_2_fu_2659_p2() {
    tmp_28_2_fu_2659_p2 = (!ap_const_lv12_FFF.is_01() || !ap_reg_pp2_iter4_row_assign_2_cast_reg_6349.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FFF) + sc_biguint<12>(ap_reg_pp2_iter4_row_assign_2_cast_reg_6349.read()));
}

void sobel_filter::thread_tmp_28_3_0_2_cast_fu_3071_p1() {
    tmp_28_3_0_2_cast_fu_3071_p1 = esl_zext<32,11>(ap_reg_pp3_iter3_j_1_3_reg_6517.read());
}

void sobel_filter::thread_tmp_28_3_cast_fu_3083_p1() {
    tmp_28_3_cast_fu_3083_p1 = esl_sext<32,12>(tmp_28_3_fu_3078_p2.read());
}

void sobel_filter::thread_tmp_28_3_fu_3078_p2() {
    tmp_28_3_fu_3078_p2 = (!ap_const_lv12_FFF.is_01() || !ap_reg_pp3_iter4_row_assign_3_cast_reg_6508.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FFF) + sc_biguint<12>(ap_reg_pp3_iter4_row_assign_3_cast_reg_6508.read()));
}

void sobel_filter::thread_tmp_28_4_0_2_cast_fu_3490_p1() {
    tmp_28_4_0_2_cast_fu_3490_p1 = esl_zext<32,11>(ap_reg_pp4_iter3_j_1_4_reg_6676.read());
}

void sobel_filter::thread_tmp_28_4_cast_fu_3502_p1() {
    tmp_28_4_cast_fu_3502_p1 = esl_sext<32,12>(tmp_28_4_fu_3497_p2.read());
}

void sobel_filter::thread_tmp_28_4_fu_3497_p2() {
    tmp_28_4_fu_3497_p2 = (!ap_const_lv12_FFF.is_01() || !ap_reg_pp4_iter4_row_assign_4_cast_reg_6667.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FFF) + sc_biguint<12>(ap_reg_pp4_iter4_row_assign_4_cast_reg_6667.read()));
}

void sobel_filter::thread_tmp_28_5_0_2_cast_fu_3909_p1() {
    tmp_28_5_0_2_cast_fu_3909_p1 = esl_zext<32,11>(ap_reg_pp5_iter3_j_1_5_reg_6835.read());
}

void sobel_filter::thread_tmp_28_5_cast_fu_3921_p1() {
    tmp_28_5_cast_fu_3921_p1 = esl_sext<32,12>(tmp_28_5_fu_3916_p2.read());
}

void sobel_filter::thread_tmp_28_5_fu_3916_p2() {
    tmp_28_5_fu_3916_p2 = (!ap_const_lv12_FFF.is_01() || !ap_reg_pp5_iter4_row_assign_5_cast_reg_6826.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FFF) + sc_biguint<12>(ap_reg_pp5_iter4_row_assign_5_cast_reg_6826.read()));
}

void sobel_filter::thread_tmp_28_6_0_2_cast_fu_4328_p1() {
    tmp_28_6_0_2_cast_fu_4328_p1 = esl_zext<32,11>(ap_reg_pp6_iter3_j_1_6_reg_6994.read());
}

void sobel_filter::thread_tmp_28_6_cast_fu_4340_p1() {
    tmp_28_6_cast_fu_4340_p1 = esl_sext<32,12>(tmp_28_6_fu_4335_p2.read());
}

void sobel_filter::thread_tmp_28_6_fu_4335_p2() {
    tmp_28_6_fu_4335_p2 = (!ap_const_lv12_FFF.is_01() || !ap_reg_pp6_iter4_row_assign_6_cast_reg_6985.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FFF) + sc_biguint<12>(ap_reg_pp6_iter4_row_assign_6_cast_reg_6985.read()));
}

void sobel_filter::thread_tmp_28_7_0_2_cast_fu_4747_p1() {
    tmp_28_7_0_2_cast_fu_4747_p1 = esl_zext<32,11>(ap_reg_pp7_iter3_j_1_7_reg_7153.read());
}

void sobel_filter::thread_tmp_28_7_cast_fu_4759_p1() {
    tmp_28_7_cast_fu_4759_p1 = esl_sext<32,12>(tmp_28_7_fu_4754_p2.read());
}

void sobel_filter::thread_tmp_28_7_fu_4754_p2() {
    tmp_28_7_fu_4754_p2 = (!ap_const_lv12_FFF.is_01() || !ap_reg_pp7_iter4_row_assign_7_cast_reg_7144.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FFF) + sc_biguint<12>(ap_reg_pp7_iter4_row_assign_7_cast_reg_7144.read()));
}

void sobel_filter::thread_tmp_28_8_0_2_cast_fu_5166_p1() {
    tmp_28_8_0_2_cast_fu_5166_p1 = esl_zext<32,11>(ap_reg_pp8_iter3_j_1_8_reg_7312.read());
}

void sobel_filter::thread_tmp_28_8_cast_fu_5178_p1() {
    tmp_28_8_cast_fu_5178_p1 = esl_sext<32,12>(tmp_28_8_fu_5173_p2.read());
}

void sobel_filter::thread_tmp_28_8_fu_5173_p2() {
    tmp_28_8_fu_5173_p2 = (!ap_const_lv12_FFF.is_01() || !ap_reg_pp8_iter4_row_assign_8_cast_reg_7303.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FFF) + sc_biguint<12>(ap_reg_pp8_iter4_row_assign_8_cast_reg_7303.read()));
}

void sobel_filter::thread_tmp_28_9_0_2_cast_fu_5569_p1() {
    tmp_28_9_0_2_cast_fu_5569_p1 = esl_zext<32,11>(ap_reg_pp9_iter3_j_1_9_reg_7476.read());
}

void sobel_filter::thread_tmp_28_9_cast_fu_5576_p1() {
    tmp_28_9_cast_fu_5576_p1 = esl_zext<32,11>(ap_reg_pp9_iter4_tmp_28_9_reg_7486.read());
}

void sobel_filter::thread_tmp_28_9_fu_5563_p2() {
    tmp_28_9_fu_5563_p2 = (!ap_const_lv11_7FF.is_01() || !row_assign_9_phi_fu_1271_p4.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_7FF) + sc_biguint<11>(row_assign_9_phi_fu_1271_p4.read()));
}

void sobel_filter::thread_tmp_28_fu_1707_p2() {
    tmp_28_fu_1707_p2 = (!ap_const_lv11_7FF.is_01() || !row_assign_phi_fu_1172_p4.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_7FF) + sc_biguint<11>(row_assign_phi_fu_1172_p4.read()));
}

void sobel_filter::thread_tmp_290_fu_4310_p2() {
    tmp_290_fu_4310_p2 = (!row_assign_6_phi_fu_1238_p4.read().is_01() || !ap_const_lv11_77F.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_6_phi_fu_1238_p4.read() == ap_const_lv11_77F);
}

void sobel_filter::thread_tmp_291_fu_4316_p2() {
    tmp_291_fu_4316_p2 = (!row_assign_6_phi_fu_1238_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_6_phi_fu_1238_p4.read() == ap_const_lv11_0);
}

void sobel_filter::thread_tmp_292_fu_4322_p2() {
    tmp_292_fu_4322_p2 = (tmp_291_fu_4316_p2.read() | tmp_290_fu_4310_p2.read());
}

void sobel_filter::thread_tmp_293_fu_4470_p1() {
    tmp_293_fu_4470_p1 = x_weight_6_2_fu_4436_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_294_fu_4492_p1() {
    tmp_294_fu_4492_p1 = y_weight_6_2_2_fu_4480_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_295_fu_4729_p2() {
    tmp_295_fu_4729_p2 = (!row_assign_7_phi_fu_1249_p4.read().is_01() || !ap_const_lv11_77F.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_7_phi_fu_1249_p4.read() == ap_const_lv11_77F);
}

void sobel_filter::thread_tmp_296_fu_4735_p2() {
    tmp_296_fu_4735_p2 = (!row_assign_7_phi_fu_1249_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_7_phi_fu_1249_p4.read() == ap_const_lv11_0);
}

void sobel_filter::thread_tmp_297_fu_4741_p2() {
    tmp_297_fu_4741_p2 = (tmp_296_fu_4735_p2.read() | tmp_295_fu_4729_p2.read());
}

void sobel_filter::thread_tmp_298_fu_4889_p1() {
    tmp_298_fu_4889_p1 = x_weight_7_2_fu_4855_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_299_fu_4911_p1() {
    tmp_299_fu_4911_p1 = y_weight_7_2_2_fu_4899_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_29_0_0_2_cast_fu_1783_p1() {
    tmp_29_0_0_2_cast_fu_1783_p1 = esl_zext<9,8>(tmp_15_fu_1770_p6.read());
}

void sobel_filter::thread_tmp_29_0_2_2_cast_fu_1944_p1() {
    tmp_29_0_2_2_cast_fu_1944_p1 = esl_zext<11,8>(tmp_27_reg_6077.read());
}

void sobel_filter::thread_tmp_29_0_2_cast_fu_1912_p1() {
    tmp_29_0_2_cast_fu_1912_p1 = esl_zext<11,8>(tmp_18_reg_6072.read());
}

void sobel_filter::thread_tmp_29_0_cast_fu_1766_p1() {
    tmp_29_0_cast_fu_1766_p1 = esl_zext<9,8>(tmp_13_fu_1753_p6.read());
}

void sobel_filter::thread_tmp_29_1_0_2_cast_fu_2257_p1() {
    tmp_29_1_0_2_cast_fu_2257_p1 = esl_zext<9,8>(grp_fu_1389_p6.read());
}

void sobel_filter::thread_tmp_29_1_2_2_cast_fu_2371_p1() {
    tmp_29_1_2_2_cast_fu_2371_p1 = esl_zext<11,8>(reg_1445.read());
}

void sobel_filter::thread_tmp_29_1_2_cast_fu_2337_p1() {
    tmp_29_1_2_cast_fu_2337_p1 = esl_zext<11,8>(reg_1369.read());
}

void sobel_filter::thread_tmp_29_1_cast_fu_2253_p1() {
    tmp_29_1_cast_fu_2253_p1 = esl_zext<9,8>(grp_fu_1278_p6.read());
}

void sobel_filter::thread_tmp_29_2_0_2_cast_fu_2676_p1() {
    tmp_29_2_0_2_cast_fu_2676_p1 = esl_zext<9,8>(grp_fu_1402_p6.read());
}

void sobel_filter::thread_tmp_29_2_2_2_cast_fu_2790_p1() {
    tmp_29_2_2_2_cast_fu_2790_p1 = esl_zext<11,8>(reg_1449.read());
}

void sobel_filter::thread_tmp_29_2_2_cast_fu_2756_p1() {
    tmp_29_2_2_cast_fu_2756_p1 = esl_zext<11,8>(reg_1377.read());
}

void sobel_filter::thread_tmp_29_2_cast_fu_2672_p1() {
    tmp_29_2_cast_fu_2672_p1 = esl_zext<9,8>(grp_fu_1304_p6.read());
}

void sobel_filter::thread_tmp_29_3_0_2_cast_fu_3095_p1() {
    tmp_29_3_0_2_cast_fu_3095_p1 = esl_zext<9,8>(grp_fu_1415_p6.read());
}

void sobel_filter::thread_tmp_29_3_2_2_cast_fu_3209_p1() {
    tmp_29_3_2_2_cast_fu_3209_p1 = esl_zext<11,8>(reg_1453.read());
}

void sobel_filter::thread_tmp_29_3_2_cast_fu_3175_p1() {
    tmp_29_3_2_cast_fu_3175_p1 = esl_zext<11,8>(reg_1381.read());
}

void sobel_filter::thread_tmp_29_3_cast_fu_3091_p1() {
    tmp_29_3_cast_fu_3091_p1 = esl_zext<9,8>(grp_fu_1291_p6.read());
}

void sobel_filter::thread_tmp_29_4_0_2_cast_fu_3514_p1() {
    tmp_29_4_0_2_cast_fu_3514_p1 = esl_zext<9,8>(grp_fu_1428_p6.read());
}

void sobel_filter::thread_tmp_29_4_2_2_cast_fu_3628_p1() {
    tmp_29_4_2_2_cast_fu_3628_p1 = esl_zext<11,8>(reg_1441.read());
}

void sobel_filter::thread_tmp_29_4_2_cast_fu_3594_p1() {
    tmp_29_4_2_cast_fu_3594_p1 = esl_zext<11,8>(reg_1385.read());
}

void sobel_filter::thread_tmp_29_4_cast_fu_3510_p1() {
    tmp_29_4_cast_fu_3510_p1 = esl_zext<9,8>(grp_fu_1317_p6.read());
}

void sobel_filter::thread_tmp_29_5_0_2_cast_fu_3933_p1() {
    tmp_29_5_0_2_cast_fu_3933_p1 = esl_zext<9,8>(grp_fu_1389_p6.read());
}

void sobel_filter::thread_tmp_29_5_2_2_cast_fu_4047_p1() {
    tmp_29_5_2_2_cast_fu_4047_p1 = esl_zext<11,8>(reg_1445.read());
}

void sobel_filter::thread_tmp_29_5_2_cast_fu_4013_p1() {
    tmp_29_5_2_cast_fu_4013_p1 = esl_zext<11,8>(reg_1369.read());
}

void sobel_filter::thread_tmp_29_5_cast_fu_3929_p1() {
    tmp_29_5_cast_fu_3929_p1 = esl_zext<9,8>(grp_fu_1278_p6.read());
}

void sobel_filter::thread_tmp_29_6_0_2_cast_fu_4352_p1() {
    tmp_29_6_0_2_cast_fu_4352_p1 = esl_zext<9,8>(grp_fu_1402_p6.read());
}

void sobel_filter::thread_tmp_29_6_2_2_cast_fu_4466_p1() {
    tmp_29_6_2_2_cast_fu_4466_p1 = esl_zext<11,8>(reg_1449.read());
}

void sobel_filter::thread_tmp_29_6_2_cast_fu_4432_p1() {
    tmp_29_6_2_cast_fu_4432_p1 = esl_zext<11,8>(reg_1377.read());
}

void sobel_filter::thread_tmp_29_6_cast_fu_4348_p1() {
    tmp_29_6_cast_fu_4348_p1 = esl_zext<9,8>(grp_fu_1304_p6.read());
}

void sobel_filter::thread_tmp_29_7_0_2_cast_fu_4771_p1() {
    tmp_29_7_0_2_cast_fu_4771_p1 = esl_zext<9,8>(grp_fu_1415_p6.read());
}

void sobel_filter::thread_tmp_29_7_2_2_cast_fu_4885_p1() {
    tmp_29_7_2_2_cast_fu_4885_p1 = esl_zext<11,8>(reg_1453.read());
}

void sobel_filter::thread_tmp_29_7_2_cast_fu_4851_p1() {
    tmp_29_7_2_cast_fu_4851_p1 = esl_zext<11,8>(reg_1381.read());
}

void sobel_filter::thread_tmp_29_7_cast_fu_4767_p1() {
    tmp_29_7_cast_fu_4767_p1 = esl_zext<9,8>(grp_fu_1291_p6.read());
}

void sobel_filter::thread_tmp_29_8_0_2_cast_fu_5190_p1() {
    tmp_29_8_0_2_cast_fu_5190_p1 = esl_zext<9,8>(grp_fu_1428_p6.read());
}

void sobel_filter::thread_tmp_29_8_2_2_cast_fu_5304_p1() {
    tmp_29_8_2_2_cast_fu_5304_p1 = esl_zext<11,8>(reg_1441.read());
}

void sobel_filter::thread_tmp_29_8_2_cast_fu_5270_p1() {
    tmp_29_8_2_cast_fu_5270_p1 = esl_zext<11,8>(reg_1385.read());
}

void sobel_filter::thread_tmp_29_8_cast_fu_5186_p1() {
    tmp_29_8_cast_fu_5186_p1 = esl_zext<9,8>(grp_fu_1317_p6.read());
}

void sobel_filter::thread_tmp_29_9_0_2_cast_fu_5587_p1() {
    tmp_29_9_0_2_cast_fu_5587_p1 = esl_zext<9,8>(grp_fu_1389_p6.read());
}

void sobel_filter::thread_tmp_29_9_2_2_cast_fu_5701_p1() {
    tmp_29_9_2_2_cast_fu_5701_p1 = esl_zext<11,8>(reg_1445.read());
}

void sobel_filter::thread_tmp_29_9_2_cast_fu_5667_p1() {
    tmp_29_9_2_cast_fu_5667_p1 = esl_zext<11,8>(reg_1369.read());
}

void sobel_filter::thread_tmp_29_9_cast_fu_5583_p1() {
    tmp_29_9_cast_fu_5583_p1 = esl_zext<9,8>(grp_fu_1278_p6.read());
}

void sobel_filter::thread_tmp_29_fu_1972_p2() {
    tmp_29_fu_1972_p2 = (!x_weight_0_2_2_reg_6083.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(x_weight_0_2_2_reg_6083.read()) > sc_bigint<11>(ap_const_lv11_0));
}

void sobel_filter::thread_tmp_2_fu_1535_p2() {
    tmp_2_fu_1535_p2 = (!i_reg_1133.read().is_01() || !ap_const_lv11_780.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_1133.read() == ap_const_lv11_780);
}

void sobel_filter::thread_tmp_300_fu_5425_p2() {
    tmp_300_fu_5425_p2 = (!ap_const_lv32_B.is_01())? sc_lv<32>(): lastLine_3_8_fu_5420_p2.read() << (unsigned short)ap_const_lv32_B.to_uint();
}

void sobel_filter::thread_tmp_301_fu_5431_p2() {
    tmp_301_fu_5431_p2 = (!ap_const_lv32_7.is_01())? sc_lv<32>(): lastLine_3_8_fu_5420_p2.read() << (unsigned short)ap_const_lv32_7.to_uint();
}

void sobel_filter::thread_tmp_302_fu_5148_p2() {
    tmp_302_fu_5148_p2 = (!row_assign_8_phi_fu_1260_p4.read().is_01() || !ap_const_lv11_77F.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_8_phi_fu_1260_p4.read() == ap_const_lv11_77F);
}

void sobel_filter::thread_tmp_303_fu_5154_p2() {
    tmp_303_fu_5154_p2 = (!row_assign_8_phi_fu_1260_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_8_phi_fu_1260_p4.read() == ap_const_lv11_0);
}

void sobel_filter::thread_tmp_304_fu_5160_p2() {
    tmp_304_fu_5160_p2 = (tmp_303_fu_5154_p2.read() | tmp_302_fu_5148_p2.read());
}

void sobel_filter::thread_tmp_305_fu_5308_p1() {
    tmp_305_fu_5308_p1 = x_weight_8_2_fu_5274_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_306_fu_5330_p1() {
    tmp_306_fu_5330_p1 = y_weight_8_2_2_fu_5318_p2.read().range(8-1, 0);
}

void sobel_filter::thread_tmp_307_fu_5545_p2() {
    tmp_307_fu_5545_p2 = (!row_assign_9_phi_fu_1271_p4.read().is_01() || !ap_const_lv11_77F.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_9_phi_fu_1271_p4.read() == ap_const_lv11_77F);
}

void sobel_filter::thread_tmp_308_fu_5551_p2() {
    tmp_308_fu_5551_p2 = (!row_assign_9_phi_fu_1271_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(row_assign_9_phi_fu_1271_p4.read() == ap_const_lv11_0);
}

void sobel_filter::thread_tmp_309_fu_5557_p2() {
    tmp_309_fu_5557_p2 = (tmp_308_fu_5551_p2.read() | tmp_307_fu_5545_p2.read());
}

void sobel_filter::thread_tmp_30_fu_1989_p2() {
    tmp_30_fu_1989_p2 = (!y_weight_0_2_2_reg_6088.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): (sc_bigint<11>(y_weight_0_2_2_reg_6088.read()) > sc_bigint<11>(ap_const_lv11_0));
}

}

