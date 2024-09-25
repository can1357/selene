#pragma once
#include <sdkgen/support_library.hpp>
#include "full_resource_descriptor_t.hpp"

#include "magic/resource_list_t.start.hpp"
namespace cm
{
    // [struct _CM_RESOURCE_LIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct resource_list_t  
    {                       
        using list_t = sdk::array<struct cm::full_resource_descriptor_t, 1>;      
                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 list_t   list;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .List
                            
        SDK_NONVOL_PROPERTIES( "_CM_RESOURCE_LIST.$", 0x28, true, 0xd06da3c82204aa43 );      
        SDK_FIXED_SIZE( resource_list_t, 0x28 );      
    };                      
};
#include "magic/resource_list_t.end.hpp"
SDK_VERIFY( struct cm::resource_list_t, 0x28 );
