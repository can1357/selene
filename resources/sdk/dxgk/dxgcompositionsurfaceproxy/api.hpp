#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgcompositionsurfaceproxy
{
    // [PairedQueryStats@DXGCOMPOSITIONSURFACEPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2e0c10, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) paired_query_stats;
    
    // [CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x286d80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2df900, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x286e00, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) close_self_handle;
    
    // [GetPairedSurfaceInfo@DXGCOMPOSITIONSURFACEPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x287590, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e01c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x287610, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_paired_surface_info;
    
    // [Initialize@DXGCOMPOSITIONSURFACEPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2875b4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e01e4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x287634, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x287830, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e0480, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2878b0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) insert_completed_token;
    
    // [PairedBind@DXGCOMPOSITIONSURFACEPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x287a60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e0700, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x287ae0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) paired_bind;
    
    // [PairedUnBind@DXGCOMPOSITIONSURFACEPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x287ed0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e0e80, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x287f50, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) paired_un_bind;
    
    // [Release@DXGCOMPOSITIONSURFACEPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x288764, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e1a40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2887e4, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) release;
    
    // [SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x288e58, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e23ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x288ed8, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) send_un_pair_and_release;
    
    // [SetPaired@DXGCOMPOSITIONSURFACEPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1562b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e48d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159100, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) set_paired;
    
    // [UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x289120, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e26f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2891a0, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) un_pair_and_release;
};
#include "magic/api.end.hpp"
