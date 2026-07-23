// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTBdesign.h for the primary calling header

#include "VTBdesign__pch.h"

void VTBdesign___024unit__03a__03atransaction::__VnoInFunc_copy(VTBdesign__Syms* __restrict vlSymsp, VlClassRef<VTBdesign___024unit__03a__03atransaction> &copy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03atransaction::__VnoInFunc_copy\n"); );
    // Body
    copy__Vfuncrtn = VL_NEW(VTBdesign___024unit__03a__03atransaction, vlSymsp);
    VL_NULL_CHECK(copy__Vfuncrtn, "testbench.sv", 58)->__PVT__hwdata 
        = this->__PVT__hwdata;
    VL_NULL_CHECK(copy__Vfuncrtn, "testbench.sv", 59)->__PVT__haddr 
        = this->__PVT__haddr;
    VL_NULL_CHECK(copy__Vfuncrtn, "testbench.sv", 60)->__PVT__hsize 
        = this->__PVT__hsize;
    VL_NULL_CHECK(copy__Vfuncrtn, "testbench.sv", 61)->__PVT__hburst 
        = this->__PVT__hburst;
    VL_NULL_CHECK(copy__Vfuncrtn, "testbench.sv", 62)->__PVT__hwrite 
        = this->__PVT__hwrite;
    VL_NULL_CHECK(copy__Vfuncrtn, "testbench.sv", 63)->__PVT__htrans 
        = this->__PVT__htrans;
    VL_NULL_CHECK(copy__Vfuncrtn, "testbench.sv", 64)->__PVT__hresp 
        = this->__PVT__hresp;
    VL_NULL_CHECK(copy__Vfuncrtn, "testbench.sv", 65)->__PVT__hready 
        = this->__PVT__hready;
    VL_NULL_CHECK(copy__Vfuncrtn, "testbench.sv", 66)->__PVT__hrdata 
        = this->__PVT__hrdata;
    VL_NULL_CHECK(copy__Vfuncrtn, "testbench.sv", 67)->__PVT__ulen 
        = this->__PVT__ulen;
}

void VTBdesign___024unit__03a__03atransaction::init(VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03atransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__constraint.write_var(this->__PVT__hwrite, 1ULL, 
                                      "hwrite", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__ulen, 5ULL, 
                                      "ulen", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__hburst, 3ULL, 
                                      "hburst", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__haddr, 0x0000000000000020ULL, 
                                      "haddr", 0ULL);
}

void VTBdesign___024unit__03a__03atransaction::__VnoInFunc_randomize(VTBdesign__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03atransaction::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    this->__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = this->__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VTBdesign___024unit__03a__03atransaction::__VnoInFunc_write_c_setup_constraint(VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03atransaction::__VnoInFunc_write_c_setup_constraint\n"); );
    // Body
    QData/*63:0*/ __Vdist_bucket0;
    __Vdist_bucket0 = 0;
    __Vdist_bucket0 = (1ULL + (1ULL & VL_RANDOM_Q()));
    this->__PVT__constraint.hard(((1ULL >= __Vdist_bucket0)
                                   ? "(__Vbv (= ((_ zero_extend 31) hwrite) #x00000001))"s
                                   : "(__Vbv (= ((_ zero_extend 31) hwrite) #x00000000))"s), "testbench.sv", 0x00000028U, 
                                 "        hwrite dist {1:/ 1, 0:/ 1};");
}

void VTBdesign___024unit__03a__03atransaction::__VnoInFunc_ulen_c_setup_constraint(VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03atransaction::__VnoInFunc_ulen_c_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard("(__Vbv (= ((_ zero_extend 27) ulen) #x00000005))"s, "testbench.sv", 0x0000002cU, 
                                 "        ulen == 5;");
}

void VTBdesign___024unit__03a__03atransaction::__VnoInFunc_burst_c_setup_constraint(VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03atransaction::__VnoInFunc_burst_c_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard("(__Vbv (= ((_ zero_extend 29) hburst) #x00000003))"s, "testbench.sv", 0x00000030U, 
                                 "        hburst == 3;");
}

void VTBdesign___024unit__03a__03atransaction::__VnoInFunc_addr_c_setup_constraint(VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03atransaction::__VnoInFunc_addr_c_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard("(__Vbv (= haddr #x0000000f))"s, "testbench.sv", 0x00000034U, 
                                 "        haddr == 15;");
}

void VTBdesign___024unit__03a__03atransaction::__VnoInFunc___Vsetup_constraints(VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03atransaction::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_write_c_setup_constraint(vlSymsp);
    this->__VnoInFunc_ulen_c_setup_constraint(vlSymsp);
    this->__VnoInFunc_burst_c_setup_constraint(vlSymsp);
    this->__VnoInFunc_addr_c_setup_constraint(vlSymsp);
}

void VTBdesign___024unit__03a__03atransaction::__VnoInFunc___VBasicRand(VTBdesign__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03atransaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__hwdata = VL_RANDOM_RNG_I(__Vm_rng);
    this->__PVT__hsize = (7U & VL_RANDOM_RNG_I(__Vm_rng));
}

void VTBdesign___024unit__03a__03atransaction::_ctor_var_reset(VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03atransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__ulen = 0;
    __PVT__haddr = 0;
    __PVT__hwdata = 0;
    __PVT__hsize = 0;
    __PVT__hburst = 0;
    __PVT__hresetn = 0;
    __PVT__hwrite = 0;
    __PVT__htrans = 0;
    __PVT__hresp = 0;
    __PVT__hready = 0;
    __PVT__hrdata = 0;
}

std::string VTBdesign___024unit__03a__03atransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03atransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string VTBdesign___024unit__03a__03atransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03atransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "ulen:" + VL_TO_STRING(__PVT__ulen);
    out += ", haddr:" + VL_TO_STRING(__PVT__haddr);
    out += ", hwdata:" + VL_TO_STRING(__PVT__hwdata);
    out += ", hsize:" + VL_TO_STRING(__PVT__hsize);
    out += ", hburst:" + VL_TO_STRING(__PVT__hburst);
    out += ", hresetn:" + VL_TO_STRING(__PVT__hresetn);
    out += ", hwrite:" + VL_TO_STRING(__PVT__hwrite);
    out += ", htrans:" + VL_TO_STRING(__PVT__htrans);
    out += ", hresp:" + VL_TO_STRING(__PVT__hresp);
    out += ", hready:" + VL_TO_STRING(__PVT__hready);
    out += ", hrdata:" + VL_TO_STRING(__PVT__hrdata);
    return (out);
}
