#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::cttmdevice
{
    // [??0CTTMDEVICE@@QEAA@W4TTM_DEVICE_TYPE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x204390, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0CTTMDEVICE@@AEAA@W4TTM_DEVICE_TYPE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf1520, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x176c10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16aa1c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [CloseCallback@CTTMDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x181230, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x298f60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x348240, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x299000, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) close_callback;
    
    // [Initialize@CTTMDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf1570, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17166c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fd710, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16ac5c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [RegisterTtmDevice@CTTMDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x181638, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2996e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x348a7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x299784, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) register_ttm_device;
    
    // [SetDisplayStateCallback@CTTMDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x181870, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x299a90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x348f80, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x299b30, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) set_display_state_callback;
    
    // [UnRegisterTtmDevice@CTTMDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x181b88, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29a408, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x349a34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29a4a8, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) un_register_ttm_device;
};
#include "magic/api.end.hpp"
