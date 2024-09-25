#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgprocess_adapter_info
{
    // [CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1512ac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15458c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) close_vid_mm_adapter;
    
    // [GetClientStatistics@DXGPROCESS_ADAPTER_INFO]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe4a40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0xef9dc, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_client_statistics;
    
    // [Initialize@DXGPROCESS_ADAPTER_INFO]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x118b74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x14ab94, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
