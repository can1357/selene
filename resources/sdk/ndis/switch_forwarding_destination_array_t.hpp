#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/switch_forwarding_destination_array_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct switch_forwarding_destination_array_t           
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                 
        _m00 struct ndis::object_header_t header;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     element_size;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ElementSize
        _m02 uint32_t                     num_elements;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumElements
        _m03 uint32_t                     num_destinations;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumDestinations
        _m04 void*                        first_element;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FirstElement
                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY.$", 0x18, true, 0xd9df730774da2ebc );                 
        SDK_FIXED_SIZE( switch_forwarding_destination_array_t, 0x18 );                 
    };                                                     
};
#include "magic/switch_forwarding_destination_array_t.end.hpp"
SDK_VERIFY( struct ndis::switch_forwarding_destination_array_t, 0x18 );
