#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::dxg_deferred_work_queue
{
    // [GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24e70, 0x1c52 bytes
    // dxgmms2.sys .text:0x2eb34, 0x20ba bytes
    // dxgmms2.sys .text:0x24df0, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) get_num_work_items;
};
#include "magic/api.end.hpp"
