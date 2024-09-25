#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgpresent
{
    // [DestroyStagingBuffer@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e9be4, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_staging_buffer;
    
    // [CheckOutput@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x158278, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e6bec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15b0c8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) check_output;
    
    // [GetDdiSubRectCnt@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x158238, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e6bac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15b088, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_ddi_sub_rect_cnt;
    
    // [CheckInput@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd24a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1580e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e6274, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15af30, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) check_input;
    
    // [CheckOcclusion@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x172da0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27a324, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33065c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27a374, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) check_occlusion;
    
    // [CheckVisRgn@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd2a60, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x156400, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4d50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159250, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) check_vis_rgn;
    
    // [ClipIntervals@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x172df8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27a388, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3306c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27a3d8, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) clip_intervals;
    
    // [ClipRects@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd2f40, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x156e40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e57c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159c90, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) clip_rects;
    
    // [CombineRectList@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd25f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1568d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e5240, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159720, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) combine_rect_list;
    
    // [ComputeSrcDstRects@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd2e78, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27a57c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33092c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27a5cc, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) compute_src_dst_rects;
    
    // [??0DXGPRESENT@@QEAA@I@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc6e64, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x143ec8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1df7e4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x146dd8, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) construct_instance;
    
    // [CopyPresentArgs@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc6b80, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xf4d60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cb2e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x100d30, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) copy_present_args;
    
    // [??1DXGPRESENT@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc6f44, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1515c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e9670, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd7490, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) destroy_instance;
    
    // [GetDdiSubRectList@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147254, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x158258, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e6bcc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15b0a8, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) get_ddi_sub_rect_list;
    
    // [GrowRectList@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc6adc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x143b80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15a414, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x146a90, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) grow_rect_list;
    
    // [IntersectRect@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x173524, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27b0c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33151c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27b118, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) intersect_rect;
    
    // [PrepareStagingBuffer@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1741d4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27c114, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3327d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27c16c, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) prepare_staging_buffer;
    
    // [XformRect@DXGPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x174fd0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27d5e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x333930, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27d630, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) xform_rect;
};
#include "magic/api.end.hpp"
