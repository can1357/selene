#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::drt_get_target_cb_context
{
    // [_pDRTTargetInfoCollectorCB@DRTGetTargetCBContext]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b1290, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ee0e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b5800, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ede50, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) p_drt_target_info_collector_cb;
};
#include "magic/api.end.hpp"
