#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/filter_attributes_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_FILTER_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_attributes_t                   
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                       
        _m00 struct ndis::object_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_FILTER_ATTRIBUTES.$", 0x8, true, 0xabe9bdd1f6939832 );       
        SDK_FIXED_SIZE( filter_attributes_t, 0x8 );       
    };                                           
};
#include "magic/filter_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::filter_attributes_t, 0x8 );
