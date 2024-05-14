// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__66(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__66\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21705:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21718:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:21721: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 21721, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21729:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21742:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:21745: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 21745, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21753:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21766:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:21769: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 21769, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21777:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21790:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:21793: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 21793, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21801:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21814:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:21817: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 21817, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21825:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21838:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:21841: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 21841, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21849:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21862:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:21865: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 21865, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21873:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21886:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:21889: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 21889, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21897:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21910:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:21913: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 21913, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21921:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21934:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:21937: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 21937, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21945:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21958:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:21961: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 21961, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21969:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21982:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:21985: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 21985, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21993:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22006:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22009: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22009, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22017:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22030:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22033: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22033, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22041:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22054:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22057: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22057, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22065:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22078:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22081: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22081, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22089:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22102:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22105: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22105, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22113:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22126:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22129: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22129, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22137:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((6U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              >> 0xeU))) 
                                & (0U == (0x30000U 
                                          & (0x20000U 
                                             ^ ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 << 0x16U) 
                                                | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22150:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((6U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              >> 0xeU))) 
                                & (0U == (0x30000U 
                                          & (0x20000U 
                                             ^ ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 << 0x16U) 
                                                | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22153: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22153, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22161:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22174:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22177: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22177, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22185:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22198:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22201: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22201, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22209:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22222:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22225: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22225, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22233:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22246:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22249: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22249, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22257:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22270:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22273: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22273, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22281:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22294:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22297: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22297, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22305:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22318:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22321: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22321, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22329:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22342:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22345: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22345, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22353:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22366:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22369: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22369, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22377:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22390:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22393: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22393, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22401:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22414:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22417: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22417, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22425:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22438:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22441: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22441, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22449:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22462:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22465: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22465, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22473:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22486:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22489: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22489, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22497:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                    >> 1U)) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22510:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                    >> 1U)) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22513: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22513, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22521:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22534:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22537: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22537, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22545:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22558:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22561: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22561, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22569:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22582:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22585: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22585, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22593:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22606:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22609: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22609, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22617:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22630:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22633: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22633, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22641:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22654:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22657: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22657, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22665:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22678:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22681: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22681, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22689:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22702:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22705: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22705, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22713:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22726:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22729: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22729, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22737:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22750:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22753: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22753, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22761:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22774:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22777: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22777, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22785:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22798:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22801: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22801, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22809:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22822:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22825: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22825, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22833:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22846:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22849: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22849, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22857:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22870:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22873: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22873, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22881:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22894:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22897: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22897, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22905:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                         & (~ ((9U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22918:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                         & (~ ((9U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22921: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22921, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22929:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x15U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22942:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x15U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22945: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22945, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22953:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22966:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22969: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22969, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22977:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xeU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:22990:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xeU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:22993: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 22993, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23001:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23014:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:23017: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 23017, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23025:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0x3ffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0x16U) 
                                             | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU))) 
                                == vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23038:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0x3ffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0x16U) 
                                             | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU))) 
                                == vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:23041: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 23041, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23049:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23062:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:23065: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 23065, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23073:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                         >> 4U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23086:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                         >> 4U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:23089: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 23089, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23097:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight) 
                                             >> (0xfU 
                                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 0xaU))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23110:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight) 
                                             >> (0xfU 
                                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 0xaU))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:23113: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 23113, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23121:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                         & (~ (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight) 
                                           >> (0xfU 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU)) 
                                      == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                  >> 4U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23134:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                         & (~ (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight) 
                                           >> (0xfU 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU)) 
                                      == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                  >> 4U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:23137: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 23137, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23145:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                            >> 4U))))) 
                         & (~ (((1U == ((7U == (7U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                         ? 4U : ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                      >> 0x15U)))
                                                  ? 4U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_30)))) 
                                | (1U == ((7U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 0x15U)))
                                           ? 4U : (
                                                   (6U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0x15U)))
                                                    ? 5U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23158:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                            >> 4U))))) 
                         & (~ (((1U == ((7U == (7U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                         ? 4U : ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                      >> 0x15U)))
                                                  ? 4U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_30)))) 
                                | (1U == ((7U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 0x15U)))
                                           ? 4U : (
                                                   (6U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0x15U)))
                                                    ? 5U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:23161: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 23161, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23169:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                            >> 4U))))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xeU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23182:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                            >> 4U))))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xeU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:23185: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 23185, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23193:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                               >> 4U)))))) 
                         & (~ (((1U == ((7U == (7U 
                                                & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                         ? 4U : ((6U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (VL_ULL(7) 
                                                              & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                 >> 1U)))))
                                                  ? 4U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_46)))) 
                                | (1U == ((7U == (7U 
                                                  & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (
                                                   (6U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (VL_ULL(7) 
                                                                & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                   >> 1U)))))
                                                    ? 5U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23206:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                               >> 4U)))))) 
                         & (~ (((1U == ((7U == (7U 
                                                & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                         ? 4U : ((6U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (VL_ULL(7) 
                                                              & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                 >> 1U)))))
                                                  ? 4U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_46)))) 
                                | (1U == ((7U == (7U 
                                                  & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (
                                                   (6U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (VL_ULL(7) 
                                                                & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                   >> 1U)))))
                                                    ? 5U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:23209: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 23209, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23217:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                               >> 4U)))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         (0x3cU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                             >> 2U)))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_sizes 
                                                            >> 
                                                            (0x3cU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                                >> 2U))))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23230:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                               >> 4U)))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         (0x3cU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                             >> 2U)))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_sizes 
                                                            >> 
                                                            (0x3cU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                                >> 2U))))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:23233: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 23233, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23241:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid)) 
                          & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0xaU)) == 
                             (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                      >> 4U)))) & (~ 
                                                   (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready)) 
                                                     | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_enq_ready)) 
                                                    | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23252:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid)) 
                          & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0xaU)) == 
                             (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                      >> 4U)))) & (~ 
                                                   (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready)) 
                                                     | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_enq_ready)) 
                                                    | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:23255: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 23255, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23263:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23276:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:23279: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 23279, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__67(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__67\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11324:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11337:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11340: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11340, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11348:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11361:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11364: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11364, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11372:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11385:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11388: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11388, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11396:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11409:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11412: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11412, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11420:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11433:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11436: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11436, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11444:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11457:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11460: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11460, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11468:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11481:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11484: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11484, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11492:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11505:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11508: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11508, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11516:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11529:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11532: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11532, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11540:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11553:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11556: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11556, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11564:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11577:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11580: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11580, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11588:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11601:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11604: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11604, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11612:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11625:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11628: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11628, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11636:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11649:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11652: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11652, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11660:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11673:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11676: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11676, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11684:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11697:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11700: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11700, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11708:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11721:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11724: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11724, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11732:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11745:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11748: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11748, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11756:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((6U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              >> 0xeU))) 
                                & ((0U == (0x1fff0000U 
                                           & (0x20000U 
                                              ^ ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU))))) 
                                   | (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xaU))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11769:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((6U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              >> 0xeU))) 
                                & ((0U == (0x1fff0000U 
                                           & (0x20000U 
                                              ^ ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU))))) 
                                   | (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xaU))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11772: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11772, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11780:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11793:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11796: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11796, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11804:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11817:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11820: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11820, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11828:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11841:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11844: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11844, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11852:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11865:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11868: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11868, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11876:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11889:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11892: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11892, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11900:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11913:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11916: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11916, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11924:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11937:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11940: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11940, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11948:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11961:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11964: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11964, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11972:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11985:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:11988: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 11988, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:11996:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12009:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12012: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12012, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12020:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12033:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12036: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12036, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12044:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12057:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12060: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12060, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12068:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12081:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12084: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12084, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12092:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12105:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12108: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12108, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12116:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                    >> 1U)) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12129:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((0U == (0xffU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                    >> 1U)) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12132: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12132, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12140:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12153:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12156: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12156, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12164:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12177:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12180: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12180, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12188:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12201:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12204: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12204, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12212:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12225:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12228: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12228, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12236:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12249:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12252: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12252, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12260:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12273:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12276: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12276, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12284:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12297:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12300: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12300, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12308:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12321:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12324: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12324, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12332:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12345:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12348: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12348, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12356:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12369:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12372: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12372, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12380:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12393:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12396: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12396, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12404:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12417:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12420: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12420, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12428:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12441:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12444: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12444, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12452:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12465:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12468: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12468, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12476:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12489:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ (((0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                             >> 1U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12492: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12492, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12500:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12513:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x15U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 9U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12516: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12516, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12524:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12537:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12540: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12540, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12548:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12561:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12564: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12564, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12572:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12585:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12588: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12588, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12596:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12609:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12612: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12612, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12620:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12633:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12636: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12636, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12644:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12657:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12660: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12660, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12668:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12681:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12684: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12684, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12692:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12705:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12708: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12708, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12716:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12729:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12732: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12732, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12740:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12753:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12756: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12756, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12764:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12777:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12780: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12780, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12788:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12801:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12804: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12804, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12812:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12825:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12828: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12828, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12836:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12849:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12852: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12852, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12860:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12873:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12876: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12876, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12884:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12897:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12900: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12900, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12908:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12921:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12924: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12924, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12932:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12945:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12948: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12948, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12956:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12969:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12972: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12972, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12980:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:12993:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:12996: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 12996, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13004:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13017:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13020: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13020, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13028:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13041:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13044: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13044, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13052:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13065:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13068: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13068, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13076:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13089:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13092: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13092, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13100:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13113:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13116: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13116, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13124:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13137:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13140: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13140, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13148:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13161:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13164: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13164, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13172:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13185:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13188: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13188, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13196:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13209:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13212: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13212, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13220:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13233:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13236: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13236, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13244:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13257:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13260: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13260, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13268:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13281:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13284: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13284, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13292:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x15U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13305:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x15U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13308: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13308, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13316:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13329:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13332: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13332, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13340:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xeU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13353:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xeU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13356: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13356, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13364:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13377:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13380: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13380, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13388:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0x1fffffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 << 0x16U) 
                                                | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU))) 
                                == vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13401:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0x1fffffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 << 0x16U) 
                                                | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU))) 
                                == vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13404: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13404, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13412:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13425:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13428: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13428, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13436:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13449:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13452: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13452, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13460:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13473:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13476: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13476, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13484:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13497:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13500: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13500, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13508:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_sink) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13521:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_sink) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13524: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13524, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13532:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13545:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13548: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13548, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13556:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight) 
                                             >> (0xfU 
                                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 0xaU))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13569:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight) 
                                             >> (0xfU 
                                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 0xaU))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13572: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13572, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13580:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight) 
                                           >> (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU)) 
                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13593:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight) 
                                           >> (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU)) 
                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13596: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13596, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13604:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                                 == ((7U == (7U & (
                                                   vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                                   == ((7U == (7U & 
                                               (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U)))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 0x15U)))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13617:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                                 == ((7U == (7U & (
                                                   vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                                   == ((7U == (7U & 
                                               (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U)))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 0x15U)))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13620: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13620, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13628:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xeU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13641:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                         & (~ (((7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xeU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13644: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13644, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13652:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                                 == ((7U == (7U & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                                   == ((7U == (7U & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13665:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                                 == ((7U == (7U & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                                   == ((7U == (7U & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13668: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13668, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13676:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                          << 2U))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes 
                                                            >> 
                                                            ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                             << 2U)))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13689:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                          << 2U))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes 
                                                            >> 
                                                            ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                             << 2U)))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13692: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13692, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13700:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid)) 
                           & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xaU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_a_ready)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13711:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid)) 
                           & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xaU)) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_a_ready)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13714: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13714, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13722:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13735:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13738: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13738, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13746:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_1) 
                                          >> (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13759:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_1) 
                                          >> (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13762: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13762, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13770:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                          << 2U))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1 
                                                            >> 
                                                            ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                             << 2U)))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13783:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                          << 2U))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1 
                                                            >> 
                                                            ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                             << 2U)))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13786: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13786, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13794:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_1)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:13807:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_1)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:13810: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 13810, "");
        }
    }
}
