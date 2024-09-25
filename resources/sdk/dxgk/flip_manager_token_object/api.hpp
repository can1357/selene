#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::flip_manager_token_object
{
    // [LockForWrite@FlipManagerTokenObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x75888, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) lock_for_write;
    
    // [GetFlipManagerObjectNoRef@FlipManagerTokenObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6110c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6129c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_flip_manager_object_no_ref;
    
    // [GetPresentId@FlipManagerTokenObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x61168, 0x762b0 bytes
    // dxgkrnl.sys .text:0x612f8, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_present_id;
    
    // [MarkCompleted@FlipManagerTokenObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x611f4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x61384, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) mark_completed;
    
    // [MarkPending@FlipManagerTokenObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x62738, 0x762b0 bytes
    // dxgkrnl.sys .text:0x77374, 0x84380 bytes
    // dxgkrnl.sys .text:0x628c8, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) mark_pending;
    
    // [ObjectInit@FlipManagerTokenObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x61410, 0x762b0 bytes
    // dxgkrnl.sys .text:0x75910, 0x84380 bytes
    // dxgkrnl.sys .text:0x615a0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) object_init;
};
#include "magic/api.end.hpp"
