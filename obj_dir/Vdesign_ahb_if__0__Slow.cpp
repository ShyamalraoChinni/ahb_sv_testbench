// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign__pch.h"

VL_ATTR_COLD void Vdesign_ahb_if___ctor_var_reset(Vdesign_ahb_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdesign_ahb_if___ctor_var_reset\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->haddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12263725033127726492ull);
    vlSelf->hwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15974558908393846636ull);
    vlSelf->hsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13337831221127798427ull);
    vlSelf->hburst = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16823989240147571910ull);
    vlSelf->htrans = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3816127232406589304ull);
    vlSelf->hrdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4024985590701316990ull);
    vlSelf->hresetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1848032851870041445ull);
    vlSelf->hsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18441103942418128492ull);
    vlSelf->hwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4441666546300344621ull);
    vlSelf->hready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13603802984551299885ull);
    vlSelf->next_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13961921028534178996ull);
}
