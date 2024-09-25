#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::sc_gpt
{
    // [CreatePartitionTable@SC_GPT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c2c74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65e0d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c1ae4, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) create_partition_table;
    
    // [ReadEntries@SC_GPT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c2d04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65e1fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c1b74, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) read_entries;
    
    // [ReadHeader@SC_GPT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c2e24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65e284, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c1c94, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) read_header;
    
    // [ReadPartitionTable@SC_GPT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c2f1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65e380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c1d8c, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) read_partition_table;
    
    // [SetPartition@SC_GPT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c3178, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65e600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c1fe8, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) set_partition;
    
    // [VerifyPartitionTable@SC_GPT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c3264, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65e6ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c20d4, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) verify_partition_table;
    
    // [WritePartitionTable@SC_GPT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c3538, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65e9ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c23a8, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) write_partition_table;
};
#include "magic/api.end.hpp"
