#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidpn_mgr_classfactory
{
    // [CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec968, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x179290, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20a010, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17a810, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) create_vid_pn_mgr;
};
#include "magic/api.end.hpp"
