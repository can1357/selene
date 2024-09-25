#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pffmemobj
{
    // [??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xf4b18, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x107238, 0x1596d bytes
    // win32kfull.sys .text:0xe4e84, 0x1659e bytes
    // win32kfull.sys .text:0x108168, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [bAddEntry@PFFMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf50c8, 0x13864 bytes
    // win32kfull.sys .text:0x395d4, 0x1596d bytes
    // win32kfull.sys .text:0x7dd64, 0x1659e bytes
    // win32kfull.sys .text:0x399e4, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_add_entry;
    
    // [bAllocPFEData@PFFMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf4a1c, 0x13864 bytes
    // win32kfull.sys .text:0x3b5e4, 0x1596d bytes
    // win32kfull.sys .text:0x7f798, 0x1659e bytes
    // win32kfull.sys .text:0x3b9f4, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_alloc_pfe_data;
    
    // [bLoadDeviceFontTable@PFFMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b54ec, 0x13864 bytes
    // win32kfull.sys .text:0x2bb1a0, 0x1596d bytes
    // win32kfull.sys .text:0x2bc614, 0x1659e bytes
    // win32kfull.sys .text:0x2bb110, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) b_load_device_font_table;
    
    // [bLoadFontFileTable@PFFMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf4e50, 0x13864 bytes
    // win32kfull.sys .text:0x394cc, 0x1596d bytes
    // win32kfull.sys .text:0x7dc5c, 0x1659e bytes
    // win32kfull.sys .text:0x398dc, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) b_load_font_file_table;
    
    // [??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf4f3c, 0x13864 bytes
    // win32kfull.sys .text:0x1170e8, 0x1596d bytes
    // win32kfull.sys .text:0x1089ec, 0x1659e bytes
    // win32kfull.sys .text:0x118018, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) construct_instance__;
    
    // [??1PFFMEMOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf4ab4, 0x13864 bytes
    // win32kfull.sys .text:0x11af90, 0x1596d bytes
    // win32kfull.sys .text:0x10af2c, 0x1659e bytes
    // win32kfull.sys .text:0x11bec0, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) destroy_instance;
    
    // [vKeepIt@PFFMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b581c, 0x13864 bytes
    // win32kfull.sys .text:0x11990c, 0x1596d bytes
    // win32kfull.sys .text:0x10a20c, 0x1659e bytes
    // win32kfull.sys .text:0x11a83c, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) v_keep_it;
};
#include "magic/api.end.hpp"
