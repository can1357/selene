#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::copm
{
    // [??0COPM@@QEAA@PEAJ@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc0c0c, 0x243e0 bytes
    // win32kbase.sys .text:0x8509c, 0x27ef0 bytes
    // win32kbase.sys .text:0xba33c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1COPM@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc2c60, 0x243e0 bytes
    // win32kbase.sys .text:0xd64b4, 0x27ef0 bytes
    // win32kbase.sys .text:0xbc040, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyProtectedOutput@COPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x150ee0, 0x243e0 bytes
    // win32kbase.sys .text:0x184140, 0x27ef0 bytes
    // win32kbase.sys .text:0x14ed80, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_protected_output;
    
    // [ConfigureProtectedOutput@COPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc6cf4, 0x1eb80 bytes
    // win32kbase.sys .text:0x150cf8, 0x243e0 bytes
    // win32kbase.sys .text:0x183f5c, 0x27ef0 bytes
    // win32kbase.sys .text:0x14eb98, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) configure_protected_output;
    
    // [CreateProtectedOutput@COPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x85cdc, 0x1eb80 bytes
    // win32kbase.sys .text:0xcd510, 0x243e0 bytes
    // win32kbase.sys .text:0xdecac, 0x27ef0 bytes
    // win32kbase.sys .text:0xcbeb0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) create_protected_output;
    
    // [DestroyProtectedOutputsOwnedByProcess@COPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x90c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa7480, 0x243e0 bytes
    // win32kbase.sys .text:0xb5e20, 0x27ef0 bytes
    // win32kbase.sys .text:0x96a70, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) destroy_protected_outputs_owned_by_process;
    
    // [GetCertificate@COPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x85bd0, 0x1eb80 bytes
    // win32kbase.sys .text:0xcc5c0, 0x243e0 bytes
    // win32kbase.sys .text:0xdda80, 0x27ef0 bytes
    // win32kbase.sys .text:0xcaf60, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) get_certificate;
    
    // [GetCertificateSize@COPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x85c58, 0x1eb80 bytes
    // win32kbase.sys .text:0xcc9e8, 0x243e0 bytes
    // win32kbase.sys .text:0xddea0, 0x27ef0 bytes
    // win32kbase.sys .text:0xcb388, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) get_certificate_size;
    
    // [GetCOPPCompatibleInformation@COPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc6d7c, 0x1eb80 bytes
    // win32kbase.sys .text:0x150f78, 0x243e0 bytes
    // win32kbase.sys .text:0x1841d8, 0x27ef0 bytes
    // win32kbase.sys .text:0x14ee18, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) get_copp_compatible_information;
    
    // [GetInformation@COPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x85a74, 0x1eb80 bytes
    // win32kbase.sys .text:0xcccd4, 0x243e0 bytes
    // win32kbase.sys .text:0xde1a8, 0x27ef0 bytes
    // win32kbase.sys .text:0xcb674, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) get_information;
    
    // [GetRandomNumber@COPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x85b58, 0x1eb80 bytes
    // win32kbase.sys .text:0xcc700, 0x243e0 bytes
    // win32kbase.sys .text:0xddbc0, 0x27ef0 bytes
    // win32kbase.sys .text:0xcb0a0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) get_random_number;
    
    // [SetSigningKeyAndSequenceNumbers@COPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x85ae0, 0x1eb80 bytes
    // win32kbase.sys .text:0xcc82c, 0x243e0 bytes
    // win32kbase.sys .text:0xddcec, 0x27ef0 bytes
    // win32kbase.sys .text:0xcb1cc, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_signing_key_and_sequence_numbers;
};
#include "magic/api.end.hpp"
