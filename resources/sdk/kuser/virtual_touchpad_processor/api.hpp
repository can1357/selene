#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::virtual_touchpad_processor
{
    // [ConfigureVirtualTouchpad@VirtualTouchpadProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20b2a8, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) configure_virtual_touchpad;
    
    // [CreateRimDevice@VirtualTouchpadProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20b548, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) create_rim_device;
    
    // [??1VirtualTouchpadProcessor@@AEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20ae34, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [FindTouchpadAndContact@VirtualTouchpadProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20b710, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) find_touchpad_and_contact;
    
    // [FindTouchpadForConfig@VirtualTouchpadProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20b990, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) find_touchpad_for_config;
    
    // [GetInstance@VirtualTouchpadProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20bb3c, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) get_instance;
    
    // [MakeReportDescriptor@VirtualTouchpadProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20bcac, 0x27ef0 bytes
    //
    _m6(sdk::unknown_ptr) make_report_descriptor;
    
    // [ProcessInput@VirtualTouchpadProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20c0b0, 0x27ef0 bytes
    //
    _m7(sdk::unknown_ptr) process_input;
    
    // [RemoveRimDevice@VirtualTouchpadProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20c300, 0x27ef0 bytes
    //
    _m8(sdk::unknown_ptr) remove_rim_device;
    
    // [RemoveTouchpad@VirtualTouchpadProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20c36c, 0x27ef0 bytes
    //
    _m9(sdk::unknown_ptr) remove_touchpad;
    
    // [s_instance@VirtualTouchpadProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .data:0x2b3c20, 0x27ef0 bytes
    //
    _n0(sdk::unknown_ptr) s_instance;
};
#include "magic/api.end.hpp"
