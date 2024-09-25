#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace bcd
{
    // [BcdDeleteElement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x52cc80, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) delete_element;
    
    // [BcdOpenStoreFromFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa4d340, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) open_store_from_file;
    
    // [BcdOpenSystemStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x52b990, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) open_system_store;
    
    // [BcdSetSystemStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa4d368, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) set_system_store;
    
    // [BcdGetSystemStorePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7659a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81b1a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76d414, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) get_system_store_path;
    
    // [BcdOpenStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x766338, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81b0cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76dda8, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) open_store;
    
    // [BcdCloseObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52d0c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7670bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81ce94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76eb2c, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) close_object;
    
    // [BcdCloseStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52c30c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x765904, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81ae28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76d374, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) close_store;
    
    // [BcdCreateObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d4a00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96ba20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81ad90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96a300, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) create_object;
    
    // [BcdDeleteObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d4a90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96bab8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81ad34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96a398, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) delete_object;
    
    // [BcdEnumerateObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d4ae4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96bb14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4d428, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96a3f4, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) enumerate_objects;
    
    // [BcdFlushStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x522794, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75d5f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4d220, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x765040, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) flush_store;
    
    // [BcdForciblyUnloadStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x523944, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75c644, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4d288, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x764094, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) forcibly_unload_store;
    
    // [BcdGetElementData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d5164, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96c230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x819d9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96ab10, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) get_element_data;
    
    // [BcdGetElementDataWithFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52d700, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7676b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81cc50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76f120, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) get_element_data_with_flags;
    
    // [BcdInitializeBcdSyncMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a95dc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa704a4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60508, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6f7e8, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) initialize_bcd_sync_mutant;
    
    // [BcdMutantHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fb118, 0x32828 bytes
    // ntoskrnl.exe .data:0xc133c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0e440, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13420, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) mutant_handle;
    
    // [BcdOpenObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52cfb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x766f30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81ced8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76e9a0, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) open_object;
    
    // [BcdQueryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52cda0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7667f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x819e78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76e264, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) query_object;
    
    // [BcdSetElementData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d517c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96c250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4d82c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96ab30, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) set_element_data;
    
    // [BcdSetElementDataWithFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52d540, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7674cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81c14c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76ef3c, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) set_element_data_with_flags;
    
    // [BcdSyncMutantName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25b0c8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x5b50, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x6330, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5b40, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) sync_mutant_name;
    
    // [BcdUtilGetBootOption]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5605e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79be20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84ed20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a33a0, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) util_get_boot_option;
    
    // [BcdUtilGetBootOptionBoolean]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56059c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79bdd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84ecd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a3358, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) util_get_boot_option_boolean;
    
    // [BcdUtilGetBootOptionInteger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x560104, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79b92c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84e82c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a2eac, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) util_get_boot_option_integer;
    
    // [BcdUtilGetBootOptionString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5600cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79b8ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84e7ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a2e6c, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) util_get_boot_option_string;
};
#include "magic/api.end.hpp"
