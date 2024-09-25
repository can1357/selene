#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace smc
{
    // [SmcCacheDereference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x69e6e4, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) cache_dereference;
    
    // [SmcCacheManagerInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa68238, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85b1e4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa67828, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) cache_manager_initialize;
    
    // [SmcCacheAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69e4e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92a14c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ce860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x928a1c, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) cache_add;
    
    // [SmcCacheCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69e618, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92a260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ce974, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x928b30, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) cache_cleanup;
    
    // [SmcCacheCreatePrepare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69bb44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92758c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cbc5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x925e5c, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) cache_create_prepare;
    
    // [SmcCacheDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69e694, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92a2e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cea0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x928bb4, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) cache_delete;
    
    // [SmcCacheInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69e6fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92a33c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cea68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x928c0c, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) cache_initialize;
    
    // [SmcCacheManagerStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69e75c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92a3bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ceae8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x928c8c, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) cache_manager_start;
    
    // [SmcCacheReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69e8e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92a57c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cec80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x928e4c, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) cache_reference;
    
    // [SmcCacheRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69e954, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92a5f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cecf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x928ec0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) cache_remove;
    
    // [SmcCacheStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69ea30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92a6a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cedac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x928f78, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) cache_start;
    
    // [SmcGetCacheStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69ebcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92a858, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cef70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x929128, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) get_cache_stats;
    
    // [SmcProcessCreateRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69bc44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x927658, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cbd28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x925f28, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) process_create_request;
    
    // [SmcProcessDeleteRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69be90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9278b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cbfa8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x926188, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) process_delete_request;
    
    // [SmcProcessListRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53567c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aa0c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x779ac8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b1a48, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) process_list_request;
    
    // [SmcProcessResizeRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69bef8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x927928, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cc030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9261f8, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) process_resize_request;
    
    // [SmcProcessStatsRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69bfc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9279f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cc110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9262c0, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) process_stats_request;
    
    // [SmcProcessStoreCreateRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69c1bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x927bf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cc328, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9264c4, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) process_store_create_request;
    
    // [SmcProcessStoreDeleteRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69c314, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x927d3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cc494, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92660c, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) process_store_delete_request;
    
    // [SmcStoreCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69ed70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92a9c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cf0e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x929298, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) store_create;
    
    // [SmcStoreDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69efac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92ac28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cf348, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9294f8, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) store_delete;
    
    // [SmcStoreEntryFind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69f154, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92ad90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cf4b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x929660, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) store_entry_find;
    
    // [SmcStorePlacementGet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69f18c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92add0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cf4f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9296a0, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) store_placement_get;
    
    // [SmcStoreResize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69f2b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92aef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cf604, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9297c0, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) store_resize;
    
    // [SmcStoreSlotAbort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69f5bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92b19c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cf898, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x929a6c, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) store_slot_abort;
    
    // [SmcStoreSlotCommit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69f684, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92b230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cf930, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x929b00, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) store_slot_commit;
    
    // [SmcStoreSlotReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69f748, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92b2d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cf9d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x929ba8, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) store_slot_reserve;
    
    // [SmcVolumePnpNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69f8d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92b440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cfb40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x929d10, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) volume_pnp_notification;
};
#include "magic/api.end.hpp"
