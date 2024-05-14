// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1905(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1905\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:142695:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__empty)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value_1]) 
                                      & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied_io_deq_bits_MPORT_data)))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Data poisoning unsupported\n    at SinkD.scala:81 assert (!(d.valid && d.bits.corrupt && !d.bits.denied), \"Data poisoning unsupported\")\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:142708:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__empty)) 
                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_corrupt
                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value_1]) 
                                      & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied_io_deq_bits_MPORT_data)))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:142711: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.sinkD\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 142711, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33105:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state)) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__earlyWinner_1))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33118:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state)) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__earlyWinner_1))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33121: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33121, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33129:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_i_valid))) 
                                   | ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state)) 
                                      | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__earlyWinner_1))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33142:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_i_valid))) 
                                   | ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state)) 
                                      | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__earlyWinner_1))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33145: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33145, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33153:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_i_valid))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_12)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33166:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_i_valid))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_12)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33169: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33169, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1906(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1906\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__prescaler 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__prescaler;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:259549:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT___T) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"UART TX (%x): %c\n",
                       8,vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram
                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__deq_ptr_value],
                       8,vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram
                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__deq_ptr_value]);
        }
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1907(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1907\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:143824:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
                                    >> 0xaU) | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Directory.scala:84 assert (wipeDone || !io.read.valid)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:143835:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
                                    >> 0xaU) | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:143838: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.directory\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 143838, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:143846:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid)) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
                                      >> 0xaU)) | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Directory.scala:89 assert (!io.read.valid || wipeDone)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:143857:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid)) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
                                      >> 0xaU)) | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:143860: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.directory\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 143860, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:143868:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__ren1)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimLTE)) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Directory.scala:119 assert (!ren2 || victimLTE(0) === UInt(1))\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:143880:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__ren1)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimLTE)) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:143883: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.directory\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 143883, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:143891:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__ren1)) 
                                   | (0U == (0x7fU 
                                             & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimLTE) 
                                                 >> 1U) 
                                                & (~ 
                                                   (1U 
                                                    | (0xfeU 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimLTE)))))))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Directory.scala:120 assert (!ren2 || ((victimSimp >> 1) & ~victimSimp) === UInt(0)) // monotone\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:143904:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__ren1)) 
                                   | (0U == (0x7fU 
                                             & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimLTE) 
                                                 >> 1U) 
                                                & (~ 
                                                   (1U 
                                                    | (0xfeU 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimLTE)))))))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:143907: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.directory\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 143907, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:143915:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__ren1)) 
                                   | (1U == (0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH)) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                        >> 1U)))) 
                                                + (3U 
                                                   & ((1U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                          >> 2U)) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                          >> 3U)))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                            >> 4U)) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                            >> 5U)))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                            >> 6U)) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                            >> 7U)))))))))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Directory.scala:121 assert (!ren2 || PopCount(victimWayOH) === UInt(1))\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:143927:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__ren1)) 
                                   | (1U == (0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH)) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                        >> 1U)))) 
                                                + (3U 
                                                   & ((1U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                          >> 2U)) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                          >> 3U)))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                            >> 4U)) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                            >> 5U)))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                            >> 6U)) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                            >> 7U)))))))))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:143930: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.directory\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 143930, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1908(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1908\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__regfile__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__regfile__v1 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__tail__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1909(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1909\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp3674[5];
    WData/*159:0*/ __Vtemp3677[5];
    WData/*159:0*/ __Vtemp3680[5];
    WData/*159:0*/ __Vtemp3683[5];
    WData/*575:0*/ __Vtemp3689[18];
    WData/*575:0*/ __Vtemp3690[18];
    WData/*575:0*/ __Vtemp3695[18];
    WData/*575:0*/ __Vtemp3696[18];
    WData/*575:0*/ __Vtemp3701[18];
    WData/*575:0*/ __Vtemp3702[18];
    WData/*575:0*/ __Vtemp3707[18];
    WData/*575:0*/ __Vtemp3708[18];
    WData/*575:0*/ __Vtemp3713[18];
    WData/*575:0*/ __Vtemp3714[18];
    WData/*575:0*/ __Vtemp3719[18];
    WData/*575:0*/ __Vtemp3720[18];
    WData/*575:0*/ __Vtemp3725[18];
    WData/*575:0*/ __Vtemp3726[18];
    WData/*575:0*/ __Vtemp3731[18];
    WData/*575:0*/ __Vtemp3732[18];
    WData/*575:0*/ __Vtemp3735[18];
    WData/*575:0*/ __Vtemp3738[18];
    WData/*575:0*/ __Vtemp3739[18];
    WData/*575:0*/ __Vtemp3742[18];
    WData/*575:0*/ __Vtemp3745[18];
    WData/*575:0*/ __Vtemp3746[18];
    WData/*255:0*/ __Vtemp3748[8];
    WData/*255:0*/ __Vtemp3749[8];
    WData/*255:0*/ __Vtemp3756[8];
    WData/*255:0*/ __Vtemp3757[8];
    WData/*255:0*/ __Vtemp3764[8];
    WData/*255:0*/ __Vtemp3765[8];
    WData/*255:0*/ __Vtemp3772[8];
    WData/*255:0*/ __Vtemp3773[8];
    WData/*255:0*/ __Vtemp3780[8];
    WData/*255:0*/ __Vtemp3781[8];
    WData/*255:0*/ __Vtemp3788[8];
    WData/*255:0*/ __Vtemp3789[8];
    // Body
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135094:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135107:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135110: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135110, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135118:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135131:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135134: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135134, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135142:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135155:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135158: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135158, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135166:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((3U <= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135179:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((3U <= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135182: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135182, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135190:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135203:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135206: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135206, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135214:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135227:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135230: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135230, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135238:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (0xffU 
                                                  & (~ 
                                                     vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                                     [0U]))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135251:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (0xffU 
                                                  & (~ 
                                                     vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                                     [0U]))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135254: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135254, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135262:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135275:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135278: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135278, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135286:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135299:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135302: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135302, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135310:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135323:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135326: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135326, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135334:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135347:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135350: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135350, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135358:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((3U <= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135371:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((3U <= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135374: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135374, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135382:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135395:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135398: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135398, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135406:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135419:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135422: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135422, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135430:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135443:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135446: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135446, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135454:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (0xffU 
                                                  & (~ 
                                                     vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                                     [0U]))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135467:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (0xffU 
                                                  & (~ 
                                                     vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                                     [0U]))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135470: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135470, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135478:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135491:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135494: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135494, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135502:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135515:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135518: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135518, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135526:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (0x7fff000U 
                                                  & (0x2010000U 
                                                     ^ 
                                                     vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U]))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135539:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (0x7fff000U 
                                                  & (0x2010000U 
                                                     ^ 
                                                     vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U]))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135542: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135542, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135550:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135563:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135566: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135566, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135574:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135587:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135590: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135590, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135598:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135611:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135614: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135614, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135622:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                           [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask)) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135635:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                           [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask)) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135638: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135638, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135646:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135659:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135662: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135662, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135670:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ (((0x8fU >= 
                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                            [0U]) & 
                                           (0U == (0x7fff000U 
                                                   & (0x2010000U 
                                                      ^ 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                      [0U])))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135683:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ (((0x8fU >= 
                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                            [0U]) & 
                                           (0U == (0x7fff000U 
                                                   & (0x2010000U 
                                                      ^ 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                      [0U])))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135686: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135686, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135694:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135707:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135710: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135710, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135718:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135731:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135734: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135734, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135742:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135755:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135758: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135758, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135766:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                           [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask)) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135779:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                           [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask)) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135782: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135782, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135790:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ (((0x8fU >= 
                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                            [0U]) & 
                                           (0U == (0x7fff000U 
                                                   & (0x2010000U 
                                                      ^ 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                      [0U])))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135803:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ (((0x8fU >= 
                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                            [0U]) & 
                                           (0U == (0x7fff000U 
                                                   & (0x2010000U 
                                                      ^ 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                      [0U])))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135806: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135806, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135814:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135827:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135830: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135830, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135838:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135851:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135854: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135854, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135862:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135875:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135878: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135878, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135886:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                                  [0U] 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask)))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135899:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                                  [0U] 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask)))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135902: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135902, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135910:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135923:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135926: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135926, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135934:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135947:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135950: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135950, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135958:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135971:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135974: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135974, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135982:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((4U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:135995:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((4U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:135998: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 135998, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136006:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                           [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask)) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136019:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                           [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask)) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136022: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136022, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136030:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136043:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136046: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136046, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136054:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136067:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136070: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136070, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136078:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136091:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136094: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136094, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136102:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((3U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136115:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((3U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136118: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136118, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136126:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                           [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask)) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136139:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                           [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask)) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136142: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136142, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136150:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136163:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136166: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136166, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136174:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136187:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136190: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136190, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136198:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136211:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((0U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     & (~ 
                                                        (0x3fU 
                                                         & ((IData)(7U) 
                                                            << 
                                                            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                            [0U])))))) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136214: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136214, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136222:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((1U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136235:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((1U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136238: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136238, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136246:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                           [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask)) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136259:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                           [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask)) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136262: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136262, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136270:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136283:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136286: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136286, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136510:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                          & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136523:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                          & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                             [0U])) & (~ ((0x8fU >= 
                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                           [0U]) | 
                                          (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136526: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136526, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136534:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                          [0U]) & (~ ((0x8fU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                       [0U]) | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136547:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                          [0U]) & (~ ((0x8fU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                       [0U]) | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136550: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136550, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136582:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__opcode)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136595:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__opcode)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136598: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136598, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136606:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136619:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__param)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136622: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136622, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136630:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__size)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136643:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__size)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136646: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136646, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136654:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136667:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__source)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136670: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136670, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136678:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                [0U] == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__address) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136691:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                [0U] == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__address) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136694: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136694, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136702:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__opcode_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Configs.scala:128:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136715:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__opcode_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136718: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136718, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136726:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_size
                                [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__size_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Configs.scala:128:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136739:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_size
                                [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__size_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136742: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136742, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136750:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__source_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Configs.scala:128:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136763:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__source_1)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136766: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136766, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136774:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(144,144,8, __Vtemp3674, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight, 
                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                      [0U]);
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp3674[0U]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136787:11
done_reset        
    ) {
        VL_SHIFTR_WWI(144,144,8, __Vtemp3677, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight, 
                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                      [0U]);
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp3677[0U]) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136790: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136790, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136798:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(144,144,8, __Vtemp3680, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight, 
                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                      [0U]);
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1))) 
                         & (~ ((__Vtemp3680[0U] | (
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1))) 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                                      [0U] 
                                                      == 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                                      [0U]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Configs.scala:128:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136811:11
done_reset        
    ) {
        VL_SHIFTR_WWI(144,144,8, __Vtemp3683, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight, 
                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                      [0U]);
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1))) 
                         & (~ ((__Vtemp3683[0U] | (
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1))) 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                                      [0U] 
                                                      == 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                                      [0U]))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136814: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136814, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136822:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1))) 
                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                [0U] == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                [0U]))) & (~ (((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                                [0U] 
                                                == 
                                                ((7U 
                                                  == 
                                                  vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                                  [0U])
                                                  ? 4U
                                                  : 
                                                 ((6U 
                                                   == 
                                                   vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                                   [0U])
                                                   ? 4U
                                                   : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___GEN_30)))) 
                                               | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                                  [0U] 
                                                  == 
                                                  ((7U 
                                                    == 
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                                    [0U])
                                                    ? 4U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                                     [0U])
                                                     ? 5U
                                                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___GEN_30))))) 
                                              | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Configs.scala:128:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136835:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1))) 
                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                [0U] == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                [0U]))) & (~ (((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                                [0U] 
                                                == 
                                                ((7U 
                                                  == 
                                                  vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                                  [0U])
                                                  ? 4U
                                                  : 
                                                 ((6U 
                                                   == 
                                                   vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                                   [0U])
                                                   ? 4U
                                                   : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___GEN_30)))) 
                                               | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                                  [0U] 
                                                  == 
                                                  ((7U 
                                                    == 
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                                    [0U])
                                                    ? 4U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                                     [0U])
                                                     ? 5U
                                                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___GEN_30))))) 
                                              | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136838: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136838, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136846:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1))) 
                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                [0U] == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                [0U]))) & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                               [0U] 
                                               == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_size
                                               [0U]) 
                                              | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Configs.scala:128:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136859:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1))) 
                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                [0U] == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                [0U]))) & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                               [0U] 
                                               == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_size
                                               [0U]) 
                                              | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136862: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136862, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136870:11
verbose&&done_reset        
    ) {
        __Vtemp3689[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3689[1U] = 0U;
        __Vtemp3689[2U] = 0U;
        __Vtemp3689[3U] = 0U;
        __Vtemp3689[4U] = 0U;
        __Vtemp3689[5U] = 0U;
        __Vtemp3689[6U] = 0U;
        __Vtemp3689[7U] = 0U;
        __Vtemp3689[8U] = 0U;
        __Vtemp3689[9U] = 0U;
        __Vtemp3689[0xaU] = 0U;
        __Vtemp3689[0xbU] = 0U;
        __Vtemp3689[0xcU] = 0U;
        __Vtemp3689[0xdU] = 0U;
        __Vtemp3689[0xeU] = 0U;
        __Vtemp3689[0xfU] = 0U;
        __Vtemp3689[0x10U] = 0U;
        __Vtemp3689[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3690, __Vtemp3689);
        __Vtemp3695[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3695[1U] = 0U;
        __Vtemp3695[2U] = 0U;
        __Vtemp3695[3U] = 0U;
        __Vtemp3695[4U] = 0U;
        __Vtemp3695[5U] = 0U;
        __Vtemp3695[6U] = 0U;
        __Vtemp3695[7U] = 0U;
        __Vtemp3695[8U] = 0U;
        __Vtemp3695[9U] = 0U;
        __Vtemp3695[0xaU] = 0U;
        __Vtemp3695[0xbU] = 0U;
        __Vtemp3695[0xcU] = 0U;
        __Vtemp3695[0xdU] = 0U;
        __Vtemp3695[0xeU] = 0U;
        __Vtemp3695[0xfU] = 0U;
        __Vtemp3695[0x10U] = 0U;
        __Vtemp3695[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3696, __Vtemp3695);
        __Vtemp3701[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3701[1U] = 0U;
        __Vtemp3701[2U] = 0U;
        __Vtemp3701[3U] = 0U;
        __Vtemp3701[4U] = 0U;
        __Vtemp3701[5U] = 0U;
        __Vtemp3701[6U] = 0U;
        __Vtemp3701[7U] = 0U;
        __Vtemp3701[8U] = 0U;
        __Vtemp3701[9U] = 0U;
        __Vtemp3701[0xaU] = 0U;
        __Vtemp3701[0xbU] = 0U;
        __Vtemp3701[0xcU] = 0U;
        __Vtemp3701[0xdU] = 0U;
        __Vtemp3701[0xeU] = 0U;
        __Vtemp3701[0xfU] = 0U;
        __Vtemp3701[0x10U] = 0U;
        __Vtemp3701[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3702, __Vtemp3701);
        __Vtemp3707[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3707[1U] = 0U;
        __Vtemp3707[2U] = 0U;
        __Vtemp3707[3U] = 0U;
        __Vtemp3707[4U] = 0U;
        __Vtemp3707[5U] = 0U;
        __Vtemp3707[6U] = 0U;
        __Vtemp3707[7U] = 0U;
        __Vtemp3707[8U] = 0U;
        __Vtemp3707[9U] = 0U;
        __Vtemp3707[0xaU] = 0U;
        __Vtemp3707[0xbU] = 0U;
        __Vtemp3707[0xcU] = 0U;
        __Vtemp3707[0xdU] = 0U;
        __Vtemp3707[0xeU] = 0U;
        __Vtemp3707[0xfU] = 0U;
        __Vtemp3707[0x10U] = 0U;
        __Vtemp3707[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3708, __Vtemp3707);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1))) 
                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                   [0U] == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                   [0U])))) & (~ ((
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                                    [0U] 
                                                    == 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & __Vtemp3690[0U]))
                                                      ? 4U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & __Vtemp3696[0U]))
                                                       ? 4U
                                                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___GEN_46)))) 
                                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                                      [0U] 
                                                      == 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & __Vtemp3702[0U]))
                                                        ? 4U
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & __Vtemp3708[0U]))
                                                         ? 5U
                                                         : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___GEN_46))))) 
                                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Configs.scala:128:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136883:11
done_reset        
    ) {
        __Vtemp3713[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3713[1U] = 0U;
        __Vtemp3713[2U] = 0U;
        __Vtemp3713[3U] = 0U;
        __Vtemp3713[4U] = 0U;
        __Vtemp3713[5U] = 0U;
        __Vtemp3713[6U] = 0U;
        __Vtemp3713[7U] = 0U;
        __Vtemp3713[8U] = 0U;
        __Vtemp3713[9U] = 0U;
        __Vtemp3713[0xaU] = 0U;
        __Vtemp3713[0xbU] = 0U;
        __Vtemp3713[0xcU] = 0U;
        __Vtemp3713[0xdU] = 0U;
        __Vtemp3713[0xeU] = 0U;
        __Vtemp3713[0xfU] = 0U;
        __Vtemp3713[0x10U] = 0U;
        __Vtemp3713[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3714, __Vtemp3713);
        __Vtemp3719[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3719[1U] = 0U;
        __Vtemp3719[2U] = 0U;
        __Vtemp3719[3U] = 0U;
        __Vtemp3719[4U] = 0U;
        __Vtemp3719[5U] = 0U;
        __Vtemp3719[6U] = 0U;
        __Vtemp3719[7U] = 0U;
        __Vtemp3719[8U] = 0U;
        __Vtemp3719[9U] = 0U;
        __Vtemp3719[0xaU] = 0U;
        __Vtemp3719[0xbU] = 0U;
        __Vtemp3719[0xcU] = 0U;
        __Vtemp3719[0xdU] = 0U;
        __Vtemp3719[0xeU] = 0U;
        __Vtemp3719[0xfU] = 0U;
        __Vtemp3719[0x10U] = 0U;
        __Vtemp3719[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3720, __Vtemp3719);
        __Vtemp3725[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3725[1U] = 0U;
        __Vtemp3725[2U] = 0U;
        __Vtemp3725[3U] = 0U;
        __Vtemp3725[4U] = 0U;
        __Vtemp3725[5U] = 0U;
        __Vtemp3725[6U] = 0U;
        __Vtemp3725[7U] = 0U;
        __Vtemp3725[8U] = 0U;
        __Vtemp3725[9U] = 0U;
        __Vtemp3725[0xaU] = 0U;
        __Vtemp3725[0xbU] = 0U;
        __Vtemp3725[0xcU] = 0U;
        __Vtemp3725[0xdU] = 0U;
        __Vtemp3725[0xeU] = 0U;
        __Vtemp3725[0xfU] = 0U;
        __Vtemp3725[0x10U] = 0U;
        __Vtemp3725[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3726, __Vtemp3725);
        __Vtemp3731[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3731[1U] = 0U;
        __Vtemp3731[2U] = 0U;
        __Vtemp3731[3U] = 0U;
        __Vtemp3731[4U] = 0U;
        __Vtemp3731[5U] = 0U;
        __Vtemp3731[6U] = 0U;
        __Vtemp3731[7U] = 0U;
        __Vtemp3731[8U] = 0U;
        __Vtemp3731[9U] = 0U;
        __Vtemp3731[0xaU] = 0U;
        __Vtemp3731[0xbU] = 0U;
        __Vtemp3731[0xcU] = 0U;
        __Vtemp3731[0xdU] = 0U;
        __Vtemp3731[0xeU] = 0U;
        __Vtemp3731[0xfU] = 0U;
        __Vtemp3731[0x10U] = 0U;
        __Vtemp3731[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3732, __Vtemp3731);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1))) 
                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                   [0U] == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                   [0U])))) & (~ ((
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                                    [0U] 
                                                    == 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & __Vtemp3714[0U]))
                                                      ? 4U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & __Vtemp3720[0U]))
                                                       ? 4U
                                                       : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___GEN_46)))) 
                                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                                      [0U] 
                                                      == 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & __Vtemp3726[0U]))
                                                        ? 4U
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & __Vtemp3732[0U]))
                                                         ? 5U
                                                         : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___GEN_46))))) 
                                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136886: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136886, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136894:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(576,576,11, __Vtemp3735, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes, 
                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                       [0U] << 2U));
        __Vtemp3738[0U] = (7U & (__Vtemp3735[0U] >> 1U));
        __Vtemp3738[1U] = 0U;
        __Vtemp3738[2U] = 0U;
        __Vtemp3738[3U] = 0U;
        __Vtemp3738[4U] = 0U;
        __Vtemp3738[5U] = 0U;
        __Vtemp3738[6U] = 0U;
        __Vtemp3738[7U] = 0U;
        __Vtemp3738[8U] = 0U;
        __Vtemp3738[9U] = 0U;
        __Vtemp3738[0xaU] = 0U;
        __Vtemp3738[0xbU] = 0U;
        __Vtemp3738[0xcU] = 0U;
        __Vtemp3738[0xdU] = 0U;
        __Vtemp3738[0xeU] = 0U;
        __Vtemp3738[0xfU] = 0U;
        __Vtemp3738[0x10U] = 0U;
        __Vtemp3738[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3739, __Vtemp3738);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1))) 
                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                   [0U] == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                   [0U])))) & (~ ((
                                                   vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_size
                                                   [0U] 
                                                   == 
                                                   (0xfU 
                                                    & __Vtemp3739[0U])) 
                                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Configs.scala:128:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136907:11
done_reset        
    ) {
        VL_SHIFTR_WWI(576,576,11, __Vtemp3742, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes, 
                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                       [0U] << 2U));
        __Vtemp3745[0U] = (7U & (__Vtemp3742[0U] >> 1U));
        __Vtemp3745[1U] = 0U;
        __Vtemp3745[2U] = 0U;
        __Vtemp3745[3U] = 0U;
        __Vtemp3745[4U] = 0U;
        __Vtemp3745[5U] = 0U;
        __Vtemp3745[6U] = 0U;
        __Vtemp3745[7U] = 0U;
        __Vtemp3745[8U] = 0U;
        __Vtemp3745[9U] = 0U;
        __Vtemp3745[0xaU] = 0U;
        __Vtemp3745[0xbU] = 0U;
        __Vtemp3745[0xcU] = 0U;
        __Vtemp3745[0xdU] = 0U;
        __Vtemp3745[0xeU] = 0U;
        __Vtemp3745[0xfU] = 0U;
        __Vtemp3745[0x10U] = 0U;
        __Vtemp3745[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3746, __Vtemp3745);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1))) 
                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                   [0U] == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                   [0U])))) & (~ ((
                                                   vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_size
                                                   [0U] 
                                                   == 
                                                   (0xfU 
                                                    & __Vtemp3746[0U])) 
                                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136910: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136910, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136918:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1))) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full)) 
                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                             [0U] == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                             [0U])) & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_a_ready)) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136929:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1))) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full)) 
                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                             [0U] == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                             [0U])) & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_a_ready)) 
                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136932: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136932, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136940:11
verbose&&done_reset        
    ) {
        __Vtemp3748[0U] = 1U;
        __Vtemp3748[1U] = 0U;
        __Vtemp3748[2U] = 0U;
        __Vtemp3748[3U] = 0U;
        __Vtemp3748[4U] = 0U;
        __Vtemp3748[5U] = 0U;
        __Vtemp3748[6U] = 0U;
        __Vtemp3748[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp3749, __Vtemp3748, 
                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                      [0U]);
        __Vtemp3756[0U] = 1U;
        __Vtemp3756[1U] = 0U;
        __Vtemp3756[2U] = 0U;
        __Vtemp3756[3U] = 0U;
        __Vtemp3756[4U] = 0U;
        __Vtemp3756[5U] = 0U;
        __Vtemp3756[6U] = 0U;
        __Vtemp3756[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp3757, __Vtemp3756, 
                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                      [0U]);
        __Vtemp3764[0U] = 1U;
        __Vtemp3764[1U] = 0U;
        __Vtemp3764[2U] = 0U;
        __Vtemp3764[3U] = 0U;
        __Vtemp3764[4U] = 0U;
        __Vtemp3764[5U] = 0U;
        __Vtemp3764[6U] = 0U;
        __Vtemp3764[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp3765, __Vtemp3764, 
                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                      [0U]);
        if (VL_UNLIKELY((1U & (~ (((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp3749[0U]
                                                 : 0U) 
                                               ^ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp3757[0U]
                                                   : 0U)) 
                                              | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp3749[1U]
                                                   : 0U) 
                                                 ^ 
                                                 (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp3757[1U]
                                                   : 0U))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                  ? 
                                                 __Vtemp3749[2U]
                                                  : 0U) 
                                                ^ (
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp3757[2U]
                                                    : 0U))) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp3749[3U]
                                                 : 0U) 
                                               ^ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp3757[3U]
                                                   : 0U))) 
                                           | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                ? (0xffffU 
                                                   & __Vtemp3749[4U])
                                                : 0U) 
                                              ^ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                                  ? 
                                                 (0xffffU 
                                                  & __Vtemp3757[4U])
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp3765[0U]
                                                       : 0U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp3765[1U]
                                                         : 0U)) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                        & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp3765[2U]
                                                        : 0U)) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp3765[3U]
                                                       : 0U)) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                      ? 
                                                     (0xffffU 
                                                      & __Vtemp3765[4U])
                                                      : 0U)))))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at Configs.scala:128:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136953:11
done_reset        
    ) {
        __Vtemp3772[0U] = 1U;
        __Vtemp3772[1U] = 0U;
        __Vtemp3772[2U] = 0U;
        __Vtemp3772[3U] = 0U;
        __Vtemp3772[4U] = 0U;
        __Vtemp3772[5U] = 0U;
        __Vtemp3772[6U] = 0U;
        __Vtemp3772[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp3773, __Vtemp3772, 
                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                      [0U]);
        __Vtemp3780[0U] = 1U;
        __Vtemp3780[1U] = 0U;
        __Vtemp3780[2U] = 0U;
        __Vtemp3780[3U] = 0U;
        __Vtemp3780[4U] = 0U;
        __Vtemp3780[5U] = 0U;
        __Vtemp3780[6U] = 0U;
        __Vtemp3780[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp3781, __Vtemp3780, 
                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                      [0U]);
        __Vtemp3788[0U] = 1U;
        __Vtemp3788[1U] = 0U;
        __Vtemp3788[2U] = 0U;
        __Vtemp3788[3U] = 0U;
        __Vtemp3788[4U] = 0U;
        __Vtemp3788[5U] = 0U;
        __Vtemp3788[6U] = 0U;
        __Vtemp3788[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp3789, __Vtemp3788, 
                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                      [0U]);
        if (VL_UNLIKELY((1U & (~ (((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp3773[0U]
                                                 : 0U) 
                                               ^ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp3781[0U]
                                                   : 0U)) 
                                              | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp3773[1U]
                                                   : 0U) 
                                                 ^ 
                                                 (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp3781[1U]
                                                   : 0U))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                  ? 
                                                 __Vtemp3773[2U]
                                                  : 0U) 
                                                ^ (
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp3781[2U]
                                                    : 0U))) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp3773[3U]
                                                 : 0U) 
                                               ^ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp3781[3U]
                                                   : 0U))) 
                                           | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                ? (0xffffU 
                                                   & __Vtemp3773[4U])
                                                : 0U) 
                                              ^ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                                  ? 
                                                 (0xffffU 
                                                  & __Vtemp3781[4U])
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp3789[0U]
                                                       : 0U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp3789[1U]
                                                         : 0U)) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                        & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp3789[2U]
                                                        : 0U)) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp3789[3U]
                                                       : 0U)) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                                      ? 
                                                     (0xffffU 
                                                      & __Vtemp3789[4U])
                                                      : 0U)))))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136956: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136956, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136964:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:136977:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:136980: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 136980, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:137036:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0U] 
                                                    | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[1U]) 
                                                   | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[2U]) 
                                                  | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[3U]) 
                                                 | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:137049:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0U] 
                                                    | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[1U]) 
                                                   | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[2U]) 
                                                  | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[3U]) 
                                                 | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:137052: Assertion failed in %NTestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 137052, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1910(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1910\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1911(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1911\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_corrupt__v0 = 0U;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:201580:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__load_wb) 
                         & (~ (((~ (IData)((7U == (7U 
                                                   & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata[1U] 
                                                         >> 0x1dU)))))) 
                                | ((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata[1U] 
                                          >> 0x1cU)) 
                                   == (0xfffffU == 
                                       (0xfffffU & 
                                        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata[1U])))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at FPU.scala:800 assert(consistent(wdata))\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:201591:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__load_wb) 
                         & (~ (((~ (IData)((7U == (7U 
                                                   & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata[1U] 
                                                         >> 0x1dU)))))) 
                                | ((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata[1U] 
                                          >> 0x1cU)) 
                                   == (0xfffffU == 
                                       (0xfffffU & 
                                        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata[1U])))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:201594: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.fpuOpt\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 201594, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:201602:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wen) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt_wen)) 
                               & (~ (((~ (IData)((7U 
                                                  == 
                                                  (7U 
                                                   & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata_1[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata_1[1U] 
                                                         >> 0x1dU)))))) 
                                      | ((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata_1[1U] 
                                                >> 0x1cU)) 
                                         == (0xfffffU 
                                             == (0xfffffU 
                                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata_1[1U])))) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at FPU.scala:938 assert(consistent(wdata))\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:201613:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wen) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt_wen)) 
                               & (~ (((~ (IData)((7U 
                                                  == 
                                                  (7U 
                                                   & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata_1[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata_1[1U] 
                                                         >> 0x1dU)))))) 
                                      | ((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata_1[1U] 
                                                >> 0x1cU)) 
                                         == (0xfffffU 
                                             == (0xfffffU 
                                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata_1[1U])))) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:201616: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.fpuOpt\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 201616, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1912(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1912\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:50208:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                      >> 2U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:309 assert (!repeater.io.full || !aHasData)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:50220:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                      >> 2U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:50223: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 50223, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:50231:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | (0xffU == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                                 ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:312 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:50244:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | (0xffU == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                                 ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:50247: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 50247, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1913(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1913\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp3796[5];
    WData/*159:0*/ __Vtemp3799[5];
    WData/*159:0*/ __Vtemp3802[5];
    WData/*159:0*/ __Vtemp3805[5];
    WData/*575:0*/ __Vtemp3811[18];
    WData/*575:0*/ __Vtemp3812[18];
    WData/*575:0*/ __Vtemp3817[18];
    WData/*575:0*/ __Vtemp3818[18];
    WData/*575:0*/ __Vtemp3823[18];
    WData/*575:0*/ __Vtemp3824[18];
    WData/*575:0*/ __Vtemp3829[18];
    WData/*575:0*/ __Vtemp3830[18];
    WData/*575:0*/ __Vtemp3835[18];
    WData/*575:0*/ __Vtemp3836[18];
    WData/*575:0*/ __Vtemp3841[18];
    WData/*575:0*/ __Vtemp3842[18];
    WData/*575:0*/ __Vtemp3847[18];
    WData/*575:0*/ __Vtemp3848[18];
    WData/*575:0*/ __Vtemp3853[18];
    WData/*575:0*/ __Vtemp3854[18];
    WData/*575:0*/ __Vtemp3857[18];
    WData/*575:0*/ __Vtemp3860[18];
    WData/*575:0*/ __Vtemp3861[18];
    WData/*575:0*/ __Vtemp3864[18];
    WData/*575:0*/ __Vtemp3867[18];
    WData/*575:0*/ __Vtemp3868[18];
    WData/*255:0*/ __Vtemp3870[8];
    WData/*255:0*/ __Vtemp3871[8];
    WData/*255:0*/ __Vtemp3878[8];
    WData/*255:0*/ __Vtemp3879[8];
    WData/*255:0*/ __Vtemp3886[8];
    WData/*255:0*/ __Vtemp3887[8];
    WData/*255:0*/ __Vtemp3894[8];
    WData/*255:0*/ __Vtemp3895[8];
    WData/*255:0*/ __Vtemp3902[8];
    WData/*255:0*/ __Vtemp3903[8];
    WData/*255:0*/ __Vtemp3910[8];
    WData/*255:0*/ __Vtemp3911[8];
    WData/*159:0*/ __Vtemp3918[5];
    WData/*159:0*/ __Vtemp3921[5];
    WData/*575:0*/ __Vtemp3925[18];
    WData/*575:0*/ __Vtemp3928[18];
    WData/*575:0*/ __Vtemp3929[18];
    WData/*575:0*/ __Vtemp3932[18];
    WData/*575:0*/ __Vtemp3935[18];
    WData/*575:0*/ __Vtemp3936[18];
    // Body
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43325:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43338:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43341: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43341, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43349:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43362:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43365: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43365, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43373:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43386:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43389: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43389, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43397:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43410:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43413: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43413, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43421:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43434:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43437: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43437, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43445:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43458:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43461: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43461, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43469:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43482:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43485: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43485, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43493:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43506:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43509: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43509, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43517:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43530:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43533: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43533, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43541:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43554:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43557: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43557, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43565:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43578:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43581: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43581, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43589:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43602:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43605: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43605, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43613:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43626:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43629: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43629, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43637:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43650:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43653: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43653, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43661:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43674:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43677: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43677, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43685:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43698:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43701: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43701, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43709:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43722:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43725: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43725, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43733:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43746:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43749: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43749, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43757:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x3ff000U & 
                                       (0x100000U ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43770:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x3ff000U & 
                                       (0x100000U ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43773: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43773, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43781:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43794:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43797: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43797, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43805:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43818:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43821: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43821, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43829:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43842:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43845: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43845, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43853:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43866:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43869: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43869, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43877:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43890:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43893: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43893, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43901:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                                & (0U == (0x3ff000U 
                                          & (0x100000U 
                                             ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43914:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                                & (0U == (0x3ff000U 
                                          & (0x100000U 
                                             ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43917: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43917, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43925:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43938:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43941: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43941, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43949:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43962:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43965: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43965, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43973:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43986:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:43989: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 43989, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:43997:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44010:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44013: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44013, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44021:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                                & (0U == (0x3ff000U 
                                          & (0x100000U 
                                             ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44034:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                                & (0U == (0x3ff000U 
                                          & (0x100000U 
                                             ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44037: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44037, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44045:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44058:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44061: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44061, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44069:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44082:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44085: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44085, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44093:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44106:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44109: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44109, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44117:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44130:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44133: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44133, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44141:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44154:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44157: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44157, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44165:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44178:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44181: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44181, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44189:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44202:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44205: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44205, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44213:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44226:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44229: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44229, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44237:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44250:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44253: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44253, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44261:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44274:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44277: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44277, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44285:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44298:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44301: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44301, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44309:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44322:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44325: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44325, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44333:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44346:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44349: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44349, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44357:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44370:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44373: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44373, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44381:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44394:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44397: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44397, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44405:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44418:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44421: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44421, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44429:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44442:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             & (~ (0x3fU 
                                                   & ((IData)(7U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44445: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44445, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44453:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44466:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44469: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44469, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44477:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44490:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44493: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44493, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44501:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44514:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44517: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44517, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44525:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44538:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44541: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44541, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44549:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44562:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44565: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44565, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44573:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44586:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44589: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44589, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44597:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44610:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44613: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44613, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44621:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44634:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44637: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44637, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44645:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44658:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44661: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44661, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44669:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44682:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44685: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44685, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44693:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44706:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44709: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44709, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44717:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44730:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44733: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44733, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44741:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44754:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44757: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44757, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44765:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44778:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44781: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44781, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44789:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44802:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44805: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44805, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44813:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44826:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44829: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44829, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44837:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44850:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44853: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44853, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44861:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44874:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44877: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44877, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44885:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44898:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44901: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44901, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44909:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44922:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44925: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44925, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44933:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44946:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44949: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44949, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44957:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44970:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44973: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44973, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44981:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:44994:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:44997: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 44997, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45005:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45018:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45021: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45021, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45029:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45042:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45045: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45045, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45053:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45066:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45069: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45069, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45077:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45090:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45093: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45093, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45101:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45114:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45117: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45117, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45125:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45138:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45141: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45141, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45149:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45162:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45165: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45165, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45173:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45186:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45189: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45189, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45197:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45210:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x8fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45213: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45213, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45221:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45234:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45237: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45237, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45245:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45258:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45261: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45261, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45269:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45282:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45285: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45285, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45293:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45306:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45309: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45309, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45317:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45330:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45333: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45333, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45341:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45354:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45357: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45357, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45365:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45378:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45381: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45381, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45389:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45402:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45405: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45405, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45413:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45426:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45429: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45429, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45437:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45450:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45453: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45453, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45461:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45474:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45477: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45477, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45485:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45498:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45501: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45501, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45509:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45522:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45525: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45525, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45533:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45546:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45549: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45549, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45557:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(144,144,8, __Vtemp3796, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp3796[0U]) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45570:11
done_reset        
    ) {
        VL_SHIFTR_WWI(144,144,8, __Vtemp3799, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp3799[0U]) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45573: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45573, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45581:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(144,144,8, __Vtemp3802, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((__Vtemp3802[0U] | (
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source) 
                                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45594:11
done_reset        
    ) {
        VL_SHIFTR_WWI(144,144,8, __Vtemp3805, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((__Vtemp3805[0U] | (
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source) 
                                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45597: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45597, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45605:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45618:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45621: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45621, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45629:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45642:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag)) 
                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45645: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45645, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45653:11
verbose&&done_reset        
    ) {
        __Vtemp3811[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3811[1U] = 0U;
        __Vtemp3811[2U] = 0U;
        __Vtemp3811[3U] = 0U;
        __Vtemp3811[4U] = 0U;
        __Vtemp3811[5U] = 0U;
        __Vtemp3811[6U] = 0U;
        __Vtemp3811[7U] = 0U;
        __Vtemp3811[8U] = 0U;
        __Vtemp3811[9U] = 0U;
        __Vtemp3811[0xaU] = 0U;
        __Vtemp3811[0xbU] = 0U;
        __Vtemp3811[0xcU] = 0U;
        __Vtemp3811[0xdU] = 0U;
        __Vtemp3811[0xeU] = 0U;
        __Vtemp3811[0xfU] = 0U;
        __Vtemp3811[0x10U] = 0U;
        __Vtemp3811[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3812, __Vtemp3811);
        __Vtemp3817[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3817[1U] = 0U;
        __Vtemp3817[2U] = 0U;
        __Vtemp3817[3U] = 0U;
        __Vtemp3817[4U] = 0U;
        __Vtemp3817[5U] = 0U;
        __Vtemp3817[6U] = 0U;
        __Vtemp3817[7U] = 0U;
        __Vtemp3817[8U] = 0U;
        __Vtemp3817[9U] = 0U;
        __Vtemp3817[0xaU] = 0U;
        __Vtemp3817[0xbU] = 0U;
        __Vtemp3817[0xcU] = 0U;
        __Vtemp3817[0xdU] = 0U;
        __Vtemp3817[0xeU] = 0U;
        __Vtemp3817[0xfU] = 0U;
        __Vtemp3817[0x10U] = 0U;
        __Vtemp3817[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3818, __Vtemp3817);
        __Vtemp3823[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3823[1U] = 0U;
        __Vtemp3823[2U] = 0U;
        __Vtemp3823[3U] = 0U;
        __Vtemp3823[4U] = 0U;
        __Vtemp3823[5U] = 0U;
        __Vtemp3823[6U] = 0U;
        __Vtemp3823[7U] = 0U;
        __Vtemp3823[8U] = 0U;
        __Vtemp3823[9U] = 0U;
        __Vtemp3823[0xaU] = 0U;
        __Vtemp3823[0xbU] = 0U;
        __Vtemp3823[0xcU] = 0U;
        __Vtemp3823[0xdU] = 0U;
        __Vtemp3823[0xeU] = 0U;
        __Vtemp3823[0xfU] = 0U;
        __Vtemp3823[0x10U] = 0U;
        __Vtemp3823[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3824, __Vtemp3823);
        __Vtemp3829[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3829[1U] = 0U;
        __Vtemp3829[2U] = 0U;
        __Vtemp3829[3U] = 0U;
        __Vtemp3829[4U] = 0U;
        __Vtemp3829[5U] = 0U;
        __Vtemp3829[6U] = 0U;
        __Vtemp3829[7U] = 0U;
        __Vtemp3829[8U] = 0U;
        __Vtemp3829[9U] = 0U;
        __Vtemp3829[0xaU] = 0U;
        __Vtemp3829[0xbU] = 0U;
        __Vtemp3829[0xcU] = 0U;
        __Vtemp3829[0xdU] = 0U;
        __Vtemp3829[0xeU] = 0U;
        __Vtemp3829[0xfU] = 0U;
        __Vtemp3829[0x10U] = 0U;
        __Vtemp3829[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3830, __Vtemp3829);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & __Vtemp3812[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp3818[0U]))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & 
                                               __Vtemp3824[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp3830[0U]))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45666:11
done_reset        
    ) {
        __Vtemp3835[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3835[1U] = 0U;
        __Vtemp3835[2U] = 0U;
        __Vtemp3835[3U] = 0U;
        __Vtemp3835[4U] = 0U;
        __Vtemp3835[5U] = 0U;
        __Vtemp3835[6U] = 0U;
        __Vtemp3835[7U] = 0U;
        __Vtemp3835[8U] = 0U;
        __Vtemp3835[9U] = 0U;
        __Vtemp3835[0xaU] = 0U;
        __Vtemp3835[0xbU] = 0U;
        __Vtemp3835[0xcU] = 0U;
        __Vtemp3835[0xdU] = 0U;
        __Vtemp3835[0xeU] = 0U;
        __Vtemp3835[0xfU] = 0U;
        __Vtemp3835[0x10U] = 0U;
        __Vtemp3835[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3836, __Vtemp3835);
        __Vtemp3841[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3841[1U] = 0U;
        __Vtemp3841[2U] = 0U;
        __Vtemp3841[3U] = 0U;
        __Vtemp3841[4U] = 0U;
        __Vtemp3841[5U] = 0U;
        __Vtemp3841[6U] = 0U;
        __Vtemp3841[7U] = 0U;
        __Vtemp3841[8U] = 0U;
        __Vtemp3841[9U] = 0U;
        __Vtemp3841[0xaU] = 0U;
        __Vtemp3841[0xbU] = 0U;
        __Vtemp3841[0xcU] = 0U;
        __Vtemp3841[0xdU] = 0U;
        __Vtemp3841[0xeU] = 0U;
        __Vtemp3841[0xfU] = 0U;
        __Vtemp3841[0x10U] = 0U;
        __Vtemp3841[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3842, __Vtemp3841);
        __Vtemp3847[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3847[1U] = 0U;
        __Vtemp3847[2U] = 0U;
        __Vtemp3847[3U] = 0U;
        __Vtemp3847[4U] = 0U;
        __Vtemp3847[5U] = 0U;
        __Vtemp3847[6U] = 0U;
        __Vtemp3847[7U] = 0U;
        __Vtemp3847[8U] = 0U;
        __Vtemp3847[9U] = 0U;
        __Vtemp3847[0xaU] = 0U;
        __Vtemp3847[0xbU] = 0U;
        __Vtemp3847[0xcU] = 0U;
        __Vtemp3847[0xdU] = 0U;
        __Vtemp3847[0xeU] = 0U;
        __Vtemp3847[0xfU] = 0U;
        __Vtemp3847[0x10U] = 0U;
        __Vtemp3847[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3848, __Vtemp3847);
        __Vtemp3853[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp3853[1U] = 0U;
        __Vtemp3853[2U] = 0U;
        __Vtemp3853[3U] = 0U;
        __Vtemp3853[4U] = 0U;
        __Vtemp3853[5U] = 0U;
        __Vtemp3853[6U] = 0U;
        __Vtemp3853[7U] = 0U;
        __Vtemp3853[8U] = 0U;
        __Vtemp3853[9U] = 0U;
        __Vtemp3853[0xaU] = 0U;
        __Vtemp3853[0xbU] = 0U;
        __Vtemp3853[0xcU] = 0U;
        __Vtemp3853[0xdU] = 0U;
        __Vtemp3853[0xeU] = 0U;
        __Vtemp3853[0xfU] = 0U;
        __Vtemp3853[0x10U] = 0U;
        __Vtemp3853[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3854, __Vtemp3853);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & __Vtemp3836[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp3842[0U]))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & 
                                               __Vtemp3848[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp3854[0U]))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45669: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45669, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45677:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(576,576,11, __Vtemp3857, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp3860[0U] = (7U & (__Vtemp3857[0U] >> 1U));
        __Vtemp3860[1U] = 0U;
        __Vtemp3860[2U] = 0U;
        __Vtemp3860[3U] = 0U;
        __Vtemp3860[4U] = 0U;
        __Vtemp3860[5U] = 0U;
        __Vtemp3860[6U] = 0U;
        __Vtemp3860[7U] = 0U;
        __Vtemp3860[8U] = 0U;
        __Vtemp3860[9U] = 0U;
        __Vtemp3860[0xaU] = 0U;
        __Vtemp3860[0xbU] = 0U;
        __Vtemp3860[0xcU] = 0U;
        __Vtemp3860[0xdU] = 0U;
        __Vtemp3860[0xeU] = 0U;
        __Vtemp3860[0xfU] = 0U;
        __Vtemp3860[0x10U] = 0U;
        __Vtemp3860[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3861, __Vtemp3860);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & __Vtemp3861[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45690:11
done_reset        
    ) {
        VL_SHIFTR_WWI(576,576,11, __Vtemp3864, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp3867[0U] = (7U & (__Vtemp3864[0U] >> 1U));
        __Vtemp3867[1U] = 0U;
        __Vtemp3867[2U] = 0U;
        __Vtemp3867[3U] = 0U;
        __Vtemp3867[4U] = 0U;
        __Vtemp3867[5U] = 0U;
        __Vtemp3867[6U] = 0U;
        __Vtemp3867[7U] = 0U;
        __Vtemp3867[8U] = 0U;
        __Vtemp3867[9U] = 0U;
        __Vtemp3867[0xaU] = 0U;
        __Vtemp3867[0xbU] = 0U;
        __Vtemp3867[0xcU] = 0U;
        __Vtemp3867[0xdU] = 0U;
        __Vtemp3867[0xeU] = 0U;
        __Vtemp3867[0xfU] = 0U;
        __Vtemp3867[0x10U] = 0U;
        __Vtemp3867[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3868, __Vtemp3867);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & __Vtemp3868[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45693: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45693, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45701:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_d_ready)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45712:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_d_ready)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45715: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45715, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45723:11
verbose&&done_reset        
    ) {
        __Vtemp3870[0U] = 1U;
        __Vtemp3870[1U] = 0U;
        __Vtemp3870[2U] = 0U;
        __Vtemp3870[3U] = 0U;
        __Vtemp3870[4U] = 0U;
        __Vtemp3870[5U] = 0U;
        __Vtemp3870[6U] = 0U;
        __Vtemp3870[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp3871, __Vtemp3870, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source));
        __Vtemp3878[0U] = 1U;
        __Vtemp3878[1U] = 0U;
        __Vtemp3878[2U] = 0U;
        __Vtemp3878[3U] = 0U;
        __Vtemp3878[4U] = 0U;
        __Vtemp3878[5U] = 0U;
        __Vtemp3878[6U] = 0U;
        __Vtemp3878[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp3879, __Vtemp3878, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp3886[0U] = 1U;
        __Vtemp3886[1U] = 0U;
        __Vtemp3886[2U] = 0U;
        __Vtemp3886[3U] = 0U;
        __Vtemp3886[4U] = 0U;
        __Vtemp3886[5U] = 0U;
        __Vtemp3886[6U] = 0U;
        __Vtemp3886[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp3887, __Vtemp3886, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((1U & (~ (((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp3871[0U]
                                                 : 0U) 
                                               ^ ((
                                                   ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp3879[0U]
                                                   : 0U)) 
                                              | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp3871[1U]
                                                   : 0U) 
                                                 ^ 
                                                 ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp3879[1U]
                                                   : 0U))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 __Vtemp3871[2U]
                                                  : 0U) 
                                                ^ (
                                                   (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp3879[2U]
                                                    : 0U))) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp3871[3U]
                                                 : 0U) 
                                               ^ ((
                                                   ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp3879[3U]
                                                   : 0U))) 
                                           | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                ? (0xffffU 
                                                   & __Vtemp3871[4U])
                                                : 0U) 
                                              ^ (((
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                  ? 
                                                 (0xffffU 
                                                  & __Vtemp3879[4U])
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp3887[0U]
                                                       : 0U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp3887[1U]
                                                         : 0U)) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                        & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp3887[2U]
                                                        : 0U)) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp3887[3U]
                                                       : 0U)) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                      ? 
                                                     (0xffffU 
                                                      & __Vtemp3887[4U])
                                                      : 0U)))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45736:11
done_reset        
    ) {
        __Vtemp3894[0U] = 1U;
        __Vtemp3894[1U] = 0U;
        __Vtemp3894[2U] = 0U;
        __Vtemp3894[3U] = 0U;
        __Vtemp3894[4U] = 0U;
        __Vtemp3894[5U] = 0U;
        __Vtemp3894[6U] = 0U;
        __Vtemp3894[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp3895, __Vtemp3894, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source));
        __Vtemp3902[0U] = 1U;
        __Vtemp3902[1U] = 0U;
        __Vtemp3902[2U] = 0U;
        __Vtemp3902[3U] = 0U;
        __Vtemp3902[4U] = 0U;
        __Vtemp3902[5U] = 0U;
        __Vtemp3902[6U] = 0U;
        __Vtemp3902[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp3903, __Vtemp3902, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp3910[0U] = 1U;
        __Vtemp3910[1U] = 0U;
        __Vtemp3910[2U] = 0U;
        __Vtemp3910[3U] = 0U;
        __Vtemp3910[4U] = 0U;
        __Vtemp3910[5U] = 0U;
        __Vtemp3910[6U] = 0U;
        __Vtemp3910[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp3911, __Vtemp3910, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((1U & (~ (((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp3895[0U]
                                                 : 0U) 
                                               ^ ((
                                                   ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp3903[0U]
                                                   : 0U)) 
                                              | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp3895[1U]
                                                   : 0U) 
                                                 ^ 
                                                 ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp3903[1U]
                                                   : 0U))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 __Vtemp3895[2U]
                                                  : 0U) 
                                                ^ (
                                                   (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp3903[2U]
                                                    : 0U))) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp3895[3U]
                                                 : 0U) 
                                               ^ ((
                                                   ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp3903[3U]
                                                   : 0U))) 
                                           | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                ? (0xffffU 
                                                   & __Vtemp3895[4U])
                                                : 0U) 
                                              ^ (((
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                  ? 
                                                 (0xffffU 
                                                  & __Vtemp3903[4U])
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp3911[0U]
                                                       : 0U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp3911[1U]
                                                         : 0U)) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                        & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp3911[2U]
                                                        : 0U)) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp3911[3U]
                                                       : 0U)) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                      ? 
                                                     (0xffffU 
                                                      & __Vtemp3911[4U])
                                                      : 0U)))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45739: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45739, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45747:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45760:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45763: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45763, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45771:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(144,144,8, __Vtemp3918, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (__Vtemp3918[0U] | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45784:11
done_reset        
    ) {
        VL_SHIFTR_WWI(144,144,8, __Vtemp3921, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (__Vtemp3921[0U] | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45787: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45787, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45795:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(576,576,11, __Vtemp3925, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp3928[0U] = (7U & (__Vtemp3925[0U] >> 1U));
        __Vtemp3928[1U] = 0U;
        __Vtemp3928[2U] = 0U;
        __Vtemp3928[3U] = 0U;
        __Vtemp3928[4U] = 0U;
        __Vtemp3928[5U] = 0U;
        __Vtemp3928[6U] = 0U;
        __Vtemp3928[7U] = 0U;
        __Vtemp3928[8U] = 0U;
        __Vtemp3928[9U] = 0U;
        __Vtemp3928[0xaU] = 0U;
        __Vtemp3928[0xbU] = 0U;
        __Vtemp3928[0xcU] = 0U;
        __Vtemp3928[0xdU] = 0U;
        __Vtemp3928[0xeU] = 0U;
        __Vtemp3928[0xfU] = 0U;
        __Vtemp3928[0x10U] = 0U;
        __Vtemp3928[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3929, __Vtemp3928);
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & __Vtemp3929[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45808:11
done_reset        
    ) {
        VL_SHIFTR_WWI(576,576,11, __Vtemp3932, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp3935[0U] = (7U & (__Vtemp3932[0U] >> 1U));
        __Vtemp3935[1U] = 0U;
        __Vtemp3935[2U] = 0U;
        __Vtemp3935[3U] = 0U;
        __Vtemp3935[4U] = 0U;
        __Vtemp3935[5U] = 0U;
        __Vtemp3935[6U] = 0U;
        __Vtemp3935[7U] = 0U;
        __Vtemp3935[8U] = 0U;
        __Vtemp3935[9U] = 0U;
        __Vtemp3935[0xaU] = 0U;
        __Vtemp3935[0xbU] = 0U;
        __Vtemp3935[0xcU] = 0U;
        __Vtemp3935[0xdU] = 0U;
        __Vtemp3935[0xeU] = 0U;
        __Vtemp3935[0xfU] = 0U;
        __Vtemp3935[0x10U] = 0U;
        __Vtemp3935[0x11U] = 0U;
        VL_EXTEND_WW(576,575, __Vtemp3936, __Vtemp3935);
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xfU & __Vtemp3936[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45811: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45811, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45819:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[3U]) 
                                                 | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:45832:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[3U]) 
                                                 | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:45835: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 45835, "");
        }
    }
}
