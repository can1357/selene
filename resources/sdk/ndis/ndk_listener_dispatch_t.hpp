#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/ndk_listener_dispatch_t.start.hpp"
namespace ndis
{
    struct sockaddr_t;
    struct ndk_version_t;
    struct ndk_listener_t;
    struct ndk_object_header_t;
    struct ndk_extension_interface_t;

    // [struct _NDK_LISTENER_DISPATCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_listener_dispatch_t                                    
    {                                                                 
        using ndk_close_listener_t =         sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*;                           
        using ndk_query_extension_t =        sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*;                           
        using ndk_listen_t =                 sdk::function<int32_t(struct ndis::ndk_listener_t*, struct ndis::sockaddr_t const*, uint32_t, sdk::function<void(void*, int32_t)>*, void*)>*;                           
        using ndk_get_local_address_t =      sdk::function<int32_t(struct ndis::ndk_listener_t*, struct ndis::sockaddr_t*, uint32_t*)>*;                           
        using ndk_control_connect_events_t = sdk::function<void(struct ndis::ndk_listener_t*, uint8_t)>*;                           
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                            
        _m00 ndk_close_listener_t          ndk_close_listener;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdkCloseListener
        _m01 ndk_query_extension_t         ndk_query_extension;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdkQueryExtension
        _m02 ndk_listen_t                  ndk_listen;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NdkListen
        _m03 ndk_get_local_address_t       ndk_get_local_address;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NdkGetLocalAddress
        _m04 ndk_control_connect_events_t  ndk_control_connect_events;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NdkControlConnectEvents
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDK_LISTENER_DISPATCH.$", 0x28, true, 0xd3bda92e102f031c );                           
        SDK_FIXED_SIZE( ndk_listener_dispatch_t, 0x28 );                           
    };                                                                
};
#include "magic/ndk_listener_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_listener_dispatch_t, 0x28 );
