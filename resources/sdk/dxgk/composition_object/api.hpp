#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::composition_object
{
    // [Delete@DxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x171a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1c1a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x17930, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) _delete;
    
    // [AccessCheck@DxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5bb58, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6c2e4, 0x84380 bytes
    // dxgkrnl.sys .text:0x5bce8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) access_check;
    
    // [AddRef@DxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5bc24, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6c3b0, 0x84380 bytes
    // dxgkrnl.sys .text:0x5bdb4, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) add_ref;
    
    // [Close@DxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x165c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x19f40, 0x84380 bytes
    // dxgkrnl.sys .text:0x16d50, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) close;
    
    // [Create@DxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x17a6c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1bbc8, 0x84380 bytes
    // dxgkrnl.sys .text:0x181fc, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) create;
    
    // [CreateHandle@DxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5bc50, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6c3dc, 0x84380 bytes
    // dxgkrnl.sys .text:0x5bde0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) create_handle;
    
    // [GenericMapping@DxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a2d4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fa18, 0x84380 bytes
    // dxgkrnl.sys .text:0x1aa20, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) generic_mapping;
    
    // [OkToClose@DxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x15f10, 0x762b0 bytes
    // dxgkrnl.sys .text:0x19750, 0x84380 bytes
    // dxgkrnl.sys .text:0x166a0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) ok_to_close;
    
    // [Open@DxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x15a90, 0x762b0 bytes
    // dxgkrnl.sys .text:0x192c0, 0x84380 bytes
    // dxgkrnl.sys .text:0x16220, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) open;
    
    // [OpenDwmHandle@DxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x17848, 0x762b0 bytes
    // dxgkrnl.sys .text:0x12ca4, 0x84380 bytes
    // dxgkrnl.sys .text:0x17fd8, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) open_dwm_handle;
    
    // [Release@DxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x198f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1ee70, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a010, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) release;
    
    // [ResolveHandle@DxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xfe44, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1169c, 0x84380 bytes
    // dxgkrnl.sys .text:0x102d4, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) resolve_handle;
};
#include "magic/api.end.hpp"
