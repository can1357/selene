#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "filter_interface_t.hpp"

#include "magic/enum_filters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_ENUM_FILTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enum_filters_t                                                       
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                      
        _m00 struct ndis::object_header_t                   header;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                       flags;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                                       number_of_filters;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfFilters
        _m03 uint32_t                                       offset_first_filter;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .OffsetFirstFilter
        _m04 sdk::array<struct ndis::filter_interface_t, 1> filter;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Filter
                                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_ENUM_FILTERS.$", 0x50, true, 0xcfea8573b6b85ed7 );                    
        SDK_FIXED_SIZE( enum_filters_t, 0x50 );                                 
    };                                                                          
};
#include "magic/enum_filters_t.end.hpp"
SDK_VERIFY( struct ndis::enum_filters_t, 0x50 );
