#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_globals
{
    // [GetWakeOnDeviceTypes@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe8c80, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) get_wake_on_device_types;
    
    // [Initialize@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x8608c, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [SetWakeableInputTypesToRegistry@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe8c8c, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) set_wakeable_input_types_to_registry;
    
    // [UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe8db0, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) update_wake_on_input_device_types_from_registry;
    
    // [ClearPtiLastWoken@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5800, 0x243e0 bytes
    // win32kbase.sys .text:0x9830, 0x27ef0 bytes
    // win32kbase.sys .text:0x5800, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) clear_pti_last_woken;
    
    // [??0CInputGlobals@@AEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x27888, 0x243e0 bytes
    // win32kbase.sys .text:0x86118, 0x27ef0 bytes
    // win32kbase.sys .text:0x7a3e8, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) construct_instance;
    
    // [GetDimmedState@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1acb50, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3370, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ab270, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) get_dimmed_state;
    
    // [GetDisplayOnState@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1acbb0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f33d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ab2d0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) get_display_on_state;
    
    // [GetGlobalTickCount@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa47a0, 0x243e0 bytes
    // win32kbase.sys .text:0x6a890, 0x27ef0 bytes
    // win32kbase.sys .text:0x93d10, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) get_global_tick_count;
    
    // [GetLastInputTime@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x91bd0, 0x243e0 bytes
    // win32kbase.sys .text:0x12b10, 0x27ef0 bytes
    // win32kbase.sys .text:0x6ef60, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) get_last_input_time;
    
    // [GetLastInputType@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1acc10, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3430, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ab330, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) get_last_input_type;
    
    // [GetPtiLastWoken@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6f270, 0x243e0 bytes
    // win32kbase.sys .text:0x20920, 0x27ef0 bytes
    // win32kbase.sys .text:0x15a40, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) get_pti_last_woken;
    
    // [GetPtiLastWokenHotKey@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb6ce0, 0x243e0 bytes
    // win32kbase.sys .text:0xcbdf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb0bd0, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) get_pti_last_woken_hot_key;
    
    // [IsTimeFromLastInputEvent@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa4810, 0x243e0 bytes
    // win32kbase.sys .text:0xb18b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x93ef0, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) is_time_from_last_input_event;
    
    // [MarkLastInputAsJournalling@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1acc70, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3490, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ab390, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) mark_last_input_as_journalling;
    
    // [SetDimmedState@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1accc0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f34e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ab3e0, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) set_dimmed_state;
    
    // [SetDisplayOnState@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1acd10, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3530, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ab430, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) set_display_on_state;
    
    // [SetGlobalTickCount@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1acd60, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3580, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ab480, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) set_global_tick_count;
    
    // [SetPtiLastWoken@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb4310, 0x243e0 bytes
    // win32kbase.sys .text:0xc7860, 0x27ef0 bytes
    // win32kbase.sys .text:0xac610, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) set_pti_last_woken;
    
    // [UpdateGlobalTickCount@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2d500, 0x243e0 bytes
    // win32kbase.sys .text:0x6e730, 0x27ef0 bytes
    // win32kbase.sys .text:0xc1700, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) update_global_tick_count;
    
    // [UpdateInputGlobals@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2cac0, 0x243e0 bytes
    // win32kbase.sys .text:0x11a80, 0x27ef0 bytes
    // win32kbase.sys .text:0x6f030, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) update_input_globals;
    
    // [_UpdateLastInputTime@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2cecc, 0x243e0 bytes
    // win32kbase.sys .text:0x11edc, 0x27ef0 bytes
    // win32kbase.sys .text:0x6f43c, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) update_last_input_time;
    
    // [UpdateLastInputTime@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2ca50, 0x243e0 bytes
    // win32kbase.sys .text:0xf3c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x6efc0, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) update_last_input_time_;
    
    // [WasLastInputInjected@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1acdc0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f35e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ab4e0, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) was_last_input_injected;
    
    // [WasLastInputJournalling@CInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ace20, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3640, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ab540, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) was_last_input_journalling;
};
#include "magic/api.end.hpp"
