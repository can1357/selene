#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::sc_raw
{
    // [CreatePartitionTable@SC_RAW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c4114, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x660b2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c2f84, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) create_partition_table;
    
    // [ReadPartitionTable@SC_RAW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c41e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x660bfc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c3054, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) read_partition_table;
};
#include "magic/api.end.hpp"
