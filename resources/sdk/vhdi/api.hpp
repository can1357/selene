#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace vhdi
{
    // [VhdiGetDiskParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7becc0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa9313c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb866b4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa92320, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) get_disk_parameters;
    
    // [VhdiGetPartitionNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bedcc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa93290, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb86810, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa92474, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) get_partition_number;
    
    // [VhdiGetVolumeNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bee64, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa9332c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb868ac, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa92510, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) get_volume_number;
    
    // [VhdiInitializeBootDisk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7befac, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa934a0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb86a30, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa92690, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) initialize_boot_disk;
    
    // [VhdiMountVhdFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bf2a8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa937a8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb86d20, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa92998, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) mount_vhd_file;
    
    // [VhdiQueryVolumeVhdFilePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bf788, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa93cb8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb87244, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa92ea8, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) query_volume_vhd_file_path;
    
    // [VhdiVerifyBootDisk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e7eec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97d13c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5fdfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ba1c, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) verify_boot_disk;
};
#include "magic/api.end.hpp"
