#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_purge_telemetry
{
    // [AddData@VIDMM_PURGE_TELEMETRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc0814, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe4d2c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc0de4, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) add_data;
    
    // [??0VIDMM_PURGE_TELEMETRY@@QEAA@PEAVVIDMM_GLOBAL@@@Z]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x92dfc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xaf824, 0x20ba bytes
    // dxgmms2.sys PAGE:0x934d4, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [LogBucket@VIDMM_PURGE_TELEMETRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc0ab0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe5238, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc1080, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) log_bucket;
    
    // [LogData@VIDMM_PURGE_TELEMETRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc0bac, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe5320, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc117c, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) log_data;
};
#include "magic/api.end.hpp"
