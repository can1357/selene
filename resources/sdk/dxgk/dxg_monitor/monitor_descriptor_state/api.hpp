#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::monitor_descriptor_state
{
    // [AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x203b08, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) add_descriptors_to_cache;
    
    // [CopyInstance@MonitorDescriptorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b7c38, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) copy_instance;
    
    // [GetEdidDescriptorRaw@MonitorDescriptorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e0c78, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) get_edid_descriptor_raw;
    
    // [_GetFirstMonitorDescriptorEnumerator@MonitorDescriptorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2015a8, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) get_first_monitor_descriptor_enumerator;
    
    // [GetMonitorDescriptorPnpIds@MonitorDescriptorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x200190, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) get_monitor_descriptor_pnp_ids;
    
    // [_GetNextMonitorDescriptorEnumerator@MonitorDescriptorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b80e4, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) get_next_monitor_descriptor_enumerator;
    
    // [OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x201410, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) on_device_node_ready;
    
    // [OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x203388, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) on_initialize_physical_monitor;
    
    // [OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b7e74, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) on_initialize_simulated_monitor;
    
    // [OnInternalIoctl@MonitorDescriptorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e9708, 0x84380 bytes
    //
    _m9(sdk::unknown_ptr) on_internal_ioctl;
    
    // [SerializeToBuffer@MonitorDescriptorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b8088, 0x84380 bytes
    //
    _n0(sdk::unknown_ptr) serialize_to_buffer;
    
    // [_UpdateMonitorEDIDRegistryForGDI@MonitorDescriptorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2014ac, 0x84380 bytes
    //
    _n1(sdk::unknown_ptr) update_monitor_edid_registry_for_gdi;
};
#include "magic/api.end.hpp"
