#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_fence_storage_page
{
    // [AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8117c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9be30, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8176c, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) allocate_storage_page_gpu_data;
    
    // [FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x85aa4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa21f0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86094, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) free_vm_mapping;
    
    // [GetPagingProcessGpuVA@VIDMM_FENCE_STORAGE_PAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbcac8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe1754, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbd098, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) get_paging_process_gpu_va;
    
    // [ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8156c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9c0dc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x81b5c, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) release_storage_page_gpu_data;
    
    // [AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1914, 0x158b bytes
    // dxgmms2.sys .text:0x12288, 0x1c52 bytes
    // dxgmms2.sys .text:0x14870, 0x20ba bytes
    // dxgmms2.sys .text:0x12288, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) assign_fence_storage_slot;
    
    // [??0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@@Z]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4ad10, 0x158b bytes
    // dxgmms2.sys PAGE:0x80214, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7b400, 0x20ba bytes
    // dxgmms2.sys PAGE:0x80804, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) construct_instance;
    
    // [??1VIDMM_FENCE_STORAGE_PAGE@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4a62c, 0x158b bytes
    // dxgmms2.sys PAGE:0x85a00, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa214c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85ff0, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) destroy_instance;
    
    // [FreeStorage@VIDMM_FENCE_STORAGE_PAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4a5d4, 0x158b bytes
    // dxgmms2.sys PAGE:0x85a18, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2164, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86008, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) free_storage;
    
    // [Init@VIDMM_FENCE_STORAGE_PAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4a4f4, 0x158b bytes
    // dxgmms2.sys PAGE:0x5e484, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7b47c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5ea74, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) init;
    
    // [MapCpuVA@VIDMM_FENCE_STORAGE_PAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4ab58, 0x158b bytes
    // dxgmms2.sys PAGE:0x84ed0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa1708, 0x20ba bytes
    // dxgmms2.sys PAGE:0x854c0, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) map_cpu_va;
    
    // [MapGpuVA@VIDMM_FENCE_STORAGE_PAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4a824, 0x158b bytes
    // dxgmms2.sys PAGE:0x809cc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x99928, 0x20ba bytes
    // dxgmms2.sys PAGE:0x80fbc, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) map_gpu_va;
    
    // [UnmapCpuVA@VIDMM_FENCE_STORAGE_PAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4a764, 0x158b bytes
    // dxgmms2.sys PAGE:0x8518c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa1f18, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8577c, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) unmap_cpu_va;
    
    // [UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4a634, 0x158b bytes
    // dxgmms2.sys PAGE:0x81308, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9c174, 0x20ba bytes
    // dxgmms2.sys PAGE:0x818f8, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) unmap_gpu_va;
};
#include "magic/api.end.hpp"
