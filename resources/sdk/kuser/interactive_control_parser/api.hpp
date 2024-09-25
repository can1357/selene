#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::interactive_control_parser
{
    // [GetComponentType@InteractiveControlParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2427d8, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) get_component_type;
    
    // [BuildComponentInformation@InteractiveControlParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x241c6c, 0x13864 bytes
    // win32kfull.sys .text:0x25c40c, 0x1596d bytes
    // win32kfull.sys .text:0x25b644, 0x1659e bytes
    // win32kfull.sys .text:0x25c31c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) build_component_information;
    
    // [BuildDeviceAttributes@InteractiveControlParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x241fa4, 0x13864 bytes
    // win32kfull.sys .text:0x25c7b4, 0x1596d bytes
    // win32kfull.sys .text:0x25b9ec, 0x1659e bytes
    // win32kfull.sys .text:0x25c6c4, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) build_device_attributes;
    
    // [BuildDeviceCapabilities@InteractiveControlParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x242044, 0x13864 bytes
    // win32kfull.sys .text:0x25c83c, 0x1596d bytes
    // win32kfull.sys .text:0x25ba74, 0x1659e bytes
    // win32kfull.sys .text:0x25c74c, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) build_device_capabilities;
    
    // [BuildDeviceShapeDescriptor@InteractiveControlParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x242164, 0x13864 bytes
    // win32kfull.sys .text:0x25c97c, 0x1596d bytes
    // win32kfull.sys .text:0x25bbb4, 0x1659e bytes
    // win32kfull.sys .text:0x25c88c, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) build_device_shape_descriptor;
    
    // [CreateAndLinkComponent@InteractiveControlParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2422d0, 0x13864 bytes
    // win32kfull.sys .text:0x25ca4c, 0x1596d bytes
    // win32kfull.sys .text:0x25bc84, 0x1659e bytes
    // win32kfull.sys .text:0x25c95c, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) create_and_link_component;
    
    // [ExtractCustomUsage@InteractiveControlParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x242484, 0x13864 bytes
    // win32kfull.sys .text:0x25cca0, 0x1596d bytes
    // win32kfull.sys .text:0x25bed8, 0x1659e bytes
    // win32kfull.sys .text:0x25cbb0, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) extract_custom_usage;
    
    // [FindDigitizerForDevice@InteractiveControlParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x24254c, 0x13864 bytes
    // win32kfull.sys .text:0x25cd80, 0x1596d bytes
    // win32kfull.sys .text:0x25bfb8, 0x1659e bytes
    // win32kfull.sys .text:0x25cc90, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) find_digitizer_for_device;
    
    // [FreeComponentInformation@InteractiveControlParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x24267c, 0x13864 bytes
    // win32kfull.sys .text:0x25ce9c, 0x1596d bytes
    // win32kfull.sys .text:0x25c0d4, 0x1659e bytes
    // win32kfull.sys .text:0x25cdac, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) free_component_information;
    
    // [FreeDeviceCapabilities@InteractiveControlParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2426dc, 0x13864 bytes
    // win32kfull.sys .text:0x25cf0c, 0x1596d bytes
    // win32kfull.sys .text:0x25c144, 0x1659e bytes
    // win32kfull.sys .text:0x25ce1c, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) free_device_capabilities;
    
    // [GetComponentMultiplier@InteractiveControlParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x242720, 0x13864 bytes
    // win32kfull.sys .text:0x25cf54, 0x1596d bytes
    // win32kfull.sys .text:0x25c18c, 0x1659e bytes
    // win32kfull.sys .text:0x25ce64, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) get_component_multiplier;
    
    // [GetScaledComponentValue@InteractiveControlParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x242860, 0x13864 bytes
    // win32kfull.sys .text:0x25d010, 0x1596d bytes
    // win32kfull.sys .text:0x25c244, 0x1659e bytes
    // win32kfull.sys .text:0x25cf20, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) get_scaled_component_value;
    
    // [ParseInputReport@InteractiveControlParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x242948, 0x13864 bytes
    // win32kfull.sys .text:0x25d0a0, 0x1596d bytes
    // win32kfull.sys .text:0x25c2d4, 0x1659e bytes
    // win32kfull.sys .text:0x25cfb0, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) parse_input_report;
};
#include "magic/api.end.hpp"
