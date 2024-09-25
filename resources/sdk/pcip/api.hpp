#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace pcip
{
    // [PcipArbiterTraceDumpIoResDesc]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x648c4, 0x1cf0 bytes
    //
    _m0(sdk::unknown_ptr) arbiter_trace_dump_io_res_desc;
    
    // [PcipDiagConstraintsInitializedWnfSubscription]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34818, 0x1cf0 bytes
    // pci.sys .data:0x38878, 0x1cf0 bytes
    // pci.sys .data:0x32818, 0x1cf0 bytes
    //
    _m1(sdk::unknown_ptr) diag_constraints_initialized_wnf_subscription;
    
    // [PcipDiagConstraintsInitializedWnfSubscriptionInitialized]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34820, 0x1cf0 bytes
    // pci.sys .data:0x38880, 0x1cf0 bytes
    // pci.sys .data:0x32820, 0x1cf0 bytes
    //
    _m2(sdk::unknown_ptr) diag_constraints_initialized_wnf_subscription_initialized;
    
    // [PcipDiagConstraintsUpdatedWnfSubscription]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34808, 0x1cf0 bytes
    // pci.sys .data:0x38868, 0x1cf0 bytes
    // pci.sys .data:0x32808, 0x1cf0 bytes
    //
    _m3(sdk::unknown_ptr) diag_constraints_updated_wnf_subscription;
    
    // [PcipDiagConstraintsUpdatedWnfSubscriptionInitialized]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34810, 0x1cf0 bytes
    // pci.sys .data:0x38870, 0x1cf0 bytes
    // pci.sys .data:0x32810, 0x1cf0 bytes
    //
    _m4(sdk::unknown_ptr) diag_constraints_updated_wnf_subscription_initialized;
    
    // [PcipSleepstudyLibraryHandle]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x347c0, 0x1cf0 bytes
    // pci.sys .data:0x38828, 0x1cf0 bytes
    // pci.sys .data:0x327c0, 0x1cf0 bytes
    //
    _m5(sdk::unknown_ptr) sleepstudy_library_handle;
    
    // [PcipSleepstudyRebuildWorkItem]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x347e0, 0x1cf0 bytes
    // pci.sys .data:0x38840, 0x1cf0 bytes
    // pci.sys .data:0x327e0, 0x1cf0 bytes
    //
    _m6(sdk::unknown_ptr) sleepstudy_rebuild_work_item;
    
    // [PcipSleepstudyRebuildWorkerStatus]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34800, 0x1cf0 bytes
    // pci.sys .data:0x38860, 0x1cf0 bytes
    // pci.sys .data:0x32800, 0x1cf0 bytes
    //
    _m7(sdk::unknown_ptr) sleepstudy_rebuild_worker_status;
    
    // [PcipSurpriseRemoveAndReenumerateSelf]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf0d8, 0x1cf0 bytes
    // pci.sys .text:0x1cb6c, 0x1cf0 bytes
    // pci.sys .text:0x10fa8, 0x1cf0 bytes
    //
    _m8(sdk::unknown_ptr) surprise_remove_and_reenumerate_self;
    
    // [PcipErrorSourceConfiguration]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23088, 0x1d08 bytes
    // pci.sys .data:0x34238, 0x1cf0 bytes
    // pci.sys .data:0x38088, 0x1cf0 bytes
    // pci.sys .data:0x32238, 0x1cf0 bytes
    //
    _m9(sdk::unknown_ptr) error_source_configuration;
    
    // [PcipSavedAssignSlotResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x247f0, 0x1d08 bytes
    // pci.sys .data:0x35c00, 0x1cf0 bytes
    // pci.sys .data:0x39ca0, 0x1cf0 bytes
    // pci.sys .data:0x33c00, 0x1cf0 bytes
    //
    _n0(sdk::unknown_ptr) saved_assign_slot_resources;
    
    // [PcipSavedTranslateBusAddress]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x247d0, 0x1d08 bytes
    // pci.sys .data:0x35bf0, 0x1cf0 bytes
    // pci.sys .data:0x39c90, 0x1cf0 bytes
    // pci.sys .data:0x33bf0, 0x1cf0 bytes
    //
    _n1(sdk::unknown_ptr) saved_translate_bus_address;
};
#include "magic/api.end.hpp"
