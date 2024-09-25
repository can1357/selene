#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_locked_list_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_LOCKED_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_locked_list_t       
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                          
        _m00 uint64_t         lock;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 nt::list_entry_t list;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .List
        _m02 uint32_t         count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Count
                                    
        SDK_MAGIC_PROPERTIES( "_STOR_LOCKED_LIST.$", 0x20, true, 0xb3c0f4deb3c99f0f );      
        SDK_FIXED_SIZE( stor_locked_list_t, 0x20 );      
    };                              
};
#include "magic/stor_locked_list_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_locked_list_t, 0x20 );
