#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/chash_entry_t.start.hpp"
namespace rtl
{
    // [struct _RTL_CHASH_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct chash_entry_t  
    {                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                
        _m00 uint64_t key;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Key
                          
        SDK_MAGIC_PROPERTIES( "_RTL_CHASH_ENTRY.$", 0x8, true, 0xe9aa8dffbe5ecd5e );    
        SDK_FIXED_SIZE( chash_entry_t, 0x8 );    
    };                    
};
#include "magic/chash_entry_t.end.hpp"
SDK_VERIFY( struct rtl::chash_entry_t, 0x8 );
