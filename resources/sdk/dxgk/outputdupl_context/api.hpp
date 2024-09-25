#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::outputdupl_context
{
    // [GetDebugInfo@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x29b39c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x326f58, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29b43c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) get_debug_info;
    
    // [??0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x181f04, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29a998, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32631c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29aa38, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1OUTPUTDUPL_CONTEXT@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x181fe0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29aa88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x326448, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29ab28, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [GetDirtyRects@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x182810, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29b460, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32701c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29b500, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_dirty_rects;
    
    // [GetFrameInfo@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x182864, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29b4b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x327074, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29b558, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_frame_info;
    
    // [GetPointerShapeData@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1829c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29b610, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3271cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29b6b0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_pointer_shape_data;
    
    // [GetProducerDevice@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x182a74, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29b6c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x327280, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29b764, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_producer_device;
    
    // [Initialize@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x182bc8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29b840, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x327460, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29b8e0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) initialize;
    
    // [MarkForPendingDestroy@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x182ebc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29bba8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3278d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29bc48, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) mark_for_pending_destroy;
    
    // [ProcessPointerPosition@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x183580, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29c364, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32825c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29c404, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) process_pointer_position;
    
    // [ProcessPointerShape@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x183640, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29c454, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32837c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29c4f4, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) process_pointer_shape;
    
    // [ProcessPresent@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18370c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29c54c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3284ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29c5ec, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) process_present;
    
    // [ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x183800, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29c684, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32863c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29c724, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) process_update_high_level;
    
    // [ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x183d60, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29cc18, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x328cb4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29ccb8, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) process_update_low_level;
    
    // [ReleaseFrame@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1841f4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29d0f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x329278, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29d190, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) release_frame;
    
    // [ReleaseSessionReference@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1844e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29d410, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x329628, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29d4b0, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) release_session_reference;
    
    // [SubmitBltForRegions@OUTPUTDUPL_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x184580, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29d4d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32972c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29d578, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) submit_blt_for_regions;
};
#include "magic/api.end.hpp"
