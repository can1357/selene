#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_memory_segment
{
    // [Defragment@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc5b00, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe8e80, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc60d0, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) defragment;
    
    // [MoveDisplayingResource@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc6038, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe905c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc6608, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) move_displaying_resource;
    
    // [SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc69a4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe97fc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc6f74, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) suspend_purge_for_vpr_grow;
    
    // [TransferMemory@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8632c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3f74, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8691c, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) transfer_memory;
    
    // [TransferMemoryFast@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x863cc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa4014, 0x20ba bytes
    // dxgmms2.sys PAGE:0x869bc, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) transfer_memory_fast;
    
    // [TransferMemorySlow@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc6a84, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe98d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc7054, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) transfer_memory_slow;
    
    // [TransferToSegment@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x61730, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x83c64, 0x20ba bytes
    // dxgmms2.sys PAGE:0x61d20, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) transfer_to_segment;
    
    // [TransferToSystem@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x610d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x834c0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x616c0, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) transfer_to_system;
    
    // [ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc6d74, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe9b9c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc7344, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) validate_frame_buffer_rotation;
    
    // [VerifyTransfer@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc6e40, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe9c30, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc7410, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) verify_transfer;
    
    // [AllocateScratchRange@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x96850, 0x158b bytes
    // dxgmms2.sys PAGE:0xc5890, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe8c20, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc5e60, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) allocate_scratch_range;
    
    // [CommitResource@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x45640, 0x158b bytes
    // dxgmms2.sys PAGE:0x61560, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x83a20, 0x20ba bytes
    // dxgmms2.sys PAGE:0x61b50, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) commit_resource;
    
    // [??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x967ec, 0x158b bytes
    // dxgmms2.sys PAGE:0xc5824, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe8b88, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc5df4, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) destroy_instance;
    
    // [EvictResource@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x44e70, 0x158b bytes
    // dxgmms2.sys PAGE:0x62340, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x85170, 0x20ba bytes
    // dxgmms2.sys PAGE:0x62930, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) evict_resource;
    
    // [FreeScratchRange@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x96a30, 0x158b bytes
    // dxgmms2.sys PAGE:0xc5ca0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe9040, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc6270, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) free_scratch_range;
    
    // [Init@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6f210, 0x158b bytes
    // dxgmms2.sys PAGE:0xc5cc0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xad0b0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc6290, 0x1c52 bytes
    //
    _n5(sdk::unknown_ptr) init;
    
    // [PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x96a3c, 0x158b bytes
    // dxgmms2.sys PAGE:0xc6350, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe936c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc6920, 0x1c52 bytes
    //
    _n6(sdk::unknown_ptr) purge_cpu_visible_allocations;
    
    // [ReserveResource@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x44de0, 0x158b bytes
    // dxgmms2.sys PAGE:0x619a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9e590, 0x20ba bytes
    // dxgmms2.sys PAGE:0x61f90, 0x1c52 bytes
    //
    _n7(sdk::unknown_ptr) reserve_resource;
    
    // [RotateCopyCallback@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x96cd0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc6670, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe9640, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc6c40, 0x1c52 bytes
    //
    _n8(sdk::unknown_ptr) rotate_copy_callback;
    
    // [RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x66930, 0x158b bytes
    // dxgmms2.sys PAGE:0xc6850, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3e90, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc6e20, 0x1c52 bytes
    //
    _n9(sdk::unknown_ptr) rotate_frame_buffer_copy_callback;
};
#include "magic/api.end.hpp"
