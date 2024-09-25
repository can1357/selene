#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace boot
{
    // [BOOT_ENVIRONMENT_VSM_POLICY_ENABLEMENT_FAILURE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2da60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ba58, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dda0, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) environment_vsm_policy_enablement_failure;
    
    // [BootStatDataCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1dd28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc379d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dd68, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) stat_data_cache;
    
    // [BootStatDisableFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1dd20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc379d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dd60, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) stat_disable_flush;
    
    // [BootStatFileHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1dd18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc379e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dd58, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) stat_file_handle;
    
    // [BootStatFileHandleAcquired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1dd31, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc379d9, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dd71, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) stat_file_handle_acquired;
    
    // [BootStatKeepHandleOpen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1dd30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc379da, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dd70, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) stat_keep_handle_open;
    
    // [BootStatReferenceCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1dd10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc379e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dd50, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) stat_reference_count;
    
    // [BootApplicationPersistentDataInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a2a54, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa69424, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb549b0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa68afc, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) application_persistent_data_initialize;
    
    // [BootApplicationPersistentDataProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7959f0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa432e4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb23a98, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3d67c, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) application_persistent_data_process;
    
    // [BootDriverLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x322db8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47020, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ec18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc46fe0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) driver_lock;
    
    // [BOOT_ENVIRONMENT_VSM_POLICY_ENABLEMENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2604a0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd738, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe3c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb4e8, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) environment_vsm_policy_enablement;
    
    // [BOOT_FW_BOOT_PERF_DATA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2604b0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd748, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe3d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb4f8, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) fw_boot_perf_data;
    
    // [BootPerformanceData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260508, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xdf38, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe348, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcea0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) performance_data;
    
    // [BOOT_PROVIDER_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2604d0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd768, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe398, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb518, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) provider_guid;
    
    // [BootDriveExtension]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e680, 0x1b430 bytes
    // storport.sys .data:0x67d98, 0x2be18 bytes
    // storport.sys .data:0x79b10, 0x440c8 bytes
    // storport.sys .data:0x67d98, 0x2be18 bytes
    //
    _n4(sdk::unknown_ptr) drive_extension;
};
#include "magic/api.end.hpp"
