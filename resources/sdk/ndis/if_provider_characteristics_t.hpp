#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/if_provider_characteristics_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_IF_PROVIDER_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct if_provider_characteristics_t                       
    {                                                          
        using query_object_handler_t = sdk::function<int32_t(void*, uint32_t, uint32_t*, void*)>*;                     
        using set_object_handler_t =   sdk::function<int32_t(void*, uint32_t, uint32_t, void*)>*;                     
                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                     
        _m00 struct ndis::object_header_t header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 query_object_handler_t       query_object_handler;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .QueryObjectHandler
        _m02 set_object_handler_t         set_object_handler;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SetObjectHandler
                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_IF_PROVIDER_CHARACTERISTICS.$", 0x28, true, 0xfc27797ebde97b4a );                     
        SDK_FIXED_SIZE( if_provider_characteristics_t, 0x28 );                     
    };                                                         
};
#include "magic/if_provider_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::if_provider_characteristics_t, 0x28 );
