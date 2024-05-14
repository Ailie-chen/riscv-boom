// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3421(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3421\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347377:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347390:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347393: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347393, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347401:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347414:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347417: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347417, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347425:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347438:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347441: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347441, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347449:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347462:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347465: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347465, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347473:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347486:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347489: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347489, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347497:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347510:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347513: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347513, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347521:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347534:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347537: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347537, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347545:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347558:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347561: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347561, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347569:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347582:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347585: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347585, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347593:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347606:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347609: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347609, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347617:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347630:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347633: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347633, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347641:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347654:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347657: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347657, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347665:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347678:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347681: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347681, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347689:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347702:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347705: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347705, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347713:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347726:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347729: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347729, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347737:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347750:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347753: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347753, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347761:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347774:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347777: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347777, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347785:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347798:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347801: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347801, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347809:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                & ((0U == (0x1fff0000U 
                                           & (0x20000U 
                                              ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))) 
                                   | (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347822:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                & ((0U == (0x1fff0000U 
                                           & (0x20000U 
                                              ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))) 
                                   | (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347825: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347825, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347833:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347846:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347849: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347849, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347857:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347870:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347873: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347873, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347881:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347894:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347897: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347897, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347905:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347918:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347921: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347921, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347929:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347942:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347945: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347945, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347953:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                                & ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347966:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                                & ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347969: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347969, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347977:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:347990:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:347993: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 347993, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348001:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348014:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348017: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348017, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348025:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348038:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348041: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348041, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348049:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348062:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348065: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348065, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348073:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                                & ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348086:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                                & ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348089: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348089, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348097:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348110:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348113: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348113, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348121:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348134:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348137: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348137, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348145:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348158:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348161: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348161, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348169:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__mask)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348182:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__mask)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348185: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348185, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348193:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348206:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348209: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348209, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348217:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348230:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348233: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348233, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348241:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348254:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348257: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348257, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348265:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348278:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348281: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348281, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348289:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348302:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348305: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348305, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348313:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348326:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348329: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348329, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348337:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348350:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348353: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348353, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348361:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348374:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348377: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348377, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348385:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348398:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348401: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348401, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348409:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348422:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348425: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348425, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348433:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348446:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348449: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348449, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348457:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348470:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348473: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348473, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348481:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348494:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348497: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348497, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348505:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348518:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348521: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348521, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348529:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348542:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348545: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348545, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348553:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348566:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348569: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348569, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348577:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348590:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348593: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348593, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348601:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348614:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348617: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348617, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348625:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348638:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348641: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348641, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348649:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348662:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348665: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348665, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348673:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348686:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348689: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348689, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348697:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348710:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348713: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348713, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348721:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348734:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348737: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348737, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348745:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348758:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348761: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348761, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348769:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348782:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348785: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348785, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348793:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348806:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348809: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348809, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348817:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348830:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348833: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348833, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348841:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348854:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348857: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348857, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348865:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348878:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348881: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348881, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348889:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348902:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348905: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348905, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348913:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348926:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348929: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348929, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348937:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348950:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348953: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348953, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348961:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348974:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:348977: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 348977, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348985:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:348998:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349001: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349001, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349009:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349022:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349025: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349025, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349033:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349046:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349049: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349049, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349057:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349070:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349073: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349073, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349081:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349094:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349097: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349097, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349105:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349118:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349121: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349121, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349129:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349142:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349145: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349145, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349153:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349166:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349169: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349169, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349177:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349190:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349193: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349193, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349201:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349214:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349217: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349217, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349225:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349238:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349241: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349241, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349249:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349262:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349265: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349265, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349273:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349286:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349289: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349289, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349297:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349310:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349313: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349313, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349321:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349334:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349337: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349337, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349345:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__opcode)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349358:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__opcode)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349361: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349361, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349369:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349382:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349385: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349385, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349393:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__size)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349406:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__size)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349409: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349409, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349417:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349430:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349433: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349433, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349441:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0x1fffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address) 
                                == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__address) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349454:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0x1fffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address) 
                                == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__address) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349457: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349457, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349465:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__opcode_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349478:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__opcode_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349481: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349481, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349489:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__param_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349502:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__param_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349505: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349505, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349513:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__size_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349526:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__size_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349529: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349529, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349537:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__source_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349550:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__source_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349553: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349553, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349561:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__sink)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349574:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__sink)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349577: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349577, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349585:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__denied)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349598:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__denied)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349601: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349601, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349609:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__inflight) 
                                             >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349622:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__inflight) 
                                             >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349625: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349625, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349633:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__inflight) 
                                           >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349646:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__inflight) 
                                           >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349649: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349649, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349657:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___GEN_30))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349670:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___GEN_30))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349673: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349673, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349681:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349694:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349697: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349697, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349705:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___GEN_46))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349718:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT___GEN_46))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349721: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349721, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349729:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                          << 2U))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
                                                            >> 
                                                            ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                             << 2U)))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349742:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                          << 2U))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
                                                            >> 
                                                            ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                             << 2U)))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349745: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349745, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349753:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_d_ready)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349764:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_d_ready)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349767: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349767, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349775:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (0x3ffU & ((IData)(1U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                      : 0U) != ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                 ? 
                                                (0x3ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                                 : 0U)) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                                   : 0U))))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349788:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (0x3ffU & ((IData)(1U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                      : 0U) != ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                 ? 
                                                (0x3ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                                 : 0U)) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                                   : 0U))))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349791: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349791, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349799:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__inflight)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349812:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__inflight)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349815: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349815, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349823:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__inflight_1) 
                                          >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349836:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__inflight_1) 
                                          >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349839: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349839, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349847:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                          << 2U))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 
                                                            >> 
                                                            ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                             << 2U)))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349860:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                          << 2U))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 
                                                            >> 
                                                            ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                             << 2U)))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349863: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349863, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349871:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__inflight_1)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:349884:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__inflight_1)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:349887: Assertion failed in %NTestHarness.chiptop.system.domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 349887, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3422(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3422\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119560:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119573:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119576: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119576, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119584:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119597:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119600: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119600, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119608:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119621:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119624: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119624, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119632:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119645:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119648: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119648, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119656:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119669:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119672: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119672, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119680:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119693:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119696: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119696, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119704:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119717:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119720: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119720, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119728:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119741:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119744: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119744, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119752:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119765:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119768: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119768, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119776:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119789:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119792: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119792, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119800:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119813:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119816: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119816, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119824:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119837:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119840: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119840, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119848:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119861:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119864: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119864, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119872:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119885:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119888: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119888, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119896:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119909:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119912: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119912, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119920:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119933:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119936: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119936, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119944:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119957:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119960: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119960, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119968:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119981:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:119984: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 119984, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:119992:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                & ((0U == (0x1fff0000U 
                                           & (0x20000U 
                                              ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))) 
                                   | (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120005:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                & ((0U == (0x1fff0000U 
                                           & (0x20000U 
                                              ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))) 
                                   | (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120008: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120008, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120016:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120029:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120032: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120032, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120040:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120053:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120056: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120056, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120064:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120077:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120080: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120080, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120088:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120101:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120104: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120104, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120112:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120125:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120128: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120128, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120136:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                                & ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120149:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                                & ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120152: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120152, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120160:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120173:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120176: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120176, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120184:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120197:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120200: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120200, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120208:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120221:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120224: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120224, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120232:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120245:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120248: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120248, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120256:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                                & ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120269:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                                & ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120272: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120272, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120280:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120293:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120296: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120296, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120304:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120317:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120320: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120320, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120328:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120341:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120344: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120344, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120352:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120365:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120368: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120368, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120376:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120389:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120392: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120392, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120400:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120413:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120416: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120416, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120424:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120437:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120440: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120440, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120448:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120461:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120464: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120464, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120472:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120485:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120488: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120488, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120496:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120509:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120512: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120512, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120520:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120533:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120536: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120536, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120544:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120557:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120560: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120560, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120568:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120581:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120584: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120584, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120592:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120605:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120608: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120608, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120616:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120629:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120632: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120632, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120640:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120653:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120656: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120656, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120664:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120677:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120680: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120680, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120688:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120701:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120704: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120704, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120712:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120725:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120728: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120728, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120736:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120749:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                                    & ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120752: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120752, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120760:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120773:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120776: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120776, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120784:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120797:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120800: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120800, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120808:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120821:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120824: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120824, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120832:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120845:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120848: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120848, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120856:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120869:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120872: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120872, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120880:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120893:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120896: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120896, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120904:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120917:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120920: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120920, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120928:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120941:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120944: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120944, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120952:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120965:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120968: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120968, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120976:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:120989:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:120992: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 120992, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121000:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121013:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121016: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121016, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121024:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121037:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121040: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121040, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121048:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121061:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121064: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121064, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121072:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121085:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121088: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121088, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121096:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121109:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121112: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121112, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121120:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121133:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121136: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121136, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121144:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121157:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121160: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121160, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121168:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121181:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121184: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121184, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121192:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121205:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121208: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121208, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121216:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121229:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121232: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121232, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121240:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121253:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121256: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121256, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121264:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121277:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121280: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121280, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121288:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121301:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121304: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121304, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121312:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121325:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121328: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121328, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121336:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121349:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121352: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121352, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121360:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121373:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121376: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121376, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121384:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121397:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121400: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121400, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121408:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121421:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121424: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121424, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121432:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121445:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121448: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121448, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121456:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121469:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121472: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121472, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121480:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121493:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121496: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121496, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121504:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121517:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121520: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121520, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121528:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__opcode)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121541:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__opcode)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121544: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121544, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121552:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121565:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121568: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121568, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121576:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__size)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121589:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__size)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121592: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121592, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121600:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121613:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121616: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121616, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121624:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                         & (~ (((0x1fffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address) 
                                == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__address) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121637:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                         & (~ (((0x1fffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address) 
                                == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__address) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121640: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121640, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121648:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__opcode_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121661:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__opcode_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121664: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121664, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121672:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__param_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121685:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__param_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121688: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121688, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121696:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__size_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121709:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__size_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121712: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121712, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121720:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__source_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121733:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__source_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121736: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121736, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121744:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__sink)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121757:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__sink)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121760: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121760, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121768:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__denied)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121781:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__denied)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121784: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121784, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121792:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight) 
                                             >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121805:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight) 
                                             >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121808: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121808, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121816:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight) 
                                           >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121829:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight) 
                                           >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121832: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121832, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121840:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_30))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121853:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_30))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121856: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121856, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121864:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121877:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121880: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121880, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121888:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_46))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121901:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & (IData)(
                                                          (VL_ULL(7) 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_46))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121904: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121904, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121912:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                          << 2U))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes 
                                                            >> 
                                                            ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                             << 2U)))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121925:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                          << 2U))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes 
                                                            >> 
                                                            ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                             << 2U)))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121928: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121928, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121936:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_d_ready)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121947:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_d_ready)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121950: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121950, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121958:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                                      ? (0x3ffU & ((IData)(1U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                      : 0U) != ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                 ? 
                                                (0x3ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                                 : 0U)) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                                   : 0U))))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121971:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                                      ? (0x3ffU & ((IData)(1U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                      : 0U) != ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                 ? 
                                                (0x3ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                                 : 0U)) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                                   : 0U))))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121974: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121974, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121982:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:121995:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:121998: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 121998, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:122006:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_1) 
                                          >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:122019:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_1) 
                                          >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:122022: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 122022, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:122030:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                          << 2U))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes_1 
                                                            >> 
                                                            ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                             << 2U)))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:122043:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & (IData)(
                                                   (VL_ULL(0x7fffffffff) 
                                                    & (((0x27U 
                                                         >= 
                                                         ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                          << 2U))
                                                         ? 
                                                        (VL_ULL(0xf) 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes_1 
                                                            >> 
                                                            ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                             << 2U)))
                                                         : VL_ULL(0)) 
                                                       >> 1U))))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:122046: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 122046, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:122054:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_1)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:122067:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_1)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:122070: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 122070, "");
        }
    }
}
