#pragma once
#include <sdkgen/support_library.hpp>
#include "attribute_t.hpp"

#include "magic/attribute_list_t.start.hpp"
namespace ps
{
    // [struct _PS_ATTRIBUTE_LIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct attribute_list_t                                     
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                      
        _m00 uint64_t                              total_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalLength
        _m01 sdk::array<struct ps::attribute_t, 1> attributes;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Attributes
                                                                
        SDK_NONVOL_PROPERTIES( "_PS_ATTRIBUTE_LIST.$", 0x28, true, 0x7c34a1f7242ce938 );             
        SDK_FIXED_SIZE( attribute_list_t, 0x28 );               
    };                                                          
};
#include "magic/attribute_list_t.end.hpp"
SDK_VERIFY( struct ps::attribute_list_t, 0x28 );
