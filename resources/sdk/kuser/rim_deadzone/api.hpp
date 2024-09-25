#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rim_deadzone
{
    // [s_counterClockwiseDeviceRotation@RIMDeadzone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .data:0x2b74a0, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) s_counter_clockwise_device_rotation;
    
    // [ActivateTelemetrySession@RIMDeadzone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe4810, 0x1eb80 bytes
    // win32kbase.sys .text:0x17c998, 0x243e0 bytes
    // win32kbase.sys .text:0x1b8e28, 0x27ef0 bytes
    // win32kbase.sys .text:0x17ad88, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) activate_telemetry_session;
    
    // [_ClearDeadzoneAreas@RIMDeadzone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x26694, 0x1eb80 bytes
    // win32kbase.sys .text:0x17d140, 0x243e0 bytes
    // win32kbase.sys .text:0x1b9a20, 0x27ef0 bytes
    // win32kbase.sys .text:0x17b530, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) clear_deadzone_areas;
    
    // [_GetAngle@RIMDeadzone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe4ec0, 0x1eb80 bytes
    // win32kbase.sys .text:0x17d1bc, 0x243e0 bytes
    // win32kbase.sys .text:0x1b9ab4, 0x27ef0 bytes
    // win32kbase.sys .text:0x17b5ac, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_angle;
    
    // [Initialize@RIMDeadzone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x267b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x17cc44, 0x243e0 bytes
    // win32kbase.sys .text:0x1b9314, 0x27ef0 bytes
    // win32kbase.sys .text:0x17b034, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [_InitializeLeftHandedDeadzone@RIMDeadzone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x26710, 0x1eb80 bytes
    // win32kbase.sys .text:0x17d2b8, 0x243e0 bytes
    // win32kbase.sys .text:0x1b9b74, 0x27ef0 bytes
    // win32kbase.sys .text:0x17b6a8, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize_left_handed_deadzone;
    
    // [_InitializeRightHandedDeadzone@RIMDeadzone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe4f8c, 0x1eb80 bytes
    // win32kbase.sys .text:0x17d364, 0x243e0 bytes
    // win32kbase.sys .text:0x1b9e48, 0x27ef0 bytes
    // win32kbase.sys .text:0x17b754, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) initialize_right_handed_deadzone;
    
    // [_IsAngleWithinRange@RIMDeadzone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe5034, 0x1eb80 bytes
    // win32kbase.sys .text:0x17d414, 0x243e0 bytes
    // win32kbase.sys .text:0x1ba124, 0x27ef0 bytes
    // win32kbase.sys .text:0x17b804, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) is_angle_within_range;
    
    // [IsInDeadzone@RIMDeadzone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe4aac, 0x1eb80 bytes
    // win32kbase.sys .text:0x17cc9c, 0x243e0 bytes
    // win32kbase.sys .text:0x1b966c, 0x27ef0 bytes
    // win32kbase.sys .text:0x17b08c, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) is_in_deadzone;
    
    // [Release@RIMDeadzone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x26804, 0x1eb80 bytes
    // win32kbase.sys .text:0x17d084, 0x243e0 bytes
    // win32kbase.sys .text:0x1b986c, 0x27ef0 bytes
    // win32kbase.sys .text:0x17b474, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) release;
    
    // [s_adwTangentLookup@RIMDeadzone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x10a190, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22e580, 0x243e0 bytes
    // win32kbase.sys .rdata:0x282060, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22c5d0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) s_adw_tangent_lookup;
    
    // [s_pRimDeadzoneInstance@RIMDeadzone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11f990, 0x1eb80 bytes
    // win32kbase.sys .data:0x262478, 0x243e0 bytes
    // win32kbase.sys .data:0x2b7498, 0x27ef0 bytes
    // win32kbase.sys .data:0x25f4b8, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) s_p_rim_deadzone_instance;
    
    // [SetDeadzonePalmTelemetry@RIMDeadzone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe4e38, 0x1eb80 bytes
    // win32kbase.sys .text:0x17d0bc, 0x243e0 bytes
    // win32kbase.sys .text:0x1b98b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x17b4ac, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) set_deadzone_palm_telemetry;
};
#include "magic/api.end.hpp"
