#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_process
{
    // [SetMemoryBudgetOverride@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x90f28, 0x158b bytes
    //
    _m0(sdk::unknown_ptr) set_memory_budget_override;
    
    // [IsCurrentProcess@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 11
    // dxgmms2.sys .text:0x1eb0, 0x158b bytes
    // dxgmms2.sys .text:0x154b4, 0x20ba bytes
    //
    _m1(sdk::unknown_ptr) is_current_process;
    
    // [FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbca68, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe16d4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbd038, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) free_vm_process_fence_page_in_global_storage;
    
    // [GetCpuVisibleBufferAllocator@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbb0c4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdfc9c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbb694, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) get_cpu_visible_buffer_allocator;
    
    // [GetCurrentPartitionHandle@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6cb08, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8c920, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6d0f8, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) get_current_partition_handle;
    
    // [GetPageDirectoryData@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbb29c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdfea8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbb86c, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) get_page_directory_data;
    
    // [MapHostAddressesToGuest@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbb358, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdff64, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbb928, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) map_host_addresses_to_guest;
    
    // [MapHostVirtualAddressToGuest@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbb4c8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe00f8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbba98, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) map_host_virtual_address_to_guest;
    
    // [UnmapHostAddressesFromGuest@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbb998, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe05f8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbbf68, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) unmap_host_addresses_from_guest;
    
    // [AddCommitment@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4d0c4, 0x158b bytes
    // dxgmms2.sys PAGE:0x6dca0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x87708, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6e290, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) add_commitment;
    
    // [ChangeVideoMemoryReservation@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x90c6c, 0x158b bytes
    // dxgmms2.sys PAGE:0xbaf7c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdf9f8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbb54c, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) change_video_memory_reservation;
    
    // [ChargeEvictionTransfer@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x66e2c, 0x158b bytes
    // dxgmms2.sys PAGE:0xbb000, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdfa7c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbb5d0, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) charge_eviction_transfer;
    
    // [CloseAdapter@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4d5dc, 0x158b bytes
    // dxgmms2.sys PAGE:0x7fa6c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x99728, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8005c, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) close_adapter;
    
    // [??0VIDMM_PROCESS@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4cbf0, 0x158b bytes
    // dxgmms2.sys PAGE:0x7535c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x81dec, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7594c, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) construct_instance;
    
    // [DestroyAdapterInfo@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4ce60, 0x158b bytes
    // dxgmms2.sys PAGE:0x7ffd4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9d65c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x805c4, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) destroy_adapter_info;
    
    // [??1VIDMM_PROCESS@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4cd90, 0x158b bytes
    // dxgmms2.sys PAGE:0x74b90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x854a8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x75180, 0x1c52 bytes
    //
    _n5(sdk::unknown_ptr) destroy_instance;
    
    // [GetCommitmentInformation@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4d5b8, 0x158b bytes
    // dxgmms2.sys PAGE:0x6413c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x85db4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6472c, 0x1c52 bytes
    //
    _n6(sdk::unknown_ptr) get_commitment_information;
    
    // [GetKmdProcessHandle@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4cafc, 0x158b bytes
    // dxgmms2.sys PAGE:0x85b74, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3840, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86164, 0x1c52 bytes
    //
    _n7(sdk::unknown_ptr) get_kmd_process_handle;
    
    // [GetNumBytesToTrim@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x90ccc, 0x158b bytes
    // dxgmms2.sys PAGE:0xbb214, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdfe20, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbb7e4, 0x1c52 bytes
    //
    _n8(sdk::unknown_ptr) get_num_bytes_to_trim;
    
    // [GetProcessWorkingSetInformation@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x90d38, 0x158b bytes
    // dxgmms2.sys PAGE:0xbb2f4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdff00, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbb8c4, 0x1c52 bytes
    //
    _n9(sdk::unknown_ptr) get_process_working_set_information;
    
    // [GetVirtualAddressAllocator@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4cac0, 0x158b bytes
    // dxgmms2.sys PAGE:0x6db7c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x86984, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6e16c, 0x1c52 bytes
    //
    _o0(sdk::unknown_ptr) get_virtual_address_allocator;
    
    // [Init@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4cc40, 0x158b bytes
    // dxgmms2.sys PAGE:0x74834, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x824cc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x74e24, 0x1c52 bytes
    //
    _o1(sdk::unknown_ptr) init;
    
    // [InitializeProcessAdapterInfo@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4d26c, 0x158b bytes
    // dxgmms2.sys PAGE:0x7e108, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9c974, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7e6f8, 0x1c52 bytes
    //
    _o2(sdk::unknown_ptr) initialize_process_adapter_info;
    
    // [OpenAdapter@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4cb10, 0x158b bytes
    // dxgmms2.sys PAGE:0x7fba8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x99540, 0x20ba bytes
    // dxgmms2.sys PAGE:0x80198, 0x1c52 bytes
    //
    _o3(sdk::unknown_ptr) open_adapter;
    
    // [_pDxProcessPerAdapterCount@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36468, 0x158b bytes
    // dxgmms2.sys .data:0x51558, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e5e8, 0x20ba bytes
    // dxgmms2.sys .data:0x51558, 0x1c52 bytes
    //
    _o4(sdk::unknown_ptr) p_dx_process_per_adapter_count;
    
    // [QueryVideoMemoryInfo@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x90d88, 0x158b bytes
    // dxgmms2.sys PAGE:0xbb63c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe02a8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbbc0c, 0x1c52 bytes
    //
    _o5(sdk::unknown_ptr) query_video_memory_info;
    
    // [RemoveCommitment@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4cefc, 0x158b bytes
    // dxgmms2.sys PAGE:0x6d194, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x986a4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6d784, 0x1c52 bytes
    //
    _o6(sdk::unknown_ptr) remove_commitment;
    
    // [SafeAttach@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88580, 0x158b bytes
    // dxgmms2.sys PAGE:0x8311c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9f5fc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8370c, 0x1c52 bytes
    //
    _o7(sdk::unknown_ptr) safe_attach;
    
    // [SafeDetach@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8858c, 0x158b bytes
    // dxgmms2.sys PAGE:0x8313c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9f61c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8372c, 0x1c52 bytes
    //
    _o8(sdk::unknown_ptr) safe_detach;
    
    // [SetWorkingSetInformation@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x90f80, 0x158b bytes
    // dxgmms2.sys PAGE:0xbb7fc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe0468, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbbdcc, 0x1c52 bytes
    //
    _o9(sdk::unknown_ptr) set_working_set_information;
    
    // [SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x91028, 0x158b bytes
    // dxgmms2.sys PAGE:0xbb8bc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe051c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbbe8c, 0x1c52 bytes
    //
    _p0(sdk::unknown_ptr) suspend_resume_process_gpu_mmu_contexts;
};
#include "magic/api.end.hpp"
