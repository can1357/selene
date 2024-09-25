#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::public_pftobj
{
    // [bCleanupPFT@PUBLIC_PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1026b4, 0x1596d bytes
    // win32kfull.sys .text:0x67cac, 0x1659e bytes
    // win32kfull.sys .text:0x1035e4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_cleanup_pft;
    
    // [bLoadAFont@PUBLIC_PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7eaa8, 0x13864 bytes
    // win32kfull.sys .text:0x3acfc, 0x1596d bytes
    // win32kfull.sys .text:0x78264, 0x1659e bytes
    // win32kfull.sys .text:0x3b10c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_load_a_font;
    
    // [bLoadFonts@PUBLIC_PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7e1fc, 0x13864 bytes
    // win32kfull.sys .text:0x7031c, 0x1596d bytes
    // win32kfull.sys .text:0x7849c, 0x1659e bytes
    // win32kfull.sys .text:0x70e8c, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_load_fonts;
    
    // [bLoadRemoteFonts@PUBLIC_PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25c66c, 0x13864 bytes
    // win32kfull.sys .text:0x273420, 0x1596d bytes
    // win32kfull.sys .text:0x273578, 0x1659e bytes
    // win32kfull.sys .text:0x273370, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_load_remote_fonts;
    
    // [ChangeGhostFont@PUBLIC_PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25bb54, 0x13864 bytes
    // win32kfull.sys .text:0x272cd8, 0x1596d bytes
    // win32kfull.sys .text:0x272e38, 0x1659e bytes
    // win32kfull.sys .text:0x272c28, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) change_ghost_font;
    
    // [??0PUBLIC_PFTOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148158, 0x13864 bytes
    // win32kfull.sys .text:0x155bb8, 0x1596d bytes
    // win32kfull.sys .text:0x14df14, 0x1659e bytes
    // win32kfull.sys .text:0x156a88, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) construct_instance;
    
    // [??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148148, 0x13864 bytes
    // win32kfull.sys .text:0x155ba8, 0x1596d bytes
    // win32kfull.sys .text:0x14df04, 0x1659e bytes
    // win32kfull.sys .text:0x156a78, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) construct_instance_;
    
    // [GetEmbedFonts@PUBLIC_PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25bc78, 0x13864 bytes
    // win32kfull.sys .text:0x272e24, 0x1596d bytes
    // win32kfull.sys .text:0x272f84, 0x1659e bytes
    // win32kfull.sys .text:0x272d74, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) get_embed_fonts;
    
    // [hLoadMemFonts@PUBLIC_PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25ca5c, 0x13864 bytes
    // win32kfull.sys .text:0x2737c4, 0x1596d bytes
    // win32kfull.sys .text:0x273928, 0x1659e bytes
    // win32kfull.sys .text:0x273714, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) h_load_mem_fonts;
    
    // [pPFFGet@PUBLIC_PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7e14c, 0x13864 bytes
    // win32kfull.sys .text:0x6fc64, 0x1596d bytes
    // win32kfull.sys .text:0x78cec, 0x1659e bytes
    // win32kfull.sys .text:0x707d4, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) p_pff_get;
    
    // [QueryFonts@PUBLIC_PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25bfb8, 0x13864 bytes
    // win32kfull.sys .text:0x143aa4, 0x1596d bytes
    // win32kfull.sys .text:0x135fb8, 0x1659e bytes
    // win32kfull.sys .text:0x1449e4, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) query_fonts;
    
    // [ulMemoryUnique@PUBLIC_PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x3346a4, 0x13864 bytes
    // win32kfull.sys .data:0x341930, 0x1596d bytes
    // win32kfull.sys .data:0x33ecc0, 0x1659e bytes
    // win32kfull.sys .data:0x3418f0, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) ul_memory_unique;
    
    // [ulRemoteUnique@PUBLIC_PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x3346a8, 0x13864 bytes
    // win32kfull.sys .data:0x341934, 0x1596d bytes
    // win32kfull.sys .data:0x33ecc4, 0x1659e bytes
    // win32kfull.sys .data:0x3418f4, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) ul_remote_unique;
    
    // [VerifyPFF@PUBLIC_PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25c35c, 0x13864 bytes
    // win32kfull.sys .text:0x2730e0, 0x1596d bytes
    // win32kfull.sys .text:0x273234, 0x1659e bytes
    // win32kfull.sys .text:0x273030, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) verify_pff;
};
#include "magic/api.end.hpp"
