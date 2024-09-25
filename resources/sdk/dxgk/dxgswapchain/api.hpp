#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgswapchain
{
    // [DestroyGlobal@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x18ef84, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) destroy_global;
    
    // [DestroyLocalClient@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x18f158, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) destroy_local_client;
    
    // [DuplicateSurfacesForCreate@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x18f2e8, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) duplicate_surfaces_for_create;
    
    // [DuplicateSurfacesForOpen@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x18f48c, 0x60098 bytes
    //
    _m3(sdk::unknown_ptr) duplicate_surfaces_for_open;
    
    // [GetClientSurfacePhysicalAddress@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x34b1b0, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) get_client_surface_physical_address;
    
    // [InitializeGlobalState@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x18f9e8, 0x60098 bytes
    //
    _m5(sdk::unknown_ptr) initialize_global_state;
    
    // [OpenLocal@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x18fea0, 0x60098 bytes
    //
    _m6(sdk::unknown_ptr) open_local;
    
    // [AddSurface@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a4e50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34a694, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a4ef0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) add_surface;
    
    // [AsyncCloseNtHandle@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a5190, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34aa90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a5230, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) async_close_nt_handle;
    
    // [ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a5224, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34ab24, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a52c4, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) consumer_check_for_surfaces_to_free;
    
    // [DestroySurfacesResourcesGlobal@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a53f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34ad40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a5498, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) destroy_surfaces_resources_global;
    
    // [DestroySurfacesResourcesLocal@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a548c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34add4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a552c, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) destroy_surfaces_resources_local;
    
    // [DestroySwapchainGlobal@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a55e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34af58, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a5680, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) destroy_swapchain_global;
    
    // [DestroySwapchainLocalClient@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a56fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34b0a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a579c, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) destroy_swapchain_local_client;
    
    // [FindEmptySlot@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a5768, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34b114, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a5808, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) find_empty_slot;
    
    // [InitializeSwapchainGlobalState@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a5c14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34ba08, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a5cb4, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) initialize_swapchain_global_state;
    
    // [OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a6110, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34bce8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a61b0, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) open_surface_resources_local_for_sequential_opener;
    
    // [OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a624c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34be84, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a62ec, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) open_surfaces_resources_local_for_creator;
    
    // [OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a6570, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34c264, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a6610, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) open_surfaces_resources_local_for_opener;
    
    // [OpenSwapchainLocal@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a686c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34c614, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a690c, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) open_swapchain_local;
    
    // [RemoveSurface@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a7190, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34d024, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a7230, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) remove_surface;
    
    // [UnOrderedPresent@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a7824, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34d724, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a78c4, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) un_ordered_present;
    
    // [AcquireBuffer@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18edd0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a4c04, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x221716, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a4ca4, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) acquire_buffer;
    
    // [??0DXGSWAPCHAIN@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18e918, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a466c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34a15c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a470c, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGSWAPCHAIN@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18e9f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a476c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34a25c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a480c, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyLocal@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18f0d4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a5364, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34acac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a5404, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) destroy_local;
    
    // [GetClientSurfaceInfo@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2839c, 0x60098 bytes
    // dxgkrnl.sys .text:0x490ac, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5ad9c, 0x84380 bytes
    // dxgkrnl.sys .text:0x49304, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) get_client_surface_info;
    
    // [GetMetaDataInternal@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18f634, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a57d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34b4e8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a5878, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) get_meta_data_internal;
    
    // [GetOtherClientSurfaceInfo@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x28410, 0x60098 bytes
    // dxgkrnl.sys .text:0x49134, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5ae6c, 0x84380 bytes
    // dxgkrnl.sys .text:0x4938c, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) get_other_client_surface_info;
    
    // [GetSetMetaData@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18f79c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a5984, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34b6e8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a5a24, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) get_set_meta_data;
    
    // [InsertGPUSignal@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18fbc8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a5d9c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2219bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a5e3c, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) insert_gpu_signal;
    
    // [InsertGPUWait@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18fce8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a5eec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x221b82, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a5f8c, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) insert_gpu_wait;
    
    // [MarkAbandoned@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18fe0c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a604c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34bbec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a60ec, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) mark_abandoned;
    
    // [ReleaseBuffer@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x190280, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a6bf8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34c8e8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a6c98, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) release_buffer;
    
    // [SetMetaDataInternal@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x190550, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a72f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34d240, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a7398, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) set_meta_data_internal;
    
    // [SwitchClient@DXGSWAPCHAIN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x28490, 0x60098 bytes
    // dxgkrnl.sys .text:0x492b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5b0b0, 0x84380 bytes
    // dxgkrnl.sys .text:0x49508, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) switch_client;
};
#include "magic/api.end.hpp"
