#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksattribute_list_t.start.hpp"
namespace ndis
{
    struct ksattribute_t;

    // [struct KSATTRIBUTE_LIST]
    // => Windows 10 v1607
    //
    struct ksattribute_list_t                        
    {                                                
        // Windows 10 v1607                          
        //                                           
        _m00 uint32_t                     count;       //{ +0x0000    } | .Count
        _m01 struct ndis::ksattribute_t** attributes;  //{ +0x0008    } | .Attributes
                                                     
        SDK_MAGIC_PROPERTIES( "KSATTRIBUTE_LIST.$", 0x0, false, 0x69d50febf9167b97 );           
        SDK_FIXED_SIZE( ksattribute_list_t, 0x10 );           
    };                                               
};
#include "magic/ksattribute_list_t.end.hpp"
SDK_VERIFY( struct ndis::ksattribute_list_t, 0x10 );
