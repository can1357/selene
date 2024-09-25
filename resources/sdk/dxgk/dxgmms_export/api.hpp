#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgmms_export
{
    // [FindExportAddress@DXGMMS_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf2074, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17f510, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x212188, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x182680, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) find_export_address;
    
    // [Initialize@DXGMMS_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf1f38, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17f3b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x212030, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x182520, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [Release@DXGMMS_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16e3b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27158c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x31881c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2716ec, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
