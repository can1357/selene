#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ordering_list_t.start.hpp"
namespace arbiter
{
    struct ordering_t;

    // [struct _ARBITER_ORDERING_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ordering_list_t                         
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                         
        _m00 uint16_t                    count;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 uint16_t                    maximum;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Maximum
        _m02 struct arbiter::ordering_t* orderings;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Orderings
                                                   
        SDK_MAGIC_PROPERTIES( "_ARBITER_ORDERING_LIST.$", 0x10, true, 0x9a91f4eb16004b0b );          
        SDK_FIXED_SIZE( ordering_list_t, 0x10 );          
    };                                             
};
#include "magic/ordering_list_t.end.hpp"
SDK_VERIFY( struct arbiter::ordering_list_t, 0x10 );
