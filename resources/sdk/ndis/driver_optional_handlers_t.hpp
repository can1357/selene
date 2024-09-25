#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/driver_optional_handlers_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_DRIVER_OPTIONAL_HANDLERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct driver_optional_handlers_t            
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                       
        _m00 struct ndis::object_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_DRIVER_OPTIONAL_HANDLERS.$", 0x4, true, 0x6358e58006d6fb50 );       
        SDK_FIXED_SIZE( driver_optional_handlers_t, 0x4 );       
    };                                           
};
#include "magic/driver_optional_handlers_t.end.hpp"
SDK_VERIFY( struct ndis::driver_optional_handlers_t, 0x4 );
