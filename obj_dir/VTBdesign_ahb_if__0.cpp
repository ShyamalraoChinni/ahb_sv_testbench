// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTBdesign.h for the primary calling header

#include "VTBdesign__pch.h"

std::string VL_TO_STRING(const VTBdesign_ahb_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTBdesign_ahb_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
