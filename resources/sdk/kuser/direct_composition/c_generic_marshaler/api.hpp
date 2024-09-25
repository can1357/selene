#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_generic_marshaler
{
    // [GetType@CGenericMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xc9de0, 0x243e0 bytes
    // win32kbase.sys .text:0xc8780, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [EmitUpdateCommands@CGenericMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ff3a0, 0x243e0 bytes
    // win32kbase.sys .text:0x237c50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fd170, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [FindProperty@CGenericMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ff4d0, 0x243e0 bytes
    // win32kbase.sys .text:0x237d80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fd2a0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) find_property;
    
    // [IsOfType@CGenericMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1de510, 0x243e0 bytes
    // win32kbase.sys .text:0x22cbe0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc2d0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_of_type;
    
    // [ReleaseAllReferences@CGenericMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ff530, 0x243e0 bytes
    // win32kbase.sys .text:0x237de0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fd300, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CGenericMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ff590, 0x243e0 bytes
    // win32kbase.sys .text:0x237e40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fd360, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_buffer_property;
    
    // [SetCallbackId@CGenericMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1de810, 0x243e0 bytes
    // win32kbase.sys .text:0x22cda0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc5d0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_callback_id;
    
    // [SetFloatProperty@CGenericMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1de830, 0x243e0 bytes
    // win32kbase.sys .text:0x22cdc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc5f0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_float_property;
    
    // [SetHandleProperty@CGenericMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1de850, 0x243e0 bytes
    // win32kbase.sys .text:0x22cde0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc610, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_handle_property;
    
    // [SetIntegerProperty@CGenericMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1de870, 0x243e0 bytes
    // win32kbase.sys .text:0x22ce00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc630, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CGenericMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ff6c0, 0x243e0 bytes
    // win32kbase.sys .text:0x237f70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fd490, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CGenericMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ff7c0, 0x243e0 bytes
    // win32kbase.sys .text:0x238070, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fd590, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
