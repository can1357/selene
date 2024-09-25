#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidpn_mgr::dispmodechangerequest
{
    // [SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a3b50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dbb90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39fa4c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dbc60, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) serialize_mode_change_requests;
};
#include "magic/api.end.hpp"
