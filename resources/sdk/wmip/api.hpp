#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace wmip
{
    // [WmipAcquireSmbiosLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x49376c, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) acquire_smbios_lock_shared;
    
    // [WmipAllocDataSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x5277d8, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) alloc_data_source;
    
    // [WmipCheckSMBiosSysInfoString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9d34f8, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) check_sm_bios_sys_info_string;
    
    // [WmipGetSMBiosString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9d39cc, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) get_sm_bios_string;
    
    // [WmipProcessSynchronousEtw]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7a074c, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) process_synchronous_etw;
    
    // [WmipReadSMBiosSysInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e6fb0, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) read_sm_bios_sys_info;
    
    // [WmipReleaseSmbiosLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9d34cc, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) release_smbios_lock_shared;
    
    // [WmipSysInfoManufacturerStr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc32080, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) sys_info_manufacturer_str;
    
    // [WmipSysInfoProductNameStr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc32070, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) sys_info_product_name_str;
    
    // [WmipSysInfoStringCached]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc3210c, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) sys_info_string_cached;
    
    // [WmipAlign]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211308, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9758, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df1a0, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) align;
    
    // [WmipSaveGuidSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b4a04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8678f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc644, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) save_guid_security_descriptor;
    
    // [WmipAddDataSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x527910, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x736e88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79fafc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73eac8, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) add_data_source;
    
    // [WmipAddMofResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5460d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a02ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a083c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a84cc, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) add_mof_resource;
    
    // [WmipAddProviderIdToPIList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47d654, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5de8b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e8884, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x681604, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) add_provider_id_to_pi_list;
    
    // [WmipAllocEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x528704, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7386a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a04f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7402e0, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) alloc_entry;
    
    // [WmipAllocGuidEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x528670, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x738608, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a0464, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x740248, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) alloc_guid_entry;
    
    // [WmipAllocProviderId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3b6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6797c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c3c80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ecb04, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) alloc_provider_id;
    
    // [WmipAllocRegEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c2a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x36c994, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36ddf4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36dd14, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) alloc_reg_entry;
    
    // [WmipAllocateSingleInstanceWnode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a19a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92e580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d3354, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92ce50, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) allocate_single_instance_wnode;
    
    // [WmipBinaryMofGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec288, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980568, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64028, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ee48, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) binary_mof_guid;
    
    // [WmipBuildInstanceSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x527bfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7371b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79fdf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73edf8, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) build_instance_set;
    
    // [WmipBuildTraceDeviceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbe954, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c0ee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d8ac4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1cf0, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) build_trace_device_list;
    
    // [WmipCachePtrs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5280c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x737fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e3414, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73fc20, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) cache_ptrs;
    
    // [WmipCancelSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fead0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1a080, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32128, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a0b0, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) cancel_spin_lock;
    
    // [WmipClearIrpObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc36cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x26fd4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38078c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32156c, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) clear_irp_object_list;
    
    // [WmipCompleteGuidIrpWithError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc2d10, 0x32828 bytes
    // ntoskrnl.exe .text:0x21132c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x380678, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df1c4, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) complete_guid_irp_with_error;
    
    // [WmipCopyFromEventQueues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x533dcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7525d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6766a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x759ea4, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) copy_from_event_queues;
    
    // [WmipCountedToSz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51b8e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x737e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e8b08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73fad0, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) counted_to_sz;
    
    // [WmipCreateGuidObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47d7ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5db290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e6400, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6819d8, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) create_guid_object;
    
    // [WmipDataProviderPnPIdInstanceNamesGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e998, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa6c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf078, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xab88, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) data_provider_pn_p_id_instance_names_guid;
    
    // [WmipDataProviderPnpidGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e9a8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa6d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf068, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xab98, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) data_provider_pnpid_guid;
    
    // [WmipDefaultAccessSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3b8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb660, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dcc0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb660, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) default_access_sd;
    
    // [WmipDefaultAccessSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ad700, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfc870, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e468, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfc870, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) default_access_security_descriptor;
    
    // [WmipDeleteMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x482248, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f7a80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e5790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6810c0, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) delete_method;
    
    // [WmipDereferenceEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a25e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92f25c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d422c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92db2c, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) dereference_event;
    
    // [WmipDeregisterDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x522ae4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7353e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c3874, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73d020, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) deregister_device;
    
    // [WmipDeregisterRegEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x122c00, 0x32828 bytes
    // ntoskrnl.exe .text:0x36ca84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36dee4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36de04, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) deregister_reg_entry;
    
    // [WmipDetermineInstanceBaseIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x527f2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x737658, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a0268, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73f298, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) determine_instance_base_index;
    
    // [WmipDisableCollectOrEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x482338, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e93c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eafe0, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) disable_collect_or_event;
    
    // [WmipDisableCollectionForRemovedGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5220d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7386f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e707c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x740334, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) disable_collection_for_removed_guid;
    
    // [WmipDoDisableRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53a3a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75db4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80f638, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76559c, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) do_disable_request;
    
    // [WmipDoFindRegEntryByDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c27c, 0x32828 bytes
    // ntoskrnl.exe .text:0x36c964, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36ddc4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36dce4, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) do_find_reg_entry_by_device;
    
    // [WmipDoFindRegEntryByProviderId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92744, 0x32828 bytes
    // ntoskrnl.exe .text:0x211460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e99e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df2f0, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) do_find_reg_entry_by_provider_id;
    
    // [WmipDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x781518, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa66230, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb41cb0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa65910, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) driver_entry;
    
    // [WmipDSChunkInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f4390, 0x32828 bytes
    // ntoskrnl.exe .data:0xc02c10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc03890, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc02c80, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) ds_chunk_info;
    
    // [WmipDSChunkInfoLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341780, 0x32828 bytes
    // ntoskrnl.exe .data:0xcee980, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0f400, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcee900, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) ds_chunk_info_lookaside;
    
    // [WmipDSCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x521f80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7501c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e3b80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x757e00, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) ds_cleanup;
    
    // [WmipDSHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fea00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19f70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32040, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19fd0, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) ds_head;
    
    // [WmipDSHeadPtr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fea10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19f98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32020, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a010, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) ds_head_ptr;
    
    // [WmipEnableCollectOrEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47df8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65c768, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e89ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x682ad0, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) enable_collect_or_event;
    
    // [WmipEnableCollectionForNewGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x528184, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7380ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e34d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73fcec, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) enable_collection_for_new_guid;
    
    // [WmipEnumerateGuids]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a2808, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92f4b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d4498, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92dd84, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) enumerate_guids;
    
    // [WmipEnumerateMofResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47e1b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x674f34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d2440, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e80f4, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) enumerate_mof_resources;
    
    // [WmipEventNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x527654, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x736af0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x861250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e730, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) event_notification;
    
    // [WmipEventWorkItems]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe9e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19f60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32000, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19fc0, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) event_work_items;
    
    // [WmipEventWorkQueueItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe9c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19f40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31fe0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19fa0, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) event_work_queue_item;
    
    // [WmipFindGEByGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47d464, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ddb50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e84f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6828d0, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) find_ge_by_guid;
    
    // [WmipFindGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49330c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6761e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e183c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9420, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) find_guid;
    
    // [WmipFindISinGEbyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x528848, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x738948, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a0654, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x740588, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) find_i_sin_g_eby_name;
    
    // [WmipFindISInDSByGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a37c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a60b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x856e6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ae1c0, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) find_is_in_ds_by_guid;
    
    // [WmipFindMRByNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54630c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a04e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a09fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8708, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) find_mr_by_names;
    
    // [WmipFindRegEntryByDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c20c, 0x32828 bytes
    // ntoskrnl.exe .text:0x36c8d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36dd34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36dc54, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) find_reg_entry_by_device;
    
    // [WmipFindRegEntryByProviderId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x926d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2113c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e994c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df260, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) find_reg_entry_by_provider_id;
    
    // [WmipFindSMBiosStructure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a1a74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92e668, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d359c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92cf38, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) find_sm_bios_structure;
    
    // [WmipFindSysIdTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a1b98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92e7ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d36e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92d07c, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) find_sys_id_table;
    
    // [WmipFirmwareTableArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2868d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1faa0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x467d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1fa10, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) firmware_table_array;
    
    // [WmipFirmwareTableHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2246cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c5b80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e7100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c6a50, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) firmware_table_handler;
    
    // [WmipForwardWmiIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x446ba4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f7c4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e5c28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68128c, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) forward_wmi_irp;
    
    // [WmipFreeTraceDeviceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47af24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a3408, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x855348, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ab520, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) free_trace_device_list;
    
    // [WmipGEChunkInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f41d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc02040, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc02f18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc02080, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) ge_chunk_info;
    
    // [WmipGEChunkInfoLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341700, 0x32828 bytes
    // ntoskrnl.exe .data:0xcee880, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0f480, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcee880, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) ge_chunk_info_lookaside;
    
    // [WmipGECleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5225a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec400, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75d360, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) ge_cleanup;
    
    // [WmipGEHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fea30, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19f80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32030, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19ff0, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) ge_head;
    
    // [WmipGEHeadPtr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fea40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19fb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32058, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a018, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) ge_head_ptr;
    
    // [WmipGenerateBinaryMofNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a381c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b2d0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85e51c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ba89c, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) generate_binary_mof_notification;
    
    // [WmipGenerateMofResourceNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5676b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a74d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a0bdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7af5f0, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) generate_mof_resource_notification;
    
    // [WmipGenerateRegistrationNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x527fec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x737f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e3334, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73fb40, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) generate_registration_notification;
    
    // [WmipGenericMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec708, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa645d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f300, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) generic_mapping;
    
    // [WmipGetFilePDO]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5369c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7708f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8647ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x778364, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) get_file_pdo;
    
    // [WmipGetGuidObjectInstanceInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x536870, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x770794, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8649d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x778204, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) get_guid_object_instance_info;
    
    // [WmipGetGuidPropertiesFromGuidEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a2908, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92f5bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d45a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92de8c, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) get_guid_properties_from_guid_entry;
    
    // [WmipGetGuidSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47d9c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5db4b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x681bf8, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) get_guid_security_descriptor;
    
    // [WmipGetRegistryHideMachine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4936d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7091b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7722cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bcd14, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) get_registry_hide_machine;
    
    // [WmipGetSMBiosEventlog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a1c84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92e8a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d37d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92d174, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) get_sm_bios_eventlog;
    
    // [WmipGetSMBiosFromLoaderBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a9790, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa70918, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb422e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6fcc4, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) get_sm_bios_from_loader_block;
    
    // [WmipGetSMBiosTableData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4935f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7090b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7721cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bcc14, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) get_sm_bios_table_data;
    
    // [WmipGetSysIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a1e70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92ea98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d3a58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92d368, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) get_sys_ids;
    
    // [WmipGuidList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6f0230, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x984ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa692f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x983480, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) guid_list;
    
    // [WmipGuidObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3c0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb668, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dcc8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb668, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) guid_object_type;
    
    // [WmipHexStringToDword]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47dc5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ddab8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e636c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x682838, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) hex_string_to_dword;
    
    // [WmipInUseRegEntryCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326eb4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc503c4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc644a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc503c4, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) in_use_reg_entry_count;
    
    // [WmipInUseRegEntryHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f4260, 0x32828 bytes
    // ntoskrnl.exe .data:0xc02ab8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc04448, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc02af8, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) in_use_reg_entry_head;
    
    // [WmipIncludeStaticNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a298c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92f64c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d4630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92df1c, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) include_static_names;
    
    // [WmipInitializeAllocs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a8b2c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6fc90, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb41be4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6f100, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) initialize_allocs;
    
    // [WmipInitializeDataStructs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x781120, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6664c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb41e44, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa65d2c, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) initialize_data_structs;
    
    // [WmipInitializeRegistration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x781090, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa667c8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb42248, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa65ea8, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) initialize_registration;
    
    // [WmipInitializeSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78129c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa663bc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb41fc0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa65a9c, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) initialize_security;
    
    // [WmipInsertMofResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54628c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a0464, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a0ac4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8684, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) insert_mof_resource;
    
    // [WmipInsertStaticNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44648c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f73cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e4c9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x680a0c, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) insert_static_names;
    
    // [WmipInstIdChunkHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2feb08, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1a090, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32168, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a0e8, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) inst_id_chunk_head;
    
    // [WmipIoControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47cf34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f7070, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d1d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6806b0, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) io_control;
    
    // [WmipISChunkInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f41b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc02020, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc03870, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc02060, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) is_chunk_info;
    
    // [WmipISChunkInfoLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341880, 0x32828 bytes
    // ntoskrnl.exe .data:0xceea00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0f500, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xceea00, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) is_chunk_info_lookaside;
    
    // [WmipISCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x522578, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755570, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea6a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75cfc0, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) is_cleanup;
    
    // [WmipIsEqualInstanceSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a39c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a6044, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x856ec8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ae154, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) is_equal_instance_sets;
    
    // [WmipIsNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53896c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x771e98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ebfb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779898, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) is_number;
    
    // [WmipIsQuerySetGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47e078, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6647fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e8aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x682bc4, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) is_query_set_guid;
    
    // [WmipLegacyEtwCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x566780, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x930440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d5400, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92ed10, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) legacy_etw_callback;
    
    // [WmipLegacyEtwWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56585c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a6e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a1180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7aefb0, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) legacy_etw_worker;
    
    // [WmipLinkDataSourceToList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x528540, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7384d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a0330, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x740110, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) link_data_source_to_list;
    
    // [WmipMangleInstanceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x528754, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x738848, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a0548, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x740488, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) mangle_instance_name;
    
    // [WmipMRChunkInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f41f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc02060, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc02f38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc020a0, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) mr_chunk_info;
    
    // [WmipMRChunkInfoLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341800, 0x32828 bytes
    // ntoskrnl.exe .data:0xcee900, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0f580, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcee980, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) mr_chunk_info_lookaside;
    
    // [WmipMRCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a34d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a7460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d50f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7af580, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) mr_cleanup;
    
    // [WmipMRHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fea20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19fa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32010, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a000, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) mr_head;
    
    // [WmipMRHeadPtr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe9f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19f90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32050, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19fe0, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) mr_head_ptr;
    
    // [WmipNotificationIrpCancel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc3674, 0x32828 bytes
    // ntoskrnl.exe .text:0x26fce0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x380720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321500, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) notification_irp_cancel;
    
    // [WmipNPEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f42c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc02ba0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc06740, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc02c10, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) np_event;
    
    // [WmipNPNotificationSpinlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe9e8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19f68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32008, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19fc8, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) np_notification_spinlock;
    
    // [WmipOpenBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47d270, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dafd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e5f20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68171c, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) open_block;
    
    // [WmipOpenCloseCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a259c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6780a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eb4f0, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) open_close_cleanup;
    
    // [WmipOpenGuidObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47d758, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5db1d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e6124, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x681920, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) open_guid_object;
    
    // [WmipParseSysIdTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a2120, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92ed5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d3d20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92d62c, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) parse_sys_id_table;
    
    // [WmipPrepareForWnodeAD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47d544, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5de798, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e960c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6814ec, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) prepare_for_wnode_ad;
    
    // [WmipPrepareWnodeSI]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51b63c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x737be4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e85d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73f824, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) prepare_wnode_si;
    
    // [WmipProbeAndCaptureGuidObjectAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47dda0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f8438, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d217c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x683228, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) probe_and_capture_guid_object_attributes;
    
    // [WmipProbeWmiOpenGuidBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47dcec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f8380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d20d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x683170, 0x1fe000 bytes
    //
    _y7(sdk::unknown_ptr) probe_wmi_open_guid_block;
    
    // [WmipProbeWnodeMethodItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51bc9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70ec04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d515c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x716594, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) probe_wnode_method_item;
    
    // [WmipProbeWnodeSingleInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51bc24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70eb84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d25d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x716514, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) probe_wnode_single_instance;
    
    // [WmipProbeWnodeSingleItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a353c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x930208, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d51cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92ead8, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) probe_wnode_single_item;
    
    // [WmipProbeWnodeWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51bd08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70ec74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d2654, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x716604, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) probe_wnode_worker;
    
    // [WmipProcessEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5283dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x738360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a0e80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73ffa0, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) process_event;
    
    // [WmipProcessLegacyEtwCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x565a68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9305a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d5560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92ee70, 0x1fe000 bytes
    //
    _z3(sdk::unknown_ptr) process_legacy_etw_callback;
    
    // [WmipProcessLegacyEtwRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x565988, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a6ff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a12e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7af110, 0x1fe000 bytes
    //
    _z4(sdk::unknown_ptr) process_legacy_etw_register;
    
    // [WmipProcessWmiRegInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x527820, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x737518, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a0128, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73f158, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) process_wmi_reg_info;
    
    // [WmipProviderIdCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f7d38, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11178, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bc7c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc111e8, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) provider_id_counter;
    
    // [WmipQueryAllData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4466f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f7630, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e4f08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x680c70, 0x1fe000 bytes
    //
    _z7(sdk::unknown_ptr) query_all_data;
    
    // [WmipQueryAllDataMultiple]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a2c6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92f948, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d4920, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92e218, 0x1fe000 bytes
    //
    _z8(sdk::unknown_ptr) query_all_data_multiple;
    
    // [WmipQueryGuidInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a2f28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92fc2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d2370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92e4fc, 0x1fe000 bytes
    //
    _z9(sdk::unknown_ptr) query_guid_info;
    
    // [WmipQuerySetExecuteSI]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51b3d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x737850, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e588c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73f490, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) query_set_execute_si;
    
    // [WmipQuerySingleMultiple]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a2fec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92fcfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d4be0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92e5cc, 0x1fe000 bytes
    //
    _a1(sdk::unknown_ptr) query_single_multiple;
    
    // [WmipQueryWmiDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49321c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7096d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x771ff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bc5b0, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) query_wmi_data_block;
    
    // [WmipQueryWmiRegInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5718a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b64a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86fce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be070, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) query_wmi_reg_info;
    
    // [WmipQueueLegacyEtwWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5669a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a9648, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a0fdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b0fc8, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) queue_legacy_etw_work;
    
    // [WmipQueueNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x528938, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x735ba4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x677434, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73d7e4, 0x1fe000 bytes
    //
    _a5(sdk::unknown_ptr) queue_notification;
    
    // [WmipQueueRegWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52af2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7356c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c3c98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73d304, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) queue_reg_work;
    
    // [WmipRawSMBiosTableHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcd46c, 0x32828 bytes
    // ntoskrnl.exe .text:0x35f700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x309f90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f89d0, 0x1fe000 bytes
    //
    _a7(sdk::unknown_ptr) raw_sm_bios_table_handler;
    
    // [WmipReceiveNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc0cf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x26a828, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3773d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31beb8, 0x1fe000 bytes
    //
    _a8(sdk::unknown_ptr) receive_notifications;
    
    // [WmipReferenceEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47d734, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dded4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e8980, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x682aa4, 0x1fe000 bytes
    //
    _a9(sdk::unknown_ptr) reference_entry;
    
    // [WmipRegLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341040, 0x32828 bytes
    // ntoskrnl.exe .data:0xceca00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0ba00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xceca00, 0x1fe000 bytes
    //
    _b0(sdk::unknown_ptr) reg_lookaside;
    
    // [WmipRegWorkItemCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9950, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11310, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0beb0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11380, 0x1fe000 bytes
    //
    _b1(sdk::unknown_ptr) reg_work_item_count;
    
    // [WmipRegWorkList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f42b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc02b90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc03668, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc02c00, 0x1fe000 bytes
    //
    _b2(sdk::unknown_ptr) reg_work_list;
    
    // [WmipRegWorkQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2feae0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1a060, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32140, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a0c0, 0x1fe000 bytes
    //
    _b3(sdk::unknown_ptr) reg_work_queue;
    
    // [WmipRegisterDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52adc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x735558, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c3b18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73d198, 0x1fe000 bytes
    //
    _b4(sdk::unknown_ptr) register_device;
    
    // [WmipRegisterEtwProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5668d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a95b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a0b48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b0f38, 0x1fe000 bytes
    //
    _b5(sdk::unknown_ptr) register_etw_provider;
    
    // [WmipRegisterFirmwareProviders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a9464, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa702e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4234c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6f624, 0x1fe000 bytes
    //
    _b6(sdk::unknown_ptr) register_firmware_providers;
    
    // [WmipRegisterOrUpdateDS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5276bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x736d6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79f9e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e9ac, 0x1fe000 bytes
    //
    _b7(sdk::unknown_ptr) register_or_update_ds;
    
    // [WmipRegistrationSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2feb00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1a088, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32160, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a0e0, 0x1fe000 bytes
    //
    _b8(sdk::unknown_ptr) registration_spin_lock;
    
    // [WmipRegistrationWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x533458, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x750340, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f48f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x757f80, 0x1fe000 bytes
    //
    _b9(sdk::unknown_ptr) registration_worker;
    
    // [WmipRegistryPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe970, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19ee0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31f80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19f40, 0x1fe000 bytes
    //
    _c0(sdk::unknown_ptr) registry_path;
    
    // [WmipReleaseCollectionEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53db04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x764e94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816f70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76c5b4, 0x1fe000 bytes
    //
    _c1(sdk::unknown_ptr) release_collection_enabled;
    
    // [WmipRemoveDS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x522b88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7357ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c3dc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73d42c, 0x1fe000 bytes
    //
    _c2(sdk::unknown_ptr) remove_ds;
    
    // [WmipSDRegistryQueryRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x431854, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64e3b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a4280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c1690, 0x1fe000 bytes
    //
    _c3(sdk::unknown_ptr) sd_registry_query_routine;
    
    // [WmipSecurityMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x496288, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x654b60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74e330, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cc620, 0x1fe000 bytes
    //
    _c4(sdk::unknown_ptr) security_method;
    
    // [WmipSendDisableRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4823a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677be0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9434, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eb050, 0x1fe000 bytes
    //
    _c5(sdk::unknown_ptr) send_disable_request;
    
    // [WmipSendEnableDisableRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53a41c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x761530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d4214, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7687d0, 0x1fe000 bytes
    //
    _c6(sdk::unknown_ptr) send_enable_disable_request;
    
    // [WmipSendEnableRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47e0dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65c85c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d410c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea844, 0x1fe000 bytes
    //
    _c7(sdk::unknown_ptr) send_enable_request;
    
    // [WmipSendGuidUpdateNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5282b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7381fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a0d1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73fe3c, 0x1fe000 bytes
    //
    _c8(sdk::unknown_ptr) send_guid_update_notifications;
    
    // [WmipSendWmiIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53a2c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x737afc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e5b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73f73c, 0x1fe000 bytes
    //
    _c9(sdk::unknown_ptr) send_wmi_irp;
    
    // [WmipSendWmiIrpToTraceDeviceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47af70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a345c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x855214, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ab574, 0x1fe000 bytes
    //
    _d0(sdk::unknown_ptr) send_wmi_irp_to_trace_device_list;
    
    // [WmipServiceDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe9b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19f38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31f90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19f98, 0x1fe000 bytes
    //
    _d1(sdk::unknown_ptr) service_device_object;
    
    // [WmipSetTraceNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56aa34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x764258, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c3914, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76b4f8, 0x1fe000 bytes
    //
    _d2(sdk::unknown_ptr) set_trace_notify;
    
    // [WmipSMBiosFindStringAndZero]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a2308, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92ef4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d3f18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92d81c, 0x1fe000 bytes
    //
    _d3(sdk::unknown_ptr) sm_bios_find_string_and_zero;
    
    // [WmipSMBiosFindStructure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a2388, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92efd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d3fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92d8a4, 0x1fe000 bytes
    //
    _d4(sdk::unknown_ptr) sm_bios_find_structure;
    
    // [WmipSMBiosHideMachine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a2408, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92f05c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d4028, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92d92c, 0x1fe000 bytes
    //
    _d5(sdk::unknown_ptr) sm_bios_hide_machine;
    
    // [WmipSMBiosLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fea60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19fe0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc320a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a040, 0x1fe000 bytes
    //
    _d6(sdk::unknown_ptr) sm_bios_lock;
    
    // [WmipSMBiosTableLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a048, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b04c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51040, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b04c, 0x1fe000 bytes
    //
    _d7(sdk::unknown_ptr) sm_bios_table_length;
    
    // [WmipSMBiosTablePhysicalAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a100, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b110, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd510f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b110, 0x1fe000 bytes
    //
    _d8(sdk::unknown_ptr) sm_bios_table_physical_address;
    
    // [WmipSMBiosVersionInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a068, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b070, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51058, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b070, 0x1fe000 bytes
    //
    _d9(sdk::unknown_ptr) sm_bios_version_info;
    
    // [WmipSMMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe980, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19f00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31fa0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19f60, 0x1fe000 bytes
    //
    _e0(sdk::unknown_ptr) sm_mutex;
    
    // [WmipStaticInstanceNameSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x446670, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f75a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e4e7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x680be8, 0x1fe000 bytes
    //
    _e1(sdk::unknown_ptr) static_instance_name_size;
    
    // [WmipSysId1394]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2feac8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19fd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32110, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a038, 0x1fe000 bytes
    //
    _e2(sdk::unknown_ptr) sys_id1394;
    
    // [WmipSysId1394Count]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fea5c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19fcc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32108, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a0a8, 0x1fe000 bytes
    //
    _e3(sdk::unknown_ptr) sys_id1394_count;
    
    // [WmipSysIdRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fea58, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19fc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32120, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a020, 0x1fe000 bytes
    //
    _e4(sdk::unknown_ptr) sys_id_read;
    
    // [WmipSysIdStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fea4c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19fc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32064, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a024, 0x1fe000 bytes
    //
    _e5(sdk::unknown_ptr) sys_id_status;
    
    // [WmipSysIdUuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fea50, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19fb8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32118, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a030, 0x1fe000 bytes
    //
    _e6(sdk::unknown_ptr) sys_id_uuid;
    
    // [WmipSysIdUuidCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fea48, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19fc4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32060, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a028, 0x1fe000 bytes
    //
    _e7(sdk::unknown_ptr) sys_id_uuid_count;
    
    // [WmipSystemControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492f10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675eb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e1500, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e90f0, 0x1fe000 bytes
    //
    _e8(sdk::unknown_ptr) system_control;
    
    // [WmipSystemSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b690, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d108, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53e68, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d108, 0x1fe000 bytes
    //
    _e9(sdk::unknown_ptr) system_subject_context;
    
    // [WmipTranslateFileHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a35a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x930278, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d523c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92eb48, 0x1fe000 bytes
    //
    _f0(sdk::unknown_ptr) translate_file_handle;
    
    // [WmipTranslatePDOInstanceNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x525a2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7336e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e3df0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7206b0, 0x1fe000 bytes
    //
    _f1(sdk::unknown_ptr) translate_pdo_instance_names;
    
    // [WmipUnlinkInstanceSetFromGuidEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x522090, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7502dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e3ca0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x757f1c, 0x1fe000 bytes
    //
    _f2(sdk::unknown_ptr) unlink_instance_set_from_guid_entry;
    
    // [WmipUnreferenceEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x446adc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f7b78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e5e4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6811b8, 0x1fe000 bytes
    //
    _f3(sdk::unknown_ptr) unreference_entry;
    
    // [WmipUnreferenceRegEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92770, 0x32828 bytes
    // ntoskrnl.exe .text:0x211494, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9a14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df324, 0x1fe000 bytes
    //
    _f4(sdk::unknown_ptr) unreference_reg_entry;
    
    // [WmipUnregisterEtwProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a3778, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a9560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678bb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b0ee0, 0x1fe000 bytes
    //
    _f5(sdk::unknown_ptr) unregister_etw_provider;
    
    // [WmipUpdateAddGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a3a6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x930688, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d5650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92ef58, 0x1fe000 bytes
    //
    _f6(sdk::unknown_ptr) update_add_guid;
    
    // [WmipUpdateDataSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a3b40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a5df8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x856c28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7adf08, 0x1fe000 bytes
    //
    _f7(sdk::unknown_ptr) update_data_source;
    
    // [WmipUpdateDeviceStackSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52affc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73579c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c3d74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73d3dc, 0x1fe000 bytes
    //
    _f8(sdk::unknown_ptr) update_device_stack_size;
    
    // [WmipUpdateModifyGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a3e94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a5f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x856d78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ae060, 0x1fe000 bytes
    //
    _f9(sdk::unknown_ptr) update_modify_guid;
    
    // [WmipUpdateRegistration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52acac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x733f0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86ca48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73bb54, 0x1fe000 bytes
    //
    _g0(sdk::unknown_ptr) update_registration;
    
    // [WmipUuidFromString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47dad8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dd928, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e61dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6826a8, 0x1fe000 bytes
    //
    _g1(sdk::unknown_ptr) uuid_from_string;
    
    // [WmipValidateWmiRegInfoString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x527ef4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x737620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a0230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73f260, 0x1fe000 bytes
    //
    _g2(sdk::unknown_ptr) validate_wmi_reg_info_string;
    
    // [WmipWaitForCollectionEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a40a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x930764, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d572c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92f034, 0x1fe000 bytes
    //
    _g3(sdk::unknown_ptr) wait_for_collection_enabled;
    
    // [WmipWmiIrpCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb60c, 0x32828 bytes
    // ntoskrnl.exe .text:0x25cac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36d0b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d1c0, 0x1fe000 bytes
    //
    _g4(sdk::unknown_ptr) wmi_irp_completion;
    
    // [WmipWmiLibInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed810, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x982020, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65b50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980900, 0x1fe000 bytes
    //
    _g5(sdk::unknown_ptr) wmi_lib_info;
    
    // [WmipWriteWnodeToObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12a884, 0x32828 bytes
    // ntoskrnl.exe .text:0x36ccb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2041a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e034, 0x1fe000 bytes
    //
    _g6(sdk::unknown_ptr) write_wnode_to_object;
};
#include "magic/api.end.hpp"
