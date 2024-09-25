#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::monitor_data_store
{
    // [OpenGlobalGraphicsDriverKey@MonitorDataStore@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3ba370, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) open_global_graphics_driver_key;
    
    // [OpenMonitorDataStore@MonitorDataStore@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3ba3a0, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) open_monitor_data_store;
    
    // [OpenMonitorPnpKey@MonitorDataStore@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x215b70, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) open_monitor_pnp_key;
    
    // [ReadBoolWithDefault@MonitorDataStore@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d5b40, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) read_bool_with_default;
    
    // [ReadDWordWithDefault@MonitorDataStore@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x215df0, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) read_d_word_with_default;
    
    // [TryReadBool@MonitorDataStore@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3ba530, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) try_read_bool;
    
    // [TryReadDWord@MonitorDataStore@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3ba570, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) try_read_d_word;
    
    // [TryReadQWord@MonitorDataStore@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x212eb0, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) try_read_q_word;
    
    // [WriteBool@MonitorDataStore@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3ba5d0, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) write_bool;
    
    // [WriteDWord@MonitorDataStore@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3ba5f0, 0x84380 bytes
    //
    _m9(sdk::unknown_ptr) write_d_word;
    
    // [WriteQWord@MonitorDataStore@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3ba680, 0x84380 bytes
    //
    _n0(sdk::unknown_ptr) write_q_word;
};
#include "magic/api.end.hpp"
