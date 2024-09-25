#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/handle_table_entry_t.start.hpp"
namespace rtl
{
    struct handle_table_entry_t;

    // [struct _RTL_HANDLE_TABLE_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct handle_table_entry_t                          
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                               
        _m00 uint32_t                          flags;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 struct rtl::handle_table_entry_t* next_free;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextFree
                                                         
        SDK_NONVOL_PROPERTIES( "_RTL_HANDLE_TABLE_ENTRY.$", 0x8, true, 0xe220dfd68108143b );          
        SDK_FIXED_SIZE( handle_table_entry_t, 0x8 );          
    };                                                   
};
#include "magic/handle_table_entry_t.end.hpp"
SDK_VERIFY( struct rtl::handle_table_entry_t, 0x8 );
