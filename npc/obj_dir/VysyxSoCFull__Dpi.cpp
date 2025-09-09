// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call VysyxSoCFull::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "VysyxSoCFull__Dpi.h"
#include "VysyxSoCFull.h"

#ifndef VL_DPIDECL_get_branch_inst_count_
#define VL_DPIDECL_get_branch_inst_count_
int get_branch_inst_count() {
    // DPI export at vsrc/idu.v:465:14
    return VysyxSoCFull::get_branch_inst_count();
}
#endif

#ifndef VL_DPIDECL_get_compute_inst_count_
#define VL_DPIDECL_get_compute_inst_count_
int get_compute_inst_count() {
    // DPI export at vsrc/idu.v:453:14
    return VysyxSoCFull::get_compute_inst_count();
}
#endif

#ifndef VL_DPIDECL_get_csr_inst_count_
#define VL_DPIDECL_get_csr_inst_count_
int get_csr_inst_count() {
    // DPI export at vsrc/idu.v:473:14
    return VysyxSoCFull::get_csr_inst_count();
}
#endif

#ifndef VL_DPIDECL_get_csr_reg_value_
#define VL_DPIDECL_get_csr_reg_value_
int get_csr_reg_value(int csr_reg_index) {
    // DPI export at vsrc/csr.v:167:14
    return VysyxSoCFull::get_csr_reg_value(csr_reg_index);
}
#endif

#ifndef VL_DPIDECL_get_exu_count_
#define VL_DPIDECL_get_exu_count_
int get_exu_count() {
    // DPI export at vsrc/exu.v:999:14
    return VysyxSoCFull::get_exu_count();
}
#endif

#ifndef VL_DPIDECL_get_hit_count_
#define VL_DPIDECL_get_hit_count_
int get_hit_count() {
    // DPI export at vsrc/ifu.v:285:18
    return VysyxSoCFull::get_hit_count();
}
#endif

#ifndef VL_DPIDECL_get_idu_count_
#define VL_DPIDECL_get_idu_count_
int get_idu_count() {
    // DPI export at vsrc/idu.v:449:14
    return VysyxSoCFull::get_idu_count();
}
#endif

#ifndef VL_DPIDECL_get_if_allow_in_
#define VL_DPIDECL_get_if_allow_in_
int get_if_allow_in() {
    // DPI export at vsrc/NPC.v:702:14
    return VysyxSoCFull::get_if_allow_in();
}
#endif

#ifndef VL_DPIDECL_get_ifu_count_
#define VL_DPIDECL_get_ifu_count_
int get_ifu_count() {
    // DPI export at vsrc/ifu.v:281:18
    return VysyxSoCFull::get_ifu_count();
}
#endif

#ifndef VL_DPIDECL_get_inst_r_
#define VL_DPIDECL_get_inst_r_
int get_inst_r() {
    // DPI export at vsrc/idu.v:430:14
    return VysyxSoCFull::get_inst_r();
}
#endif

#ifndef VL_DPIDECL_get_jump_inst_count_
#define VL_DPIDECL_get_jump_inst_count_
int get_jump_inst_count() {
    // DPI export at vsrc/idu.v:469:14
    return VysyxSoCFull::get_jump_inst_count();
}
#endif

#ifndef VL_DPIDECL_get_load_inst_count_
#define VL_DPIDECL_get_load_inst_count_
int get_load_inst_count() {
    // DPI export at vsrc/idu.v:457:14
    return VysyxSoCFull::get_load_inst_count();
}
#endif

#ifndef VL_DPIDECL_get_lsu_count_
#define VL_DPIDECL_get_lsu_count_
int get_lsu_count() {
    // DPI export at vsrc/lsu.v:664:14
    return VysyxSoCFull::get_lsu_count();
}
#endif

#ifndef VL_DPIDECL_get_miss_count_
#define VL_DPIDECL_get_miss_count_
int get_miss_count() {
    // DPI export at vsrc/ifu.v:289:18
    return VysyxSoCFull::get_miss_count();
}
#endif

#ifndef VL_DPIDECL_get_other_inst_count_
#define VL_DPIDECL_get_other_inst_count_
int get_other_inst_count() {
    // DPI export at vsrc/idu.v:477:14
    return VysyxSoCFull::get_other_inst_count();
}
#endif

#ifndef VL_DPIDECL_get_pc_value_
#define VL_DPIDECL_get_pc_value_
int get_pc_value() {
    // DPI export at vsrc/NPC.v:697:14
    return VysyxSoCFull::get_pc_value();
}
#endif

#ifndef VL_DPIDECL_get_read_count_
#define VL_DPIDECL_get_read_count_
int get_read_count() {
    // DPI export at vsrc/lsu.v:668:14
    return VysyxSoCFull::get_read_count();
}
#endif

#ifndef VL_DPIDECL_get_reg_value_
#define VL_DPIDECL_get_reg_value_
int get_reg_value(int reg_index) {
    // DPI export at vsrc/registerfile.v:123:16
    return VysyxSoCFull::get_reg_value(reg_index);
}
#endif

#ifndef VL_DPIDECL_get_saved_addr_
#define VL_DPIDECL_get_saved_addr_
int get_saved_addr() {
    // DPI export at vsrc/lsu.v:651:14
    return VysyxSoCFull::get_saved_addr();
}
#endif

#ifndef VL_DPIDECL_get_store_inst_count_
#define VL_DPIDECL_get_store_inst_count_
int get_store_inst_count() {
    // DPI export at vsrc/idu.v:461:14
    return VysyxSoCFull::get_store_inst_count();
}
#endif

#ifndef VL_DPIDECL_get_switch_value_
#define VL_DPIDECL_get_switch_value_
int get_switch_value() {
    // DPI export at ../ysyxSoC/perip/gpio/gpio_top_apb.v:114:16
    return VysyxSoCFull::get_switch_value();
}
#endif

#ifndef VL_DPIDECL_get_write_count_
#define VL_DPIDECL_get_write_count_
int get_write_count() {
    // DPI export at vsrc/lsu.v:672:14
    return VysyxSoCFull::get_write_count();
}
#endif

