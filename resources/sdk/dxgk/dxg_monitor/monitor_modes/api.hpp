#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::monitor_modes
{
    // [_AcquireFirstModeInfo@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x20c284, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) acquire_first_mode_info;
    
    // [_AcquirePreferredModeInfo@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b8ccc, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) acquire_preferred_mode_info;
    
    // [_CleanupMonitorSourceModeAndFreqRanges@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x20316c, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) cleanup_monitor_source_mode_and_freq_ranges;
    
    // [_CleanupRegistryOverridedFrequencyRanges@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b8d48, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) cleanup_registry_overrided_frequency_ranges;
    
    // [CopyInstance@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b8624, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) copy_instance;
    
    // [CreateDefaultMonitorProfile@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b885c, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) create_default_monitor_profile;
    
    // [_CreateDefaultMonitorProfileForWDDMv1_0@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b8e14, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) create_default_monitor_profile_for_wdd_mv1_0;
    
    // [_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x20c66c, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) create_monitor_mode_enumerator;
    
    // [_GetAdditionalTiming@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d6010, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) get_additional_timing;
    
    // [_GetFirstMonitorFreqRangeEnumerator@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b9094, 0x84380 bytes
    //
    _m9(sdk::unknown_ptr) get_first_monitor_freq_range_enumerator;
    
    // [GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b88b0, 0x84380 bytes
    //
    _n0(sdk::unknown_ptr) get_frequency_range_serialization_size_in_bytes;
    
    // [GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b8910, 0x84380 bytes
    //
    _n1(sdk::unknown_ptr) get_modes_serialization_size_in_bytes;
    
    // [_GetNextMonitorFreqRangeEnumerator@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b91b8, 0x84380 bytes
    //
    _n2(sdk::unknown_ptr) get_next_monitor_freq_range_enumerator;
    
    // [_GetNextMonitorFrequencyRange@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x176f74, 0x84380 bytes
    //
    _n3(sdk::unknown_ptr) get_next_monitor_frequency_range;
    
    // [_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x20c570, 0x84380 bytes
    //
    _n4(sdk::unknown_ptr) get_next_monitor_mode_enumerator;
    
    // [_GetPreferredMonitorSourceMode@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1be124, 0x84380 bytes
    //
    _n5(sdk::unknown_ptr) get_preferred_monitor_source_mode;
    
    // [_InsertMonitorSourceMode@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x20c020, 0x84380 bytes
    //
    _n6(sdk::unknown_ptr) insert_monitor_source_mode;
    
    // [_IsModeInActiveSizeRange@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e1040, 0x84380 bytes
    //
    _n7(sdk::unknown_ptr) is_mode_in_active_size_range;
    
    // [_IsModeInPixelRateRange@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1dc7f8, 0x84380 bytes
    //
    _n8(sdk::unknown_ptr) is_mode_in_pixel_rate_range;
    
    // [_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x176fd8, 0x84380 bytes
    //
    _n9(sdk::unknown_ptr) is_mode_supported_by_monitor_mode;
    
    // [_IsSupportedModeInternal@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1af130, 0x84380 bytes
    //
    _o0(sdk::unknown_ptr) is_supported_mode_internal;
    
    // [OnDescriptorUpdated@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202d14, 0x84380 bytes
    //
    _o1(sdk::unknown_ptr) on_descriptor_updated;
    
    // [ParseDescriptorModes@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202e08, 0x84380 bytes
    //
    _o2(sdk::unknown_ptr) parse_descriptor_modes;
    
    // [_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x200d70, 0x84380 bytes
    //
    _o3(sdk::unknown_ptr) process_monitor_resolution_key;
    
    // [_ReleaseAdditionalTiming@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b58e4, 0x84380 bytes
    //
    _o4(sdk::unknown_ptr) release_additional_timing;
    
    // [_ReleaseMonitorFreqRangeEnumerator@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b935c, 0x84380 bytes
    //
    _o5(sdk::unknown_ptr) release_monitor_freq_range_enumerator;
    
    // [_ReleaseMonitorModeEnumerator@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x20dad0, 0x84380 bytes
    //
    _o6(sdk::unknown_ptr) release_monitor_mode_enumerator;
    
    // [RetrieveIntegratedPanelNativeOverride@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202224, 0x84380 bytes
    //
    _o7(sdk::unknown_ptr) retrieve_integrated_panel_native_override;
    
    // [RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x200bd4, 0x84380 bytes
    //
    _o8(sdk::unknown_ptr) retrieve_monitor_frequency_range_from_registry;
    
    // [SerializeFrequencyRangesToBuffer@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b896c, 0x84380 bytes
    //
    _o9(sdk::unknown_ptr) serialize_frequency_ranges_to_buffer;
    
    // [SerializeModesToBuffer@MonitorModes@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b8a28, 0x84380 bytes
    //
    _p0(sdk::unknown_ptr) serialize_modes_to_buffer;
};
#include "magic/api.end.hpp"
