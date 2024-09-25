#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::pc_raw
{
    // [CreatePartitionTable@PC_RAW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23af8c, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) create_partition_table;
    
    // [ReadPartitionTable@PC_RAW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23b034, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) read_partition_table;
};
#include "magic/api.end.hpp"
