#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ppv
{
    // [PpvUtilCallAddDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12dd98, 0x32828 bytes
    // ntoskrnl.exe .text:0x369adc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37b30c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36ae8c, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) util_call_add_device;
    
    // [PpvUtilFailDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3990, 0x32828 bytes
    // ntoskrnl.exe .text:0x50a0b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x550f44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x509e70, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) util_fail_driver;
    
    // [PpvUtilIsHardwareBeingVerified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x704868, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3b4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaadfec, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2b4c, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) util_is_hardware_being_verified;
    
    // [PpvUtilIsPdo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x704894, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3b84, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae024, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2b84, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) util_is_pdo;
    
    // [PpvUtilTestStartedPdoStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4ebc, 0x32828 bytes
    // ntoskrnl.exe .text:0x36a560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38bd9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b8e0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) util_test_started_pdo_stack;
    
    // [PpvUtilVerifierEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342368, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd172dc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b88, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) util_verifier_enabled;
};
#include "magic/api.end.hpp"
