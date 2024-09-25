#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::copm_protected_output
{
    // [??1COPMProtectedOutput@@UEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x183dc0, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Configure@COPMProtectedOutput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc6c4c, 0x1eb80 bytes
    // win32kbase.sys .text:0x150bdc, 0x243e0 bytes
    // win32kbase.sys .text:0x183e48, 0x27ef0 bytes
    // win32kbase.sys .text:0x14ea7c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) configure;
    
    // [??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x86128, 0x1eb80 bytes
    // win32kbase.sys .text:0xcd698, 0x243e0 bytes
    // win32kbase.sys .text:0xdee88, 0x27ef0 bytes
    // win32kbase.sys .text:0xcc038, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [Destroy@COPMProtectedOutput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x85dd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x150da0, 0x243e0 bytes
    // win32kbase.sys .text:0x184000, 0x27ef0 bytes
    // win32kbase.sys .text:0x14ec40, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) destroy;
    
    // [GetCertificate@COPMProtectedOutput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x86028, 0x1eb80 bytes
    // win32kbase.sys .text:0xcc660, 0x243e0 bytes
    // win32kbase.sys .text:0xddb20, 0x27ef0 bytes
    // win32kbase.sys .text:0xcb000, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_certificate;
    
    // [GetCertificateSize@COPMProtectedOutput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x860ac, 0x1eb80 bytes
    // win32kbase.sys .text:0xcca84, 0x243e0 bytes
    // win32kbase.sys .text:0xddf3c, 0x27ef0 bytes
    // win32kbase.sys .text:0xcb424, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_certificate_size;
    
    // [GetCOPPCompatibleInformation@COPMProtectedOutput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc6de4, 0x1eb80 bytes
    // win32kbase.sys .text:0x151014, 0x243e0 bytes
    // win32kbase.sys .text:0x184274, 0x27ef0 bytes
    // win32kbase.sys .text:0x14eeb4, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) get_copp_compatible_information;
    
    // [GetInformation@COPMProtectedOutput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x85ea0, 0x1eb80 bytes
    // win32kbase.sys .text:0xccd70, 0x243e0 bytes
    // win32kbase.sys .text:0xde244, 0x27ef0 bytes
    // win32kbase.sys .text:0xcb710, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) get_information;
    
    // [GetRandomNumber@COPMProtectedOutput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x85fb0, 0x1eb80 bytes
    // win32kbase.sys .text:0xcc798, 0x243e0 bytes
    // win32kbase.sys .text:0xddc58, 0x27ef0 bytes
    // win32kbase.sys .text:0xcb138, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) get_random_number;
    
    // [IsDestroyed@COPMProtectedOutput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x85e60, 0x1eb80 bytes
    // win32kbase.sys .text:0xcd780, 0x243e0 bytes
    // win32kbase.sys .text:0xdef70, 0x27ef0 bytes
    // win32kbase.sys .text:0xcc120, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) is_destroyed;
    
    // [SetSigningKeyAndSequenceNumbers@COPMProtectedOutput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x85f2c, 0x1eb80 bytes
    // win32kbase.sys .text:0xcc8c4, 0x243e0 bytes
    // win32kbase.sys .text:0xddd84, 0x27ef0 bytes
    // win32kbase.sys .text:0xcb264, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_signing_key_and_sequence_numbers;
};
#include "magic/api.end.hpp"
