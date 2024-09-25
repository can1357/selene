#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace smp
{
    // [SmpGetProcessPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x30634c, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) get_process_partition;
    
    // [SmpKeyedStoreCtxCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5b5278, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) keyed_store_ctx_cleanup;
    
    // [SmpKeyedStoreDeleteInitiate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7679e4, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) keyed_store_delete_initiate;
    
    // [SmpFpAllocateResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x598c7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b7878, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x598afc, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) fp_allocate_resource;
    
    // [SmpDeviceIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x221b94, 0x32828 bytes
    // ntoskrnl.exe .text:0x5999a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b8870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x599820, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) device_io_completion;
    
    // [SmpDirtyStoreCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a4864, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x695528, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x778cfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6553f8, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) dirty_store_create;
    
    // [SmpFlushStorePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21d344, 0x32828 bytes
    // ntoskrnl.exe .text:0x2727e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cc540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d22f0, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) flush_store_pages;
    
    // [SmpFpReleaseResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2211fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x598d40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b7940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x598bc0, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) fp_release_resource;
    
    // [SmpFpWaitForResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22126c, 0x32828 bytes
    // ntoskrnl.exe .text:0x598e1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b7a1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x598c9c, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) fp_wait_for_resource;
    
    // [SmpIoCompletionApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x221c54, 0x32828 bytes
    // ntoskrnl.exe .text:0x599a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b8950, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x599900, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) io_completion_apc;
    
    // [SmpKeyedStoreCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a479c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x695444, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x778c18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x655504, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) keyed_store_create;
    
    // [SmpKeyedStoreEntryGet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8bbc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x292f5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x306b08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x239cc0, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) keyed_store_entry_get;
    
    // [SmpKeyedStoreReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11a5d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x292d84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b5298, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x239ae8, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) keyed_store_reference;
    
    // [SmpKeyedStoreSetVaRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd6574, 0x32828 bytes
    // ntoskrnl.exe .text:0x29fdcc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32554c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cbc18, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) keyed_store_set_va_ranges;
    
    // [SmpPageWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x117a28, 0x32828 bytes
    // ntoskrnl.exe .text:0x295284, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b5340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23ae20, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) page_write;
    
    // [SmpProcessQueryStoreStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1338bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x597088, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ae450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x596f08, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) process_query_store_stats;
    
    // [SmpStoreMgrCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382a70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) store_mgr_callback;
    
    // [SmpSystemStoreCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56bce0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b0650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x866044, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b81e0, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) system_store_create;
    
    // [SmpUtilsGetControlDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69f9ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92b53c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cfc1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x929e0c, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) utils_get_control_device;
};
#include "magic/api.end.hpp"
