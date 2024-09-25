#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace emon
{
    // [EmonConfigurePebsBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x50bc58, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) configure_pebs_buffer;
    
    // [EmonCoreCounterStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5ff68, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) core_counter_status;
    
    // [EmonGetProfileDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x5c64, 0x11e8 bytes
    //
    _m2(sdk::unknown_ptr) get_profile_descriptor;
    
    // [EmonIsModifiedByBadActor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45cda0, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) is_modified_by_bad_actor;
    
    // [EmonIsModifiedByBadActorInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45ce00, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) is_modified_by_bad_actor_internal;
    
    // [EmonReadCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x50cb14, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) read_counter;
    
    // [EmonSaveProfilingContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa83140, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) save_profiling_context;
    
    // [EmonWriteCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x50d340, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) write_counter;
    
    // [EmonProfileSourceDescriptorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc48e18, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) profile_source_descriptor_count;
    
    // [EmonProfileSourceDescriptorListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc48e20, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) profile_source_descriptor_list_head;
    
    // [EmonProfileSourceDescriptorListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc48e10, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) profile_source_descriptor_list_lock;
    
    // [EmonAddProfileSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cd350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50b430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cd240, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) add_profile_source;
    
    // [EmonAllocateResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cd748, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50b8bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cd638, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) allocate_resources;
    
    // [EmonCompleteInitializeProfiling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x99ba80, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d360, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99ab00, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) complete_initialize_profiling;
    
    // [EmonDsManagementAreas]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ff80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e30, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) ds_management_areas;
    
    // [EmonFixedCounterResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ffa4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e50, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) fixed_counter_resolution;
    
    // [EmonGetCounterResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cdc20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50bf20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cdb10, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) get_counter_resolution;
    
    // [EmonInitializePebs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x99c8b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7dae8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99b938, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) initialize_pebs;
    
    // [EmonMarkCountersReserved]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cdc64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50bf70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cdb54, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) mark_counters_reserved;
    
    // [EmonNumberArchCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e3c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ff78, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e1c, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) number_arch_counters;
    
    // [EmonNumberFixedCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ffb4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e70, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) number_fixed_counters;
    
    // [EmonOverflowMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ffb8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e68, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) overflow_mask;
    
    // [EmonPebs64Bit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e58, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ff88, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e38, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) pebs64_bit;
    
    // [EmonPebsAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e59, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ff89, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e39, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) pebs_available;
    
    // [EmonPebsEntrySize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e94, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ffc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e74, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) pebs_entry_size;
    
    // [EmonPebsEntrySizeInUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e74, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ffa0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e54, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) pebs_entry_size_in_use;
    
    // [EmonPebsInUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ffb0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e58, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) pebs_in_use;
    
    // [EmonPebsOverflowHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ce5bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50ca34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ce4ac, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) pebs_overflow_handler;
    
    // [EmonPreOverflowHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ce670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50cae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ce560, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) pre_overflow_handler;
    
    // [EmonReleaseProfileResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ce690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50cb90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ce580, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) release_profile_resources;
    
    // [EmonReleaseProfileResourcesInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ce770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50cc70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ce660, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) release_profile_resources_internal;
    
    // [EmonReleaseReservedCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ce828, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50cd70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ce718, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) release_reserved_counters;
    
    // [EmonRemoveProfileSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ce9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50cf30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ce8b0, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) remove_profile_source;
    
    // [EmonReserveProfileResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ceb40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50d0c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cea30, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) reserve_profile_resources;
    
    // [EmonReservedResourcesList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ff90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e40, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) reserved_resources_list;
    
    // [EmonReservedResourcesLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ff70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e08, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) reserved_resources_lock;
    
    // [EmonVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48e20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ff60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e00, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) version;
    
    // [EmonAllocateCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2da20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cd5f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50b710, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cd4e0, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) allocate_counter;
    
    // [EmonConfigureCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2dac8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x386acc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50baa8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38788c, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) configure_counter;
    
    // [EmonCounterResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d8f0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48e5c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ff8c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e3c, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) counter_resolution;
    
    // [EmonCounterStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d8e8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48e80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ffa8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e60, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) counter_status;
    
    // [EmonDisableMonitoring]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2db20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cd9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50bcc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cd8b0, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) disable_monitoring;
    
    // [EmonEnableMonitoring]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2dbe0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cda80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50bd80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cd970, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) enable_monitoring;
    
    // [EmonFreeCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x58b8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b6508, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bba9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6db8, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) free_counter;
    
    // [EmonInitializeProfiling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61cf0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99c580, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa79640, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99b600, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) initialize_profiling;
    
    // [EmonNumberCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d8f4, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48e24, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ff64, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e04, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) number_counters;
    
    // [EmonOverflowHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2dc50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cde30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50c190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cdd20, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) overflow_handler;
    
    // [EmonPauseProfiling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2df00, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ce4f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50c950, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ce3e0, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) pause_profiling;
    
    // [EmonProfileInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3d360, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x1e00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5e60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1550, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) profile_interface;
    
    // [EmonProfileIntervalLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3de50, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xc130, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11b58, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xba90, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) profile_interval_limits;
    
    // [EmonProfileSourceDescriptorTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x492f0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc03330, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc04d70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc03370, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) profile_source_descriptor_table;
    
    // [EmonQueryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x58000, 0x11e8 bytes
    // ntoskrnl.exe .text:0x372520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50cb00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3738a0, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) query_information;
    
    // [EmonRestartProfiling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5f2d0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x994240, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa83070, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x993250, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) restart_profiling;
    
    // [EmonResumeProfiling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2df60, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cec90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50d260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ceb80, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) resume_profiling;
    
    // [EmonSetInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xcab0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x373b40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bb960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x374ec0, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) set_interval;
};
#include "magic/api.end.hpp"
