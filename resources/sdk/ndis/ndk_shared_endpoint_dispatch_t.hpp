#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/ndk_shared_endpoint_dispatch_t.start.hpp"
namespace ndis
{
    struct sockaddr_t;
    struct ndk_version_t;
    struct ndk_object_header_t;
    struct ndk_shared_endpoint_t;
    struct ndk_extension_interface_t;

    // [struct _NDK_SHARED_ENDPOINT_DISPATCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_shared_endpoint_dispatch_t                           
    {                                                               
        using ndk_close_shared_endpoint_t = sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*;                          
        using ndk_query_extension_t =       sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*;                          
        using ndk_get_local_address_t =     sdk::function<int32_t(struct ndis::ndk_shared_endpoint_t*, struct ndis::sockaddr_t*, uint32_t*)>*;                          
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                          
        _m00 ndk_close_shared_endpoint_t  ndk_close_shared_endpoint;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdkCloseSharedEndpoint
        _m01 ndk_query_extension_t        ndk_query_extension;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdkQueryExtension
        _m02 ndk_get_local_address_t      ndk_get_local_address;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NdkGetLocalAddress
                                                                    
        SDK_MAGIC_PROPERTIES( "_NDK_SHARED_ENDPOINT_DISPATCH.$", 0x18, true, 0x621b07ef4dd6f73d );                          
        SDK_FIXED_SIZE( ndk_shared_endpoint_dispatch_t, 0x18 );                          
    };                                                              
};
#include "magic/ndk_shared_endpoint_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_shared_endpoint_dispatch_t, 0x18 );
