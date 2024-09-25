#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::sc_mbr
{
    // [CreatePartitionTable@SC_MBR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c24f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65fed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c1360, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) create_partition_table;
    
    // [Initialize@SC_MBR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c25a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65ff84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c1414, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [ReadPartitionTable@SC_MBR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c2608, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65ffe8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c1478, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) read_partition_table;
    
    // [SetPartition@SC_MBR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c28f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6602e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c1768, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) set_partition;
    
    // [WritePartitionTable@SC_MBR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c2a28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x66042c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c1898, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) write_partition_table;
};
#include "magic/api.end.hpp"
