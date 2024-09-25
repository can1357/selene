#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::sc_device
{
    // [ExtractDeviceStrings@SC_DEVICE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c3c58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5c2ac8, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) extract_device_strings;
    
    // [??1SC_DEVICE@@UEAA@XZ]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c3b6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x660680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c29dc, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [ExtractFaultDomainIds@SC_DEVICE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c3d88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x660778, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c2bf8, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) extract_fault_domain_ids;
    
    // [GetStorageProperty@SC_DEVICE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c3de8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6607d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c2c58, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) get_storage_property;
    
    // [GetStoragePropertyPost@SC_DEVICE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) get_storage_property_post;
    
    // [GetStoragePropertyPre@SC_DEVICE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c3f20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x660910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c2d90, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) get_storage_property_pre;
    
    // [Initialize@SC_DEVICE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c3f80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x660970, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c2df0, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) initialize;
    
    // [SaveStorageProperty@SC_DEVICE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c4010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x660a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c2e80, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) save_storage_property;
    
    // [UpdateStorageProperty@SC_DEVICE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c40c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x660adc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c2f34, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) update_storage_property;
};
#include "magic/api.end.hpp"
