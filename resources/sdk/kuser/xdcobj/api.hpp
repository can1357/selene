#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::xdcobj
{
    // [bSaveAttributes@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x70df0, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) b_save_attributes;
    
    // [bSupportsPNG@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2678e8, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) b_supports_png;
    
    // [bValid@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x5cfd0, 0x13864 bytes
    //
    _m2(sdk::unknown_ptr) b_valid;
    
    // [vAltUnlockNoNullSet@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x70d20, 0x13864 bytes
    //
    _m3(sdk::unknown_ptr) v_alt_unlock_no_null_set;
    
    // [vFixPublicDCWithPrivateReferences@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xd14b4, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) v_fix_public_dc_with_private_references;
    
    // [vRestoreAttributesAlways@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2685f8, 0x13864 bytes
    //
    _m5(sdk::unknown_ptr) v_restore_attributes_always;
    
    // [bModifyWorldTransform@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kfull.sys .text:0x71060, 0x13864 bytes
    // win32kfull.sys .text:0x763b4, 0x1659e bytes
    //
    _m6(sdk::unknown_ptr) b_modify_world_transform;
    
    // [bSupportsPassthroughImage@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c0698, 0x1596d bytes
    // win32kfull.sys .text:0x2c1ed0, 0x1659e bytes
    // win32kfull.sys .text:0x2c0608, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) b_supports_passthrough_image;
    
    // [GetUserAttr@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5d6a0, 0x243e0 bytes
    // win32kbase.sys .text:0x41280, 0x27ef0 bytes
    // win32kbase.sys .text:0x26ae0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) get_user_attr;
    
    // [ipfdDevMax@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bc070, 0x1596d bytes
    // win32kfull.sys .text:0x2bd4c0, 0x1659e bytes
    // win32kfull.sys .text:0x2bbfe0, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) ipfd_dev_max;
    
    // [RestoreAttributesHelper@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13f54c, 0x1596d bytes
    // win32kfull.sys .text:0xe69fc, 0x1659e bytes
    // win32kfull.sys .text:0x14048c, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) restore_attributes_helper;
    
    // [SaveAttributesHelper@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf8114, 0x1596d bytes
    // win32kfull.sys .text:0x121f0c, 0x1659e bytes
    // win32kfull.sys .text:0xf900c, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) save_attributes_helper;
    
    // [vUnlock@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x70ec0, 0x13864 bytes
    // win32kfull.sys .text:0x155b80, 0x1596d bytes
    // win32kfull.sys .text:0x156a50, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) v_unlock;
    
    // [bAddColorTransform@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x286750, 0x13864 bytes
    // win32kfull.sys .text:0x293fbc, 0x1596d bytes
    // win32kfull.sys .text:0x2940a8, 0x1659e bytes
    // win32kfull.sys .text:0x293f2c, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) b_add_color_transform;
    
    // [bAddRemoteFont@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a5558, 0x13864 bytes
    // win32kfull.sys .text:0x2ad39c, 0x1596d bytes
    // win32kfull.sys .text:0x2ae290, 0x1659e bytes
    // win32kfull.sys .text:0x2ad30c, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) b_add_remote_font;
    
    // [bCleanDC@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x495b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x5c4f0, 0x243e0 bytes
    // win32kbase.sys .text:0x3dc00, 0x27ef0 bytes
    // win32kbase.sys .text:0x25930, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) b_clean_dc;
    
    // [bDeleteDC@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4a820, 0x1eb80 bytes
    // win32kbase.sys .text:0x50270, 0x243e0 bytes
    // win32kbase.sys .text:0x49d20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c910, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) b_delete_dc;
    
    // [bFullScreen@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x70d60, 0x13864 bytes
    // win32kfull.sys .text:0xf972c, 0x1596d bytes
    // win32kfull.sys .text:0xec1c8, 0x1659e bytes
    // win32kfull.sys .text:0xfa65c, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) b_full_screen;
    
    // [bRedirHooked@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x262dfc, 0x13864 bytes
    // win32kfull.sys .text:0x278864, 0x1596d bytes
    // win32kfull.sys .text:0x278594, 0x1659e bytes
    // win32kfull.sys .text:0x2787d4, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) b_redir_hooked;
    
    // [bRemoveColorTransform@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2868d4, 0x13864 bytes
    // win32kfull.sys .text:0x2941cc, 0x1596d bytes
    // win32kfull.sys .text:0x2942bc, 0x1659e bytes
    // win32kfull.sys .text:0x29413c, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) b_remove_color_transform;
    
    // [bRemoveMergeFont@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a55c0, 0x13864 bytes
    // win32kfull.sys .text:0x2ad408, 0x1596d bytes
    // win32kfull.sys .text:0x2ae300, 0x1659e bytes
    // win32kfull.sys .text:0x2ad378, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) b_remove_merge_font;
    
    // [bSetLinkedUFIs@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a56fc, 0x13864 bytes
    // win32kfull.sys .text:0x2ad560, 0x1596d bytes
    // win32kfull.sys .text:0x2ae458, 0x1659e bytes
    // win32kfull.sys .text:0x2ad4d0, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) b_set_linked_uf_is;
    
    // [bSupportsJPEG@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2678cc, 0x13864 bytes
    // win32kfull.sys .text:0x148af8, 0x1596d bytes
    // win32kfull.sys .text:0x131c60, 0x1659e bytes
    // win32kfull.sys .text:0x149a38, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) b_supports_jpeg;
    
    // [bValidSurf@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x70b54, 0x13864 bytes
    // win32kfull.sys .text:0x42cf8, 0x1596d bytes
    // win32kfull.sys .text:0x130f8, 0x1659e bytes
    // win32kfull.sys .text:0x43108, 0x1596d bytes
    //
    _o3(sdk::unknown_ptr) b_valid_surf;
    
    // [ipfdDevMaxGet@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b5a54, 0x13864 bytes
    // win32kfull.sys .text:0x2bc098, 0x1596d bytes
    // win32kfull.sys .text:0x2bd4e8, 0x1659e bytes
    // win32kfull.sys .text:0x2bc008, 0x1596d bytes
    //
    _o4(sdk::unknown_ptr) ipfd_dev_max_get;
    
    // [pSurfaceEff@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x71044, 0x13864 bytes
    // win32kfull.sys .text:0x414c8, 0x1596d bytes
    // win32kfull.sys .text:0x14728, 0x1659e bytes
    // win32kfull.sys .text:0x418d8, 0x1596d bytes
    //
    _o5(sdk::unknown_ptr) p_surface_eff;
    
    // [prgnEffRao@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x70d44, 0x13864 bytes
    // win32kfull.sys .text:0x41e6c, 0x1596d bytes
    // win32kfull.sys .text:0x14a1c, 0x1659e bytes
    // win32kfull.sys .text:0x4227c, 0x1596d bytes
    //
    _o6(sdk::unknown_ptr) prgn_eff_rao;
    
    // [RestoreAttributes@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x70ef0, 0x13864 bytes
    // win32kfull.sys .text:0x103284, 0x1596d bytes
    // win32kfull.sys .text:0x14dc4c, 0x1659e bytes
    // win32kfull.sys .text:0x1041b4, 0x1596d bytes
    //
    _o7(sdk::unknown_ptr) restore_attributes;
    
    // [vAccumulate@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x70cbc, 0x13864 bytes
    // win32kfull.sys .text:0x43504, 0x1596d bytes
    // win32kfull.sys .text:0xd628, 0x1659e bytes
    // win32kfull.sys .text:0x43914, 0x1596d bytes
    //
    _o8(sdk::unknown_ptr) v_accumulate;
    
    // [vAccumulateTight@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x70fb0, 0x13864 bytes
    // win32kfull.sys .text:0x1358b0, 0x1596d bytes
    // win32kfull.sys .text:0x12c978, 0x1659e bytes
    // win32kfull.sys .text:0x1367f0, 0x1596d bytes
    //
    _o9(sdk::unknown_ptr) v_accumulate_tight;
    
    // [vAltUnlockFast@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4b248, 0x1eb80 bytes
    // win32kfull.sys .text:0xd0de4, 0x1596d bytes
    // win32kfull.sys .text:0x8894, 0x1659e bytes
    // win32kfull.sys .text:0xd1aa4, 0x1596d bytes
    //
    _p0(sdk::unknown_ptr) v_alt_unlock_fast;
    
    // [vLock@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x70da4, 0x13864 bytes
    // win32kfull.sys .text:0x89e70, 0x1596d bytes
    // win32kfull.sys .text:0x18040, 0x1659e bytes
    // win32kfull.sys .text:0x8a9e0, 0x1596d bytes
    //
    _p1(sdk::unknown_ptr) v_lock;
    
    // [vSaveAttributesAlways@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2686a4, 0x13864 bytes
    // win32kfull.sys .text:0x13f5b4, 0x1596d bytes
    // win32kfull.sys .text:0x121ee4, 0x1659e bytes
    // win32kfull.sys .text:0x1404f4, 0x1596d bytes
    //
    _p2(sdk::unknown_ptr) v_save_attributes_always;
    
    // [vUnlockFast@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x70d88, 0x13864 bytes
    // win32kfull.sys .text:0x891dc, 0x1596d bytes
    // win32kfull.sys .text:0x17a3c, 0x1659e bytes
    // win32kfull.sys .text:0x89d4c, 0x1596d bytes
    //
    _p3(sdk::unknown_ptr) v_unlock_fast;
    
    // [vUnlockNoNullSet@XDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x70cfc, 0x13864 bytes
    // win32kbase.sys .text:0x59ea0, 0x243e0 bytes
    // win32kbase.sys .text:0x44c70, 0x27ef0 bytes
    // win32kbase.sys .text:0x232e0, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) v_unlock_no_null_set;
};
#include "magic/api.end.hpp"
