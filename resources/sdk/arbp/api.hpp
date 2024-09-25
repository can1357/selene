#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace arbp
{
    // [ArbpBuildAllocationStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54e65c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x741504, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x846b54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x749144, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) build_allocation_stack;
    
    // [ArbpBuildAlternative]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54e914, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x795800, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x846e60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79b350, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) build_alternative;
    
    // [ArbpGetRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f54c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77f9b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x838418, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789750, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) get_registry_value;
    
    // [ArbpQueryConflictCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571f88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711850, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) query_conflict_callback;
    
    // [ArbpUpdatePriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54e584, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x793b2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x844b58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7992ac, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) update_priority;
};
#include "magic/api.end.hpp"
