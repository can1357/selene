#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgprocess_render_adapter_info
{
    // [CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1716c4, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) close_vid_mm_adapter;
    
    // [GetClientStatistics@DXGPROCESS_RENDER_ADAPTER_INFO]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1b3abc, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) get_client_statistics;
    
    // [Initialize@DXGPROCESS_RENDER_ADAPTER_INFO]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1b71e4, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
