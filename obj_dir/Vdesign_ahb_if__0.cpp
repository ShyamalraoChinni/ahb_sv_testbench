// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign__pch.h"

std::string VL_TO_STRING(const Vdesign_ahb_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdesign_ahb_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
