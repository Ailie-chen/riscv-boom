// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__62(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__62\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14149:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14162:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14165: Assertion failed in %NTestHarness.ram.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14165, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14173:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0) 
                                      | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14186:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0) 
                                      | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14189: Assertion failed in %NTestHarness.ram.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14189, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14197:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_10)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14210:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_10)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14213: Assertion failed in %NTestHarness.ram.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14213, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__63(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__63\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23749:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)) 
                                   | (0xffU == (0xffU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask)
                                                    : 
                                                   ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                       >> 1U)))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:312 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:23762:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)) 
                                   | (0xffU == (0xffU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask)
                                                    : 
                                                   ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                       >> 1U)))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:23765: Assertion failed in %NTestHarness.ram.fragmenter_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 23765, "");
        }
    }
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21287:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                      >> 2U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:309 assert (!repeater.io.full || !aHasData)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21299:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                      >> 2U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:21302: Assertion failed in %NTestHarness.ram.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 21302, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21310:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | (0xffU == (0xffU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                    : 
                                                   ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                       >> 1U)))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:312 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:21323:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | (0xffU == (0xffU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                    : 
                                                   ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                       >> 1U)))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:21326: Assertion failed in %NTestHarness.ram.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 21326, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__64(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__64\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp219[5];
    WData/*159:0*/ __Vtemp220[5];
    WData/*159:0*/ __Vtemp221[5];
    WData/*159:0*/ __Vtemp222[5];
    WData/*639:0*/ __Vtemp227[20];
    WData/*639:0*/ __Vtemp228[20];
    WData/*639:0*/ __Vtemp233[20];
    WData/*639:0*/ __Vtemp234[20];
    WData/*639:0*/ __Vtemp239[20];
    WData/*639:0*/ __Vtemp240[20];
    WData/*639:0*/ __Vtemp245[20];
    WData/*639:0*/ __Vtemp246[20];
    WData/*639:0*/ __Vtemp251[20];
    WData/*639:0*/ __Vtemp252[20];
    WData/*639:0*/ __Vtemp257[20];
    WData/*639:0*/ __Vtemp258[20];
    WData/*639:0*/ __Vtemp263[20];
    WData/*639:0*/ __Vtemp264[20];
    WData/*639:0*/ __Vtemp269[20];
    WData/*639:0*/ __Vtemp270[20];
    WData/*639:0*/ __Vtemp273[20];
    WData/*639:0*/ __Vtemp276[20];
    WData/*639:0*/ __Vtemp277[20];
    WData/*639:0*/ __Vtemp280[20];
    WData/*639:0*/ __Vtemp283[20];
    WData/*639:0*/ __Vtemp284[20];
    WData/*255:0*/ __Vtemp285[8];
    WData/*255:0*/ __Vtemp286[8];
    WData/*255:0*/ __Vtemp291[8];
    WData/*255:0*/ __Vtemp292[8];
    WData/*255:0*/ __Vtemp297[8];
    WData/*255:0*/ __Vtemp298[8];
    WData/*255:0*/ __Vtemp303[8];
    WData/*255:0*/ __Vtemp304[8];
    WData/*255:0*/ __Vtemp309[8];
    WData/*255:0*/ __Vtemp310[8];
    WData/*255:0*/ __Vtemp315[8];
    WData/*255:0*/ __Vtemp316[8];
    WData/*159:0*/ __Vtemp321[5];
    WData/*159:0*/ __Vtemp322[5];
    WData/*639:0*/ __Vtemp325[20];
    WData/*639:0*/ __Vtemp328[20];
    WData/*639:0*/ __Vtemp329[20];
    WData/*639:0*/ __Vtemp332[20];
    WData/*639:0*/ __Vtemp335[20];
    WData/*639:0*/ __Vtemp336[20];
    // Body
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14691:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14704:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14707: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14707, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14715:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14728:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14731: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14731, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14739:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14752:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14755: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14755, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14763:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14776:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14779: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14779, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14787:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14800:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14803: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14803, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14811:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14824:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14827: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14827, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14835:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14848:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14851: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14851, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14859:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14872:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14875: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14875, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14883:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14896:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14899: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14899, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14907:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14920:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14923: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14923, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14931:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14944:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14947: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14947, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14955:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14968:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14971: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14971, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14979:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:14992:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:14995: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 14995, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15003:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15016:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15019: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15019, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15027:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15040:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15043: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15043, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15051:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15064:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15067: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15067, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15075:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15088:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15091: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15091, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15099:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15112:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15115: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15115, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15123:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x3ffff000U 
                                       & (0x10000000U 
                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15136:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x3ffff000U 
                                       & (0x10000000U 
                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15139: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15139, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15147:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15160:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15163: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15163, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15171:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15184:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15187: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15187, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15195:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15208:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15211: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15211, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15219:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15232:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15235: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15235, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15243:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15256:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15259: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15259, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15267:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                                & (0U == (0x3ffff000U 
                                          & (0x10000000U 
                                             ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15280:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                                & (0U == (0x3ffff000U 
                                          & (0x10000000U 
                                             ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15283: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15283, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15291:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15304:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15307: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15307, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15315:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15328:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15331: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15331, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15339:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15352:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15355: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15355, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15363:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15376:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15379: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15379, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15387:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                                & (0U == (0x3ffff000U 
                                          & (0x10000000U 
                                             ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15400:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                                & (0U == (0x3ffff000U 
                                          & (0x10000000U 
                                             ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15403: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15403, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15411:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15424:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15427: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15427, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15435:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15448:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15451: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15451, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15459:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15472:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15475: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15475, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15483:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15496:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15499: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15499, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15507:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15520:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15523: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15523, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15531:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15544:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15547: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15547, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15555:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15568:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15571: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15571, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15579:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15592:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15595: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15595, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15603:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15616:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15619: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15619, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15627:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15640:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15643: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15643, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15651:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15664:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15667: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15667, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15675:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15688:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15691: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15691, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15699:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15712:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15715: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15715, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15723:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15736:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15739: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15739, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15747:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15760:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15763: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15763, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15771:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15784:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15787: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15787, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15795:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15808:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15811: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15811, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15819:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15832:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15835: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15835, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15843:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15856:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15859: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15859, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15867:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15880:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15883: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15883, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15891:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15904:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15907: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15907, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15915:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15928:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15931: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15931, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15939:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15952:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15955: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15955, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15963:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15976:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:15979: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 15979, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:15987:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16000:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16003: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16003, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16011:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16024:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16027: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16027, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16035:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16048:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16051: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16051, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16059:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16072:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16075: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16075, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16083:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16096:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16099: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16099, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16107:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16120:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16123: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16123, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16131:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16144:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16147: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16147, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16155:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16168:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16171: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16171, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16179:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16192:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16195: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16195, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16203:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16216:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16219: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16219, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16227:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16240:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16243: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16243, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16251:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16264:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16267: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16267, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16275:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16288:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16291: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16291, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16299:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16312:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16315: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16315, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16323:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16336:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16339: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16339, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16347:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16360:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16363: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16363, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16371:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16384:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16387: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16387, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16395:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16408:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16411: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16411, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16419:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16432:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16435: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16435, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16443:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16456:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16459: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16459, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16467:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16480:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16483: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16483, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16491:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16504:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16507: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16507, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16515:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16528:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16531: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16531, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16539:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16552:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16555: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16555, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16563:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16576:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16579: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16579, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16587:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16600:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16603: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16603, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16611:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16624:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16627: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16627, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16635:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16648:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16651: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16651, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16659:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16672:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16675: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16675, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16683:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16696:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16699: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16699, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16707:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16720:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16723: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16723, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16731:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16744:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16747: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16747, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16755:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16768:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16771: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16771, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16779:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16792:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16795: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16795, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16803:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16816:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16819: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16819, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16827:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16840:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16843: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16843, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16851:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16864:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16867: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16867, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16875:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16888:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16891: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16891, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16899:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16912:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16915: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16915, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16923:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp219, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp219[0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16936:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp220, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp220[0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16939: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16939, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16947:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp221, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((__Vtemp221[0U] | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16960:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp222, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((__Vtemp222[0U] | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16963: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16963, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16971:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16984:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16987: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16987, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16995:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17008:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17011: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17011, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17019:11
verbose&&done_reset        
    ) {
        __Vtemp227[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp227[1U] = 0U;
        __Vtemp227[2U] = 0U;
        __Vtemp227[3U] = 0U;
        __Vtemp227[4U] = 0U;
        __Vtemp227[5U] = 0U;
        __Vtemp227[6U] = 0U;
        __Vtemp227[7U] = 0U;
        __Vtemp227[8U] = 0U;
        __Vtemp227[9U] = 0U;
        __Vtemp227[0xaU] = 0U;
        __Vtemp227[0xbU] = 0U;
        __Vtemp227[0xcU] = 0U;
        __Vtemp227[0xdU] = 0U;
        __Vtemp227[0xeU] = 0U;
        __Vtemp227[0xfU] = 0U;
        __Vtemp227[0x10U] = 0U;
        __Vtemp227[0x11U] = 0U;
        __Vtemp227[0x12U] = 0U;
        __Vtemp227[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp228, __Vtemp227);
        __Vtemp233[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp233[1U] = 0U;
        __Vtemp233[2U] = 0U;
        __Vtemp233[3U] = 0U;
        __Vtemp233[4U] = 0U;
        __Vtemp233[5U] = 0U;
        __Vtemp233[6U] = 0U;
        __Vtemp233[7U] = 0U;
        __Vtemp233[8U] = 0U;
        __Vtemp233[9U] = 0U;
        __Vtemp233[0xaU] = 0U;
        __Vtemp233[0xbU] = 0U;
        __Vtemp233[0xcU] = 0U;
        __Vtemp233[0xdU] = 0U;
        __Vtemp233[0xeU] = 0U;
        __Vtemp233[0xfU] = 0U;
        __Vtemp233[0x10U] = 0U;
        __Vtemp233[0x11U] = 0U;
        __Vtemp233[0x12U] = 0U;
        __Vtemp233[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp234, __Vtemp233);
        __Vtemp239[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp239[1U] = 0U;
        __Vtemp239[2U] = 0U;
        __Vtemp239[3U] = 0U;
        __Vtemp239[4U] = 0U;
        __Vtemp239[5U] = 0U;
        __Vtemp239[6U] = 0U;
        __Vtemp239[7U] = 0U;
        __Vtemp239[8U] = 0U;
        __Vtemp239[9U] = 0U;
        __Vtemp239[0xaU] = 0U;
        __Vtemp239[0xbU] = 0U;
        __Vtemp239[0xcU] = 0U;
        __Vtemp239[0xdU] = 0U;
        __Vtemp239[0xeU] = 0U;
        __Vtemp239[0xfU] = 0U;
        __Vtemp239[0x10U] = 0U;
        __Vtemp239[0x11U] = 0U;
        __Vtemp239[0x12U] = 0U;
        __Vtemp239[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp240, __Vtemp239);
        __Vtemp245[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp245[1U] = 0U;
        __Vtemp245[2U] = 0U;
        __Vtemp245[3U] = 0U;
        __Vtemp245[4U] = 0U;
        __Vtemp245[5U] = 0U;
        __Vtemp245[6U] = 0U;
        __Vtemp245[7U] = 0U;
        __Vtemp245[8U] = 0U;
        __Vtemp245[9U] = 0U;
        __Vtemp245[0xaU] = 0U;
        __Vtemp245[0xbU] = 0U;
        __Vtemp245[0xcU] = 0U;
        __Vtemp245[0xdU] = 0U;
        __Vtemp245[0xeU] = 0U;
        __Vtemp245[0xfU] = 0U;
        __Vtemp245[0x10U] = 0U;
        __Vtemp245[0x11U] = 0U;
        __Vtemp245[0x12U] = 0U;
        __Vtemp245[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp246, __Vtemp245);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & __Vtemp228[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp234[0U]))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & 
                                               __Vtemp240[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp246[0U]))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17032:11
done_reset        
    ) {
        __Vtemp251[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp251[1U] = 0U;
        __Vtemp251[2U] = 0U;
        __Vtemp251[3U] = 0U;
        __Vtemp251[4U] = 0U;
        __Vtemp251[5U] = 0U;
        __Vtemp251[6U] = 0U;
        __Vtemp251[7U] = 0U;
        __Vtemp251[8U] = 0U;
        __Vtemp251[9U] = 0U;
        __Vtemp251[0xaU] = 0U;
        __Vtemp251[0xbU] = 0U;
        __Vtemp251[0xcU] = 0U;
        __Vtemp251[0xdU] = 0U;
        __Vtemp251[0xeU] = 0U;
        __Vtemp251[0xfU] = 0U;
        __Vtemp251[0x10U] = 0U;
        __Vtemp251[0x11U] = 0U;
        __Vtemp251[0x12U] = 0U;
        __Vtemp251[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp252, __Vtemp251);
        __Vtemp257[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp257[1U] = 0U;
        __Vtemp257[2U] = 0U;
        __Vtemp257[3U] = 0U;
        __Vtemp257[4U] = 0U;
        __Vtemp257[5U] = 0U;
        __Vtemp257[6U] = 0U;
        __Vtemp257[7U] = 0U;
        __Vtemp257[8U] = 0U;
        __Vtemp257[9U] = 0U;
        __Vtemp257[0xaU] = 0U;
        __Vtemp257[0xbU] = 0U;
        __Vtemp257[0xcU] = 0U;
        __Vtemp257[0xdU] = 0U;
        __Vtemp257[0xeU] = 0U;
        __Vtemp257[0xfU] = 0U;
        __Vtemp257[0x10U] = 0U;
        __Vtemp257[0x11U] = 0U;
        __Vtemp257[0x12U] = 0U;
        __Vtemp257[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp258, __Vtemp257);
        __Vtemp263[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp263[1U] = 0U;
        __Vtemp263[2U] = 0U;
        __Vtemp263[3U] = 0U;
        __Vtemp263[4U] = 0U;
        __Vtemp263[5U] = 0U;
        __Vtemp263[6U] = 0U;
        __Vtemp263[7U] = 0U;
        __Vtemp263[8U] = 0U;
        __Vtemp263[9U] = 0U;
        __Vtemp263[0xaU] = 0U;
        __Vtemp263[0xbU] = 0U;
        __Vtemp263[0xcU] = 0U;
        __Vtemp263[0xdU] = 0U;
        __Vtemp263[0xeU] = 0U;
        __Vtemp263[0xfU] = 0U;
        __Vtemp263[0x10U] = 0U;
        __Vtemp263[0x11U] = 0U;
        __Vtemp263[0x12U] = 0U;
        __Vtemp263[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp264, __Vtemp263);
        __Vtemp269[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp269[1U] = 0U;
        __Vtemp269[2U] = 0U;
        __Vtemp269[3U] = 0U;
        __Vtemp269[4U] = 0U;
        __Vtemp269[5U] = 0U;
        __Vtemp269[6U] = 0U;
        __Vtemp269[7U] = 0U;
        __Vtemp269[8U] = 0U;
        __Vtemp269[9U] = 0U;
        __Vtemp269[0xaU] = 0U;
        __Vtemp269[0xbU] = 0U;
        __Vtemp269[0xcU] = 0U;
        __Vtemp269[0xdU] = 0U;
        __Vtemp269[0xeU] = 0U;
        __Vtemp269[0xfU] = 0U;
        __Vtemp269[0x10U] = 0U;
        __Vtemp269[0x11U] = 0U;
        __Vtemp269[0x12U] = 0U;
        __Vtemp269[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp270, __Vtemp269);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & __Vtemp252[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp258[0U]))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & 
                                               __Vtemp264[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp270[0U]))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17035: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17035, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17043:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp273, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp276[0U] = (7U & (__Vtemp273[0U] >> 1U));
        __Vtemp276[1U] = 0U;
        __Vtemp276[2U] = 0U;
        __Vtemp276[3U] = 0U;
        __Vtemp276[4U] = 0U;
        __Vtemp276[5U] = 0U;
        __Vtemp276[6U] = 0U;
        __Vtemp276[7U] = 0U;
        __Vtemp276[8U] = 0U;
        __Vtemp276[9U] = 0U;
        __Vtemp276[0xaU] = 0U;
        __Vtemp276[0xbU] = 0U;
        __Vtemp276[0xcU] = 0U;
        __Vtemp276[0xdU] = 0U;
        __Vtemp276[0xeU] = 0U;
        __Vtemp276[0xfU] = 0U;
        __Vtemp276[0x10U] = 0U;
        __Vtemp276[0x11U] = 0U;
        __Vtemp276[0x12U] = 0U;
        __Vtemp276[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp277, __Vtemp276);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & __Vtemp277[0U])) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17056:11
done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp280, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp283[0U] = (7U & (__Vtemp280[0U] >> 1U));
        __Vtemp283[1U] = 0U;
        __Vtemp283[2U] = 0U;
        __Vtemp283[3U] = 0U;
        __Vtemp283[4U] = 0U;
        __Vtemp283[5U] = 0U;
        __Vtemp283[6U] = 0U;
        __Vtemp283[7U] = 0U;
        __Vtemp283[8U] = 0U;
        __Vtemp283[9U] = 0U;
        __Vtemp283[0xaU] = 0U;
        __Vtemp283[0xbU] = 0U;
        __Vtemp283[0xcU] = 0U;
        __Vtemp283[0xdU] = 0U;
        __Vtemp283[0xeU] = 0U;
        __Vtemp283[0xfU] = 0U;
        __Vtemp283[0x10U] = 0U;
        __Vtemp283[0x11U] = 0U;
        __Vtemp283[0x12U] = 0U;
        __Vtemp283[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp284, __Vtemp283);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & __Vtemp284[0U])) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17059: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17059, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17067:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17078:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17081: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17081, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17089:11
verbose&&done_reset        
    ) {
        __Vtemp285[0U] = 1U;
        __Vtemp285[1U] = 0U;
        __Vtemp285[2U] = 0U;
        __Vtemp285[3U] = 0U;
        __Vtemp285[4U] = 0U;
        __Vtemp285[5U] = 0U;
        __Vtemp285[6U] = 0U;
        __Vtemp285[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp286, __Vtemp285, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        __Vtemp291[0U] = 1U;
        __Vtemp291[1U] = 0U;
        __Vtemp291[2U] = 0U;
        __Vtemp291[3U] = 0U;
        __Vtemp291[4U] = 0U;
        __Vtemp291[5U] = 0U;
        __Vtemp291[6U] = 0U;
        __Vtemp291[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp292, __Vtemp291, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp297[0U] = 1U;
        __Vtemp297[1U] = 0U;
        __Vtemp297[2U] = 0U;
        __Vtemp297[3U] = 0U;
        __Vtemp297[4U] = 0U;
        __Vtemp297[5U] = 0U;
        __Vtemp297[6U] = 0U;
        __Vtemp297[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp298, __Vtemp297, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((1U & (~ (((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp286[0U]
                                                 : 0U) 
                                               ^ ((
                                                   ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp292[0U]
                                                   : 0U)) 
                                              | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp286[1U]
                                                   : 0U) 
                                                 ^ 
                                                 ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp292[1U]
                                                   : 0U))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 __Vtemp286[2U]
                                                  : 0U) 
                                                ^ (
                                                   (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp292[2U]
                                                    : 0U))) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp286[3U]
                                                 : 0U) 
                                               ^ ((
                                                   ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp292[3U]
                                                   : 0U))) 
                                           | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                ? __Vtemp286[4U]
                                                : 0U) 
                                              ^ (((
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                  ? 
                                                 __Vtemp292[4U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp298[0U]
                                                       : 0U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp298[1U]
                                                         : 0U)) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp298[2U]
                                                        : 0U)) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp298[3U]
                                                       : 0U)) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                      ? 
                                                     __Vtemp298[4U]
                                                      : 0U)))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17102:11
done_reset        
    ) {
        __Vtemp303[0U] = 1U;
        __Vtemp303[1U] = 0U;
        __Vtemp303[2U] = 0U;
        __Vtemp303[3U] = 0U;
        __Vtemp303[4U] = 0U;
        __Vtemp303[5U] = 0U;
        __Vtemp303[6U] = 0U;
        __Vtemp303[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp304, __Vtemp303, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        __Vtemp309[0U] = 1U;
        __Vtemp309[1U] = 0U;
        __Vtemp309[2U] = 0U;
        __Vtemp309[3U] = 0U;
        __Vtemp309[4U] = 0U;
        __Vtemp309[5U] = 0U;
        __Vtemp309[6U] = 0U;
        __Vtemp309[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp310, __Vtemp309, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp315[0U] = 1U;
        __Vtemp315[1U] = 0U;
        __Vtemp315[2U] = 0U;
        __Vtemp315[3U] = 0U;
        __Vtemp315[4U] = 0U;
        __Vtemp315[5U] = 0U;
        __Vtemp315[6U] = 0U;
        __Vtemp315[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp316, __Vtemp315, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((1U & (~ (((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp304[0U]
                                                 : 0U) 
                                               ^ ((
                                                   ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp310[0U]
                                                   : 0U)) 
                                              | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp304[1U]
                                                   : 0U) 
                                                 ^ 
                                                 ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp310[1U]
                                                   : 0U))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 __Vtemp304[2U]
                                                  : 0U) 
                                                ^ (
                                                   (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp310[2U]
                                                    : 0U))) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp304[3U]
                                                 : 0U) 
                                               ^ ((
                                                   ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp310[3U]
                                                   : 0U))) 
                                           | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                ? __Vtemp304[4U]
                                                : 0U) 
                                              ^ (((
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                  ? 
                                                 __Vtemp310[4U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp316[0U]
                                                       : 0U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp316[1U]
                                                         : 0U)) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp316[2U]
                                                        : 0U)) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp316[3U]
                                                       : 0U)) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                      ? 
                                                     __Vtemp316[4U]
                                                      : 0U)))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17105: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17105, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17113:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17126:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17129: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17129, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17137:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp321, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (__Vtemp321[0U] | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17150:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp322, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (__Vtemp322[0U] | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17153: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17153, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17161:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp325, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp328[0U] = (7U & (__Vtemp325[0U] >> 1U));
        __Vtemp328[1U] = 0U;
        __Vtemp328[2U] = 0U;
        __Vtemp328[3U] = 0U;
        __Vtemp328[4U] = 0U;
        __Vtemp328[5U] = 0U;
        __Vtemp328[6U] = 0U;
        __Vtemp328[7U] = 0U;
        __Vtemp328[8U] = 0U;
        __Vtemp328[9U] = 0U;
        __Vtemp328[0xaU] = 0U;
        __Vtemp328[0xbU] = 0U;
        __Vtemp328[0xcU] = 0U;
        __Vtemp328[0xdU] = 0U;
        __Vtemp328[0xeU] = 0U;
        __Vtemp328[0xfU] = 0U;
        __Vtemp328[0x10U] = 0U;
        __Vtemp328[0x11U] = 0U;
        __Vtemp328[0x12U] = 0U;
        __Vtemp328[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp329, __Vtemp328);
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & __Vtemp329[0U])) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17174:11
done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp332, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp335[0U] = (7U & (__Vtemp332[0U] >> 1U));
        __Vtemp335[1U] = 0U;
        __Vtemp335[2U] = 0U;
        __Vtemp335[3U] = 0U;
        __Vtemp335[4U] = 0U;
        __Vtemp335[5U] = 0U;
        __Vtemp335[6U] = 0U;
        __Vtemp335[7U] = 0U;
        __Vtemp335[8U] = 0U;
        __Vtemp335[9U] = 0U;
        __Vtemp335[0xaU] = 0U;
        __Vtemp335[0xbU] = 0U;
        __Vtemp335[0xcU] = 0U;
        __Vtemp335[0xdU] = 0U;
        __Vtemp335[0xeU] = 0U;
        __Vtemp335[0xfU] = 0U;
        __Vtemp335[0x10U] = 0U;
        __Vtemp335[0x11U] = 0U;
        __Vtemp335[0x12U] = 0U;
        __Vtemp335[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp336, __Vtemp335);
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & __Vtemp336[0U])) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17177: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17177, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17185:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17198:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17201: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17201, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__65(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__65\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp337[5];
    WData/*159:0*/ __Vtemp338[5];
    WData/*159:0*/ __Vtemp339[5];
    WData/*159:0*/ __Vtemp340[5];
    WData/*639:0*/ __Vtemp345[20];
    WData/*639:0*/ __Vtemp346[20];
    WData/*639:0*/ __Vtemp351[20];
    WData/*639:0*/ __Vtemp352[20];
    WData/*639:0*/ __Vtemp357[20];
    WData/*639:0*/ __Vtemp358[20];
    WData/*639:0*/ __Vtemp363[20];
    WData/*639:0*/ __Vtemp364[20];
    WData/*639:0*/ __Vtemp369[20];
    WData/*639:0*/ __Vtemp370[20];
    WData/*639:0*/ __Vtemp375[20];
    WData/*639:0*/ __Vtemp376[20];
    WData/*639:0*/ __Vtemp381[20];
    WData/*639:0*/ __Vtemp382[20];
    WData/*639:0*/ __Vtemp387[20];
    WData/*639:0*/ __Vtemp388[20];
    WData/*639:0*/ __Vtemp391[20];
    WData/*639:0*/ __Vtemp394[20];
    WData/*639:0*/ __Vtemp395[20];
    WData/*639:0*/ __Vtemp398[20];
    WData/*639:0*/ __Vtemp401[20];
    WData/*639:0*/ __Vtemp402[20];
    // Body
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9146:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9159:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9162: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9162, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9170:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9183:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9186: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9186, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9194:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9207:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9210: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9210, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9218:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9231:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9234: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9234, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9242:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9255:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9258: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9258, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9266:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9279:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9282: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9282, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9290:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9303:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9306: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9306, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9314:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9327:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9330: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9330, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9338:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9351:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9354: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9354, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9362:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9375:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9378: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9378, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9386:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9399:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9402: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9402, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9410:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9423:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9426: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9426, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9434:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9447:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9450: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9450, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9458:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9471:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9474: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9474, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9482:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9495:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9498: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9498, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9506:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9519:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9522: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9522, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9530:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9543:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9546: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9546, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9554:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9567:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9570: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9570, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9578:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x70000U & (0x20000U 
                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9591:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x70000U & (0x20000U 
                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9594: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9594, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9602:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9615:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9618: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9618, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9626:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9639:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9642: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9642, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9650:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9663:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9666: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9666, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9674:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9687:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9690: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9690, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9698:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9711:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9714: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9714, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9722:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9735:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9738: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9738, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9746:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9759:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9762: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9762, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9770:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9783:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9786: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9786, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9794:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9807:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9810: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9810, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9818:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9831:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9834: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9834, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9842:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9855:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9858: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9858, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9866:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9879:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9882: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9882, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9890:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9903:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9906: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9906, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9914:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9927:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9930: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9930, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9938:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9951:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9954: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9954, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9962:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9975:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:9978: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 9978, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9986:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:9999:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10002: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10002, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10010:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10023:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10026: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10026, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10034:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10047:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10050: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10050, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10058:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10071:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10074: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10074, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10082:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10095:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10098: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10098, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10106:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10119:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10122: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10122, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10130:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10143:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10146: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10146, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10154:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10167:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10170: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10170, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10178:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10191:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10194: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10194, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10202:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10215:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10218: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10218, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10226:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10239:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10242: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10242, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10250:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10263:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10266: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10266, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10274:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10287:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                              : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0x12U)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10290: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10290, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10298:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10311:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10314: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10314, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10322:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10335:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                       >> 9U))) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10338: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10338, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10346:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10359:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10362: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10362, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10370:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10383:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10386: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10386, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10394:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                        : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x12U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10407:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                        : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x12U))) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10410: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10410, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10418:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10431:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10434: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10434, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10442:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10455:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10458: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10458, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10466:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10479:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10482: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10482, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10490:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10503:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10506: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10506, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10514:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10527:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10530: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10530, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10538:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp337, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp337[0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10551:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp338, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp338[0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10554: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10554, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10562:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp339, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                         & (~ ((__Vtemp339[0U] | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10575:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp340, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                         & (~ ((__Vtemp340[0U] | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10578: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10578, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10586:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                          & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))) 
                         & (~ (((1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                         ? 4U : ((6U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                                  ? 4U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30)))) 
                                | (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                           ? 4U : (
                                                   (6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                                    ? 5U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10599:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                          & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))) 
                         & (~ (((1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                         ? 4U : ((6U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                                  ? 4U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30)))) 
                                | (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                           ? 4U : (
                                                   (6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                                    ? 5U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10602: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10602, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10610:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                          & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                                == (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10623:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                          & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                                == (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10626: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10626, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10634:11
verbose&&done_reset        
    ) {
        __Vtemp345[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp345[1U] = 0U;
        __Vtemp345[2U] = 0U;
        __Vtemp345[3U] = 0U;
        __Vtemp345[4U] = 0U;
        __Vtemp345[5U] = 0U;
        __Vtemp345[6U] = 0U;
        __Vtemp345[7U] = 0U;
        __Vtemp345[8U] = 0U;
        __Vtemp345[9U] = 0U;
        __Vtemp345[0xaU] = 0U;
        __Vtemp345[0xbU] = 0U;
        __Vtemp345[0xcU] = 0U;
        __Vtemp345[0xdU] = 0U;
        __Vtemp345[0xeU] = 0U;
        __Vtemp345[0xfU] = 0U;
        __Vtemp345[0x10U] = 0U;
        __Vtemp345[0x11U] = 0U;
        __Vtemp345[0x12U] = 0U;
        __Vtemp345[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp346, __Vtemp345);
        __Vtemp351[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp351[1U] = 0U;
        __Vtemp351[2U] = 0U;
        __Vtemp351[3U] = 0U;
        __Vtemp351[4U] = 0U;
        __Vtemp351[5U] = 0U;
        __Vtemp351[6U] = 0U;
        __Vtemp351[7U] = 0U;
        __Vtemp351[8U] = 0U;
        __Vtemp351[9U] = 0U;
        __Vtemp351[0xaU] = 0U;
        __Vtemp351[0xbU] = 0U;
        __Vtemp351[0xcU] = 0U;
        __Vtemp351[0xdU] = 0U;
        __Vtemp351[0xeU] = 0U;
        __Vtemp351[0xfU] = 0U;
        __Vtemp351[0x10U] = 0U;
        __Vtemp351[0x11U] = 0U;
        __Vtemp351[0x12U] = 0U;
        __Vtemp351[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp352, __Vtemp351);
        __Vtemp357[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp357[1U] = 0U;
        __Vtemp357[2U] = 0U;
        __Vtemp357[3U] = 0U;
        __Vtemp357[4U] = 0U;
        __Vtemp357[5U] = 0U;
        __Vtemp357[6U] = 0U;
        __Vtemp357[7U] = 0U;
        __Vtemp357[8U] = 0U;
        __Vtemp357[9U] = 0U;
        __Vtemp357[0xaU] = 0U;
        __Vtemp357[0xbU] = 0U;
        __Vtemp357[0xcU] = 0U;
        __Vtemp357[0xdU] = 0U;
        __Vtemp357[0xeU] = 0U;
        __Vtemp357[0xfU] = 0U;
        __Vtemp357[0x10U] = 0U;
        __Vtemp357[0x11U] = 0U;
        __Vtemp357[0x12U] = 0U;
        __Vtemp357[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp358, __Vtemp357);
        __Vtemp363[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp363[1U] = 0U;
        __Vtemp363[2U] = 0U;
        __Vtemp363[3U] = 0U;
        __Vtemp363[4U] = 0U;
        __Vtemp363[5U] = 0U;
        __Vtemp363[6U] = 0U;
        __Vtemp363[7U] = 0U;
        __Vtemp363[8U] = 0U;
        __Vtemp363[9U] = 0U;
        __Vtemp363[0xaU] = 0U;
        __Vtemp363[0xbU] = 0U;
        __Vtemp363[0xcU] = 0U;
        __Vtemp363[0xdU] = 0U;
        __Vtemp363[0xeU] = 0U;
        __Vtemp363[0xfU] = 0U;
        __Vtemp363[0x10U] = 0U;
        __Vtemp363[0x11U] = 0U;
        __Vtemp363[0x12U] = 0U;
        __Vtemp363[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp364, __Vtemp363);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                         & (~ (((1U == ((7U == (7U 
                                                & __Vtemp346[0U]))
                                         ? 4U : ((6U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp352[0U]))
                                                  ? 4U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46)))) 
                                | (1U == ((7U == (7U 
                                                  & __Vtemp358[0U]))
                                           ? 4U : (
                                                   (6U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp364[0U]))
                                                    ? 5U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10647:11
done_reset        
    ) {
        __Vtemp369[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp369[1U] = 0U;
        __Vtemp369[2U] = 0U;
        __Vtemp369[3U] = 0U;
        __Vtemp369[4U] = 0U;
        __Vtemp369[5U] = 0U;
        __Vtemp369[6U] = 0U;
        __Vtemp369[7U] = 0U;
        __Vtemp369[8U] = 0U;
        __Vtemp369[9U] = 0U;
        __Vtemp369[0xaU] = 0U;
        __Vtemp369[0xbU] = 0U;
        __Vtemp369[0xcU] = 0U;
        __Vtemp369[0xdU] = 0U;
        __Vtemp369[0xeU] = 0U;
        __Vtemp369[0xfU] = 0U;
        __Vtemp369[0x10U] = 0U;
        __Vtemp369[0x11U] = 0U;
        __Vtemp369[0x12U] = 0U;
        __Vtemp369[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp370, __Vtemp369);
        __Vtemp375[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp375[1U] = 0U;
        __Vtemp375[2U] = 0U;
        __Vtemp375[3U] = 0U;
        __Vtemp375[4U] = 0U;
        __Vtemp375[5U] = 0U;
        __Vtemp375[6U] = 0U;
        __Vtemp375[7U] = 0U;
        __Vtemp375[8U] = 0U;
        __Vtemp375[9U] = 0U;
        __Vtemp375[0xaU] = 0U;
        __Vtemp375[0xbU] = 0U;
        __Vtemp375[0xcU] = 0U;
        __Vtemp375[0xdU] = 0U;
        __Vtemp375[0xeU] = 0U;
        __Vtemp375[0xfU] = 0U;
        __Vtemp375[0x10U] = 0U;
        __Vtemp375[0x11U] = 0U;
        __Vtemp375[0x12U] = 0U;
        __Vtemp375[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp376, __Vtemp375);
        __Vtemp381[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp381[1U] = 0U;
        __Vtemp381[2U] = 0U;
        __Vtemp381[3U] = 0U;
        __Vtemp381[4U] = 0U;
        __Vtemp381[5U] = 0U;
        __Vtemp381[6U] = 0U;
        __Vtemp381[7U] = 0U;
        __Vtemp381[8U] = 0U;
        __Vtemp381[9U] = 0U;
        __Vtemp381[0xaU] = 0U;
        __Vtemp381[0xbU] = 0U;
        __Vtemp381[0xcU] = 0U;
        __Vtemp381[0xdU] = 0U;
        __Vtemp381[0xeU] = 0U;
        __Vtemp381[0xfU] = 0U;
        __Vtemp381[0x10U] = 0U;
        __Vtemp381[0x11U] = 0U;
        __Vtemp381[0x12U] = 0U;
        __Vtemp381[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp382, __Vtemp381);
        __Vtemp387[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp387[1U] = 0U;
        __Vtemp387[2U] = 0U;
        __Vtemp387[3U] = 0U;
        __Vtemp387[4U] = 0U;
        __Vtemp387[5U] = 0U;
        __Vtemp387[6U] = 0U;
        __Vtemp387[7U] = 0U;
        __Vtemp387[8U] = 0U;
        __Vtemp387[9U] = 0U;
        __Vtemp387[0xaU] = 0U;
        __Vtemp387[0xbU] = 0U;
        __Vtemp387[0xcU] = 0U;
        __Vtemp387[0xdU] = 0U;
        __Vtemp387[0xeU] = 0U;
        __Vtemp387[0xfU] = 0U;
        __Vtemp387[0x10U] = 0U;
        __Vtemp387[0x11U] = 0U;
        __Vtemp387[0x12U] = 0U;
        __Vtemp387[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp388, __Vtemp387);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                         & (~ (((1U == ((7U == (7U 
                                                & __Vtemp370[0U]))
                                         ? 4U : ((6U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp376[0U]))
                                                  ? 4U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46)))) 
                                | (1U == ((7U == (7U 
                                                  & __Vtemp382[0U]))
                                           ? 4U : (
                                                   (6U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp388[0U]))
                                                    ? 5U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10650: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10650, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10658:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp391, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp394[0U] = (7U & (__Vtemp391[0U] >> 1U));
        __Vtemp394[1U] = 0U;
        __Vtemp394[2U] = 0U;
        __Vtemp394[3U] = 0U;
        __Vtemp394[4U] = 0U;
        __Vtemp394[5U] = 0U;
        __Vtemp394[6U] = 0U;
        __Vtemp394[7U] = 0U;
        __Vtemp394[8U] = 0U;
        __Vtemp394[9U] = 0U;
        __Vtemp394[0xaU] = 0U;
        __Vtemp394[0xbU] = 0U;
        __Vtemp394[0xcU] = 0U;
        __Vtemp394[0xdU] = 0U;
        __Vtemp394[0xeU] = 0U;
        __Vtemp394[0xfU] = 0U;
        __Vtemp394[0x10U] = 0U;
        __Vtemp394[0x11U] = 0U;
        __Vtemp394[0x12U] = 0U;
        __Vtemp394[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp395, __Vtemp394);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                                == (0xfU & __Vtemp395[0U])) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10671:11
done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp398, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp401[0U] = (7U & (__Vtemp398[0U] >> 1U));
        __Vtemp401[1U] = 0U;
        __Vtemp401[2U] = 0U;
        __Vtemp401[3U] = 0U;
        __Vtemp401[4U] = 0U;
        __Vtemp401[5U] = 0U;
        __Vtemp401[6U] = 0U;
        __Vtemp401[7U] = 0U;
        __Vtemp401[8U] = 0U;
        __Vtemp401[9U] = 0U;
        __Vtemp401[0xaU] = 0U;
        __Vtemp401[0xbU] = 0U;
        __Vtemp401[0xcU] = 0U;
        __Vtemp401[0xdU] = 0U;
        __Vtemp401[0xeU] = 0U;
        __Vtemp401[0xfU] = 0U;
        __Vtemp401[0x10U] = 0U;
        __Vtemp401[0x11U] = 0U;
        __Vtemp401[0x12U] = 0U;
        __Vtemp401[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp402, __Vtemp401);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                                == (0xfU & __Vtemp402[0U])) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10674: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10674, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10682:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid)) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10693:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid)) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10696: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10696, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10704:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:10717:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:10720: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 10720, "");
        }
    }
}
