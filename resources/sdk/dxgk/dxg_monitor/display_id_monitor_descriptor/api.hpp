#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::display_id_monitor_descriptor
{
    // [AppendFriendlyName@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bb840, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) append_friendly_name;
    
    // [AppendManufacturerName@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bb8e0, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) append_manufacturer_name;
    
    // [AppendProductCodeId@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bb980, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) append_product_code_id;
    
    // [AppendSerialNumber@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bba20, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) append_serial_number;
    
    // [CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bbac0, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) copy_instance;
    
    // [CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bbb80, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) copy_without_overrides;
    
    // [ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x203c38, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) extract_from_edid;
    
    // [GetAnalogVideoInputParams@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4c20, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) get_analog_video_input_params;
    
    // [GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bbba0, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) get_anonymized_raw_descriptor;
    
    // [GetBasicDisplayParams@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bbc30, 0x84380 bytes
    //
    _m9(sdk::unknown_ptr) get_basic_display_params;
    
    // [GetColorDataRaw@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bbd20, 0x84380 bytes
    //
    _n0(sdk::unknown_ptr) get_color_data_raw;
    
    // [GetColorimetryData@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bbdc0, 0x84380 bytes
    //
    _n1(sdk::unknown_ptr) get_colorimetry_data;
    
    // [GetContainerId@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bbe80, 0x84380 bytes
    //
    _n2(sdk::unknown_ptr) get_container_id;
    
    // [GetCrc@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4c30, 0x84380 bytes
    //
    _n3(sdk::unknown_ptr) get_crc;
    
    // [GetDigitalVideoInputParams@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4c20, 0x84380 bytes
    //
    _n4(sdk::unknown_ptr) get_digital_video_input_params;
    
    // [GetDolbyVisionCaps@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4c50, 0x84380 bytes
    //
    _n5(sdk::unknown_ptr) get_dolby_vision_caps;
    
    // [GetEnumeratorInterface@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e2ee0, 0x84380 bytes
    //
    _n6(sdk::unknown_ptr) get_enumerator_interface;
    
    // [GetHdrLuminance@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bbea0, 0x84380 bytes
    //
    _n7(sdk::unknown_ptr) get_hdr_luminance;
    
    // [GetManufactureDate@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bbee0, 0x84380 bytes
    //
    _n8(sdk::unknown_ptr) get_manufacture_date;
    
    // [GetNativeMode@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bbf20, 0x84380 bytes
    //
    _n9(sdk::unknown_ptr) get_native_mode;
    
    // [GetNumericManufacturerIds@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4cb0, 0x84380 bytes
    //
    _o0(sdk::unknown_ptr) get_numeric_manufacturer_ids;
    
    // [GetParseResult@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bbf40, 0x84380 bytes
    //
    _o1(sdk::unknown_ptr) get_parse_result;
    
    // [GetPhysicalSize@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bbf70, 0x84380 bytes
    //
    _o2(sdk::unknown_ptr) get_physical_size;
    
    // [GetRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bbf90, 0x84380 bytes
    //
    _o3(sdk::unknown_ptr) get_raw_descriptor;
    
    // [GetSupportedModes@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bc010, 0x84380 bytes
    //
    _o4(sdk::unknown_ptr) get_supported_modes;
    
    // [GetSupportedMonitorFrequencyRanges@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4cd0, 0x84380 bytes
    //
    _o5(sdk::unknown_ptr) get_supported_monitor_frequency_ranges;
    
    // [GetUsageParams@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bc030, 0x84380 bytes
    //
    _o6(sdk::unknown_ptr) get_usage_params;
    
    // [HasOverrides@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4930, 0x84380 bytes
    //
    _o7(sdk::unknown_ptr) has_overrides;
    
    // [IsEotf2084Supported@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bc060, 0x84380 bytes
    //
    _o8(sdk::unknown_ptr) is_eotf2084_supported;
    
    // [LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4c20, 0x84380 bytes
    //
    _o9(sdk::unknown_ptr) load_descriptor_overrides_from_registry;
    
    // [UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4880, 0x84380 bytes
    //
    _p0(sdk::unknown_ptr) unload_descriptor_overrides;
};
#include "magic/api.end.hpp"
