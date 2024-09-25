#pragma once
#include <sdkgen/support_library.hpp>
#include "physical_counter_resource_descriptor_t.hpp"

#include "magic/physical_counter_resource_list_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_COUNTER_RESOURCE_LIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct physical_counter_resource_list_t
    {                                      
        using descriptors_t = sdk::array<struct nt::physical_counter_resource_descriptor_t, 1>;            
                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                              
        _m00 uint32_t       count;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 descriptors_t  descriptors;     //{ +0x0008    +0x0004    +0x0008    +0x0008    +0x0008    } | .Descriptors
                                           
        SDK_MAGIC_PROPERTIES( "_PHYSICAL_COUNTER_RESOURCE_LIST.$", 0x20, true, 0x98dbbe113b0e778f );            
        SDK_DYNAMIC_SIZE( physical_counter_resource_list_t );            
    };                                     
};
#include "magic/physical_counter_resource_list_t.end.hpp"
