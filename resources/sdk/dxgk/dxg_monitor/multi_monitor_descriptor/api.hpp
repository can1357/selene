#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::multi_monitor_descriptor
{
    // [AppendFriendlyName@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bb00, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) append_friendly_name;
    
    // [AppendManufacturerName@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bb30, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) append_manufacturer_name;
    
    // [AppendProductCodeId@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bb60, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) append_product_code_id;
    
    // [AppendSerialNumber@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bb90, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) append_serial_number;
    
    // [CopyInstance@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bbc0, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) copy_instance;
    
    // [CopyWithoutOverrides@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bcd0, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) copy_without_overrides;
    
    // [GetAnalogVideoInputParams@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bde0, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) get_analog_video_input_params;
    
    // [GetAnonymizedRawDescriptor@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6be10, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) get_anonymized_raw_descriptor;
    
    // [GetBasicDisplayParams@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6be40, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) get_basic_display_params;
    
    // [GetColorDataRaw@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6be70, 0x84380 bytes
    //
    _m9(sdk::unknown_ptr) get_color_data_raw;
    
    // [GetColorimetryData@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bea0, 0x84380 bytes
    //
    _n0(sdk::unknown_ptr) get_colorimetry_data;
    
    // [GetContainerId@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bed0, 0x84380 bytes
    //
    _n1(sdk::unknown_ptr) get_container_id;
    
    // [GetCrc@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bf00, 0x84380 bytes
    //
    _n2(sdk::unknown_ptr) get_crc;
    
    // [GetDigitalVideoInputParams@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bf30, 0x84380 bytes
    //
    _n3(sdk::unknown_ptr) get_digital_video_input_params;
    
    // [GetDolbyVisionCaps@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bf60, 0x84380 bytes
    //
    _n4(sdk::unknown_ptr) get_dolby_vision_caps;
    
    // [GetEnumeratorInterface@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bf90, 0x84380 bytes
    //
    _n5(sdk::unknown_ptr) get_enumerator_interface;
    
    // [GetHdrLuminance@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bfc0, 0x84380 bytes
    //
    _n6(sdk::unknown_ptr) get_hdr_luminance;
    
    // [GetManufactureDate@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6bff0, 0x84380 bytes
    //
    _n7(sdk::unknown_ptr) get_manufacture_date;
    
    // [GetNativeMode@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6c020, 0x84380 bytes
    //
    _n8(sdk::unknown_ptr) get_native_mode;
    
    // [GetNumericManufacturerIds@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6c050, 0x84380 bytes
    //
    _n9(sdk::unknown_ptr) get_numeric_manufacturer_ids;
    
    // [GetParseResult@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6c080, 0x84380 bytes
    //
    _o0(sdk::unknown_ptr) get_parse_result;
    
    // [GetPhysicalSize@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6c0b0, 0x84380 bytes
    //
    _o1(sdk::unknown_ptr) get_physical_size;
    
    // [GetRawDescriptor@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6c0e0, 0x84380 bytes
    //
    _o2(sdk::unknown_ptr) get_raw_descriptor;
    
    // [GetSupportedModes@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6c110, 0x84380 bytes
    //
    _o3(sdk::unknown_ptr) get_supported_modes;
    
    // [GetSupportedMonitorFrequencyRanges@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6c140, 0x84380 bytes
    //
    _o4(sdk::unknown_ptr) get_supported_monitor_frequency_ranges;
    
    // [GetUsageParams@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6c170, 0x84380 bytes
    //
    _o5(sdk::unknown_ptr) get_usage_params;
    
    // [HasOverrides@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6c1a0, 0x84380 bytes
    //
    _o6(sdk::unknown_ptr) has_overrides;
    
    // [IsEotf2084Supported@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6c1d0, 0x84380 bytes
    //
    _o7(sdk::unknown_ptr) is_eotf2084_supported;
    
    // [LoadDescriptorOverridesFromRegistry@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6c200, 0x84380 bytes
    //
    _o8(sdk::unknown_ptr) load_descriptor_overrides_from_registry;
    
    // [UnloadDescriptorOverrides@MultiMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6c230, 0x84380 bytes
    //
    _o9(sdk::unknown_ptr) unload_descriptor_overrides;
};
#include "magic/api.end.hpp"
