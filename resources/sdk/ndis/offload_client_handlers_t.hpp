#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/offload_client_handlers_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_OFFLOAD_CLIENT_HANDLERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct offload_client_handlers_t             
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                       
        _m00 struct ndis::object_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_OFFLOAD_CLIENT_HANDLERS.$", 0x4, true, 0x94524991c04f171c );       
        SDK_FIXED_SIZE( offload_client_handlers_t, 0x4 );       
    };                                           
};
#include "magic/offload_client_handlers_t.end.hpp"
SDK_VERIFY( struct ndis::offload_client_handlers_t, 0x4 );
