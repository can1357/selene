#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::independent_flip_vidpnsource_iterator
{
    // [GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1ca98, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14690, 0x84380 bytes
    // dxgkrnl.sys .text:0x1d118, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) get_plane_index;
    
    // [GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1cac4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x146bc, 0x84380 bytes
    // dxgkrnl.sys .text:0x1d144, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_vid_pn_source_id;
};
#include "magic/api.end.hpp"
