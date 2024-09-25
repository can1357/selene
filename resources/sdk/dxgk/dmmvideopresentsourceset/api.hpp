#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvideopresentsourceset
{
    // [AcquireRawDdiEnumeratorCachedSourceInfo@DMMVIDEOPRESENTSOURCESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec7a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17d10c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20ddac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x18064c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_raw_ddi_enumerator_cached_source_info;
    
    // [AddSource@DMMVIDEOPRESENTSOURCESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec818, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17d000, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20dcc0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x180540, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) add_source;
    
    // [??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xfb90, 0x60098 bytes
    // dxgkrnl.sys .text:0x21960, 0x762b0 bytes
    // dxgkrnl.sys .text:0x28344, 0x84380 bytes
    // dxgkrnl.sys .text:0x22304, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x31d90, 0x60098 bytes
    // dxgkrnl.sys .text:0x583ac, 0x762b0 bytes
    // dxgkrnl.sys .text:0x67ba8, 0x84380 bytes
    // dxgkrnl.sys .text:0x5853c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [GetFirstSource@DMMVIDEOPRESENTSOURCESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x332f0, 0x60098 bytes
    // dxgkrnl.sys .text:0x59550, 0x762b0 bytes
    // dxgkrnl.sys .text:0x69050, 0x84380 bytes
    // dxgkrnl.sys .text:0x596e0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_first_source;
    
    // [GetNextSource@DMMVIDEOPRESENTSOURCESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1d260, 0x60098 bytes
    // dxgkrnl.sys .text:0x59f60, 0x762b0 bytes
    // dxgkrnl.sys .text:0x69c30, 0x84380 bytes
    // dxgkrnl.sys .text:0x5a0f0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_next_source;
    
    // [ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec88c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17cfc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20dc80, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x180500, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) release_ddi_enumerator;
    
    // [Serialize@DMMVIDEOPRESENTSOURCESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ab93c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e5260, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a9aa8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e4fd0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) serialize;
};
#include "magic/api.end.hpp"
