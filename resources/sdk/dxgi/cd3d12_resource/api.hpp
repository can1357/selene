#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cd3d12_resource
{
    // [??0CD3D12Resource@@QEAA@AEBUTConstructorArgs@0@PEAUILockOwner@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a3b4, 0x17e70 bytes
    // dxgi.dll .text:0x7a4e4, 0x17e70 bytes
    // dxgi.dll .text:0x8598c, 0x18b10 bytes
    // dxgi.dll .text:0x7b914, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [CreateSharedHandle@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a5e0, 0x17e70 bytes
    // dxgi.dll .text:0x7a710, 0x17e70 bytes
    // dxgi.dll .text:0x85be0, 0x18b10 bytes
    // dxgi.dll .text:0x7bb40, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) create_shared_handle;
    
    // [CreateSharedHandleInternal@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a630, 0x17e70 bytes
    // dxgi.dll .text:0x7a760, 0x17e70 bytes
    // dxgi.dll .text:0x85c40, 0x18b10 bytes
    // dxgi.dll .text:0x7bb90, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) create_shared_handle_internal;
    
    // [CreateSubresourceSurface@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x26b30, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) create_subresource_surface;
    
    // [??1CD3D12Resource@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a4b0, 0x17e70 bytes
    // dxgi.dll .text:0x7a5e0, 0x17e70 bytes
    // dxgi.dll .text:0x85a94, 0x18b10 bytes
    // dxgi.dll .text:0x7ba10, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [GetDDIHandle@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ef30, 0x17e70 bytes
    // dxgi.dll .text:0x1f240, 0x17e70 bytes
    // dxgi.dll .text:0x26d50, 0x18b10 bytes
    // dxgi.dll .text:0x20030, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) get_ddi_handle;
    
    // [GetDesc@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a660, 0x17e70 bytes
    // dxgi.dll .text:0x7a790, 0x17e70 bytes
    // dxgi.dll .text:0x85c80, 0x18b10 bytes
    // dxgi.dll .text:0x7bbc0, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) get_desc;
    
    // [GetDevice@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a6d0, 0x17e70 bytes
    // dxgi.dll .text:0x7a800, 0x17e70 bytes
    // dxgi.dll .text:0x85d00, 0x18b10 bytes
    // dxgi.dll .text:0x7bc30, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) get_device;
    
    // [GetEvictionPriority@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1eec0, 0x17e70 bytes
    // dxgi.dll .text:0x1f1d0, 0x17e70 bytes
    // dxgi.dll .text:0x26b60, 0x18b10 bytes
    // dxgi.dll .text:0x1ffc0, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) get_eviction_priority;
    
    // [GetParent@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x286a0, 0x17e70 bytes
    // dxgi.dll .text:0x289b0, 0x17e70 bytes
    // dxgi.dll .text:0x30650, 0x18b10 bytes
    // dxgi.dll .text:0x29e30, 0x17e70 bytes
    //
    _m9(sdk::unknown_ptr) get_parent;
    
    // [GetPrimaryDesc@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x26ba0, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _n0(sdk::unknown_ptr) get_primary_desc;
    
    // [GetPrivateData@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a720, 0x17e70 bytes
    // dxgi.dll .text:0x7a850, 0x17e70 bytes
    // dxgi.dll .text:0x85d80, 0x18b10 bytes
    // dxgi.dll .text:0x7bc80, 0x17e70 bytes
    //
    _n1(sdk::unknown_ptr) get_private_data;
    
    // [GetSharedHandle@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1eef0, 0x17e70 bytes
    // dxgi.dll .text:0x1f200, 0x17e70 bytes
    // dxgi.dll .text:0x26bb0, 0x18b10 bytes
    // dxgi.dll .text:0x1fff0, 0x17e70 bytes
    //
    _n2(sdk::unknown_ptr) get_shared_handle;
    
    // [GetSharedHandleInternal@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec40, 0x17e70 bytes
    // dxgi.dll .text:0x1ef50, 0x17e70 bytes
    // dxgi.dll .text:0x26bd0, 0x18b10 bytes
    // dxgi.dll .text:0x1fd40, 0x17e70 bytes
    //
    _n3(sdk::unknown_ptr) get_shared_handle_internal;
    
    // [GetUsage@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1eec0, 0x17e70 bytes
    // dxgi.dll .text:0x1f1d0, 0x17e70 bytes
    // dxgi.dll .text:0x26be0, 0x18b10 bytes
    // dxgi.dll .text:0x1ffc0, 0x17e70 bytes
    //
    _n4(sdk::unknown_ptr) get_usage;
    
    // [IsDCOutstanding@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec40, 0x17e70 bytes
    // dxgi.dll .text:0x1ef50, 0x17e70 bytes
    // dxgi.dll .text:0x26c00, 0x18b10 bytes
    // dxgi.dll .text:0x1fd40, 0x17e70 bytes
    //
    _n5(sdk::unknown_ptr) is_dc_outstanding;
    
    // [Map@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x26c60, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _n6(sdk::unknown_ptr) map;
    
    // [SetEvictionPriority@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x26c90, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _n7(sdk::unknown_ptr) set_eviction_priority;
    
    // [SetPrivateData@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a7c0, 0x17e70 bytes
    // dxgi.dll .text:0x7a8f0, 0x17e70 bytes
    // dxgi.dll .text:0x85e30, 0x18b10 bytes
    // dxgi.dll .text:0x7bd20, 0x17e70 bytes
    //
    _n8(sdk::unknown_ptr) set_private_data;
    
    // [SetPrivateDataInterface@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x28780, 0x17e70 bytes
    // dxgi.dll .text:0x28a90, 0x17e70 bytes
    // dxgi.dll .text:0x30810, 0x18b10 bytes
    // dxgi.dll .text:0x29f10, 0x17e70 bytes
    //
    _n9(sdk::unknown_ptr) set_private_data_interface;
    
    // [SetSwapChainInternal@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x26cb0, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _o0(sdk::unknown_ptr) set_swap_chain_internal;
    
    // [UCBreakCyclicReferences@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x26d10, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _o1(sdk::unknown_ptr) uc_break_cyclic_references;
    
    // [UCEstablishCyclicReferences@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x26d20, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _o2(sdk::unknown_ptr) uc_establish_cyclic_references;
    
    // [Unmap@CD3D12Resource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x26d30, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _o3(sdk::unknown_ptr) unmap;
};
#include "magic/api.end.hpp"
