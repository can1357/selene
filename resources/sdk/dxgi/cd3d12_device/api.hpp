#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cd3d12_device
{
    // [Convert@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x82658, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) convert;
    
    // [MarkPresent@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x845d4, 0x18b10 bytes
    //
    _m1(sdk::unknown_ptr) mark_present;
    
    // [AcquireResource@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x76d10, 0x17e70 bytes
    // dxgi.dll .text:0x76e40, 0x17e70 bytes
    // dxgi.dll .text:0x81ed0, 0x18b10 bytes
    // dxgi.dll .text:0x78270, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) acquire_resource;
    
    // [AdjustPresentLimitSemaphore@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x76dd4, 0x17e70 bytes
    // dxgi.dll .text:0x76f04, 0x17e70 bytes
    // dxgi.dll .text:0x81fc0, 0x18b10 bytes
    // dxgi.dll .text:0x78334, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) adjust_present_limit_semaphore;
    
    // [Blt@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x76e70, 0x17e70 bytes
    // dxgi.dll .text:0x76fa0, 0x17e70 bytes
    // dxgi.dll .text:0x82060, 0x18b10 bytes
    // dxgi.dll .text:0x783d0, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) blt;
    
    // [CheckCompositionColorSpaceSupport@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ee00, 0x17e70 bytes
    // dxgi.dll .text:0x1f110, 0x17e70 bytes
    // dxgi.dll .text:0x26980, 0x18b10 bytes
    // dxgi.dll .text:0x1ff00, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) check_composition_color_space_support;
    
    // [CheckDirectFlipSupport@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x771c0, 0x17e70 bytes
    // dxgi.dll .text:0x772f0, 0x17e70 bytes
    // dxgi.dll .text:0x823e0, 0x18b10 bytes
    // dxgi.dll .text:0x78720, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) check_direct_flip_support;
    
    // [CheckMultiPlaneOverlayColorSpaceSupport@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ee20, 0x17e70 bytes
    // dxgi.dll .text:0x1f130, 0x17e70 bytes
    // dxgi.dll .text:0x269a0, 0x18b10 bytes
    // dxgi.dll .text:0x1ff20, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) check_multi_plane_overlay_color_space_support;
    
    // [CheckMultiplaneOverlaySupport@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ee30, 0x17e70 bytes
    // dxgi.dll .text:0x1f140, 0x17e70 bytes
    // dxgi.dll .text:0x269c0, 0x18b10 bytes
    // dxgi.dll .text:0x1ff30, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) check_multiplane_overlay_support;
    
    // [CheckPresentDurationSupport@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ee90, 0x17e70 bytes
    // dxgi.dll .text:0x1f1a0, 0x17e70 bytes
    // dxgi.dll .text:0x26b10, 0x18b10 bytes
    // dxgi.dll .text:0x1ff90, 0x17e70 bytes
    //
    _m9(sdk::unknown_ptr) check_present_duration_support;
    
    // [CloseAndSubmitCommandList@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x771e4, 0x17e70 bytes
    // dxgi.dll .text:0x77314, 0x17e70 bytes
    // dxgi.dll .text:0x82404, 0x18b10 bytes
    // dxgi.dll .text:0x78744, 0x17e70 bytes
    //
    _n0(sdk::unknown_ptr) close_and_submit_command_list;
    
    // [??0CD3D12Device@@QEAA@AEBUTConstructorArgs@0@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x76208, 0x17e70 bytes
    // dxgi.dll .text:0x76330, 0x17e70 bytes
    // dxgi.dll .text:0x81514, 0x18b10 bytes
    // dxgi.dll .text:0x77760, 0x17e70 bytes
    //
    _n1(sdk::unknown_ptr) construct_instance;
    
    // [CreateFence@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x77410, 0x17e70 bytes
    // dxgi.dll .text:0x77540, 0x17e70 bytes
    // dxgi.dll .text:0x82780, 0x18b10 bytes
    // dxgi.dll .text:0x78970, 0x17e70 bytes
    //
    _n2(sdk::unknown_ptr) create_fence;
    
    // [CreateSurfaceInternal@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x777b0, 0x17e70 bytes
    // dxgi.dll .text:0x778e0, 0x17e70 bytes
    // dxgi.dll .text:0x82ae0, 0x18b10 bytes
    // dxgi.dll .text:0x78d10, 0x17e70 bytes
    //
    _n3(sdk::unknown_ptr) create_surface_internal;
    
    // [CreateSurfaceInternalExtended@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7780c, 0x17e70 bytes
    // dxgi.dll .text:0x7793c, 0x17e70 bytes
    // dxgi.dll .text:0x82b3c, 0x18b10 bytes
    // dxgi.dll .text:0x78d6c, 0x17e70 bytes
    //
    _n4(sdk::unknown_ptr) create_surface_internal_extended;
    
    // [??1CD3D12Device@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x76800, 0x17e70 bytes
    // dxgi.dll .text:0x76928, 0x17e70 bytes
    // dxgi.dll .text:0x81afc, 0x18b10 bytes
    // dxgi.dll .text:0x77d58, 0x17e70 bytes
    //
    _n5(sdk::unknown_ptr) destroy_instance;
    
    // [DeviceCompletedHWNDFullscreenTransition@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x269e0, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _n6(sdk::unknown_ptr) device_completed_hwnd_fullscreen_transition;
    
    // [DriverSupportsOverlays@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x78090, 0x17e70 bytes
    // dxgi.dll .text:0x781c0, 0x17e70 bytes
    // dxgi.dll .text:0x833b0, 0x18b10 bytes
    // dxgi.dll .text:0x795f0, 0x17e70 bytes
    //
    _n7(sdk::unknown_ptr) driver_supports_overlays;
    
    // [EnsureChildDevice@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x78100, 0x17e70 bytes
    // dxgi.dll .text:0x78230, 0x17e70 bytes
    // dxgi.dll .text:0x83420, 0x18b10 bytes
    // dxgi.dll .text:0x79660, 0x17e70 bytes
    //
    _n8(sdk::unknown_ptr) ensure_child_device;
    
    // [EnsureCommandList@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x782b4, 0x17e70 bytes
    // dxgi.dll .text:0x783e4, 0x17e70 bytes
    // dxgi.dll .text:0x835f0, 0x18b10 bytes
    // dxgi.dll .text:0x79814, 0x17e70 bytes
    //
    _n9(sdk::unknown_ptr) ensure_command_list;
    
    // [Flush@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x783c0, 0x17e70 bytes
    // dxgi.dll .text:0x784f0, 0x17e70 bytes
    // dxgi.dll .text:0x836f0, 0x18b10 bytes
    // dxgi.dll .text:0x79920, 0x17e70 bytes
    //
    _o0(sdk::unknown_ptr) flush;
    
    // [FlushDeletion@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x269f0, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _o1(sdk::unknown_ptr) flush_deletion;
    
    // [GetAdapterKernelHandle@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7842c, 0x17e70 bytes
    // dxgi.dll .text:0x7855c, 0x17e70 bytes
    // dxgi.dll .text:0x83760, 0x18b10 bytes
    // dxgi.dll .text:0x7998c, 0x17e70 bytes
    //
    _o2(sdk::unknown_ptr) get_adapter_kernel_handle;
    
    // [GetBaseAdapter@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7849c, 0x17e70 bytes
    // dxgi.dll .text:0x785cc, 0x17e70 bytes
    // dxgi.dll .text:0x837c0, 0x18b10 bytes
    // dxgi.dll .text:0x799fc, 0x17e70 bytes
    //
    _o3(sdk::unknown_ptr) get_base_adapter;
    
    // [GetCaps@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x78500, 0x17e70 bytes
    // dxgi.dll .text:0x78630, 0x17e70 bytes
    // dxgi.dll .text:0x83830, 0x18b10 bytes
    // dxgi.dll .text:0x79a60, 0x17e70 bytes
    //
    _o4(sdk::unknown_ptr) get_caps;
    
    // [GetChildDevice@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1eeb0, 0x17e70 bytes
    // dxgi.dll .text:0x1f1c0, 0x17e70 bytes
    // dxgi.dll .text:0x26b40, 0x18b10 bytes
    // dxgi.dll .text:0x1ffb0, 0x17e70 bytes
    //
    _o5(sdk::unknown_ptr) get_child_device;
    
    // [GetContentProtection@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x78760, 0x17e70 bytes
    // dxgi.dll .text:0x78890, 0x17e70 bytes
    // dxgi.dll .text:0x83ab0, 0x18b10 bytes
    // dxgi.dll .text:0x79cc0, 0x17e70 bytes
    //
    _o6(sdk::unknown_ptr) get_content_protection;
    
    // [GetContextResolver@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x26a00, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _o7(sdk::unknown_ptr) get_context_resolver;
    
    // [GetCurrentResourceAndCommandQueue@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x787a0, 0x17e70 bytes
    // dxgi.dll .text:0x788d0, 0x17e70 bytes
    // dxgi.dll .text:0x83af0, 0x18b10 bytes
    // dxgi.dll .text:0x79d00, 0x17e70 bytes
    //
    _o8(sdk::unknown_ptr) get_current_resource_and_command_queue;
    
    // [GetDesc@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x788d0, 0x17e70 bytes
    // dxgi.dll .text:0x78a00, 0x17e70 bytes
    // dxgi.dll .text:0x83c20, 0x18b10 bytes
    // dxgi.dll .text:0x79e30, 0x17e70 bytes
    //
    _o9(sdk::unknown_ptr) get_desc;
    
    // [GetDeviceRemovedReason@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x78970, 0x17e70 bytes
    // dxgi.dll .text:0x78aa0, 0x17e70 bytes
    // dxgi.dll .text:0x83cd0, 0x18b10 bytes
    // dxgi.dll .text:0x79ed0, 0x17e70 bytes
    //
    _p0(sdk::unknown_ptr) get_device_removed_reason;
    
    // [GetFlipExSemaphoreHandle@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x78990, 0x17e70 bytes
    // dxgi.dll .text:0x78ac0, 0x17e70 bytes
    // dxgi.dll .text:0x83d00, 0x18b10 bytes
    // dxgi.dll .text:0x79ef0, 0x17e70 bytes
    //
    _p1(sdk::unknown_ptr) get_flip_ex_semaphore_handle;
    
    // [GetGammaCaps@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x78a40, 0x17e70 bytes
    // dxgi.dll .text:0x78b70, 0x17e70 bytes
    // dxgi.dll .text:0x83db0, 0x18b10 bytes
    // dxgi.dll .text:0x79fa0, 0x17e70 bytes
    //
    _p2(sdk::unknown_ptr) get_gamma_caps;
    
    // [GetHardwareProtectionCaps@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ee50, 0x17e70 bytes
    // dxgi.dll .text:0x1f160, 0x17e70 bytes
    // dxgi.dll .text:0x26a10, 0x18b10 bytes
    // dxgi.dll .text:0x1ff50, 0x17e70 bytes
    //
    _p3(sdk::unknown_ptr) get_hardware_protection_caps;
    
    // [GetLUID@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1eed0, 0x17e70 bytes
    // dxgi.dll .text:0x1f1e0, 0x17e70 bytes
    // dxgi.dll .text:0x26b80, 0x18b10 bytes
    // dxgi.dll .text:0x1ffd0, 0x17e70 bytes
    //
    _p4(sdk::unknown_ptr) get_luid;
    
    // [GetMultiplaneOverlayCaps@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x78a80, 0x17e70 bytes
    // dxgi.dll .text:0x78bb0, 0x17e70 bytes
    // dxgi.dll .text:0x83df0, 0x18b10 bytes
    // dxgi.dll .text:0x79fe0, 0x17e70 bytes
    //
    _p5(sdk::unknown_ptr) get_multiplane_overlay_caps;
    
    // [GetMultiplaneOverlayGroupCaps@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x78ac0, 0x17e70 bytes
    // dxgi.dll .text:0x78bf0, 0x17e70 bytes
    // dxgi.dll .text:0x83e30, 0x18b10 bytes
    // dxgi.dll .text:0x7a020, 0x17e70 bytes
    //
    _p6(sdk::unknown_ptr) get_multiplane_overlay_group_caps;
    
    // [GetSwapChainObject@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x78ae0, 0x17e70 bytes
    // dxgi.dll .text:0x78c10, 0x17e70 bytes
    // dxgi.dll .text:0x83e50, 0x18b10 bytes
    // dxgi.dll .text:0x7a040, 0x17e70 bytes
    //
    _p7(sdk::unknown_ptr) get_swap_chain_object;
    
    // [InitCommandList@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x78af8, 0x17e70 bytes
    // dxgi.dll .text:0x78c28, 0x17e70 bytes
    // dxgi.dll .text:0x83e74, 0x18b10 bytes
    // dxgi.dll .text:0x7a058, 0x17e70 bytes
    //
    _p8(sdk::unknown_ptr) init_command_list;
    
    // [InsertImplicitSync@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x78f70, 0x17e70 bytes
    // dxgi.dll .text:0x790a0, 0x17e70 bytes
    // dxgi.dll .text:0x84360, 0x18b10 bytes
    // dxgi.dll .text:0x7a4d0, 0x17e70 bytes
    //
    _p9(sdk::unknown_ptr) insert_implicit_sync;
    
    // [IsMaximumFrameLatencyReached@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec40, 0x17e70 bytes
    // dxgi.dll .text:0x1ef50, 0x17e70 bytes
    // dxgi.dll .text:0x26a30, 0x18b10 bytes
    // dxgi.dll .text:0x1fd40, 0x17e70 bytes
    //
    _q0(sdk::unknown_ptr) is_maximum_frame_latency_reached;
    
    // [IsValidScanoutFormat@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x790a0, 0x17e70 bytes
    // dxgi.dll .text:0x791d0, 0x17e70 bytes
    // dxgi.dll .text:0x84490, 0x18b10 bytes
    // dxgi.dll .text:0x7a600, 0x17e70 bytes
    //
    _q1(sdk::unknown_ptr) is_valid_scanout_format;
    
    // [IsXBOX@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x79110, 0x17e70 bytes
    // dxgi.dll .text:0x79240, 0x17e70 bytes
    // dxgi.dll .text:0x84510, 0x18b10 bytes
    // dxgi.dll .text:0x7a670, 0x17e70 bytes
    //
    _q2(sdk::unknown_ptr) is_xbox;
    
    // [LifetimeStateUpdated@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x79180, 0x17e70 bytes
    // dxgi.dll .text:0x792b0, 0x17e70 bytes
    // dxgi.dll .text:0x84580, 0x18b10 bytes
    // dxgi.dll .text:0x7a6e0, 0x17e70 bytes
    //
    _q3(sdk::unknown_ptr) lifetime_state_updated;
    
    // [LogDroppedAPICallIfEnabled@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x26c50, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _q4(sdk::unknown_ptr) log_dropped_api_call_if_enabled;
    
    // [Map@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x26a40, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _q5(sdk::unknown_ptr) map;
    
    // [OpenFence@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x79210, 0x17e70 bytes
    // dxgi.dll .text:0x79340, 0x17e70 bytes
    // dxgi.dll .text:0x846c0, 0x18b10 bytes
    // dxgi.dll .text:0x7a770, 0x17e70 bytes
    //
    _q6(sdk::unknown_ptr) open_fence;
    
    // [OpenSharedResource@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x79420, 0x17e70 bytes
    // dxgi.dll .text:0x79550, 0x17e70 bytes
    // dxgi.dll .text:0x848b0, 0x18b10 bytes
    // dxgi.dll .text:0x7a980, 0x17e70 bytes
    //
    _q7(sdk::unknown_ptr) open_shared_resource;
    
    // [OpenSharedResource1@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x79320, 0x17e70 bytes
    // dxgi.dll .text:0x79450, 0x17e70 bytes
    // dxgi.dll .text:0x847b0, 0x18b10 bytes
    // dxgi.dll .text:0x7a880, 0x17e70 bytes
    //
    _q8(sdk::unknown_ptr) open_shared_resource1;
    
    // [Present@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x79520, 0x17e70 bytes
    // dxgi.dll .text:0x79650, 0x17e70 bytes
    // dxgi.dll .text:0x849a0, 0x18b10 bytes
    // dxgi.dll .text:0x7aa80, 0x17e70 bytes
    //
    _q9(sdk::unknown_ptr) present;
    
    // [PresentExtended@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7956c, 0x17e70 bytes
    // dxgi.dll .text:0x7969c, 0x17e70 bytes
    // dxgi.dll .text:0x849ec, 0x18b10 bytes
    // dxgi.dll .text:0x7aacc, 0x17e70 bytes
    //
    _r0(sdk::unknown_ptr) present_extended;
    
    // [PresentMultiplaneOverlay@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x26a50, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _r1(sdk::unknown_ptr) present_multiplane_overlay;
    
    // [QueryScanoutCaps@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x26a60, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _r2(sdk::unknown_ptr) query_scanout_caps;
    
    // [ReleaseResource@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x26c70, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _r3(sdk::unknown_ptr) release_resource;
    
    // [RemoveDevice@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x79ec0, 0x17e70 bytes
    // dxgi.dll .text:0x79ff0, 0x17e70 bytes
    // dxgi.dll .text:0x853b0, 0x18b10 bytes
    // dxgi.dll .text:0x7b420, 0x17e70 bytes
    //
    _r4(sdk::unknown_ptr) remove_device;
    
    // [ResolveSharedResource@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6e760, 0x17e70 bytes
    // dxgi.dll .text:0x6e870, 0x17e70 bytes
    // dxgi.dll .text:0x7a470, 0x18b10 bytes
    // dxgi.dll .text:0x6fca0, 0x17e70 bytes
    //
    _r5(sdk::unknown_ptr) resolve_shared_resource;
    
    // [ReturnCreatedFence@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x79edc, 0x17e70 bytes
    // dxgi.dll .text:0x7a00c, 0x17e70 bytes
    // dxgi.dll .text:0x853d8, 0x18b10 bytes
    // dxgi.dll .text:0x7b43c, 0x17e70 bytes
    //
    _r6(sdk::unknown_ptr) return_created_fence;
    
    // [ReturnCreatedResource@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x79f80, 0x17e70 bytes
    // dxgi.dll .text:0x7a0b0, 0x17e70 bytes
    // dxgi.dll .text:0x85488, 0x18b10 bytes
    // dxgi.dll .text:0x7b4e0, 0x17e70 bytes
    //
    _r7(sdk::unknown_ptr) return_created_resource;
    
    // [RotateResourceIdentities@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec40, 0x17e70 bytes
    // dxgi.dll .text:0x1ef50, 0x17e70 bytes
    // dxgi.dll .text:0x26a70, 0x18b10 bytes
    // dxgi.dll .text:0x1fd40, 0x17e70 bytes
    //
    _r8(sdk::unknown_ptr) rotate_resource_identities;
    
    // [SetCurrentSwapchainBuffer@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a084, 0x17e70 bytes
    // dxgi.dll .text:0x7a1b4, 0x17e70 bytes
    // dxgi.dll .text:0x855b0, 0x18b10 bytes
    // dxgi.dll .text:0x7b5e4, 0x17e70 bytes
    //
    _r9(sdk::unknown_ptr) set_current_swapchain_buffer;
    
    // [SetDisplayMode@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x26c80, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _s0(sdk::unknown_ptr) set_display_mode;
    
    // [SetHardwareProtection@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x26a80, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _s1(sdk::unknown_ptr) set_hardware_protection;
    
    // [SetMarkerIfRenderInstrumentationEnabled@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x26ca0, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _s2(sdk::unknown_ptr) set_marker_if_render_instrumentation_enabled;
    
    // [SetPresentPostSignal@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a170, 0x17e70 bytes
    // dxgi.dll .text:0x7a2a0, 0x17e70 bytes
    // dxgi.dll .text:0x856c0, 0x18b10 bytes
    // dxgi.dll .text:0x7b6d0, 0x17e70 bytes
    //
    _s3(sdk::unknown_ptr) set_present_post_signal;
    
    // [SetTransitionalPrimaryResource@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x26a90, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _s4(sdk::unknown_ptr) set_transitional_primary_resource;
    
    // [Unmap@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x26aa0, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _s5(sdk::unknown_ptr) unmap;
    
    // [ValidateGetDisplaySurfaceDataDest@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec40, 0x17e70 bytes
    // dxgi.dll .text:0x1ef50, 0x17e70 bytes
    // dxgi.dll .text:0x26d40, 0x18b10 bytes
    // dxgi.dll .text:0x1fd40, 0x17e70 bytes
    //
    _s6(sdk::unknown_ptr) validate_get_display_surface_data_dest;
    
    // [WaitForFence@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a290, 0x17e70 bytes
    // dxgi.dll .text:0x7a3c0, 0x17e70 bytes
    // dxgi.dll .text:0x85860, 0x18b10 bytes
    // dxgi.dll .text:0x7b7f0, 0x17e70 bytes
    //
    _s7(sdk::unknown_ptr) wait_for_fence;
};
#include "magic/api.end.hpp"
