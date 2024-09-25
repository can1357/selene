#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidsch_queue_packet
{
    // [UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xc904, 0x158b bytes
    // dxgmms2.sys .text:0x73e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x6f24, 0x20ba bytes
    // dxgmms2.sys .text:0x73e0, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) update_history_buffer;
};
#include "magic/api.end.hpp"
