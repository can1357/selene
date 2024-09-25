#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dda_meta_data
{
    // [??1DDAMetaData@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x326414, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [AddToDirtyList@DDAMetaData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1820f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29abc4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x326574, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29ac64, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) add_to_dirty_list;
    
    // [AddToMoveList@DDAMetaData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x182234, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29ad2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x326744, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29adcc, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) add_to_move_list;
    
    // [CombineNewMetaData@DDAMetaData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x182328, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29ae40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x326884, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29aee0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) combine_new_meta_data;
    
    // [??0DDAMetaData@@QEAA@II@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x181ea4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29a930, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3262b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29a9d0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) construct_instance;
    
    // [ConvertExistingDirtryRectsToGDIRegion@DDAMetaData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x182468, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29afb8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x326a60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29b058, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) convert_existing_dirtry_rects_to_gdi_region;
    
    // [ConvertGdiRgnToRects@DDAMetaData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x182588, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29b0f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x326bf8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29b198, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) convert_gdi_rgn_to_rects;
    
    // [DoesRectOverlapWithExistingDirty@DDAMetaData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x182710, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29b2ac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x326e24, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29b34c, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) does_rect_overlap_with_existing_dirty;
    
    // [GetDirtyRectData@DDAMetaData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1827e8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29b430, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x326fec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29b4d0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) get_dirty_rect_data;
    
    // [Initialize@DDAMetaData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x182ae0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29b744, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x327334, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29b7e4, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) initialize;
    
    // [ProcessDirtyRectAgainstDirtyList@DDAMetaData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x182fa4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29bcc4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x327a58, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29bd64, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) process_dirty_rect_against_dirty_list;
    
    // [ProcessDirtyRectAgainstMoveList@DDAMetaData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x183104, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29be68, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x327c8c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29bf08, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) process_dirty_rect_against_move_list;
    
    // [ProcessMoveAgainstDirtyList@DDAMetaData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1831d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29bf50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x327d9c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29bff0, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) process_move_against_dirty_list;
    
    // [ProcessMoveAgainstMoveList@DDAMetaData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x183278, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29bff8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x327e44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29c098, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) process_move_against_move_list;
    
    // [ProcessNewDirtyRects@DDAMetaData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1833f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29c198, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32801c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29c238, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) process_new_dirty_rects;
    
    // [ProcessNewMoveRegions@DDAMetaData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1834a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29c25c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x328128, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29c2fc, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) process_new_move_regions;
};
#include "magic/api.end.hpp"
