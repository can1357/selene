#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/configuration_object_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_CONFIGURATION_OBJECT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct configuration_object_t                     
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                            
        _m00 struct ndis::object_header_t header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                        ndis_handle;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdisHandle
        _m02 uint32_t                     flags;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_CONFIGURATION_OBJECT.$", 0x18, true, 0x5296b86c3dcae7ae );            
        SDK_FIXED_SIZE( configuration_object_t, 0x18 );            
    };                                                
};
#include "magic/configuration_object_t.end.hpp"
SDK_VERIFY( struct ndis::configuration_object_t, 0x18 );
