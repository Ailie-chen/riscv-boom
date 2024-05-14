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
            VL_FATAL_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 27549, "",
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
            VL_FATAL_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 27549, "",
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:27971:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:27982:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U <= vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:27985: Assertion failed in %NTestHarness\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 27985, "");
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
    WData/*159:0*/ __Vtemp116[5];
    WData/*159:0*/ __Vtemp117[5];
    WData/*159:0*/ __Vtemp118[5];
    WData/*159:0*/ __Vtemp119[5];
    WData/*639:0*/ __Vtemp124[20];
    WData/*639:0*/ __Vtemp125[20];
    WData/*639:0*/ __Vtemp130[20];
    WData/*639:0*/ __Vtemp131[20];
    WData/*639:0*/ __Vtemp136[20];
    WData/*639:0*/ __Vtemp137[20];
    WData/*639:0*/ __Vtemp142[20];
    WData/*639:0*/ __Vtemp143[20];
    WData/*639:0*/ __Vtemp148[20];
    WData/*639:0*/ __Vtemp149[20];
    WData/*639:0*/ __Vtemp154[20];
    WData/*639:0*/ __Vtemp155[20];
    WData/*639:0*/ __Vtemp160[20];
    WData/*639:0*/ __Vtemp161[20];
    WData/*639:0*/ __Vtemp166[20];
    WData/*639:0*/ __Vtemp167[20];
    WData/*639:0*/ __Vtemp170[20];
    WData/*639:0*/ __Vtemp173[20];
    WData/*639:0*/ __Vtemp174[20];
    WData/*639:0*/ __Vtemp177[20];
    WData/*639:0*/ __Vtemp180[20];
    WData/*639:0*/ __Vtemp181[20];
    WData/*255:0*/ __Vtemp182[8];
    WData/*255:0*/ __Vtemp183[8];
    WData/*255:0*/ __Vtemp188[8];
    WData/*255:0*/ __Vtemp189[8];
    WData/*255:0*/ __Vtemp194[8];
    WData/*255:0*/ __Vtemp195[8];
    WData/*255:0*/ __Vtemp200[8];
    WData/*255:0*/ __Vtemp201[8];
    WData/*255:0*/ __Vtemp206[8];
    WData/*255:0*/ __Vtemp207[8];
    WData/*255:0*/ __Vtemp212[8];
    WData/*255:0*/ __Vtemp213[8];
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6177:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6190:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6193: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6193, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6201:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6214:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6217: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6217, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6225:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6238:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6241: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6241, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6249:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6262:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6265: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6265, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6273:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6286:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6289: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6289, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6297:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6310:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6313: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6313, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6321:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6334:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6337: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6337, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6345:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6358:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6361: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6361, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6369:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6382:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6385: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6385, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6393:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6406:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6409: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6409, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6417:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6430:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6433: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6433, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6441:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6454:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6457: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6457, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6465:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6478:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6481: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6481, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6489:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6502:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6505: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6505, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6513:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6526:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6529: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6529, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6537:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6550:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6553: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6553, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6561:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6574:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6577: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6577, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6585:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6598:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6601: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6601, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6609:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6622:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0x3ffff000U 
                                       & (0x10000000U 
                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6625: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6625, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6633:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6646:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6649: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6649, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6657:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6670:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6673: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6673, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6681:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6694:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6697: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6697, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6705:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6718:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6721: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6721, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6729:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6742:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6745: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6745, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6753:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6766:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                & (0U == (0x3ffff000U 
                                          & (0x10000000U 
                                             ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6769: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6769, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6777:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6790:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6793: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6793, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6801:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6814:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6817: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6817, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6825:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6838:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6841: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6841, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6849:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6862:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6865: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6865, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6873:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6886:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                & (0U == (0x3ffff000U 
                                          & (0x10000000U 
                                             ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6889: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6889, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6897:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6910:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6913: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6913, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6921:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6934:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6937: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6937, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6945:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6958:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6961: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6961, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6969:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6982:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:6985: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 6985, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:6993:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7006:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7009: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7009, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7017:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7030:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7033: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7033, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7041:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7054:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7057: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7057, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7065:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7078:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((4U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7081: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7081, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7089:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7102:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7105: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7105, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7113:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7126:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7129: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7129, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7137:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7150:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7153: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7153, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7161:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7174:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7177: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7177, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7185:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7198:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7201: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7201, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7209:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7222:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7225: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7225, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7233:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7246:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7249: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7249, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7257:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7270:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7273: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7273, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7281:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7294:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7297: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7297, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7305:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7318:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((1U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7321: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7321, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7329:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7342:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7345: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7345, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7353:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7366:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7369: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7369, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7593:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7606:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7609: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7609, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7617:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7630:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read)) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7633: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7633, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7665:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7678:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7681: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7681, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7689:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7702:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7705: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7705, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7713:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7726:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7729: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7729, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7737:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7750:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7753: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7753, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7761:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7774:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                == vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7777: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7777, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7785:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7798:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7801: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7801, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7809:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7822:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7825: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7825, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7833:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7846:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7849: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7849, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7857:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp116, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp116[0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7870:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp117, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp117[0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7873: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7873, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7881:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp118, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                         & (~ ((__Vtemp118[0U] | ((
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7894:11
done_reset        
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7897: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7897, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7905:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7918:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7921: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7921, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7929:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7942:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7945: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7945, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7953:11
verbose&&done_reset        
    ) {
        __Vtemp124[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp124[1U] = 0U;
        __Vtemp124[2U] = 0U;
        __Vtemp124[3U] = 0U;
        __Vtemp124[4U] = 0U;
        __Vtemp124[5U] = 0U;
        __Vtemp124[6U] = 0U;
        __Vtemp124[7U] = 0U;
        __Vtemp124[8U] = 0U;
        __Vtemp124[9U] = 0U;
        __Vtemp124[0xaU] = 0U;
        __Vtemp124[0xbU] = 0U;
        __Vtemp124[0xcU] = 0U;
        __Vtemp124[0xdU] = 0U;
        __Vtemp124[0xeU] = 0U;
        __Vtemp124[0xfU] = 0U;
        __Vtemp124[0x10U] = 0U;
        __Vtemp124[0x11U] = 0U;
        __Vtemp124[0x12U] = 0U;
        __Vtemp124[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp125, __Vtemp124);
        __Vtemp130[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp130[1U] = 0U;
        __Vtemp130[2U] = 0U;
        __Vtemp130[3U] = 0U;
        __Vtemp130[4U] = 0U;
        __Vtemp130[5U] = 0U;
        __Vtemp130[6U] = 0U;
        __Vtemp130[7U] = 0U;
        __Vtemp130[8U] = 0U;
        __Vtemp130[9U] = 0U;
        __Vtemp130[0xaU] = 0U;
        __Vtemp130[0xbU] = 0U;
        __Vtemp130[0xcU] = 0U;
        __Vtemp130[0xdU] = 0U;
        __Vtemp130[0xeU] = 0U;
        __Vtemp130[0xfU] = 0U;
        __Vtemp130[0x10U] = 0U;
        __Vtemp130[0x11U] = 0U;
        __Vtemp130[0x12U] = 0U;
        __Vtemp130[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp131, __Vtemp130);
        __Vtemp136[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp136[1U] = 0U;
        __Vtemp136[2U] = 0U;
        __Vtemp136[3U] = 0U;
        __Vtemp136[4U] = 0U;
        __Vtemp136[5U] = 0U;
        __Vtemp136[6U] = 0U;
        __Vtemp136[7U] = 0U;
        __Vtemp136[8U] = 0U;
        __Vtemp136[9U] = 0U;
        __Vtemp136[0xaU] = 0U;
        __Vtemp136[0xbU] = 0U;
        __Vtemp136[0xcU] = 0U;
        __Vtemp136[0xdU] = 0U;
        __Vtemp136[0xeU] = 0U;
        __Vtemp136[0xfU] = 0U;
        __Vtemp136[0x10U] = 0U;
        __Vtemp136[0x11U] = 0U;
        __Vtemp136[0x12U] = 0U;
        __Vtemp136[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp137, __Vtemp136);
        __Vtemp142[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp142[1U] = 0U;
        __Vtemp142[2U] = 0U;
        __Vtemp142[3U] = 0U;
        __Vtemp142[4U] = 0U;
        __Vtemp142[5U] = 0U;
        __Vtemp142[6U] = 0U;
        __Vtemp142[7U] = 0U;
        __Vtemp142[8U] = 0U;
        __Vtemp142[9U] = 0U;
        __Vtemp142[0xaU] = 0U;
        __Vtemp142[0xbU] = 0U;
        __Vtemp142[0xcU] = 0U;
        __Vtemp142[0xdU] = 0U;
        __Vtemp142[0xeU] = 0U;
        __Vtemp142[0xfU] = 0U;
        __Vtemp142[0x10U] = 0U;
        __Vtemp142[0x11U] = 0U;
        __Vtemp142[0x12U] = 0U;
        __Vtemp142[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp143, __Vtemp142);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                 == ((7U == (7U & __Vtemp125[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp131[0U]))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                   == ((7U == (7U & 
                                               __Vtemp137[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp143[0U]))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7966:11
done_reset        
    ) {
        __Vtemp148[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp148[1U] = 0U;
        __Vtemp148[2U] = 0U;
        __Vtemp148[3U] = 0U;
        __Vtemp148[4U] = 0U;
        __Vtemp148[5U] = 0U;
        __Vtemp148[6U] = 0U;
        __Vtemp148[7U] = 0U;
        __Vtemp148[8U] = 0U;
        __Vtemp148[9U] = 0U;
        __Vtemp148[0xaU] = 0U;
        __Vtemp148[0xbU] = 0U;
        __Vtemp148[0xcU] = 0U;
        __Vtemp148[0xdU] = 0U;
        __Vtemp148[0xeU] = 0U;
        __Vtemp148[0xfU] = 0U;
        __Vtemp148[0x10U] = 0U;
        __Vtemp148[0x11U] = 0U;
        __Vtemp148[0x12U] = 0U;
        __Vtemp148[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp149, __Vtemp148);
        __Vtemp154[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp154[1U] = 0U;
        __Vtemp154[2U] = 0U;
        __Vtemp154[3U] = 0U;
        __Vtemp154[4U] = 0U;
        __Vtemp154[5U] = 0U;
        __Vtemp154[6U] = 0U;
        __Vtemp154[7U] = 0U;
        __Vtemp154[8U] = 0U;
        __Vtemp154[9U] = 0U;
        __Vtemp154[0xaU] = 0U;
        __Vtemp154[0xbU] = 0U;
        __Vtemp154[0xcU] = 0U;
        __Vtemp154[0xdU] = 0U;
        __Vtemp154[0xeU] = 0U;
        __Vtemp154[0xfU] = 0U;
        __Vtemp154[0x10U] = 0U;
        __Vtemp154[0x11U] = 0U;
        __Vtemp154[0x12U] = 0U;
        __Vtemp154[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp155, __Vtemp154);
        __Vtemp160[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp160[1U] = 0U;
        __Vtemp160[2U] = 0U;
        __Vtemp160[3U] = 0U;
        __Vtemp160[4U] = 0U;
        __Vtemp160[5U] = 0U;
        __Vtemp160[6U] = 0U;
        __Vtemp160[7U] = 0U;
        __Vtemp160[8U] = 0U;
        __Vtemp160[9U] = 0U;
        __Vtemp160[0xaU] = 0U;
        __Vtemp160[0xbU] = 0U;
        __Vtemp160[0xcU] = 0U;
        __Vtemp160[0xdU] = 0U;
        __Vtemp160[0xeU] = 0U;
        __Vtemp160[0xfU] = 0U;
        __Vtemp160[0x10U] = 0U;
        __Vtemp160[0x11U] = 0U;
        __Vtemp160[0x12U] = 0U;
        __Vtemp160[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp161, __Vtemp160);
        __Vtemp166[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp166[1U] = 0U;
        __Vtemp166[2U] = 0U;
        __Vtemp166[3U] = 0U;
        __Vtemp166[4U] = 0U;
        __Vtemp166[5U] = 0U;
        __Vtemp166[6U] = 0U;
        __Vtemp166[7U] = 0U;
        __Vtemp166[8U] = 0U;
        __Vtemp166[9U] = 0U;
        __Vtemp166[0xaU] = 0U;
        __Vtemp166[0xbU] = 0U;
        __Vtemp166[0xcU] = 0U;
        __Vtemp166[0xdU] = 0U;
        __Vtemp166[0xeU] = 0U;
        __Vtemp166[0xfU] = 0U;
        __Vtemp166[0x10U] = 0U;
        __Vtemp166[0x11U] = 0U;
        __Vtemp166[0x12U] = 0U;
        __Vtemp166[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp167, __Vtemp166);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                 == ((7U == (7U & __Vtemp149[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp155[0U]))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                   == ((7U == (7U & 
                                               __Vtemp161[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp167[0U]))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7969: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7969, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7977:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp170, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                       << 2U));
        __Vtemp173[0U] = (7U & (__Vtemp170[0U] >> 1U));
        __Vtemp173[1U] = 0U;
        __Vtemp173[2U] = 0U;
        __Vtemp173[3U] = 0U;
        __Vtemp173[4U] = 0U;
        __Vtemp173[5U] = 0U;
        __Vtemp173[6U] = 0U;
        __Vtemp173[7U] = 0U;
        __Vtemp173[8U] = 0U;
        __Vtemp173[9U] = 0U;
        __Vtemp173[0xaU] = 0U;
        __Vtemp173[0xbU] = 0U;
        __Vtemp173[0xcU] = 0U;
        __Vtemp173[0xdU] = 0U;
        __Vtemp173[0xeU] = 0U;
        __Vtemp173[0xfU] = 0U;
        __Vtemp173[0x10U] = 0U;
        __Vtemp173[0x11U] = 0U;
        __Vtemp173[0x12U] = 0U;
        __Vtemp173[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp174, __Vtemp173);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                                == (0xfU & __Vtemp174[0U])) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:7990:11
done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp177, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                       << 2U));
        __Vtemp180[0U] = (7U & (__Vtemp177[0U] >> 1U));
        __Vtemp180[1U] = 0U;
        __Vtemp180[2U] = 0U;
        __Vtemp180[3U] = 0U;
        __Vtemp180[4U] = 0U;
        __Vtemp180[5U] = 0U;
        __Vtemp180[6U] = 0U;
        __Vtemp180[7U] = 0U;
        __Vtemp180[8U] = 0U;
        __Vtemp180[9U] = 0U;
        __Vtemp180[0xaU] = 0U;
        __Vtemp180[0xbU] = 0U;
        __Vtemp180[0xcU] = 0U;
        __Vtemp180[0xdU] = 0U;
        __Vtemp180[0xeU] = 0U;
        __Vtemp180[0xfU] = 0U;
        __Vtemp180[0x10U] = 0U;
        __Vtemp180[0x11U] = 0U;
        __Vtemp180[0x12U] = 0U;
        __Vtemp180[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp181, __Vtemp180);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                                == (0xfU & __Vtemp181[0U])) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:7993: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 7993, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:8001:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:8012:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:8015: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 8015, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:8023:11
verbose&&done_reset        
    ) {
        __Vtemp182[0U] = 1U;
        __Vtemp182[1U] = 0U;
        __Vtemp182[2U] = 0U;
        __Vtemp182[3U] = 0U;
        __Vtemp182[4U] = 0U;
        __Vtemp182[5U] = 0U;
        __Vtemp182[6U] = 0U;
        __Vtemp182[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp183, __Vtemp182, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp188[0U] = 1U;
        __Vtemp188[1U] = 0U;
        __Vtemp188[2U] = 0U;
        __Vtemp188[3U] = 0U;
        __Vtemp188[4U] = 0U;
        __Vtemp188[5U] = 0U;
        __Vtemp188[6U] = 0U;
        __Vtemp188[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp189, __Vtemp188, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        __Vtemp194[0U] = 1U;
        __Vtemp194[1U] = 0U;
        __Vtemp194[2U] = 0U;
        __Vtemp194[3U] = 0U;
        __Vtemp194[4U] = 0U;
        __Vtemp194[5U] = 0U;
        __Vtemp194[6U] = 0U;
        __Vtemp194[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp195, __Vtemp194, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((1U & (~ (((0U != (((((((1U 
                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                 ? 
                                                __Vtemp183[0U]
                                                 : 0U) 
                                               ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp189[0U]
                                                   : 0U)) 
                                              | (((1U 
                                                   & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                   ? 
                                                  __Vtemp183[1U]
                                                   : 0U) 
                                                 ^ 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp189[1U]
                                                   : 0U))) 
                                             | (((1U 
                                                  & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                  ? 
                                                 __Vtemp183[2U]
                                                  : 0U) 
                                                ^ (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp189[2U]
                                                    : 0U))) 
                                            | (((1U 
                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                 ? 
                                                __Vtemp183[3U]
                                                 : 0U) 
                                               ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp189[3U]
                                                   : 0U))) 
                                           | (((1U 
                                                & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                ? __Vtemp183[4U]
                                                : 0U) 
                                              ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                  ? 
                                                 __Vtemp189[4U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 ((((((1U 
                                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                       ? 
                                                      __Vtemp195[0U]
                                                       : 0U) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                         ? 
                                                        __Vtemp195[1U]
                                                         : 0U)) 
                                                    | ((1U 
                                                        & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                        ? 
                                                       __Vtemp195[2U]
                                                        : 0U)) 
                                                   | ((1U 
                                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                       ? 
                                                      __Vtemp195[3U]
                                                       : 0U)) 
                                                  | ((1U 
                                                      & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                      ? 
                                                     __Vtemp195[4U]
                                                      : 0U)))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:8036:11
done_reset        
    ) {
        __Vtemp200[0U] = 1U;
        __Vtemp200[1U] = 0U;
        __Vtemp200[2U] = 0U;
        __Vtemp200[3U] = 0U;
        __Vtemp200[4U] = 0U;
        __Vtemp200[5U] = 0U;
        __Vtemp200[6U] = 0U;
        __Vtemp200[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp201, __Vtemp200, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp206[0U] = 1U;
        __Vtemp206[1U] = 0U;
        __Vtemp206[2U] = 0U;
        __Vtemp206[3U] = 0U;
        __Vtemp206[4U] = 0U;
        __Vtemp206[5U] = 0U;
        __Vtemp206[6U] = 0U;
        __Vtemp206[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp207, __Vtemp206, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        __Vtemp212[0U] = 1U;
        __Vtemp212[1U] = 0U;
        __Vtemp212[2U] = 0U;
        __Vtemp212[3U] = 0U;
        __Vtemp212[4U] = 0U;
        __Vtemp212[5U] = 0U;
        __Vtemp212[6U] = 0U;
        __Vtemp212[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp213, __Vtemp212, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((1U & (~ (((0U != (((((((1U 
                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                 ? 
                                                __Vtemp201[0U]
                                                 : 0U) 
                                               ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp207[0U]
                                                   : 0U)) 
                                              | (((1U 
                                                   & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                   ? 
                                                  __Vtemp201[1U]
                                                   : 0U) 
                                                 ^ 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp207[1U]
                                                   : 0U))) 
                                             | (((1U 
                                                  & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                  ? 
                                                 __Vtemp201[2U]
                                                  : 0U) 
                                                ^ (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp207[2U]
                                                    : 0U))) 
                                            | (((1U 
                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                 ? 
                                                __Vtemp201[3U]
                                                 : 0U) 
                                               ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp207[3U]
                                                   : 0U))) 
                                           | (((1U 
                                                & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                ? __Vtemp201[4U]
                                                : 0U) 
                                              ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                  ? 
                                                 __Vtemp207[4U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 ((((((1U 
                                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                       ? 
                                                      __Vtemp213[0U]
                                                       : 0U) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                         ? 
                                                        __Vtemp213[1U]
                                                         : 0U)) 
                                                    | ((1U 
                                                        & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                        ? 
                                                       __Vtemp213[2U]
                                                        : 0U)) 
                                                   | ((1U 
                                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                       ? 
                                                      __Vtemp213[3U]
                                                       : 0U)) 
                                                  | ((1U 
                                                      & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                      ? 
                                                     __Vtemp213[4U]
                                                      : 0U)))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:8039: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 8039, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:8047:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:8060:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:8063: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 8063, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:8119:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:8132:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:8135: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 8135, "");
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24281:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24294:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24297: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24297, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24305:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24318:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24321: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24321, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24329:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24342:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24345: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24345, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24353:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24366:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24369: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24369, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24377:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24390:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24393: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24393, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24401:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24414:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                              & ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24417: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24417, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24425:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24438:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24441: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24441, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24449:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24462:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24465: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24465, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24473:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24486:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24489: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24489, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24497:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24510:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24513: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24513, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24521:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24534:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24537: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24537, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24545:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24558:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24561: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24561, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24569:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24582:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24585: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24585, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24593:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24606:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24609: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24609, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24617:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24630:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24633: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24633, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24641:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24654:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24657: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24657, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24665:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24678:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24681: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24681, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24689:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24702:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24705: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24705, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24713:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24726:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24729: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24729, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24737:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24750:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24753: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24753, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24761:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24774:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24777: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24777, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24785:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24798:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24801: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24801, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24809:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24822:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24825: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24825, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24833:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24846:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24849: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24849, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24857:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24870:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24873: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24873, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24881:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24894:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24897: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24897, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24905:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24918:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24921: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24921, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24929:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24942:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24945: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24945, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24953:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24966:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24969: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24969, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24977:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:24990:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:24993: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 24993, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25001:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25014:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25017: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25017, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25025:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25038:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25041: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25041, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25049:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25062:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25065: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25065, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25073:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25086:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25089: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25089, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25097:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25110:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25113: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25113, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25121:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25134:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25137: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25137, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25145:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25158:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25161: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25161, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25169:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25182:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25185: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25185, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25193:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25206:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25209: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25209, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25217:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25230:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25233: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25233, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25241:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25254:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25257: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25257, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25265:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25278:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25281: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25281, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25289:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25302:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25305: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25305, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25313:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25326:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25329: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25329, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25337:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25350:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25353: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25353, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25361:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25374:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                 [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                                | vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25377: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25377, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25385:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25398:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25401: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25401, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25409:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25422:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25425: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25425, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25433:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25446:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25449: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25449, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25457:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25470:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25473: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25473, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25481:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25494:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25497: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25497, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25505:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25518:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                 [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                                | vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25521: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25521, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25529:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25542:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25545: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25545, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25553:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25566:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25569: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25569, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25577:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25590:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25593: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25593, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25601:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25614:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U) == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25617: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25617, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25625:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25638:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25641: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25641, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25649:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25662:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25665: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25665, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25673:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25686:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25689: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25689, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25697:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25710:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25713: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25713, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25721:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25734:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25737: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25737, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25745:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25758:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25761: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25761, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25769:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25782:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25785: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25785, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25793:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25806:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25809: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25809, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25817:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25830:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25833: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25833, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25841:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25854:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25857: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25857, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25865:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25878:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25881: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25881, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25889:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25902:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25905: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25905, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25913:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25926:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25929: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25929, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25937:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25950:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25953: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25953, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25961:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25972:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25975: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25975, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25983:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:25996:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:25999: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 25999, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:26007:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:26020:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:26023: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 26023, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:26031:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:26044:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:26047: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 26047, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:26055:11
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
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v:26068:11
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
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.harness.v:26071: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.harness.v", 26071, "");
        }
    }
}
