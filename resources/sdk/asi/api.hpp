#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace asi
{
    // [AsiAddDataToSchema]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b8ba4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x600250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b8a24, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) add_data_to_schema;
    
    // [AsiPopulateHashes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b8c3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6002e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b8abc, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) populate_hashes;
    
    // [AsiSortHashTableHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b8d70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x600420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b8bf0, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) sort_hash_table_helper;
    
    // [AsiSortValueList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b8d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x600440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b8c10, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) sort_value_list;
};
#include "magic/api.end.hpp"
