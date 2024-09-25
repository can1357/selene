#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_flip_manager_token
{
    // [IsLockValid@CFlipManagerToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x17550, 0x762b0 bytes
    // dxgkrnl.sys .text:0x17ce0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) is_lock_valid;
    
    // [IsValid@CFlipManagerToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a970, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1aff0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) is_valid;
    
    // [MarkInvalid@CFlipManagerToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x61a80, 0x762b0 bytes
    // dxgkrnl.sys .text:0x61c10, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) mark_invalid;
    
    // [Delete@CFlipManagerToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x17a10, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1d7c0, 0x84380 bytes
    // dxgkrnl.sys .text:0x181a0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) _delete;
    
    // [Complete@CFlipManagerToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x619e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x759b0, 0x84380 bytes
    // dxgkrnl.sys .text:0x61b70, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) complete;
    
    // [Discard@CFlipManagerToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x61a20, 0x762b0 bytes
    // dxgkrnl.sys .text:0x759f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x61bb0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) discard;
    
    // [GetModel@CFlipManagerToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a7a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x202e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ae20, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_model;
    
    // [GetType@CFlipManagerToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a940, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20380, 0x84380 bytes
    // dxgkrnl.sys .text:0x1afc0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_type;
    
    // [Pending@CFlipManagerToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x61ae0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x75a60, 0x84380 bytes
    // dxgkrnl.sys .text:0x61c70, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) pending;
};
#include "magic/api.end.hpp"
