#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/prefix_table_t.hpp"
#include "../nt/prefix_table_entry_t.hpp"

#include "magic/api.start.hpp"
namespace pfx
{
    // [PfxFindPrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68c5b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90ee60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ae390, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90d580, 0x1fe000 bytes
    //
    _m0(sdk::function<struct nt::prefix_table_entry_t*(struct nt::prefix_table_t*, nt::ascii_view*)>*) find_prefix;
    
    // [PfxInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68c684, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90ef40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ae470, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90d660, 0x1fe000 bytes
    //
    _m1(sdk::function<void(struct nt::prefix_table_t*)>*) initialize;
    
    // [PfxInsertPrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68c690, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90ef60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ae490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90d680, 0x1fe000 bytes
    //
    _m2(sdk::function<uint8_t(struct nt::prefix_table_t*, nt::ascii_view*, struct nt::prefix_table_entry_t*)>*) insert_prefix;
    
    // [PfxRemovePrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68c7a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90f080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ae5b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90d7a0, 0x1fe000 bytes
    //
    _m3(sdk::function<void(struct nt::prefix_table_t*, struct nt::prefix_table_entry_t*)>*) remove_prefix;
};
#include "magic/api.end.hpp"
