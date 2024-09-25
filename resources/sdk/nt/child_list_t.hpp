#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/child_list_t.start.hpp"
namespace nt
{
    // [struct _CHILD_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct child_list_t     
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 uint32_t list;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .List
                            
        SDK_MAGIC_PROPERTIES( "_CHILD_LIST.$", 0x8, true, 0x72d81f0b499a545c );      
        SDK_FIXED_SIZE( child_list_t, 0x8 );      
    };                      
};
#include "magic/child_list_t.end.hpp"
SDK_VERIFY( struct nt::child_list_t, 0x8 );
