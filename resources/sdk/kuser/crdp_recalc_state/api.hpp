#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::crdp_recalc_state
{
    // [GetRestoreRectForMigrate@CRDPRecalcState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23dba0, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) get_restore_rect_for_migrate;
    
    // [IsRdpVariant@CRDPRecalcState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x119970, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) is_rdp_variant;
};
#include "magic/api.end.hpp"
