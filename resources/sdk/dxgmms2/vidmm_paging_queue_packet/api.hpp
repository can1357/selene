#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_paging_queue_packet
{
    // [GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x881f0, 0x158b bytes
    // dxgmms2.sys PAGE:0xbcba0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe1910, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbd170, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) get_vid_mm_device;
};
#include "magic/api.end.hpp"
