#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::fhobj
{
    // [bAddPFELink@FHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8155c, 0x13864 bytes
    // win32kfull.sys .text:0x6fa54, 0x1596d bytes
    // win32kfull.sys .text:0x77c98, 0x1659e bytes
    // win32kfull.sys .text:0x705c4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_add_pfe_link;
    
    // [bInsert@FHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8139c, 0x13864 bytes
    // win32kfull.sys .text:0x38760, 0x1596d bytes
    // win32kfull.sys .text:0x777e8, 0x1659e bytes
    // win32kfull.sys .text:0x38b70, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_insert;
    
    // [bScanLists@FHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x80d3c, 0x13864 bytes
    // win32kfull.sys .text:0x6f60c, 0x1596d bytes
    // win32kfull.sys .text:0x77308, 0x1659e bytes
    // win32kfull.sys .text:0x7017c, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_scan_lists;
    
    // [bValid@FHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x80d04, 0x13864 bytes
    // win32kfull.sys .text:0x39270, 0x1596d bytes
    // win32kfull.sys .text:0x77c7c, 0x1659e bytes
    // win32kfull.sys .text:0x39680, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_valid;
    
    // [pbktSearch@FHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x81764, 0x13864 bytes
    // win32kfull.sys .text:0x6fd1c, 0x1596d bytes
    // win32kfull.sys .text:0x78370, 0x1659e bytes
    // win32kfull.sys .text:0x7088c, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) pbkt_search;
    
    // [pwszName@FHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x80d1c, 0x13864 bytes
    // win32kfull.sys .text:0x394a4, 0x1596d bytes
    // win32kfull.sys .text:0x102768, 0x1659e bytes
    // win32kfull.sys .text:0x398b4, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) pwsz_name;
    
    // [vDelete@FHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x81018, 0x13864 bytes
    // win32kfull.sys .text:0x38b44, 0x1596d bytes
    // win32kfull.sys .text:0x77ae4, 0x1659e bytes
    // win32kfull.sys .text:0x38f54, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) v_delete;
    
    // [vDeletePFELink@FHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x811a0, 0x13864 bytes
    // win32kfull.sys .text:0x6f824, 0x1596d bytes
    // win32kfull.sys .text:0x77ec4, 0x1659e bytes
    // win32kfull.sys .text:0x70394, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) v_delete_pfe_link;
    
    // [vFree@FHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x81874, 0x13864 bytes
    // win32kfull.sys .text:0x36f3c, 0x1596d bytes
    // win32kfull.sys .text:0x68d7c, 0x1659e bytes
    // win32kfull.sys .text:0x3734c, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) v_free;
};
#include "magic/api.end.hpp"
