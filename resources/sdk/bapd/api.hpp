#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace bapd
{
    // [BapdRemoveWbclData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa96698, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) remove_wbcl_data;
    
    // [BapdGetISRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9972d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa74f98, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x996670, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) get_is_registry_key;
    
    // [BapdRecordFirmwareBootStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d2cd0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x997790, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa74b3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9948d0, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) record_firmware_boot_stats;
    
    // [BapdRegisterEtwProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x130a74, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a35e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9e34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397dd4, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) register_etw_provider;
    
    // [BapdRegisterSiData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d2888, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x996fd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa74844, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x996378, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) register_si_data;
    
    // [BapdWriteEtwEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1306d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a31fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9a28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3979e8, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) write_etw_events;
};
#include "magic/api.end.hpp"
