#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ksep
{
    // [KsepSdbFileTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3087d0, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) sdb_file_time;
    
    // [KsepShimDbAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3087e0, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) shim_db_address;
    
    // [KsepShimDbFileHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3087b8, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) shim_db_file_handle;
    
    // [KsepShimDbMapToMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x5183ac, 0x32828 bytes
    //
    _m3(sdk::unknown_ptr) shim_db_map_to_memory;
    
    // [KsepShimDbSectionHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3087b0, 0x32828 bytes
    //
    _m4(sdk::unknown_ptr) shim_db_section_handle;
    
    // [KsepShimDbSectionPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3087c0, 0x32828 bytes
    //
    _m5(sdk::unknown_ptr) shim_db_section_pointer;
    
    // [KsepShimDbUnmapFromMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x49f600, 0x32828 bytes
    //
    _m6(sdk::unknown_ptr) shim_db_unmap_from_memory;
    
    // [KsepCacheUnlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8be1a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8bc958, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) cache_unlock;
    
    // [KsepMatchInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa90d7c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa8fffc, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) match_initialize;
    
    // [KsepCacheLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497dd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x727c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72fa80, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) cache_lock;
    
    // [KsepDbCacheReadDeviceInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x73644c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82b4b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e08c, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) db_cache_read_device_internal;
    
    // [KsepDbGetDriverShimsInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x73946c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x787550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7410ac, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) db_get_driver_shims_internal;
    
    // [KsepDeletePatchSdb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8bdc94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96b474, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bc444, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) delete_patch_sdb;
    
    // [KsepEngineUninitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bd1e8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa90cf8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa8ff78, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) engine_uninitialize;
    
    // [KsepSdbBootInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b3a78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c268, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bb608, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) sdb_boot_initialize;
    
    // [KsepSdbBootRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x79e1c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x851114, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a5848, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) sdb_boot_release;
    
    // [KsepSdbMapToMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x735fa4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x784458, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73dbe4, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) sdb_map_to_memory;
    
    // [KsepSdbUnmapFromMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x736a18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7843e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e658, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) sdb_unmap_from_memory;
    
    // [KsepShimDatabaseTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x73f7b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82b17c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7473f8, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) shim_database_time;
    
    // [KsepShimDb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2adc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40760, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2ad40, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) shim_db;
    
    // [KsepApplyShimsToDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x657d40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bd1d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82ac10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bb980, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) apply_shims_to_driver;
    
    // [KsepCacheDeviceEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x57160c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b3530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86bd70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bb0c0, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) cache_device_equal;
    
    // [KsepCacheDeviceFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53945c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8be060, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96b620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bc810, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) cache_device_free;
    
    // [KsepCacheDeviceHash]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x537524, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755da0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x860d50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75d7f0, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) cache_device_hash;
    
    // [KsepCacheDeviceInsertData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56e838, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ae1f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82bbd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b5e10, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) cache_device_insert_data;
    
    // [KsepCacheDeviceQueryData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56c7f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a9a38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82ba5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b13b8, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) cache_device_query_data;
    
    // [KsepCacheHwIdEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12fd28, 0x32828 bytes
    // ntoskrnl.exe .text:0x37d450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x383530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37e7d0, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) cache_hw_id_equal;
    
    // [KsepCacheHwIdFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de350, 0x32828 bytes
    // ntoskrnl.exe .text:0x5213f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56cc90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521200, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) cache_hw_id_free;
    
    // [KsepCacheHwIdHash]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcfb24, 0x32828 bytes
    // ntoskrnl.exe .text:0x37bef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x380c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37d270, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) cache_hw_id_hash;
    
    // [KsepCacheInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x562140, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a0710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x852064, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8930, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) cache_initialize;
    
    // [KsepCacheInsert]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497b78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x763c48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d4884, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76aee8, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) cache_insert;
    
    // [KsepCacheLookup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497cf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73fca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d4798, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7478e0, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) cache_lookup;
    
    // [KsepCacheReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x658ac8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8be0dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96b69c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bc88c, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) cache_reset;
    
    // [KsepCacheUninitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x658b2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8be150, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96b710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bc900, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) cache_uninitialize;
    
    // [KsepCompletionSafeWrapper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ddfbc, 0x32828 bytes
    // ntoskrnl.exe .text:0x521040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3da430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x520e50, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) completion_safe_wrapper;
    
    // [KsepCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3082e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a8e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40280, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a860, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) counters;
    
    // [KsepDbCacheInsertDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56e0ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ae818, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82bd34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b6438, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) db_cache_insert_device;
    
    // [KsepDbCacheQueryDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5390f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73fa98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82b2d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7476d8, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) db_cache_query_device;
    
    // [KsepDbCacheQueryDeviceData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56c784, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a99c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82b9e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b1344, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) db_cache_query_device_data;
    
    // [KsepDbCacheQueryDeviceDataList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x657318, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bc76c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96ac1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8baf1c, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) db_cache_query_device_data_list;
    
    // [KsepDbCacheReadDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5392f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x736364, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82b3cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73dfa4, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) db_cache_read_device;
    
    // [KsepDbFreeDriverShims]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ff8e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x739510, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x787710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x741150, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) db_free_driver_shims;
    
    // [KsepDbGetDriverShims]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ff6ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x739240, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x787428, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x740e80, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) db_get_driver_shims;
    
    // [KsepDbGetSdbString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6573b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bc808, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82a578, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bafb8, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) db_get_sdb_string;
    
    // [KsepDbGetShimInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6573e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bc83c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82a338, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bafec, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) db_get_shim_info;
    
    // [KsepDbQueryRegistryDeviceData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5391bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73fd8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82b03c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7479cc, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) db_query_registry_device_data;
    
    // [KsepDbQueryRegistryDeviceDataList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x657660, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bcae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96acc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bb290, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) db_query_registry_device_data_list;
    
    // [KsepDbReadKData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6577d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bcc70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96ae58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bb420, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) db_read_k_data;
    
    // [KsepDbReadKFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56458c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79555c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82bac4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79acdc, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) db_read_k_flag;
    
    // [KsepDebugFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34312c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9d00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b510, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9d00, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) debug_flag;
    
    // [KsepDebugPrint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de06c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5210f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56cc44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x520f08, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) debug_print;
    
    // [KsepDriverPathTail]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ff384, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73beb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x786978, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x743af0, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) driver_path_tail;
    
    // [KsepDsEventAddDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de974, 0x32828 bytes
    // ntoskrnl.exe .text:0x521c28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d4c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521a38, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) ds_event_add_device;
    
    // [KsepDsEventDataIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dea84, 0x32828 bytes
    // ntoskrnl.exe .text:0x521d54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d5f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521b64, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) ds_event_data_irp;
    
    // [KsepDsEventDevicePowerCompleted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1deb60, 0x32828 bytes
    // ntoskrnl.exe .text:0x521e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d6f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521c60, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) ds_event_device_power_completed;
    
    // [KsepDsEventDevicePowerIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dec24, 0x32828 bytes
    // ntoskrnl.exe .text:0x521f34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d7d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521d44, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) ds_event_device_power_irp;
    
    // [KsepDsEventDriverLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ded24, 0x32828 bytes
    // ntoskrnl.exe .text:0x52204c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d8ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521e5c, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) ds_event_driver_load;
    
    // [KsepDsEventDriverStartIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dee08, 0x32828 bytes
    // ntoskrnl.exe .text:0x52214c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d9ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521f5c, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) ds_event_driver_start_io;
    
    // [KsepDsEventDriverUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1deebc, 0x32828 bytes
    // ntoskrnl.exe .text:0x522220, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56dac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x522030, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) ds_event_driver_unload;
    
    // [KsepDsEventIoCreateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1def58, 0x32828 bytes
    // ntoskrnl.exe .text:0x5222dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56db7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5220ec, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) ds_event_io_create_device;
    
    // [KsepDsEventPnpIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1df050, 0x32828 bytes
    // ntoskrnl.exe .text:0x5223ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56dc8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5221fc, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) ds_event_pnp_irp;
    
    // [KsepDsEventPnpStartDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1df12c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5224e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56dd88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5222f8, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) ds_event_pnp_start_device;
    
    // [KsepDsEventPnpStopDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1df1f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5225cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56de6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5223dc, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) ds_event_pnp_stop_device;
    
    // [KsepDsEventPoolAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1df2b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5226b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56df50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5224c0, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) ds_event_pool_allocate;
    
    // [KsepDsEventPoolFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1df394, 0x32828 bytes
    // ntoskrnl.exe .text:0x5227ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e04c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5225bc, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) ds_event_pool_free;
    
    // [KsepDsEventRequestPowerIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1df44c, 0x32828 bytes
    // ntoskrnl.exe .text:0x522884, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e124, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x522694, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) ds_event_request_power_irp;
    
    // [KsepDsEventSystemPowerIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1df53c, 0x32828 bytes
    // ntoskrnl.exe .text:0x52298c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e22c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52279c, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) ds_event_system_power_irp;
    
    // [KsepEngineGetShimsFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x500b20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73bc48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x786f98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x743888, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) engine_get_shims_from_registry;
    
    // [KsepEngineInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79ef48, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa668f8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb50274, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa65fd8, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) engine_initialize;
    
    // [KsepEngineReadFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79f004, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa66c0c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb50338, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa662ec, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) engine_read_flags;
    
    // [KsepEvntLogFlagsApplied]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x148618, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c4294, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac804, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c5004, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) evnt_log_flags_applied;
    
    // [KsepEvntLogShimsApplied]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de098, 0x32828 bytes
    // ntoskrnl.exe .text:0x52113c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3414, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x520f4c, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) evnt_log_shims_applied;
    
    // [KsepGetLoadedModulesList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5611a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79f724, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82b80c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a7944, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) get_loaded_modules_list;
    
    // [KsepGetModuleInfoByAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56112c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79f6a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82b964, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a78c0, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) get_module_info_by_address;
    
    // [KsepGetModuleInfoByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6587d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bdd48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96b524, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bc4f8, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) get_module_info_by_name;
    
    // [KsepGetShimCallbacksForDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ff4ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x738c30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x786534, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x740870, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) get_shim_callbacks_for_driver;
    
    // [KsepGetShimsForDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ff608, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x739158, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7869dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x740d98, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) get_shims_for_driver;
    
    // [KsepHistoryErrors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308380, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a980, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40320, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a900, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) history_errors;
    
    // [KsepHistoryErrorsIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308360, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a960, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40300, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a8e0, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) history_errors_index;
    
    // [KsepHistoryMessages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3085a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2aba0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40540, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2ab20, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) history_messages;
    
    // [KsepHistoryMessagesIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308580, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2ab80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40520, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2ab00, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) history_messages_index;
    
    // [KsepIsModuleShimmed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x500c98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73bdd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x786bc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x743a14, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) is_module_shimmed;
    
    // [KsepIsShimRegistered]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x561028, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79f580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82b790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a77a0, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) is_shim_registered;
    
    // [KsepLoadShimProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ddeb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x520f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56cbb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x520d20, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) load_shim_provider;
    
    // [KsepLogError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de2d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d864, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x337bbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36ebe4, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) log_error;
    
    // [KsepLogEtwMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109fe8, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d0c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x337bec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e448, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) log_etw_message;
    
    // [KsepLogInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109fbc, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d098, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac7d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e418, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) log_info;
    
    // [KsepMatchInitAcpiOemInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a3250, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa66dac, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb505a8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6648c, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) match_init_acpi_oem_info;
    
    // [KsepMatchInitBiosInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a2f98, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa669bc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb506f8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6609c, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) match_init_bios_info;
    
    // [KsepMatchInitCpuInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a31d0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa66d1c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb50518, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa663fc, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) match_init_cpu_info;
    
    // [KsepMatchInitMachineInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a2f08, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa66860, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb50448, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa65f40, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) match_init_machine_info;
    
    // [KsepMatchMachineInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308800, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2ae40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40800, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2adc0, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) match_machine_info;
    
    // [KsepPatchDriverImportsTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x657f70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bd478, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x828800, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bbc28, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) patch_driver_imports_table;
    
    // [KsepPatchImportTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6580e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bd5f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96b2a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bbda0, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) patch_import_table_entry;
    
    // [KsepPoolAllocateNonPaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de2fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x521394, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3da294, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5211a4, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) pool_allocate_non_paged;
    
    // [KsepPoolAllocatePaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109f68, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d03c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3390cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e3bc, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) pool_allocate_paged;
    
    // [KsepPoolFreeNonPaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109e14, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d234, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x339128, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e5b4, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) pool_free_non_paged;
    
    // [KsepPoolFreePaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109f48, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d014, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3390a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e394, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) pool_free_paged;
    
    // [KsepRegistryCloseKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5006e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a07c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x852368, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a89e4, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) registry_close_key;
    
    // [KsepRegistryCreateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x658b78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8be1e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96b768, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bc998, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) registry_create_key;
    
    // [KsepRegistryEnumValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x658db8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8be42c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96b9ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bcbdc, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) registry_enum_value;
    
    // [KsepRegistryOpenKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5008e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73b960, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x786e98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7435a0, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) registry_open_key;
    
    // [KsepRegistryQueryDriverShims]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50066c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73b6f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x787370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x743330, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) registry_query_driver_shims;
    
    // [KsepRegistryQueryDWORD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5621ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a07e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x852118, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8a08, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) registry_query_dword;
    
    // [KsepRegistryQueryKeyInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x658eac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8be528, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96baa8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bccd8, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) registry_query_key_information;
    
    // [KsepRegistryQueryMULTISZ]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x569870, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a08a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96bb6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8ac0, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) registry_query_multisz;
    
    // [KsepRegistryQuerySZ]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x569898, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a08d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85221c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8af0, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) registry_query_sz;
    
    // [KsepRegistryQueryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x658f6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8be5ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96bb9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bcd9c, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) registry_query_value;
    
    // [KsepResolveApplicableShimsForDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x658134, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bd654, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82a734, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bbe04, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) resolve_applicable_shims_for_driver;
    
    // [KsepResolveShimHooks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x657c40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bd0c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x828670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bb874, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) resolve_shim_hooks;
    
    // [KsepShimDbChanged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x130440, 0x32828 bytes
    // ntoskrnl.exe .text:0x36def0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36f270, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) shim_db_changed;
    
    // [KsepShimDbDuringBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3087c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2ae30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc407d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2adb0, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) shim_db_during_boot;
    
    // [KsepShimDbHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3087d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2ae38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc407e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2adb8, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) shim_db_handle;
    
    // [KsepShimDbLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3087a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2ada8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc407d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2ad28, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) shim_db_lock;
    
    // [KsepShimDbRefCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3087a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2ada0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40740, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2ad20, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) shim_db_ref_count;
    
    // [KsepSkipDriverUnloadEventDriverLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1df6d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x522c0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e55c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x522a1c, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) skip_driver_unload_event_driver_load;
    
    // [KsepSkipDriverUnloadEventDriverUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1df7bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x522d0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e65c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x522b1c, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) skip_driver_unload_event_driver_unload;
    
    // [KsepStringAnsiToUnicode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5699cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a0a10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8521d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8c30, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) string_ansi_to_unicode;
    
    // [KsepStringConcatenate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5007ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73b820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x786d58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x743460, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) string_concatenate;
    
    // [KsepStringDuplicate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x500700, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73b770, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x786ca8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7433b0, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) string_duplicate;
    
    // [KsepStringDuplicateUnicode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x500bf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73bd30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7872d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x743970, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) string_duplicate_unicode;
    
    // [KsepStringFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x500bc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73bcfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7872a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74393c, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) string_free;
    
    // [KsepStringSplitMultiString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6588b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bde44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8656c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bc5f4, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) string_split_multi_string;
    
    // [KsepStringTransform]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x539254, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73fe28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82b0d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x747a68, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) string_transform;
    
    // [KsepValidateShimProviderAndData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x561088, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79f5f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82b8b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a7814, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) validate_shim_provider_and_data;
};
#include "magic/api.end.hpp"
