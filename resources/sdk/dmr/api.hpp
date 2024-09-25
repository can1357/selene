#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dmr
{
    // [DmrEnumerateSatcDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c0a20, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) enumerate_satc_devices;
    
    // [DmrCheckPathMatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e26d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3beec4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e25c8, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) check_path_match;
    
    // [DmrConvertDeviceScope]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e27ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bf4ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e269c, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) convert_device_scope;
    
    // [DmrEnumerateRmrrDomains]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e29f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3beb98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e28e0, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) enumerate_rmrr_domains;
    
    // [DmrFindDrhdForDeviceScope]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e25fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3becf4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e24ec, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) find_drhd_for_device_scope;
    
    // [DmrFreeRmrrTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e2b34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522b3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e2a24, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) free_rmrr_tree;
    
    // [DmrGetNextDeviceScope]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e2854, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3770b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e2744, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) get_next_device_scope;
    
    // [DmrGetNextDrhdDeviceScope]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e26ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bee98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e259c, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) get_next_drhd_device_scope;
    
    // [DmrGetNextRemappingStructure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e289c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x376f88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e278c, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) get_next_remapping_structure;
    
    // [DmrValidateDeviceScope]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e28f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3beda4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e27e0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) validate_device_scope;
};
#include "magic/api.end.hpp"
