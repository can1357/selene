#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/set_context_t.hpp"

#include "magic/wwan_set_provisioned_context_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_SET_PROVISIONED_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_set_provisioned_context_t                     
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                    
        _m00 struct ndis::object_header_t header;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wwan::set_context_t   provisioned_context;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProvisionedContext
                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_SET_PROVISIONED_CONTEXT.$", 0x4f0, true, 0x6a7133aea3748edd );                    
        SDK_FIXED_SIZE( wwan_set_provisioned_context_t, 0x4f0 );                    
    };                                                        
};
#include "magic/wwan_set_provisioned_context_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_set_provisioned_context_t, 0x4f0 );
