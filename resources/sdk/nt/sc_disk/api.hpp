#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::sc_disk
{
    // [GenerateId@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x65f4ec, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) generate_id;
    
    // [GetFruIdDescPost@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x65f57c, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) get_fru_id_desc_post;
    
    // [??0SC_DISK@@QEAA@XZ]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c1a04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65f21c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c0874, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [CreatePartitionTable@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c1c38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65f478, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c0aa8, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) create_partition_table;
    
    // [??1SC_DISK@@UEAA@XZ]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c1b14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65f344, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c0984, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [GetStoragePropertyPost@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c1cb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65f5f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c0b20, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) get_storage_property_post;
    
    // [GetStoragePropertyPre@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c1d30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65f690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c0ba0, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) get_storage_property_pre;
    
    // [Initialize@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c1de0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65f750, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c0c50, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) initialize;
    
    // [InitializePartitionCache@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c1ee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65f8b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c0d50, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) initialize_partition_cache;
    
    // [IsVbr@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c1f28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65f8fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c0d98, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) is_vbr;
    
    // [ReadPartitionTable@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c1fd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65f9ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c0e48, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) read_partition_table;
    
    // [ReadSectors@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c2068, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65fa3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c0ed8, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) read_sectors;
    
    // [ResetPartitionCache@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c20ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65fa80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c0f1c, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) reset_partition_cache;
    
    // [SaveStorageProperty@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c2150, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65fb20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c0fc0, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) save_storage_property;
    
    // [SetPartition@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c220c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65fbe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c107c, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) set_partition;
    
    // [VerifyPartitionTable@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c2278, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65fc4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c10e8, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) verify_partition_table;
    
    // [WritePartitionTable@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c22b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65fc88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c1124, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) write_partition_table;
    
    // [WriteSectors@SC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c2398, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65fd6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c1208, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) write_sectors;
};
#include "magic/api.end.hpp"
