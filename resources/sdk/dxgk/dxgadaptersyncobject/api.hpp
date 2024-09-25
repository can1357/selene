#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgadaptersyncobject
{
    // [AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x78bac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x158904, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19c0fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15b754, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) adapter_object_signal_fence;
    
    // [??0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x78954, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x102c78, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19a264, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10ec48, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGADAPTERSYNCOBJECT@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x78a90, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x106a94, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19e408, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x112acc, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [InitializeAdapterObject@DXGADAPTERSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x78970, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x102fcc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x199a48, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10ef9c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) initialize_adapter_object;
    
    // [ReportAdapterObjectState@DXGADAPTERSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17828c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28c338, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3416c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28c3b8, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) report_adapter_object_state;
    
    // [Stop@DXGADAPTERSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1481b8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28cf74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x221692, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28cff4, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) stop;
};
#include "magic/api.end.hpp"
