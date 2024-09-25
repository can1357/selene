#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_synchronization_manager
{
    // [ShouldDeferToken@CSynchronizationManager@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa13b8, 0x243e0 bytes
    // win32kbase.sys .text:0xb1b58, 0x27ef0 bytes
    // win32kbase.sys .text:0x90a28, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) should_defer_token;
    
    // [NotifyPresent@CSynchronizationManager@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2ec00, 0x1eb80 bytes
    // win32kbase.sys .text:0xa147c, 0x243e0 bytes
    // win32kbase.sys .text:0xb1c1c, 0x27ef0 bytes
    // win32kbase.sys .text:0x90aec, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) notify_present;
    
    // [OnSessionCreation@CSynchronizationManager@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x81428, 0x1eb80 bytes
    // win32kbase.sys .text:0xbe118, 0x243e0 bytes
    // win32kbase.sys .text:0x87984, 0x27ef0 bytes
    // win32kbase.sys .text:0x7d998, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) on_session_creation;
    
    // [RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2e948, 0x1eb80 bytes
    // win32kbase.sys .text:0x75194, 0x243e0 bytes
    // win32kbase.sys .text:0x27c28, 0x27ef0 bytes
    // win32kbase.sys .text:0xd2a4, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) remove_from_synchronization_table;
    
    // [s_pSyncTable@CSynchronizationManager@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11f9c0, 0x1eb80 bytes
    // win32kbase.sys .data:0x25adf8, 0x243e0 bytes
    // win32kbase.sys .data:0x2afc00, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e30, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) s_p_sync_table;
    
    // [s_pSyncTableLock@CSynchronizationManager@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11f9b8, 0x1eb80 bytes
    // win32kbase.sys .data:0x25ae00, 0x243e0 bytes
    // win32kbase.sys .data:0x2afc08, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e20, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) s_p_sync_table_lock;
    
    // [s_syncIdCounter@CSynchronizationManager@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11f9b0, 0x1eb80 bytes
    // win32kbase.sys .data:0x25adf0, 0x243e0 bytes
    // win32kbase.sys .data:0x2afbf8, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e28, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) s_sync_id_counter;
    
    // [Synchronize@CSynchronizationManager@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2eb74, 0x1eb80 bytes
    // win32kbase.sys .text:0x73a00, 0x243e0 bytes
    // win32kbase.sys .text:0x27f34, 0x27ef0 bytes
    // win32kbase.sys .text:0xbb10, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) synchronize;
};
#include "magic/api.end.hpp"
