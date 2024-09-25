#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/single_list_entry_t.hpp"

#include "magic/hash_entry_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HASH_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hash_entry_t                                 
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                              
        _m00 struct nt::single_list_entry_t bucket_link;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BucketLink
        _m01 uint64_t                       key;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Key
                                                        
        SDK_MAGIC_PROPERTIES( "_RTL_HASH_ENTRY.$", 0x10, true, 0xf847c8ce1042e67f );            
        SDK_FIXED_SIZE( hash_entry_t, 0x10 );            
    };                                                  
};
#include "magic/hash_entry_t.end.hpp"
SDK_VERIFY( struct rtl::hash_entry_t, 0x10 );
