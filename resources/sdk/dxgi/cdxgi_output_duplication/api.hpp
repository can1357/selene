#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_output_duplication
{
    // [AcquireNextFrame@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x473d0, 0x17e70 bytes
    // dxgi.dll .text:0x474c0, 0x17e70 bytes
    // dxgi.dll .text:0x526a0, 0x18b10 bytes
    // dxgi.dll .text:0x48950, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) acquire_next_frame;
    
    // [??0CDXGIOutputDuplication@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x46fa0, 0x17e70 bytes
    // dxgi.dll .text:0x47090, 0x17e70 bytes
    // dxgi.dll .text:0x52284, 0x18b10 bytes
    // dxgi.dll .text:0x48520, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [ConvertNTStatusToHResult@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x47c08, 0x17e70 bytes
    // dxgi.dll .text:0x47cf8, 0x17e70 bytes
    // dxgi.dll .text:0x52fac, 0x18b10 bytes
    // dxgi.dll .text:0x49188, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) convert_nt_status_to_h_result;
    
    // [??1CDXGIOutputDuplication@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x500dc, 0x17e70 bytes
    // dxgi.dll .text:0x501cc, 0x17e70 bytes
    // dxgi.dll .text:0x5b170, 0x18b10 bytes
    // dxgi.dll .text:0x5165c, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [FinalRelease@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x47cb0, 0x17e70 bytes
    // dxgi.dll .text:0x47da0, 0x17e70 bytes
    // dxgi.dll .text:0x53054, 0x18b10 bytes
    // dxgi.dll .text:0x49230, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) final_release;
    
    // [GetDesc@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1e9d0, 0x17e70 bytes
    // dxgi.dll .text:0x1ece0, 0x17e70 bytes
    // dxgi.dll .text:0x26410, 0x18b10 bytes
    // dxgi.dll .text:0x1fad0, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) get_desc;
    
    // [GetFrameDirtyRects@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x47e50, 0x17e70 bytes
    // dxgi.dll .text:0x47f40, 0x17e70 bytes
    // dxgi.dll .text:0x53240, 0x18b10 bytes
    // dxgi.dll .text:0x493d0, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) get_frame_dirty_rects;
    
    // [GetFrameMetaData@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x47e90, 0x17e70 bytes
    // dxgi.dll .text:0x47f80, 0x17e70 bytes
    // dxgi.dll .text:0x53280, 0x18b10 bytes
    // dxgi.dll .text:0x49410, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) get_frame_meta_data;
    
    // [GetFrameMoveRects@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x47fd0, 0x17e70 bytes
    // dxgi.dll .text:0x480c0, 0x17e70 bytes
    // dxgi.dll .text:0x533e0, 0x18b10 bytes
    // dxgi.dll .text:0x49550, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) get_frame_move_rects;
    
    // [GetFramePointerShape@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x48020, 0x17e70 bytes
    // dxgi.dll .text:0x48110, 0x17e70 bytes
    // dxgi.dll .text:0x53430, 0x18b10 bytes
    // dxgi.dll .text:0x495a0, 0x17e70 bytes
    //
    _m9(sdk::unknown_ptr) get_frame_pointer_shape;
    
    // [GetParent@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x481a0, 0x17e70 bytes
    // dxgi.dll .text:0x48290, 0x17e70 bytes
    // dxgi.dll .text:0x535d0, 0x18b10 bytes
    // dxgi.dll .text:0x49720, 0x17e70 bytes
    //
    _n0(sdk::unknown_ptr) get_parent;
    
    // [Initialize@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x481bc, 0x17e70 bytes
    // dxgi.dll .text:0x482ac, 0x17e70 bytes
    // dxgi.dll .text:0x535f4, 0x18b10 bytes
    // dxgi.dll .text:0x4973c, 0x17e70 bytes
    //
    _n1(sdk::unknown_ptr) initialize;
    
    // [MapDesktopSurface@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x48ac0, 0x17e70 bytes
    // dxgi.dll .text:0x48bb0, 0x17e70 bytes
    // dxgi.dll .text:0x53f40, 0x18b10 bytes
    // dxgi.dll .text:0x4a040, 0x17e70 bytes
    //
    _n2(sdk::unknown_ptr) map_desktop_surface;
    
    // [ReleaseFrame@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x48c10, 0x17e70 bytes
    // dxgi.dll .text:0x48d00, 0x17e70 bytes
    // dxgi.dll .text:0x540b0, 0x18b10 bytes
    // dxgi.dll .text:0x4a190, 0x17e70 bytes
    //
    _n3(sdk::unknown_ptr) release_frame;
    
    // [UnMapDesktopSurface@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x48e30, 0x17e70 bytes
    // dxgi.dll .text:0x48f20, 0x17e70 bytes
    // dxgi.dll .text:0x542f0, 0x18b10 bytes
    // dxgi.dll .text:0x4a3b0, 0x17e70 bytes
    //
    _n4(sdk::unknown_ptr) un_map_desktop_surface;
    
    // [WarpBeginSystemMemoryCreation@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x48ec4, 0x17e70 bytes
    // dxgi.dll .text:0x48fb4, 0x17e70 bytes
    // dxgi.dll .text:0x54390, 0x18b10 bytes
    // dxgi.dll .text:0x4a444, 0x17e70 bytes
    //
    _n5(sdk::unknown_ptr) warp_begin_system_memory_creation;
    
    // [WarpEndSystemMemoryCreation@CDXGIOutputDuplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x48f00, 0x17e70 bytes
    // dxgi.dll .text:0x48ff0, 0x17e70 bytes
    // dxgi.dll .text:0x543d4, 0x18b10 bytes
    // dxgi.dll .text:0x4a480, 0x17e70 bytes
    //
    _n6(sdk::unknown_ptr) warp_end_system_memory_creation;
};
#include "magic/api.end.hpp"
