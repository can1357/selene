#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::mode_union_list
{
    // [FindMode@MODE_UNION_LIST]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 11
    // dxgkrnl.sys PAGE:0x83180, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f7ee8, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) find_mode;
    
    // [AddUniqueMode@MODE_UNION_LIST]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4128, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d8e50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd4618, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) add_unique_mode;
    
    // [RemoveMode@MODE_UNION_LIST]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25891c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d1bc0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x258a7c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) remove_mode;
    
    // [SearchIndexdModeList@MODE_UNION_LIST]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4184, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d8eac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd4674, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) search_indexd_mode_list;
    
    // [AddMode@MODE_UNION_LIST]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x82f1c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1161c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a1ffc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x122754, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) add_mode;
    
    // [GetUniqueModes@MODE_UNION_LIST]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x83010, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14cd58, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c4558, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14f9a8, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_unique_modes;
};
#include "magic/api.end.hpp"
