#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::umpdobj
{
    // [psoDest@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x293f98, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) pso_dest;
    
    // [psoMask@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x293fbc, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) pso_mask;
    
    // [psoSrc@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x293fe0, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) pso_src;
    
    // [RestoreBitmap@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x29c374, 0x13864 bytes
    //
    _m3(sdk::unknown_ptr) restore_bitmap;
    
    // [bCleanup@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x4804c, 0x243e0 bytes
    // win32kbase.sys .text:0x38870, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) b_cleanup;
    
    // [pfo@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12dad8, 0x1596d bytes
    // win32kfull.sys .text:0x11fa9c, 0x1659e bytes
    // win32kfull.sys .text:0x12ea18, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) pfo;
    
    // [vPushToCurrentThread@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x286590, 0x13864 bytes
    // win32kfull.sys .text:0x1932c, 0x1596d bytes
    // win32kfull.sys .text:0x196dc, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) v_push_to_current_thread;
    
    // [_AllocUserMem@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x285e98, 0x13864 bytes
    // win32kfull.sys .text:0x18148, 0x1596d bytes
    // win32kfull.sys .text:0x11cccc, 0x1659e bytes
    // win32kfull.sys .text:0x184f8, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) alloc_user_mem;
    
    // [bAllocFontLinks@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a3e5c, 0x13864 bytes
    // win32kfull.sys .text:0x2ad2fc, 0x1596d bytes
    // win32kfull.sys .text:0x2ae1dc, 0x1659e bytes
    // win32kfull.sys .text:0x2ad26c, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) b_alloc_font_links;
    
    // [bCleanupWorker@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x285fe0, 0x13864 bytes
    // win32kfull.sys .text:0x19278, 0x1596d bytes
    // win32kfull.sys .text:0x11e2a8, 0x1659e bytes
    // win32kfull.sys .text:0x19628, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) b_cleanup_worker;
    
    // [bDeleteLargeBitmaps@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a2790, 0x13864 bytes
    // win32kfull.sys .text:0x2accdc, 0x1596d bytes
    // win32kfull.sys .text:0x2adbbc, 0x1659e bytes
    // win32kfull.sys .text:0x2acc4c, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) b_delete_large_bitmaps;
    
    // [bInit@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x286088, 0x13864 bytes
    // win32kfull.sys .text:0x19bd4, 0x1596d bytes
    // win32kfull.sys .text:0x120450, 0x1659e bytes
    // win32kfull.sys .text:0x19f84, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) b_init;
    
    // [bNeedThunk@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2861e0, 0x13864 bytes
    // win32kfull.sys .text:0x19b20, 0x1596d bytes
    // win32kfull.sys .text:0x11ffe0, 0x1659e bytes
    // win32kfull.sys .text:0x19ed0, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) b_need_thunk;
    
    // [bSandboxedClient@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x286204, 0x13864 bytes
    // win32kfull.sys .text:0x1563d0, 0x1596d bytes
    // win32kfull.sys .text:0x14e430, 0x1659e bytes
    // win32kfull.sys .text:0x1572d0, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) b_sandboxed_client;
    
    // [bSendLargeBitmap@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a28f8, 0x13864 bytes
    // win32kfull.sys .text:0x2ace44, 0x1596d bytes
    // win32kfull.sys .text:0x2add1c, 0x1659e bytes
    // win32kfull.sys .text:0x2acdb4, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) b_send_large_bitmap;
    
    // [bThunkLargeBitmap@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a2a90, 0x13864 bytes
    // win32kfull.sys .text:0x19dfc, 0x1596d bytes
    // win32kfull.sys .text:0x12112c, 0x1659e bytes
    // win32kfull.sys .text:0x1a1ac, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) b_thunk_large_bitmap;
    
    // [bThunkLargeBitmaps@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a2b8c, 0x13864 bytes
    // win32kfull.sys .text:0x2acfec, 0x1596d bytes
    // win32kfull.sys .text:0x2adec4, 0x1659e bytes
    // win32kfull.sys .text:0x2acf5c, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) b_thunk_large_bitmaps;
    
    // [bTryAcquireExclussiveAccess@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a2cfc, 0x13864 bytes
    // win32kfull.sys .text:0x19684, 0x1596d bytes
    // win32kfull.sys .text:0x120e14, 0x1659e bytes
    // win32kfull.sys .text:0x19a34, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) b_try_acquire_exclussive_access;
    
    // [CacheGlyphBits@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x285658, 0x13864 bytes
    // win32kfull.sys .text:0x293b90, 0x1596d bytes
    // win32kfull.sys .text:0x293d50, 0x1659e bytes
    // win32kfull.sys .text:0x293b00, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) cache_glyph_bits;
    
    // [CacheGlyphPath@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2856e0, 0x13864 bytes
    // win32kfull.sys .text:0x293c1c, 0x1596d bytes
    // win32kfull.sys .text:0x293ddc, 0x1659e bytes
    // win32kfull.sys .text:0x293b8c, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) cache_glyph_path;
    
    // [CreateCLIPOBJ@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x285734, 0x13864 bytes
    // win32kfull.sys .text:0x293c7c, 0x1596d bytes
    // win32kfull.sys .text:0x293e3c, 0x1659e bytes
    // win32kfull.sys .text:0x293bec, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) create_clipobj;
    
    // [CreateUMPDHeap@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28579c, 0x13864 bytes
    // win32kfull.sys .text:0x14e230, 0x1596d bytes
    // win32kfull.sys .text:0x121768, 0x1659e bytes
    // win32kfull.sys .text:0x14f170, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) create_umpd_heap;
    
    // [FreeNonCachedUserMem@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28587c, 0x13864 bytes
    // win32kfull.sys .text:0x293cfc, 0x1596d bytes
    // win32kfull.sys .text:0x293ebc, 0x1659e bytes
    // win32kfull.sys .text:0x293c6c, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) free_non_cached_user_mem;
    
    // [GetCLIPOBJPath@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2858c8, 0x13864 bytes
    // win32kfull.sys .text:0x293d50, 0x1596d bytes
    // win32kfull.sys .text:0x15e1b8, 0x1659e bytes
    // win32kfull.sys .text:0x293cc0, 0x1596d bytes
    //
    _o3(sdk::unknown_ptr) get_clipobj_path;
    
    // [GetDDIOBJ@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2aae08, 0x13864 bytes
    // win32kfull.sys .text:0x12d090, 0x1596d bytes
    // win32kfull.sys .text:0x11f300, 0x1659e bytes
    // win32kfull.sys .text:0x12dfd0, 0x1596d bytes
    //
    _o4(sdk::unknown_ptr) get_ddiobj;
    
    // [GetFONTOBJXform@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x285944, 0x13864 bytes
    // win32kfull.sys .text:0x12d628, 0x1596d bytes
    // win32kfull.sys .text:0x120858, 0x1659e bytes
    // win32kfull.sys .text:0x12e568, 0x1596d bytes
    //
    _o5(sdk::unknown_ptr) get_fontobj_xform;
    
    // [GetKernelPtr@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x285a04, 0x13864 bytes
    // win32kfull.sys .text:0x19628, 0x1596d bytes
    // win32kfull.sys .text:0x11fce8, 0x1659e bytes
    // win32kfull.sys .text:0x199d8, 0x1596d bytes
    //
    _o6(sdk::unknown_ptr) get_kernel_ptr;
    
    // [GetThreadCurrentObj@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7a6ac, 0x13864 bytes
    // win32kfull.sys .text:0xc85c, 0x1596d bytes
    // win32kfull.sys .text:0x63978, 0x1659e bytes
    // win32kfull.sys .text:0xcc0c, 0x1596d bytes
    //
    _o7(sdk::unknown_ptr) get_thread_current_obj;
    
    // [GrowUMPDHeap@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x285ab0, 0x13864 bytes
    // win32kfull.sys .text:0x13f0f0, 0x1596d bytes
    // win32kfull.sys .text:0x11bc8c, 0x1659e bytes
    // win32kfull.sys .text:0x140030, 0x1596d bytes
    //
    _o8(sdk::unknown_ptr) grow_umpd_heap;
    
    // [LockSurface@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x285b78, 0x13864 bytes
    // win32kfull.sys .text:0x14b1c0, 0x1596d bytes
    // win32kfull.sys .text:0x13fe94, 0x1659e bytes
    // win32kfull.sys .text:0x14c100, 0x1596d bytes
    //
    _o9(sdk::unknown_ptr) lock_surface;
    
    // [pso@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x286268, 0x13864 bytes
    // win32kfull.sys .text:0x198d0, 0x1596d bytes
    // win32kfull.sys .text:0x11fd44, 0x1659e bytes
    // win32kfull.sys .text:0x19c80, 0x1596d bytes
    //
    _p0(sdk::unknown_ptr) pso;
    
    // [pstro@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x286380, 0x13864 bytes
    // win32kfull.sys .text:0x12dc84, 0x1596d bytes
    // win32kfull.sys .text:0x11f6f0, 0x1659e bytes
    // win32kfull.sys .text:0x12ebc4, 0x1596d bytes
    //
    _p1(sdk::unknown_ptr) pstro;
    
    // [pxlo@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28646c, 0x13864 bytes
    // win32kfull.sys .text:0x13d81c, 0x1596d bytes
    // win32kfull.sys .text:0x11fc18, 0x1659e bytes
    // win32kfull.sys .text:0x13e75c, 0x1596d bytes
    //
    _p2(sdk::unknown_ptr) pxlo;
    
    // [ResetHeap@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x285c90, 0x13864 bytes
    // win32kfull.sys .text:0x1563b8, 0x1596d bytes
    // win32kfull.sys .text:0x14e418, 0x1659e bytes
    // win32kfull.sys .text:0x1572b8, 0x1596d bytes
    //
    _p3(sdk::unknown_ptr) reset_heap;
    
    // [RestoreBitmaps@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29c3b8, 0x13864 bytes
    // win32kfull.sys .text:0x2a9574, 0x1596d bytes
    // win32kfull.sys .text:0x2aa420, 0x1659e bytes
    // win32kfull.sys .text:0x2a94e4, 0x1596d bytes
    //
    _p4(sdk::unknown_ptr) restore_bitmaps;
    
    // [Thunk@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29c484, 0x13864 bytes
    // win32kfull.sys .text:0x19374, 0x1596d bytes
    // win32kfull.sys .text:0x1200b4, 0x1659e bytes
    // win32kfull.sys .text:0x19724, 0x1596d bytes
    //
    _p5(sdk::unknown_ptr) thunk;
    
    // [ThunkDDIOBJ@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x285ca4, 0x13864 bytes
    // win32kfull.sys .text:0x19a6c, 0x1596d bytes
    // win32kfull.sys .text:0x11ff0c, 0x1659e bytes
    // win32kfull.sys .text:0x19e1c, 0x1596d bytes
    //
    _p6(sdk::unknown_ptr) thunk_ddiobj;
    
    // [ThunkLINEATTRS@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x285d38, 0x13864 bytes
    // win32kfull.sys .text:0x293dd4, 0x1596d bytes
    // win32kfull.sys .text:0x293f10, 0x1659e bytes
    // win32kfull.sys .text:0x293d44, 0x1596d bytes
    //
    _p7(sdk::unknown_ptr) thunk_lineattrs;
    
    // [ThunkMemBlock@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x285dbc, 0x13864 bytes
    // win32kfull.sys .text:0x19838, 0x1596d bytes
    // win32kfull.sys .text:0x120624, 0x1659e bytes
    // win32kfull.sys .text:0x19be8, 0x1596d bytes
    //
    _p8(sdk::unknown_ptr) thunk_mem_block;
    
    // [ThunkStringW@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29c678, 0x13864 bytes
    // win32kfull.sys .text:0x10705c, 0x1596d bytes
    // win32kfull.sys .text:0x11cc80, 0x1659e bytes
    // win32kfull.sys .text:0x107f8c, 0x1596d bytes
    //
    _p9(sdk::unknown_ptr) thunk_string_w;
    
    // [ulGetMaxSize@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a2d28, 0x13864 bytes
    // win32kfull.sys .text:0x2ad164, 0x1596d bytes
    // win32kfull.sys .text:0x2ae03c, 0x1659e bytes
    // win32kfull.sys .text:0x2ad0d4, 0x1596d bytes
    //
    _q0(sdk::unknown_ptr) ul_get_max_size;
    
    // [UMPDAllocUserMem@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29c6a4, 0x13864 bytes
    // win32kfull.sys .text:0x2a9648, 0x1596d bytes
    // win32kfull.sys .text:0x2aa4f4, 0x1659e bytes
    // win32kfull.sys .text:0x2a95b8, 0x1596d bytes
    //
    _q1(sdk::unknown_ptr) umpd_alloc_user_mem;
    
    // [UnlockSurface@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x285e4c, 0x13864 bytes
    // win32kfull.sys .text:0x14d064, 0x1596d bytes
    // win32kfull.sys .text:0x141208, 0x1659e bytes
    // win32kfull.sys .text:0x14dfa4, 0x1596d bytes
    //
    _q2(sdk::unknown_ptr) unlock_surface;
    
    // [vClient@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28652c, 0x13864 bytes
    // win32kfull.sys .text:0x19de0, 0x1596d bytes
    // win32kfull.sys .text:0x121110, 0x1659e bytes
    // win32kfull.sys .text:0x1a190, 0x1596d bytes
    //
    _q3(sdk::unknown_ptr) v_client;
    
    // [vRelease@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcf4a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x47f70, 0x243e0 bytes
    // win32kbase.sys .text:0xdb960, 0x27ef0 bytes
    // win32kbase.sys .text:0x38450, 0x243e0 bytes
    //
    _q4(sdk::unknown_ptr) v_release;
    
    // [vServer@UMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2865d4, 0x13864 bytes
    // win32kfull.sys .text:0x293e5c, 0x1596d bytes
    // win32kfull.sys .text:0x11ffc0, 0x1659e bytes
    // win32kfull.sys .text:0x293dcc, 0x1596d bytes
    //
    _q5(sdk::unknown_ptr) v_server;
};
#include "magic/api.end.hpp"
