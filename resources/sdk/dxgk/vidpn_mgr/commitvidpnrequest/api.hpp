#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidpn_mgr::commitvidpnrequest
{
    // [Serialize@COMMITVIDPNREQUEST@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x33020, 0x60098 bytes
    // dxgkrnl.sys .text:0x59ca4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x69630, 0x84380 bytes
    // dxgkrnl.sys .text:0x59e34, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) serialize;
    
    // [SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a3880, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2db868, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39f780, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2db938, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) serialize_commit_vid_pn_requests;
};
#include "magic/api.end.hpp"
