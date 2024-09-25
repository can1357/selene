#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kz
{
    // [KzHeteroRefreshWorkloadProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x460a70, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) hetero_refresh_workload_properties;
    
    // [KzReleaseAdditionalPrcbLocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x559054, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) release_additional_prcb_locks;
    
    // [KzSetIrqlUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50ceb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x557fa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50cca0, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) set_irql_unsafe;
    
    // [KzInitializeSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc17e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x208de0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c0830, 0x1fe000 bytes
    //
    _m3(sdk::function<void(uint64_t*)>*) initialize_spin_lock;
    
    // [KzLowerIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38540, 0x32828 bytes
    // ntoskrnl.exe .text:0x320d30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c4c30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x293270, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) lower_irql;
    
    // [KzRaiseIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38840, 0x32828 bytes
    // ntoskrnl.exe .text:0x33a360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x346bc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x281580, 0x1fe000 bytes
    //
    _m5(sdk::function<uint8_t(uint8_t)>*) raise_irql;
};
#include "magic/api.end.hpp"
