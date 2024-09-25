#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resource_hash_entry_t.start.hpp"
namespace wdf
{
    // [struct _RESOURCE_HASH_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct resource_hash_entry_t               
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                     
        _m00 nt::list_entry_t list_entry;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 void*            address;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Address
        _m02 uint32_t         contention_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ContentionCount
        _m03 uint32_t         number;            //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .Number
                                               
        SDK_NONVOL_PROPERTIES( "_RESOURCE_HASH_ENTRY.$", 0x20, true, 0xfb82c4852c13b0d0 );                 
        SDK_FIXED_SIZE( resource_hash_entry_t, 0x20 );                 
    };                                         
};
#include "magic/resource_hash_entry_t.end.hpp"
SDK_VERIFY( struct wdf::resource_hash_entry_t, 0x20 );
