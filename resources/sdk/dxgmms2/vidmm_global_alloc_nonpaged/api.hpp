#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_global_alloc_nonpaged
{
    // [HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14198, 0x1c52 bytes
    // dxgmms2.sys .text:0x17d74, 0x20ba bytes
    // dxgmms2.sys .text:0x14198, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) has_outstanding_present_references;
};
#include "magic/api.end.hpp"
