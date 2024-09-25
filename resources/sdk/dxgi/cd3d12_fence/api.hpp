#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cd3d12_fence
{
    // [SetVSyncInterruptControlData@CD3D12Fence]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x26cc0, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) set_v_sync_interrupt_control_data;
    
    // [CreateSharedHandle@CD3D12Fence]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a8b0, 0x17e70 bytes
    // dxgi.dll .text:0x7a9e0, 0x17e70 bytes
    // dxgi.dll .text:0x85f10, 0x18b10 bytes
    // dxgi.dll .text:0x7be10, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) create_shared_handle;
    
    // [??1CD3D12Fence@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a868, 0x17e70 bytes
    // dxgi.dll .text:0x7a998, 0x17e70 bytes
    // dxgi.dll .text:0x85ee4, 0x18b10 bytes
    // dxgi.dll .text:0x7bdc8, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [UCBreakCyclicReferences@CD3D12Fence]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x26d10, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) uc_break_cyclic_references;
    
    // [UCEstablishCyclicReferences@CD3D12Fence]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x26d20, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) uc_establish_cyclic_references;
};
#include "magic/api.end.hpp"
