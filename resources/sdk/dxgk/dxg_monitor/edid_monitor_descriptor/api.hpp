#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::edid_monitor_descriptor
{
    // [AppendFriendlyName@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d1710, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) append_friendly_name;
    
    // [AppendManufacturerName@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e94f0, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) append_manufacturer_name;
    
    // [AppendProductCodeId@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e95b0, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) append_product_code_id;
    
    // [AppendSerialNumber@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e9390, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) append_serial_number;
    
    // [_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x203a5c, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) cleanup_registry_overrided_monitor_descriptors;
    
    // [CopyInstance@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bb340, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) copy_instance;
    
    // [CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2037f0, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) copy_without_overrides;
    
    // [CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2031d8, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) create_from_descriptors;
    
    // [GetAnalogVideoInputParams@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2153d0, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) get_analog_video_input_params;
    
    // [GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x20db50, 0x84380 bytes
    //
    _m9(sdk::unknown_ptr) get_anonymized_raw_descriptor;
    
    // [GetBasicDisplayParams@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bb550, 0x84380 bytes
    //
    _n0(sdk::unknown_ptr) get_basic_display_params;
    
    // [GetColorDataRaw@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x213f30, 0x84380 bytes
    //
    _n1(sdk::unknown_ptr) get_color_data_raw;
    
    // [GetColorimetryData@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x214d10, 0x84380 bytes
    //
    _n2(sdk::unknown_ptr) get_colorimetry_data;
    
    // [GetContainerId@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x212dc0, 0x84380 bytes
    //
    _n3(sdk::unknown_ptr) get_container_id;
    
    // [_GetContiguousEDID@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d15e8, 0x84380 bytes
    //
    _n4(sdk::unknown_ptr) get_contiguous_edid;
    
    // [GetCrc@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x215f30, 0x84380 bytes
    //
    _n5(sdk::unknown_ptr) get_crc;
    
    // [GetDescriptorCount@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4c10, 0x84380 bytes
    //
    _n6(sdk::unknown_ptr) get_descriptor_count;
    
    // [GetDigitalVideoInputParams@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x215ad0, 0x84380 bytes
    //
    _n7(sdk::unknown_ptr) get_digital_video_input_params;
    
    // [GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2149f0, 0x84380 bytes
    //
    _n8(sdk::unknown_ptr) get_dolby_vision_caps;
    
    // [_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d17e0, 0x84380 bytes
    //
    _n9(sdk::unknown_ptr) get_edid_base_block_ptr;
    
    // [GetEnumeratorInterface@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x215b50, 0x84380 bytes
    //
    _o0(sdk::unknown_ptr) get_enumerator_interface;
    
    // [_GetFinalMaxLuminanceValueFromRaw@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bb6f8, 0x84380 bytes
    //
    _o1(sdk::unknown_ptr) get_final_max_luminance_value_from_raw;
    
    // [_GetFinalMinLuminanceValueFromRaw@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bb748, 0x84380 bytes
    //
    _o2(sdk::unknown_ptr) get_final_min_luminance_value_from_raw;
    
    // [GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x213800, 0x84380 bytes
    //
    _o3(sdk::unknown_ptr) get_hdr_luminance;
    
    // [GetManufactureDate@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e9460, 0x84380 bytes
    //
    _o4(sdk::unknown_ptr) get_manufacture_date;
    
    // [GetNativeMode@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d16c0, 0x84380 bytes
    //
    _o5(sdk::unknown_ptr) get_native_mode;
    
    // [GetNumericManufacturerIds@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d17c0, 0x84380 bytes
    //
    _o6(sdk::unknown_ptr) get_numeric_manufacturer_ids;
    
    // [GetParseResult@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bb570, 0x84380 bytes
    //
    _o7(sdk::unknown_ptr) get_parse_result;
    
    // [GetPhysicalSize@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d16e0, 0x84380 bytes
    //
    _o8(sdk::unknown_ptr) get_physical_size;
    
    // [GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d1550, 0x84380 bytes
    //
    _o9(sdk::unknown_ptr) get_raw_descriptor;
    
    // [GetSerializationSizeInBytes@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bb5a0, 0x84380 bytes
    //
    _p0(sdk::unknown_ptr) get_serialization_size_in_bytes;
    
    // [GetSupportedModes@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e9350, 0x84380 bytes
    //
    _p1(sdk::unknown_ptr) get_supported_modes;
    
    // [GetSupportedMonitorFrequencyRanges@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x211c60, 0x84380 bytes
    //
    _p2(sdk::unknown_ptr) get_supported_monitor_frequency_ranges;
    
    // [GetUsageParams@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x212e20, 0x84380 bytes
    //
    _p3(sdk::unknown_ptr) get_usage_params;
    
    // [HasOverrides@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x216040, 0x84380 bytes
    //
    _p4(sdk::unknown_ptr) has_overrides;
    
    // [IsEotf2084Supported@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x213890, 0x84380 bytes
    //
    _p5(sdk::unknown_ptr) is_eotf2084_supported;
    
    // [LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2036c0, 0x84380 bytes
    //
    _p6(sdk::unknown_ptr) load_descriptor_overrides_from_registry;
    
    // [_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3ba704, 0x84380 bytes
    //
    _p7(sdk::unknown_ptr) read_one_block_monitor_descriptor_from_registry;
    
    // [SerializeToBuffer@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bb5c0, 0x84380 bytes
    //
    _p8(sdk::unknown_ptr) serialize_to_buffer;
    
    // [TryGetDescriptor@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202d90, 0x84380 bytes
    //
    _p9(sdk::unknown_ptr) try_get_descriptor;
    
    // [UnloadDescriptorOverrides@EdidMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bb6e0, 0x84380 bytes
    //
    _q0(sdk::unknown_ptr) unload_descriptor_overrides;
};
#include "magic/api.end.hpp"
