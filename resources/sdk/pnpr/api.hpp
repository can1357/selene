#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace pnpr
{
    // [PnprAddDeviceResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x648d6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8aa220, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95bb20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a89d0, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) add_device_resources;
    
    // [PnprAddMemoryResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x648de0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8aa2a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95bba4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a8a54, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) add_memory_resources;
    
    // [PnprAddProcessorResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x648fc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8aa4a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95bd9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a8c54, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) add_processor_resources;
    
    // [PnprAllocateMappingReserves]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6490e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8aa5bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95beb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a8d6c, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) allocate_mapping_reserves;
    
    // [PnprCollectResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x649298, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8aa774, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95c03c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a8f24, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) collect_resources;
    
    // [PnprCompleteWake]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d2964, 0x32828 bytes
    // ntoskrnl.exe .text:0x5090f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54ef74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x508eb8, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) complete_wake;
    
    // [PnprContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f2a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc432c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5aea8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43288, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) context;
    
    // [PnprCopyReservedMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d296c, 0x32828 bytes
    // ntoskrnl.exe .text:0x509110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54ef8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x508ed0, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) copy_reserved_mapping;
    
    // [PnprEndMirroring]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3db9dc, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9aaae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa884f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a9a50, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) end_mirroring;
    
    // [PnprFreeMappingReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x649618, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8aab10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95c3bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a92c0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) free_mapping_reserve;
    
    // [PnprGetMillisecondCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dba4c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9aab5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa88564, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a9acc, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) get_millisecond_counter;
    
    // [PnprGetPageDestination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d2cf4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5094cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54f348, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50928c, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) get_page_destination;
    
    // [PnprGetPluginDriverImagePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x649660, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8aab5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95c408, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a930c, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) get_plugin_driver_image_path;
    
    // [PnprGetStackLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d2d64, 0x32828 bytes
    // ntoskrnl.exe .text:0x509548, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54f3c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x509308, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) get_stack_limits;
    
    // [PnprIdentifyUnits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64985c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8aad7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95c62c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a952c, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) identify_units;
    
    // [PnprInitializeMappingReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x649a3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8aaf94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95c844, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a9744, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) initialize_mapping_reserve;
    
    // [PnprInitiateReplaceOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dba9c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9aabbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa885c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a9b2c, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) initiate_replace_operation;
    
    // [PnprIsMemoryDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x649afc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ab060, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95c910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a9810, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) is_memory_device;
    
    // [PnprIsProcessorDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x649ba8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ab118, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95c9c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a98c8, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) is_processor_device;
    
    // [PnprLegacyDeviceDriversPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x649cb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ab234, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95cae4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a99e4, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) legacy_device_drivers_present;
    
    // [PnprLoadPluginDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x649d04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ab288, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95cb38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a9a38, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) load_plugin_driver;
    
    // [PnprLockPagesForReplace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x649e84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ab404, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95ccb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a9bb4, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) lock_pages_for_replace;
    
    // [PnprLogFailureEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x649eb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ab438, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95cce4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a9be8, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) log_failure_event;
    
    // [PnprLogStartEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x649fdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ab564, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95ce10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a9d14, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) log_start_event;
    
    // [PnprLogSuccessEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64a0a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ab638, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95cee4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a9de8, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) log_success_event;
    
    // [PnprMapPhysicalPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dbdf8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9aaf9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa88998, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a9f0c, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) map_physical_pages;
    
    // [PnprMapTargetSparePhysicalPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dbfbc, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ab170, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa88b60, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aa0e0, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) map_target_spare_physical_pages;
    
    // [PnprMarkOrMirrorPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dc0d0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ab288, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa88c78, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aa1f8, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) mark_or_mirror_pages;
    
    // [PnprMirrorMarkedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dc214, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ab3ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa88ddc, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aa35c, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) mirror_marked_pages;
    
    // [PnprMirrorPhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d2d9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x509590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54f410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x509350, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) mirror_physical_memory;
    
    // [PnprMmAddRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64a354, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ab8f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95d1a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aa0a0, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) mm_add_range;
    
    // [PnprMmConstruct]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64a484, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8aba28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95d2d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aa1d8, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) mm_construct;
    
    // [PnprMmFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64a58c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8abb34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95d3e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aa2e4, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) mm_free;
    
    // [PnprQueryReplaceFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d2dfc, 0x32828 bytes
    // ntoskrnl.exe .text:0x509608, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54f488, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5093c8, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) query_replace_features;
    
    // [PnprQuiesce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d2eac, 0x32828 bytes
    // ntoskrnl.exe .text:0x5096e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54f568, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5094a8, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) quiesce;
    
    // [PnprQuiesceDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dc3e0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ab5d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa88fb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aa540, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) quiesce_devices;
    
    // [PnprQuiesceProcessorDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dc544, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ab750, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa89130, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aa6c0, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) quiesce_processor_dpc;
    
    // [PnprQuiesceProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dc8c4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9abb34, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa895b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aaaa4, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) quiesce_processors;
    
    // [PnprQuiesceWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dcd30, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ac020, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa89b10, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aaf90, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) quiesce_worker;
    
    // [PnprRecopyAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d2f4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x509790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54f610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x509550, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) recopy_address;
    
    // [PnprRecopyMappingReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d2f9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5097e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54f668, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5095a8, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) recopy_mapping_reserve;
    
    // [PnprRecopyMirrorPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3078, 0x32828 bytes
    // ntoskrnl.exe .text:0x5098bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54f73c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50967c, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) recopy_mirror_pages;
    
    // [PnprReplaceStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64a5cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8abb7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95d42c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aa32c, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) replace_start;
    
    // [PnprStartMirroring]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571db8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a0d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711b20, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) start_mirroring;
    
    // [PnprSwap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d31ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x509a38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54f8bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5097f8, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) swap;
    
    // [PnprSwapFinalize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3410, 0x32828 bytes
    // ntoskrnl.exe .text:0x509c60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54fae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x509a20, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) swap_finalize;
    
    // [PnprUnlockPagesForReplace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64a730, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8abcf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95d5a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aa4a4, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) unlock_pages_for_replace;
    
    // [PnprWakeDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dce48, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ac15c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa89c4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9ab0cc, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) wake_devices;
    
    // [PnprWakeProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dcec0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ac1dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa89ccc, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9ab14c, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) wake_processors;
};
#include "magic/api.end.hpp"
