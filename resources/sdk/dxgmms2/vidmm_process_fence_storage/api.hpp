#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_process_fence_storage
{
    // [FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x147e4, 0x20ba bytes
    //
    _m0(sdk::unknown_ptr) find_available_fence_storage_slot;
    
    // [AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1a60, 0x158b bytes
    // dxgmms2.sys .text:0x12158, 0x1c52 bytes
    // dxgmms2.sys .text:0x146f8, 0x20ba bytes
    // dxgmms2.sys .text:0x12158, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) allocate_fence_storage_slot;
    
    // [AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1f1c8, 0x158b bytes
    // dxgmms2.sys .text:0x15470, 0x1c52 bytes
    // dxgmms2.sys .text:0x1100, 0x20ba bytes
    // dxgmms2.sys .text:0x15470, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) allocate_shared_fence_storage_slot;
    
    // [??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4aeb0, 0x158b bytes
    // dxgmms2.sys PAGE:0x752f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x81ec4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x758e0, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4aef0, 0x158b bytes
    // dxgmms2.sys PAGE:0x75434, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa20dc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x75a24, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1b70, 0x158b bytes
    // dxgmms2.sys .text:0x14034, 0x1c52 bytes
    // dxgmms2.sys .text:0x17a24, 0x20ba bytes
    // dxgmms2.sys .text:0x14034, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) free_fence_storage_slot;
    
    // [FreeSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1f290, 0x158b bytes
    // dxgmms2.sys .text:0x15548, 0x1c52 bytes
    // dxgmms2.sys .text:0x1b234, 0x20ba bytes
    // dxgmms2.sys .text:0x15548, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) free_shared_fence_storage_slot;
    
    // [_GlobalFenceStorage@VIDMM_PROCESS_FENCE_STORAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36460, 0x158b bytes
    // dxgmms2.sys .data:0x51548, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e5c8, 0x20ba bytes
    // dxgmms2.sys .data:0x51548, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) global_fence_storage;
    
    // [InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6facc, 0x158b bytes
    // dxgmms2.sys PAGE:0x8dc5c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb05fc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8e33c, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) init_global_storage;
};
#include "magic/api.end.hpp"
