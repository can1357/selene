#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/miniport_adapter_ndk_attributes_t.start.hpp"
namespace ndis
{
    struct ndk_capabilities_t;

    // [struct _NDIS_MINIPORT_ADAPTER_NDK_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_adapter_ndk_attributes_t                   
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                     
        _m00 struct ndis::object_header_t     header;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint8_t                          enabled;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Enabled
        _m02 struct ndis::ndk_capabilities_t* ndk_capabilities;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdkCapabilities
                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_ADAPTER_NDK_ATTRIBUTES.$", 0x10, true, 0x2360cbf510dcc543 );                 
        SDK_FIXED_SIZE( miniport_adapter_ndk_attributes_t, 0x10 );                 
    };                                                         
};
#include "magic/miniport_adapter_ndk_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_adapter_ndk_attributes_t, 0x10 );
