#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvidpntargetmode
{
    // [??0DMMVIDPNTARGETMODE@@QEAA@IW4_D3DKMDT_MODE_PREFERENCE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x2d8c, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0DMMVIDPNTARGETMODE@@QEAA@I@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0xbcd8, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??0DMMVIDPNTARGETMODE@@QEAA@AEBV0@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0xb88c, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance__;
    
    // [Initialize@DMMVIDPNTARGETMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0xbaf8, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [SupportVirtualRefreshRate@DMMVIDPNTARGETMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1af74c, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) support_virtual_refresh_rate;
    
    // [??0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x581bc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5834c, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) construct_instance___;
    
    // [IsFirmwareRecommendedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x59b50, 0x762b0 bytes
    // dxgkrnl.sys .text:0x694dc, 0x84380 bytes
    // dxgkrnl.sys .text:0x59ce0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) is_firmware_recommended_wireformat_and_color_space_valid;
    
    // [Serialize@DMMVIDPNTARGETMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x12e8c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6aa1c, 0x84380 bytes
    // dxgkrnl.sys .text:0x12f70, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) serialize;
    
    // [IsSupportedByMonitor@DMMVIDPNTARGETMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x764bc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10e7a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1aeeec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11a7d8, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) is_supported_by_monitor;
};
#include "magic/api.end.hpp"
