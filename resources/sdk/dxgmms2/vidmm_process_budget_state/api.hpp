#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_process_budget_state
{
    // [??0VIDMM_PROCESS_BUDGET_STATE@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1c60, 0x158b bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [CanBePromoted@VIDMM_PROCESS_BUDGET_STATE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x90c28, 0x158b bytes
    // dxgmms2.sys PAGE:0xbaf28, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdf9a4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbb4f8, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) can_be_promoted;
    
    // [GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b420, 0x158b bytes
    // dxgmms2.sys PAGE:0x757bc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9aec4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x75dac, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) get_num_bytes_to_trim;
    
    // [TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b500, 0x158b bytes
    // dxgmms2.sys PAGE:0x801f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9da44, 0x20ba bytes
    // dxgmms2.sys PAGE:0x807e0, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) total_demoted_commitment;
};
#include "magic/api.end.hpp"
