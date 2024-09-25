#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::pc_mbr
{
    // [CreatePartitionTable@PC_MBR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23b1f4, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) create_partition_table;
    
    // [Initialize@PC_MBR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x145968, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [ReadPartitionTable@PC_MBR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1456bc, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) read_partition_table;
    
    // [SetPartition@PC_MBR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23b2b8, 0x32828 bytes
    //
    _m3(sdk::unknown_ptr) set_partition;
    
    // [WritePartitionTable@PC_MBR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23b39c, 0x32828 bytes
    //
    _m4(sdk::unknown_ptr) write_partition_table;
};
#include "magic/api.end.hpp"
