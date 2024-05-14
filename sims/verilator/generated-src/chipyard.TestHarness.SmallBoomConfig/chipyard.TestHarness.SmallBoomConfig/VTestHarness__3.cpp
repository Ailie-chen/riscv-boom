// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__68(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__68\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18249:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18262:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18265: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18265, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18273:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18286:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18289: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18289, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18297:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18310:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18313: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18313, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18321:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18334:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18337: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18337, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18345:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18358:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18361: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18361, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18369:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18382:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18385: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18385, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18393:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18406:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18409: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18409, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18417:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18430:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18433: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18433, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18441:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18454:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18457: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18457, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18465:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18478:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18481: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18481, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18489:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18502:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18505: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18505, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18513:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18526:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18529: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18529, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18537:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18550:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18553: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18553, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18561:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18574:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18577: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18577, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18585:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18598:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18601: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18601, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18609:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18622:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18625: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18625, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18633:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18646:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18649: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18649, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18657:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18670:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18673: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18673, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18681:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((6U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              >> 0xeU))) 
                                & (0U == (0x1ffff000U 
                                          & (0x10000000U 
                                             ^ ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 << 0x16U) 
                                                | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18694:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((6U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              >> 0xeU))) 
                                & (0U == (0x1ffff000U 
                                          & (0x10000000U 
                                             ^ ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 << 0x16U) 
                                                | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18697: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18697, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18705:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18718:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18721: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18721, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18729:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18742:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18745: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18745, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18753:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18766:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18769: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18769, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18777:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18790:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18793: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18793, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18801:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18814:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18817: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18817, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18825:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0xaU))) 
                                & ((6U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xeU))) 
                                   & (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xaU))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18838:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0xaU))) 
                                & ((6U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xeU))) 
                                   & (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xaU))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18841: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18841, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18849:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18862:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18865: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18865, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18873:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18886:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18889: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18889, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18897:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18910:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18913: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18913, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18921:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18934:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18937: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18937, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18945:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0xaU))) 
                                & ((6U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xeU))) 
                                   & (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xaU))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18958:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0xaU))) 
                                & ((6U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xeU))) 
                                   & (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xaU))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18961: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18961, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18969:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18982:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:18985: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 18985, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:18993:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19006:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19009: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19009, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19017:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19030:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19033: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19033, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19041:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                    >> 1U)) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19054:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                    >> 1U)) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19057: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19057, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19065:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19078:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19081: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19081, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19089:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19102:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19105: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19105, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19113:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19126:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19129: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19129, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19137:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19150:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19153: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19153, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19161:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19174:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19177: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19177, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19185:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19198:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19201: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19201, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19209:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19222:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19225: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19225, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19233:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19246:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19249: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19249, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19257:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19270:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19273: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19273, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19281:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19294:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19297: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19297, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19305:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19318:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19321: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19321, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19329:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19342:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19345: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19345, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19353:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19366:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xeU)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19369: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19369, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19377:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19390:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19393: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19393, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19401:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19414:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19417: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19417, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19425:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19438:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19441: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19441, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19449:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19462:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19465: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19465, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19473:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19486:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19489: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19489, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19497:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19510:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19513: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19513, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19521:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19534:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19537: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19537, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19545:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19558:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19561: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19561, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19569:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19582:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19585: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19585, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19593:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19606:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19609: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19609, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19617:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19630:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19633: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19633, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19641:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19654:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19657: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19657, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19665:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19678:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19681: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19681, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19689:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19702:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19705: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19705, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19713:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19726:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19729: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19729, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19737:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19750:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19753: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19753, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19761:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19774:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19777: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19777, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19785:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19798:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19801: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19801, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19809:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19822:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19825: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19825, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19833:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19846:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19849: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19849, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19857:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19870:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19873: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19873, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19881:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19894:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19897: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19897, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19905:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19918:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19921: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19921, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19929:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19942:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19945: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19945, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19953:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19966:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19969: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19969, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19977:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:19990:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:19993: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 19993, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20001:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20014:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20017: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20017, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20025:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20038:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20041: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20041, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20049:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20062:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20065: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20065, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20073:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20086:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20089: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20089, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20097:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20110:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20113: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20113, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20121:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20134:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20137: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20137, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20145:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20158:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20161: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20161, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20169:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20182:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20185: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20185, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20193:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20206:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20209: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20209, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20217:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x15U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20230:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x15U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20233: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20233, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20241:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20254:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20257: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20257, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20265:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xeU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20278:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xeU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20281: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20281, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20289:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20302:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20305: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20305, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20313:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0x1fffffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 << 0x16U) 
                                                | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU))) 
                                == vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20326:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0x1fffffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 << 0x16U) 
                                                | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU))) 
                                == vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20329: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20329, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20337:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20350:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20353: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20353, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20361:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20374:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20377: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20377, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20385:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20398:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20401: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20401, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20409:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                         >> 4U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20422:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                         >> 4U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20425: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20425, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20433:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20446:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20449: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20449, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20457:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20470:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20473: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20473, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20481:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                                             >> (0xfU 
                                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 0xaU))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20494:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                                             >> (0xfU 
                                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 0xaU))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20497: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20497, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20505:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                                           >> (0xfU 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  >> 4U)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU)) 
                                      == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  >> 4U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20518:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                                           >> (0xfU 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  >> 4U)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU)) 
                                      == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  >> 4U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20521: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20521, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20529:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            >> 4U))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & (
                                                   vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & 
                                               (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U)))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 0x15U)))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20542:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            >> 4U))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & (
                                                   vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & 
                                               (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U)))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 0x15U)))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20545: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20545, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20553:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            >> 4U))))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xeU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20566:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            >> 4U))))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xeU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20569: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20569, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20577:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U)))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20590:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U)))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20593: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20593, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20601:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U)))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         (0x3cU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                             >> 2U)))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes 
                                                            >> 
                                                            (0x3cU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                                >> 2U))))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20614:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               >> 4U)))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         (0x3cU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                             >> 2U)))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes 
                                                            >> 
                                                            (0x3cU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                                >> 2U))))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20617: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20617, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20625:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid)) 
                           & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xaU)) == 
                              (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                       >> 4U)))) & 
                          (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_d_ready)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_enq_ready)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20636:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid)) 
                           & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xaU)) == 
                              (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                       >> 4U)))) & 
                          (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_d_ready)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_enq_ready)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20639: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20639, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20647:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (0x3ffU & ((IData)(1U) 
                                                   << 
                                                   (0xfU 
                                                    & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xaU))))
                                      : 0U) != ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                 ? 
                                                (0x3ffU 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                        >> 4U))))
                                                 : 0U)) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                          >> 0xaU))))
                                                   : 0U))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20660:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (0x3ffU & ((IData)(1U) 
                                                   << 
                                                   (0xfU 
                                                    & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xaU))))
                                      : 0U) != ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                 ? 
                                                (0x3ffU 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                        >> 4U))))
                                                 : 0U)) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                          >> 0xaU))))
                                                   : 0U))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20663: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20663, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20671:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20684:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20687: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20687, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20695:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_1) 
                                          >> (0xfU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 4U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20708:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_1) 
                                          >> (0xfU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 4U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20711: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20711, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20719:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         (0x3cU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                             >> 2U)))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1 
                                                            >> 
                                                            (0x3cU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                                >> 2U))))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20732:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         (0x3cU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                             >> 2U)))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1 
                                                            >> 
                                                            (0x3cU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                                >> 2U))))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20735: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20735, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20743:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_1)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:20756:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_1)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:20759: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 20759, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__69(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__69\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:2949:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                                & ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_89))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:2962:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                                & ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_89))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:2965: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 2965, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:2973:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:2986:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:2989: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 2989, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:2997:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3010:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3013: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3013, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3021:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3034:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3037: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3037, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3045:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3058:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3061: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3061, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3069:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3082:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3085: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3085, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3093:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3106:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3109: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3109, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3117:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3130:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3133: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3133, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3141:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                                & ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_89))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3154:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                                & ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_89))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3157: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3157, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3165:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3178:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3181: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3181, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3189:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3202:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3205: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3205, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3213:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3226:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3229: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3229, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3237:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3250:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3253: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3253, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3261:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3274:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3277: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3277, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3285:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3298:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3301: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3301, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3309:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3322:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3325: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3325, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3333:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3346:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3349: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3349, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3357:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3370:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3373: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3373, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3381:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_398) 
                                | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & ((((((((((VL_ULL(0) 
                                               == (VL_ULL(0x1ffffb000) 
                                                   & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                              | (VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x10000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1ffff0000) 
                                                 & (QData)((IData)(
                                                                   (0x20000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fc000000) 
                                                & (QData)((IData)(
                                                                  (0xc000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x10000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fffff000) 
                                              & (QData)((IData)(
                                                                (0x54000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1f0000000) 
                                             & (QData)((IData)(
                                                               (0x80000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3394:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_398) 
                                | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & ((((((((((VL_ULL(0) 
                                               == (VL_ULL(0x1ffffb000) 
                                                   & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                              | (VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x10000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1ffff0000) 
                                                 & (QData)((IData)(
                                                                   (0x20000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fc000000) 
                                                & (QData)((IData)(
                                                                  (0xc000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x10000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fffff000) 
                                              & (QData)((IData)(
                                                                (0x54000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1f0000000) 
                                             & (QData)((IData)(
                                                               (0x80000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3397: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3397, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3405:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3418:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3421: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3421, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3429:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3442:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3445: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3445, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3453:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3466:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3469: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3469, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3477:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3490:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3493: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3493, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3501:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3514:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3517: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3517, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3525:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_398) 
                                   | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                      & ((((((((VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1ffffb000) 
                                                 & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                               | (VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                              | (VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fc000000) 
                                                   & (QData)((IData)(
                                                                     (0xc000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x10000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x54000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1f0000000) 
                                                & (QData)((IData)(
                                                                  (0x80000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3538:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_398) 
                                   | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                      & ((((((((VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1ffffb000) 
                                                 & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                               | (VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                              | (VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fc000000) 
                                                   & (QData)((IData)(
                                                                     (0xc000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x10000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x54000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1f0000000) 
                                                & (QData)((IData)(
                                                                  (0x80000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3541: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3541, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3549:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3562:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3565: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3565, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3573:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3586:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3589: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3589, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3597:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3610:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3613: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3613, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3621:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3634:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3637: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3637, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3645:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_398) 
                                   | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                      & ((((((((VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1ffffb000) 
                                                 & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                               | (VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                              | (VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fc000000) 
                                                   & (QData)((IData)(
                                                                     (0xc000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x10000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x54000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1f0000000) 
                                                & (QData)((IData)(
                                                                  (0x80000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3658:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_398) 
                                   | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                      & ((((((((VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1ffffb000) 
                                                 & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                               | (VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                              | (VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fc000000) 
                                                   & (QData)((IData)(
                                                                     (0xc000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x10000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x54000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1f0000000) 
                                                & (QData)((IData)(
                                                                  (0x80000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3661: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3661, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3669:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3682:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3685: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3685, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3693:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3706:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3709: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3709, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3717:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3730:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3733: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3733, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3741:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                       [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1] 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3754:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                       [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1] 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3757: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3757, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3765:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                                & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (((((((((VL_ULL(0) 
                                              == (VL_ULL(0x1ffffb000) 
                                                  & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x3000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fc000000) 
                                                & (QData)((IData)(
                                                                  (0xc000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x10000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fffff000) 
                                              & (QData)((IData)(
                                                                (0x54000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1f0000000) 
                                             & (QData)((IData)(
                                                               (0x80000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3778:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                                & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (((((((((VL_ULL(0) 
                                              == (VL_ULL(0x1ffffb000) 
                                                  & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x3000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fc000000) 
                                                & (QData)((IData)(
                                                                  (0xc000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x10000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fffff000) 
                                              & (QData)((IData)(
                                                                (0x54000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1f0000000) 
                                             & (QData)((IData)(
                                                               (0x80000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3781: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3781, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3789:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3802:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3805: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3805, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3813:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3826:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3829: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3829, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3837:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3850:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3853: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3853, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3861:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3874:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3877: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3877, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3885:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                                & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (((((((((VL_ULL(0) 
                                              == (VL_ULL(0x1ffffb000) 
                                                  & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x3000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fc000000) 
                                                & (QData)((IData)(
                                                                  (0xc000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x10000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fffff000) 
                                              & (QData)((IData)(
                                                                (0x54000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1f0000000) 
                                             & (QData)((IData)(
                                                               (0x80000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3898:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                                & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (((((((((VL_ULL(0) 
                                              == (VL_ULL(0x1ffffb000) 
                                                  & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x3000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fc000000) 
                                                & (QData)((IData)(
                                                                  (0xc000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x10000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fffff000) 
                                              & (QData)((IData)(
                                                                (0x54000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1f0000000) 
                                             & (QData)((IData)(
                                                               (0x80000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3901: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3901, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3909:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3922:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3925: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3925, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3933:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3946:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3949: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3949, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3957:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3970:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3973: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3973, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3981:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:3994:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:3997: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 3997, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4005:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_398) 
                                   | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_89)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4018:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_398) 
                                   | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_89)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4021: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4021, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4029:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4042:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4045: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4045, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4053:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4066:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4069: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4069, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4077:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4090:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4093: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4093, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4101:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4114:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4117: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4117, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4125:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4138:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4141: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4141, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4149:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                         & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x15U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4162:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                         & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x15U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4165: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4165, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4173:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xaU)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4186:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xaU)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4189: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4189, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4197:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4210:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4213: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4213, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4221:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4234:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4237: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4237, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4245:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4258:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4261: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4261, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4269:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 1U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4282:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 1U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4285: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4285, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4293:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xaU)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4306:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xaU)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4309: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4309, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4317:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4330:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4333: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4333, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4341:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4354:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4357: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4357, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4365:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4378:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4381: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4381, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4389:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4402:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4405: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4405, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4413:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xaU)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4426:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xaU)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4429: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4429, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4437:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4450:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4453: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4453, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4461:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4474:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4477: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4477, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4485:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4498:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4501: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4501, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4509:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                    >> 1U)) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                               >> 9U)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4522:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                    >> 1U)) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                               >> 9U)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4525: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4525, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4533:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xaU)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4546:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xaU)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4549: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4549, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4557:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4570:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4573: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4573, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4581:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4594:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4597: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4597, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4605:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xaU)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4618:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xaU)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4621: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4621, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4629:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4642:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4645: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4645, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4653:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                    >> 1U)) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                               >> 9U)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4666:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                    >> 1U)) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                               >> 9U)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4669: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4669, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4677:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xaU)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4690:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xaU)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4693: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4693, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4701:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4714:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4717: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4717, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4725:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4738:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4741: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4741, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4749:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4762:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4765: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4765, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4773:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4786:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4789: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4789, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4797:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4810:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4813: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4813, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4821:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4834:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4837: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4837, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4845:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                == vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4858:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                == vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4861: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4861, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4869:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x15U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4882:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x15U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4885: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4885, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4893:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4906:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4909: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4909, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4917:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xeU)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4930:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xeU)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4933: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4933, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4941:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xaU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4954:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xaU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4957: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4957, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4965:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((7U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                        << 0x1eU) | 
                                       (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                        >> 2U))) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4978:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((7U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                        << 0x1eU) | 
                                       (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                        >> 2U))) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:4981: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 4981, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:4989:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 1U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5002:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 1U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:5005: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 5005, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5013:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight) 
                                   >> (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5026:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight) 
                                   >> (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:5029: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 5029, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5037:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight) 
                                 >> (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0xaU))) 
                                | (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                      == (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0xaU))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5050:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight) 
                                 >> (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0xaU))) 
                                | (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                      == (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0xaU))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:5053: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 5053, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5061:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x15U)))) 
                          & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0xaU))))) 
                         & (~ ((((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x15U)) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_30)))) 
                                | ((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5074:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x15U)))) 
                          & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0xaU))))) 
                         & (~ ((((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x15U)) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_30)))) 
                                | ((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:5077: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 5077, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5085:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x15U)))) 
                          & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0xaU))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5098:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x15U)))) 
                          & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0xaU))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:5101: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 5101, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5109:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x15U)))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xaU)))))) 
                         & (~ ((((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x15U)) 
                                 == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                   >> 1U)))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                   >> 1U)))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_46)))) 
                                | ((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)) 
                                   == ((7U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                >> 1U)))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5122:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x15U)))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xaU)))))) 
                         & (~ ((((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x15U)) 
                                 == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                   >> 1U)))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                   >> 1U)))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_46)))) 
                                | ((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)) 
                                   == ((7U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                >> 1U)))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:5125: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 5125, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5133:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x15U)))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xaU)))))) 
                         & (~ (((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xeU)) 
                                == (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes) 
                                              >> (8U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 7U))) 
                                             >> 1U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5146:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x15U)))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xaU)))))) 
                         & (~ (((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xeU)) 
                                == (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes) 
                                              >> (8U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 7U))) 
                                             >> 1U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:5149: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 5149, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5157:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty))) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                              == (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0xaU)))) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_4_ready)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5168:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty))) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                              == (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0xaU)))) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_4_ready)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:5171: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 5171, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5179:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                      : 0U) != ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0x15U))))
                                                 ? 
                                                (1U 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (1U 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0xaU))))
                                                 : 0U)) 
                                   | (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                          ? (3U & ((IData)(1U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                          : 0U))) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 6 (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5192:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                      : 0U) != ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0x15U))))
                                                 ? 
                                                (1U 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (1U 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0xaU))))
                                                 : 0U)) 
                                   | (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                          ? (3U & ((IData)(1U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                          : 0U))) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:5195: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 5195, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5203:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight)) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5216:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight)) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:5219: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 5219, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5227:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5240:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:5243: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 5243, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5251:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xeU)) 
                                == (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes_1) 
                                              >> (8U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 7U))) 
                                             >> 1U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:5264:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xeU)) 
                                == (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes_1) 
                                              >> (8U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 7U))) 
                                             >> 1U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:5267: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 5267, "");
        }
    }
}
