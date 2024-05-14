// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//==========

void VTestHarness::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTestHarness::eval\n"); );
    VTestHarness__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 27549, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VTestHarness::_eval_initial_loop(VTestHarness__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 27549, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__58(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__58\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:27971:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((2U <= vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"*** FAILED *** (exit code = %10#)\n",
                       32,(0x7fffffffU & (vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit 
                                          >> 1U)));
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:27982:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U <= vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:27985: Assertion failed in %NTestHarness\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 27985, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__59(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__59\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__60(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__60\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp117[5];
    WData/*159:0*/ __Vtemp118[5];
    WData/*159:0*/ __Vtemp119[5];
    WData/*159:0*/ __Vtemp120[5];
    WData/*639:0*/ __Vtemp125[20];
    WData/*639:0*/ __Vtemp126[20];
    WData/*639:0*/ __Vtemp131[20];
    WData/*639:0*/ __Vtemp132[20];
    WData/*639:0*/ __Vtemp137[20];
    WData/*639:0*/ __Vtemp138[20];
    WData/*639:0*/ __Vtemp143[20];
    WData/*639:0*/ __Vtemp144[20];
    WData/*639:0*/ __Vtemp149[20];
    WData/*639:0*/ __Vtemp150[20];
    WData/*639:0*/ __Vtemp155[20];
    WData/*639:0*/ __Vtemp156[20];
    WData/*639:0*/ __Vtemp161[20];
    WData/*639:0*/ __Vtemp162[20];
    WData/*639:0*/ __Vtemp167[20];
    WData/*639:0*/ __Vtemp168[20];
    WData/*639:0*/ __Vtemp171[20];
    WData/*639:0*/ __Vtemp174[20];
    WData/*639:0*/ __Vtemp175[20];
    WData/*639:0*/ __Vtemp178[20];
    WData/*639:0*/ __Vtemp181[20];
    WData/*639:0*/ __Vtemp182[20];
    WData/*255:0*/ __Vtemp183[8];
    WData/*255:0*/ __Vtemp184[8];
    WData/*255:0*/ __Vtemp189[8];
    WData/*255:0*/ __Vtemp190[8];
    WData/*255:0*/ __Vtemp195[8];
    WData/*255:0*/ __Vtemp196[8];
    WData/*255:0*/ __Vtemp201[8];
    WData/*255:0*/ __Vtemp202[8];
    WData/*255:0*/ __Vtemp207[8];
    WData/*255:0*/ __Vtemp208[8];
    WData/*255:0*/ __Vtemp213[8];
    WData/*255:0*/ __Vtemp214[8];
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1;
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6451:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6464:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6467: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6467, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6475:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6488:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6491: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6491, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6499:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6512:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6515: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6515, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6523:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6536:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6539: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6539, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6547:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6560:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6563: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6563, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6571:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6584:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6587: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6587, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6595:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6608:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6611: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6611, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6619:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6632:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6635: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6635, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6643:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6656:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6659: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6659, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6667:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6680:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6683: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6683, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6691:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6704:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6707: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6707, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6715:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6728:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6731: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6731, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6739:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6752:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6755: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6755, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6763:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6776:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6779: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6779, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6787:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6800:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6803: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6803, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6811:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6824:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6827: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6827, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6835:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6848:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6851: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6851, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6859:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6872:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6875: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6875, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6883:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0x3ffff000U 
                                       & (0x10000000U 
                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6896:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0x3ffff000U 
                                       & (0x10000000U 
                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6899: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6899, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6907:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6920:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6923: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6923, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6931:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6944:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6947: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6947, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6955:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6968:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6971: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6971, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6979:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:6992:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:6995: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 6995, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7003:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7016:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7019: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7019, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7027:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                & (0U == (0x3ffff000U 
                                          & (0x10000000U 
                                             ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7040:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                & (0U == (0x3ffff000U 
                                          & (0x10000000U 
                                             ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7043: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7043, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7051:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7064:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7067: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7067, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7075:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7088:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7091: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7091, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7099:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7112:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7115: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7115, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7123:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7136:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7139: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7139, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7147:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                & (0U == (0x3ffff000U 
                                          & (0x10000000U 
                                             ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7160:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                & (0U == (0x3ffff000U 
                                          & (0x10000000U 
                                             ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7163: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7163, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7171:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7184:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7187: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7187, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7195:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7208:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7211: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7211, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7219:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7232:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7235: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7235, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7243:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7256:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7259: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7259, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7267:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7280:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7283: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7283, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7291:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7304:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7307: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7307, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7315:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7328:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7331: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7331, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7339:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((4U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7352:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((4U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7355: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7355, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7363:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7376:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7379: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7379, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7387:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7400:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7403: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7403, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7411:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7424:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7427: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7427, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7435:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7448:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7451: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7451, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7459:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7472:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7475: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7475, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7483:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7496:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7499: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7499, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7507:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7520:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7523: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7523, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7531:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7544:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7547: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7547, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7555:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7568:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7571: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7571, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7579:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((1U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7592:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((1U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7595: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7595, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7603:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7616:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7619: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7619, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7627:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7640:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7643: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7643, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7867:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7880:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7883: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7883, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7891:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read)) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7904:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read)) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7907: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7907, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7939:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7952:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7955: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7955, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7963:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7976:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:7979: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 7979, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:7987:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8000:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8003: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8003, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8011:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8024:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8027: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8027, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8035:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                == vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8048:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                == vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8051: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8051, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8059:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8072:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8075: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8075, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8083:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8096:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8099: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8099, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8107:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8120:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8123: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8123, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8131:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp117, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp117[0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8144:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp118, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp118[0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8147: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8147, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8155:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp119, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                         & (~ ((__Vtemp119[0U] | ((
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8168:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp120, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                         & (~ ((__Vtemp120[0U] | ((
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8171: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8171, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8179:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                          & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8192:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                          & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8195: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8195, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8203:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                          & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8216:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                          & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8219: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8219, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8227:11
verbose&&done_reset        
    ) {
        __Vtemp125[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp125[1U] = 0U;
        __Vtemp125[2U] = 0U;
        __Vtemp125[3U] = 0U;
        __Vtemp125[4U] = 0U;
        __Vtemp125[5U] = 0U;
        __Vtemp125[6U] = 0U;
        __Vtemp125[7U] = 0U;
        __Vtemp125[8U] = 0U;
        __Vtemp125[9U] = 0U;
        __Vtemp125[0xaU] = 0U;
        __Vtemp125[0xbU] = 0U;
        __Vtemp125[0xcU] = 0U;
        __Vtemp125[0xdU] = 0U;
        __Vtemp125[0xeU] = 0U;
        __Vtemp125[0xfU] = 0U;
        __Vtemp125[0x10U] = 0U;
        __Vtemp125[0x11U] = 0U;
        __Vtemp125[0x12U] = 0U;
        __Vtemp125[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp126, __Vtemp125);
        __Vtemp131[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp131[1U] = 0U;
        __Vtemp131[2U] = 0U;
        __Vtemp131[3U] = 0U;
        __Vtemp131[4U] = 0U;
        __Vtemp131[5U] = 0U;
        __Vtemp131[6U] = 0U;
        __Vtemp131[7U] = 0U;
        __Vtemp131[8U] = 0U;
        __Vtemp131[9U] = 0U;
        __Vtemp131[0xaU] = 0U;
        __Vtemp131[0xbU] = 0U;
        __Vtemp131[0xcU] = 0U;
        __Vtemp131[0xdU] = 0U;
        __Vtemp131[0xeU] = 0U;
        __Vtemp131[0xfU] = 0U;
        __Vtemp131[0x10U] = 0U;
        __Vtemp131[0x11U] = 0U;
        __Vtemp131[0x12U] = 0U;
        __Vtemp131[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp132, __Vtemp131);
        __Vtemp137[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp137[1U] = 0U;
        __Vtemp137[2U] = 0U;
        __Vtemp137[3U] = 0U;
        __Vtemp137[4U] = 0U;
        __Vtemp137[5U] = 0U;
        __Vtemp137[6U] = 0U;
        __Vtemp137[7U] = 0U;
        __Vtemp137[8U] = 0U;
        __Vtemp137[9U] = 0U;
        __Vtemp137[0xaU] = 0U;
        __Vtemp137[0xbU] = 0U;
        __Vtemp137[0xcU] = 0U;
        __Vtemp137[0xdU] = 0U;
        __Vtemp137[0xeU] = 0U;
        __Vtemp137[0xfU] = 0U;
        __Vtemp137[0x10U] = 0U;
        __Vtemp137[0x11U] = 0U;
        __Vtemp137[0x12U] = 0U;
        __Vtemp137[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp138, __Vtemp137);
        __Vtemp143[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp143[1U] = 0U;
        __Vtemp143[2U] = 0U;
        __Vtemp143[3U] = 0U;
        __Vtemp143[4U] = 0U;
        __Vtemp143[5U] = 0U;
        __Vtemp143[6U] = 0U;
        __Vtemp143[7U] = 0U;
        __Vtemp143[8U] = 0U;
        __Vtemp143[9U] = 0U;
        __Vtemp143[0xaU] = 0U;
        __Vtemp143[0xbU] = 0U;
        __Vtemp143[0xcU] = 0U;
        __Vtemp143[0xdU] = 0U;
        __Vtemp143[0xeU] = 0U;
        __Vtemp143[0xfU] = 0U;
        __Vtemp143[0x10U] = 0U;
        __Vtemp143[0x11U] = 0U;
        __Vtemp143[0x12U] = 0U;
        __Vtemp143[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp144, __Vtemp143);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                 == ((7U == (7U & __Vtemp126[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp132[0U]))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                   == ((7U == (7U & 
                                               __Vtemp138[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp144[0U]))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8240:11
done_reset        
    ) {
        __Vtemp149[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp149[1U] = 0U;
        __Vtemp149[2U] = 0U;
        __Vtemp149[3U] = 0U;
        __Vtemp149[4U] = 0U;
        __Vtemp149[5U] = 0U;
        __Vtemp149[6U] = 0U;
        __Vtemp149[7U] = 0U;
        __Vtemp149[8U] = 0U;
        __Vtemp149[9U] = 0U;
        __Vtemp149[0xaU] = 0U;
        __Vtemp149[0xbU] = 0U;
        __Vtemp149[0xcU] = 0U;
        __Vtemp149[0xdU] = 0U;
        __Vtemp149[0xeU] = 0U;
        __Vtemp149[0xfU] = 0U;
        __Vtemp149[0x10U] = 0U;
        __Vtemp149[0x11U] = 0U;
        __Vtemp149[0x12U] = 0U;
        __Vtemp149[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp150, __Vtemp149);
        __Vtemp155[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp155[1U] = 0U;
        __Vtemp155[2U] = 0U;
        __Vtemp155[3U] = 0U;
        __Vtemp155[4U] = 0U;
        __Vtemp155[5U] = 0U;
        __Vtemp155[6U] = 0U;
        __Vtemp155[7U] = 0U;
        __Vtemp155[8U] = 0U;
        __Vtemp155[9U] = 0U;
        __Vtemp155[0xaU] = 0U;
        __Vtemp155[0xbU] = 0U;
        __Vtemp155[0xcU] = 0U;
        __Vtemp155[0xdU] = 0U;
        __Vtemp155[0xeU] = 0U;
        __Vtemp155[0xfU] = 0U;
        __Vtemp155[0x10U] = 0U;
        __Vtemp155[0x11U] = 0U;
        __Vtemp155[0x12U] = 0U;
        __Vtemp155[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp156, __Vtemp155);
        __Vtemp161[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp161[1U] = 0U;
        __Vtemp161[2U] = 0U;
        __Vtemp161[3U] = 0U;
        __Vtemp161[4U] = 0U;
        __Vtemp161[5U] = 0U;
        __Vtemp161[6U] = 0U;
        __Vtemp161[7U] = 0U;
        __Vtemp161[8U] = 0U;
        __Vtemp161[9U] = 0U;
        __Vtemp161[0xaU] = 0U;
        __Vtemp161[0xbU] = 0U;
        __Vtemp161[0xcU] = 0U;
        __Vtemp161[0xdU] = 0U;
        __Vtemp161[0xeU] = 0U;
        __Vtemp161[0xfU] = 0U;
        __Vtemp161[0x10U] = 0U;
        __Vtemp161[0x11U] = 0U;
        __Vtemp161[0x12U] = 0U;
        __Vtemp161[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp162, __Vtemp161);
        __Vtemp167[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp167[1U] = 0U;
        __Vtemp167[2U] = 0U;
        __Vtemp167[3U] = 0U;
        __Vtemp167[4U] = 0U;
        __Vtemp167[5U] = 0U;
        __Vtemp167[6U] = 0U;
        __Vtemp167[7U] = 0U;
        __Vtemp167[8U] = 0U;
        __Vtemp167[9U] = 0U;
        __Vtemp167[0xaU] = 0U;
        __Vtemp167[0xbU] = 0U;
        __Vtemp167[0xcU] = 0U;
        __Vtemp167[0xdU] = 0U;
        __Vtemp167[0xeU] = 0U;
        __Vtemp167[0xfU] = 0U;
        __Vtemp167[0x10U] = 0U;
        __Vtemp167[0x11U] = 0U;
        __Vtemp167[0x12U] = 0U;
        __Vtemp167[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp168, __Vtemp167);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                 == ((7U == (7U & __Vtemp150[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp156[0U]))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                   == ((7U == (7U & 
                                               __Vtemp162[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp168[0U]))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8243: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8243, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8251:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp171, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                       << 2U));
        __Vtemp174[0U] = (7U & (__Vtemp171[0U] >> 1U));
        __Vtemp174[1U] = 0U;
        __Vtemp174[2U] = 0U;
        __Vtemp174[3U] = 0U;
        __Vtemp174[4U] = 0U;
        __Vtemp174[5U] = 0U;
        __Vtemp174[6U] = 0U;
        __Vtemp174[7U] = 0U;
        __Vtemp174[8U] = 0U;
        __Vtemp174[9U] = 0U;
        __Vtemp174[0xaU] = 0U;
        __Vtemp174[0xbU] = 0U;
        __Vtemp174[0xcU] = 0U;
        __Vtemp174[0xdU] = 0U;
        __Vtemp174[0xeU] = 0U;
        __Vtemp174[0xfU] = 0U;
        __Vtemp174[0x10U] = 0U;
        __Vtemp174[0x11U] = 0U;
        __Vtemp174[0x12U] = 0U;
        __Vtemp174[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp175, __Vtemp174);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                                == (0xfU & __Vtemp175[0U])) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8264:11
done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp178, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                       << 2U));
        __Vtemp181[0U] = (7U & (__Vtemp178[0U] >> 1U));
        __Vtemp181[1U] = 0U;
        __Vtemp181[2U] = 0U;
        __Vtemp181[3U] = 0U;
        __Vtemp181[4U] = 0U;
        __Vtemp181[5U] = 0U;
        __Vtemp181[6U] = 0U;
        __Vtemp181[7U] = 0U;
        __Vtemp181[8U] = 0U;
        __Vtemp181[9U] = 0U;
        __Vtemp181[0xaU] = 0U;
        __Vtemp181[0xbU] = 0U;
        __Vtemp181[0xcU] = 0U;
        __Vtemp181[0xdU] = 0U;
        __Vtemp181[0xeU] = 0U;
        __Vtemp181[0xfU] = 0U;
        __Vtemp181[0x10U] = 0U;
        __Vtemp181[0x11U] = 0U;
        __Vtemp181[0x12U] = 0U;
        __Vtemp181[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp182, __Vtemp181);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                                == (0xfU & __Vtemp182[0U])) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8267: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8267, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8275:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))) 
                          & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                             == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor_io_in_a_ready)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8286:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))) 
                          & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                             == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
                                | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor_io_in_a_ready)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8289: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8289, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8297:11
verbose&&done_reset        
    ) {
        __Vtemp183[0U] = 1U;
        __Vtemp183[1U] = 0U;
        __Vtemp183[2U] = 0U;
        __Vtemp183[3U] = 0U;
        __Vtemp183[4U] = 0U;
        __Vtemp183[5U] = 0U;
        __Vtemp183[6U] = 0U;
        __Vtemp183[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp184, __Vtemp183, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp189[0U] = 1U;
        __Vtemp189[1U] = 0U;
        __Vtemp189[2U] = 0U;
        __Vtemp189[3U] = 0U;
        __Vtemp189[4U] = 0U;
        __Vtemp189[5U] = 0U;
        __Vtemp189[6U] = 0U;
        __Vtemp189[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp190, __Vtemp189, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        __Vtemp195[0U] = 1U;
        __Vtemp195[1U] = 0U;
        __Vtemp195[2U] = 0U;
        __Vtemp195[3U] = 0U;
        __Vtemp195[4U] = 0U;
        __Vtemp195[5U] = 0U;
        __Vtemp195[6U] = 0U;
        __Vtemp195[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp196, __Vtemp195, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((1U & (~ (((0U != (((((((1U 
                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                 ? 
                                                __Vtemp184[0U]
                                                 : 0U) 
                                               ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp190[0U]
                                                   : 0U)) 
                                              | (((1U 
                                                   & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                   ? 
                                                  __Vtemp184[1U]
                                                   : 0U) 
                                                 ^ 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp190[1U]
                                                   : 0U))) 
                                             | (((1U 
                                                  & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                  ? 
                                                 __Vtemp184[2U]
                                                  : 0U) 
                                                ^ (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp190[2U]
                                                    : 0U))) 
                                            | (((1U 
                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                 ? 
                                                __Vtemp184[3U]
                                                 : 0U) 
                                               ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp190[3U]
                                                   : 0U))) 
                                           | (((1U 
                                                & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                ? __Vtemp184[4U]
                                                : 0U) 
                                              ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                  ? 
                                                 __Vtemp190[4U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 ((((((1U 
                                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                       ? 
                                                      __Vtemp196[0U]
                                                       : 0U) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                         ? 
                                                        __Vtemp196[1U]
                                                         : 0U)) 
                                                    | ((1U 
                                                        & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                        ? 
                                                       __Vtemp196[2U]
                                                        : 0U)) 
                                                   | ((1U 
                                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                       ? 
                                                      __Vtemp196[3U]
                                                       : 0U)) 
                                                  | ((1U 
                                                      & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                      ? 
                                                     __Vtemp196[4U]
                                                      : 0U)))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8310:11
done_reset        
    ) {
        __Vtemp201[0U] = 1U;
        __Vtemp201[1U] = 0U;
        __Vtemp201[2U] = 0U;
        __Vtemp201[3U] = 0U;
        __Vtemp201[4U] = 0U;
        __Vtemp201[5U] = 0U;
        __Vtemp201[6U] = 0U;
        __Vtemp201[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp202, __Vtemp201, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp207[0U] = 1U;
        __Vtemp207[1U] = 0U;
        __Vtemp207[2U] = 0U;
        __Vtemp207[3U] = 0U;
        __Vtemp207[4U] = 0U;
        __Vtemp207[5U] = 0U;
        __Vtemp207[6U] = 0U;
        __Vtemp207[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp208, __Vtemp207, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        __Vtemp213[0U] = 1U;
        __Vtemp213[1U] = 0U;
        __Vtemp213[2U] = 0U;
        __Vtemp213[3U] = 0U;
        __Vtemp213[4U] = 0U;
        __Vtemp213[5U] = 0U;
        __Vtemp213[6U] = 0U;
        __Vtemp213[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp214, __Vtemp213, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((1U & (~ (((0U != (((((((1U 
                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                 ? 
                                                __Vtemp202[0U]
                                                 : 0U) 
                                               ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp208[0U]
                                                   : 0U)) 
                                              | (((1U 
                                                   & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                   ? 
                                                  __Vtemp202[1U]
                                                   : 0U) 
                                                 ^ 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp208[1U]
                                                   : 0U))) 
                                             | (((1U 
                                                  & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                  ? 
                                                 __Vtemp202[2U]
                                                  : 0U) 
                                                ^ (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp208[2U]
                                                    : 0U))) 
                                            | (((1U 
                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                 ? 
                                                __Vtemp202[3U]
                                                 : 0U) 
                                               ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp208[3U]
                                                   : 0U))) 
                                           | (((1U 
                                                & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                ? __Vtemp202[4U]
                                                : 0U) 
                                              ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                  ? 
                                                 __Vtemp208[4U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 ((((((1U 
                                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                       ? 
                                                      __Vtemp214[0U]
                                                       : 0U) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                         ? 
                                                        __Vtemp214[1U]
                                                         : 0U)) 
                                                    | ((1U 
                                                        & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                        ? 
                                                       __Vtemp214[2U]
                                                        : 0U)) 
                                                   | ((1U 
                                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                       ? 
                                                      __Vtemp214[3U]
                                                       : 0U)) 
                                                  | ((1U 
                                                      & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                      ? 
                                                     __Vtemp214[4U]
                                                      : 0U)))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8313: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8313, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8321:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8334:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8337: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8337, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8393:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:8406:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:8409: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 8409, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__61(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__61\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__adapter__DOT__idx 
        = vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg 
        = vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg;
    vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg 
        = vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24281:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24294:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24297: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24297, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24305:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24318:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24321: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24321, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24329:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24342:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24345: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24345, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24353:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24366:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24369: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24369, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24377:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24390:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24393: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24393, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24401:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24414:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24417: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24417, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24425:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24438:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24441: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24441, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24449:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24462:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24465: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24465, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24473:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24486:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24489: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24489, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24497:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24510:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24513: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24513, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24521:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24534:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24537: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24537, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24545:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24558:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24561: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24561, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24569:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                              | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                 & ((((((((((VL_ULL(0) 
                                             == (VL_ULL(0x1ffffb000) 
                                                 & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1ffff0000) 
                                                   & (QData)((IData)(
                                                                     (0x10000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x20000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x100000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1ffff0000) 
                                                & (QData)((IData)(
                                                                  (0x2000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x2010000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fc000000) 
                                              & (QData)((IData)(
                                                                (0xc000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1fffff000) 
                                             & (QData)((IData)(
                                                               (0x10000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (VL_ULL(0) == 
                                        (VL_ULL(0x1fffff000) 
                                         & (QData)((IData)(
                                                           (0x54000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                    | (VL_ULL(0) == 
                                       (VL_ULL(0x1f0000000) 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24582:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                              | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                 & ((((((((((VL_ULL(0) 
                                             == (VL_ULL(0x1ffffb000) 
                                                 & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1ffff0000) 
                                                   & (QData)((IData)(
                                                                     (0x10000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x20000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x100000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1ffff0000) 
                                                & (QData)((IData)(
                                                                  (0x2000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x2010000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fc000000) 
                                              & (QData)((IData)(
                                                                (0xc000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1fffff000) 
                                             & (QData)((IData)(
                                                               (0x10000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (VL_ULL(0) == 
                                        (VL_ULL(0x1fffff000) 
                                         & (QData)((IData)(
                                                           (0x54000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                    | (VL_ULL(0) == 
                                       (VL_ULL(0x1f0000000) 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24585: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24585, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24593:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24606:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24609: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24609, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24617:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24630:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24633: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24633, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24641:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                 | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                    & ((((((((VL_ULL(0) 
                                              == (VL_ULL(0x1ffffb000) 
                                                  & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x100000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1ffff0000) 
                                                   & (QData)((IData)(
                                                                     (0x2000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x2010000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fc000000) 
                                                 & (QData)((IData)(
                                                                   (0xc000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fffff000) 
                                                & (QData)((IData)(
                                                                  (0x10000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x54000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24654:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                 | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                    & ((((((((VL_ULL(0) 
                                              == (VL_ULL(0x1ffffb000) 
                                                  & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x100000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1ffff0000) 
                                                   & (QData)((IData)(
                                                                     (0x2000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x2010000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fc000000) 
                                                 & (QData)((IData)(
                                                                   (0xc000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fffff000) 
                                                & (QData)((IData)(
                                                                  (0x10000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x54000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24657: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24657, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24665:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24678:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24681: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24681, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24689:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24702:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24705: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24705, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24713:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                 | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                    & ((((((((VL_ULL(0) 
                                              == (VL_ULL(0x1ffffb000) 
                                                  & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x100000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1ffff0000) 
                                                   & (QData)((IData)(
                                                                     (0x2000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x2010000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fc000000) 
                                                 & (QData)((IData)(
                                                                   (0xc000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fffff000) 
                                                & (QData)((IData)(
                                                                  (0x10000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x54000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24726:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                 | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                    & ((((((((VL_ULL(0) 
                                              == (VL_ULL(0x1ffffb000) 
                                                  & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x100000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1ffff0000) 
                                                   & (QData)((IData)(
                                                                     (0x2000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x2010000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fc000000) 
                                                 & (QData)((IData)(
                                                                   (0xc000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fffff000) 
                                                & (QData)((IData)(
                                                                  (0x10000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x54000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24729: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24729, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24737:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24750:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24753: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24753, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24761:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24774:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24777: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24777, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24785:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                 & (((((((((VL_ULL(0) 
                                            == (VL_ULL(0x1ffffb000) 
                                                & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x3000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x100000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1ffff0000) 
                                                & (QData)((IData)(
                                                                  (0x2000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x2010000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fc000000) 
                                              & (QData)((IData)(
                                                                (0xc000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1fffff000) 
                                             & (QData)((IData)(
                                                               (0x10000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (VL_ULL(0) == 
                                        (VL_ULL(0x1fffff000) 
                                         & (QData)((IData)(
                                                           (0x54000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                    | (VL_ULL(0) == 
                                       (VL_ULL(0x1f0000000) 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24798:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                 & (((((((((VL_ULL(0) 
                                            == (VL_ULL(0x1ffffb000) 
                                                & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x3000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x100000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1ffff0000) 
                                                & (QData)((IData)(
                                                                  (0x2000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x2010000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fc000000) 
                                              & (QData)((IData)(
                                                                (0xc000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1fffff000) 
                                             & (QData)((IData)(
                                                               (0x10000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (VL_ULL(0) == 
                                        (VL_ULL(0x1fffff000) 
                                         & (QData)((IData)(
                                                           (0x54000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                    | (VL_ULL(0) == 
                                       (VL_ULL(0x1f0000000) 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24801: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24801, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24809:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24822:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24825: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24825, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24833:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24846:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24849: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24849, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24857:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                 & (((((((((VL_ULL(0) 
                                            == (VL_ULL(0x1ffffb000) 
                                                & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x3000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x100000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1ffff0000) 
                                                & (QData)((IData)(
                                                                  (0x2000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x2010000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fc000000) 
                                              & (QData)((IData)(
                                                                (0xc000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1fffff000) 
                                             & (QData)((IData)(
                                                               (0x10000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (VL_ULL(0) == 
                                        (VL_ULL(0x1fffff000) 
                                         & (QData)((IData)(
                                                           (0x54000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                    | (VL_ULL(0) == 
                                       (VL_ULL(0x1f0000000) 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24870:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                 & (((((((((VL_ULL(0) 
                                            == (VL_ULL(0x1ffffb000) 
                                                & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x3000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x100000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1ffff0000) 
                                                & (QData)((IData)(
                                                                  (0x2000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x2010000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fc000000) 
                                              & (QData)((IData)(
                                                                (0xc000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1fffff000) 
                                             & (QData)((IData)(
                                                               (0x10000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (VL_ULL(0) == 
                                        (VL_ULL(0x1fffff000) 
                                         & (QData)((IData)(
                                                           (0x54000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                    | (VL_ULL(0) == 
                                       (VL_ULL(0x1f0000000) 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24873: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24873, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24881:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24894:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24897: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24897, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24905:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24918:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24921: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24921, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24929:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                 | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                    & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24942:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                 | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                    & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24945: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24945, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24953:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24966:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24969: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24969, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24977:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:24990:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:24993: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 24993, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25001:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25014:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25017: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25017, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25025:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25038:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25041: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25041, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25049:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25062:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25065: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25065, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25073:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25086:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25089: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25089, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25097:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25110:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25113: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25113, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25121:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25134:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25137: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25137, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25145:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25158:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25161: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25161, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25169:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25182:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25185: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25185, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25193:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25206:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25209: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25209, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25217:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25230:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25233: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25233, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25241:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25254:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25257: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25257, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25265:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25278:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25281: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25281, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25289:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25302:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25305: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25305, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25313:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25326:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25329: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25329, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25337:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25350:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25353: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25353, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25361:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                 [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                                | vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25374:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                 [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                                | vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25377: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25377, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25385:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25398:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25401: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25401, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25409:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25422:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25425: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25425, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25433:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25446:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25449: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25449, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25457:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25470:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25473: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25473, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25481:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25494:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25497: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25497, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25505:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                 [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                                | vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25518:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                 [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                                | vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25521: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25521, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25529:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25542:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25545: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25545, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25553:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25566:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25569: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25569, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25577:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25590:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25593: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25593, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25601:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25614:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25617: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25617, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25625:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25638:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25641: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25641, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25649:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25662:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25665: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25665, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25673:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25686:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25689: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25689, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25697:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25710:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25713: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25713, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25721:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25734:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25737: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25737, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25745:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25758:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25761: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25761, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25769:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25782:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25785: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25785, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25793:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25806:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25809: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25809, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25817:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25830:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25833: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25833, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25841:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                                 >> (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25854:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                                 >> (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25857: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25857, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25865:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                              ? 1U : 4U))
                                      ? 4U : ((6U == 
                                               ((7U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                 ? 1U
                                                 : 4U))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == ((7U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                ? 1U
                                                : 4U))
                                        ? 4U : ((6U 
                                                 == 
                                                 ((7U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                   ? 1U
                                                   : 4U))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25878:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                              ? 1U : 4U))
                                      ? 4U : ((6U == 
                                               ((7U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                 ? 1U
                                                 : 4U))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == ((7U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                ? 1U
                                                : 4U))
                                        ? 4U : ((6U 
                                                 == 
                                                 ((7U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                   ? 1U
                                                   : 4U))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25881: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25881, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25889:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25902:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25905: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25905, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25913:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                   >> 1U)))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                   >> 1U)))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                >> 1U)))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25926:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                   >> 1U)))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                   >> 1U)))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                >> 1U)))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25929: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25929, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25937:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes) 
                                              >> ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  << 3U)) 
                                             >> 1U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25950:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes) 
                                              >> ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  << 3U)) 
                                             >> 1U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25953: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25953, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25961:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25972:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25975: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25975, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25983:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                      ? 1U : 0U) != 
                                    ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                      ? (1U & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                      : 0U)) | (~ (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 1U
                                                    : 0U))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 8 (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:25996:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                      ? 1U : 0U) != 
                                    ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                      ? (1U & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                      : 0U)) | (~ (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 1U
                                                    : 0U))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:25999: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 25999, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:26007:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:26020:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:26023: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 26023, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:26031:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:26044:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:26047: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 26047, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:26055:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1) 
                                              >> ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  << 3U)) 
                                             >> 1U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:26068:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1) 
                                              >> ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  << 3U)) 
                                             >> 1U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:26071: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 26071, "");
        }
    }
}
