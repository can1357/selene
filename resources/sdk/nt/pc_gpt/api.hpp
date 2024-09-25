#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::pc_gpt
{
    // [CreatePartitionTable@PC_GPT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23b5d0, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) create_partition_table;
    
    // [ReadEntries@PC_GPT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23b704, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) read_entries;
    
    // [ReadHeader@PC_GPT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23b81c, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) read_header;
    
    // [ReadPartitionTable@PC_GPT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23b8d4, 0x32828 bytes
    //
    _m3(sdk::unknown_ptr) read_partition_table;
    
    // [SetPartition@PC_GPT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23bb40, 0x32828 bytes
    //
    _m4(sdk::unknown_ptr) set_partition;
    
    // [VerifyPartitionTable@PC_GPT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23bc20, 0x32828 bytes
    //
    _m5(sdk::unknown_ptr) verify_partition_table;
    
    // [WritePartitionTable@PC_GPT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23bea8, 0x32828 bytes
    //
    _m6(sdk::unknown_ptr) write_partition_table;
};
#include "magic/api.end.hpp"
