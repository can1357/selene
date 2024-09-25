#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/ndk_connector_dispatch_t.start.hpp"
namespace ndis
{
    struct ndk_qp_t;
    struct sockaddr_t;
    struct ndk_version_t;
    struct ndk_connector_t;
    struct ndk_object_header_t;
    struct ndk_shared_endpoint_t;
    struct ndk_extension_interface_t;

    // [struct _NDK_CONNECTOR_DISPATCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_connector_dispatch_t                                               
    {                                                                             
        using ndk_close_connector_t =              sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*;                                 
        using ndk_query_extension_t =              sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*;                                 
        using ndk_connect_t =                      sdk::function<int32_t(struct ndis::ndk_connector_t*, struct ndis::ndk_qp_t*, struct ndis::sockaddr_t const*, uint32_t, struct ndis::sockaddr_t const*, uint32_t, uint32_t, uint32_t, void const*, uint32_t, sdk::function<void(void*, int32_t)>*, void*)>*;                                 
        using ndk_connect_with_shared_endpoint_t = sdk::function<int32_t(struct ndis::ndk_connector_t*, struct ndis::ndk_qp_t*, struct ndis::ndk_shared_endpoint_t*, struct ndis::sockaddr_t const*, uint32_t, uint32_t, uint32_t, void const*, uint32_t, sdk::function<void(void*, int32_t)>*, void*)>*;                                 
        using ndk_complete_connect_t =             sdk::function<int32_t(struct ndis::ndk_connector_t*, sdk::function<void(void*)>*, void*, sdk::function<void(void*, int32_t)>*, void*)>*;                                 
        using ndk_accept_t =                       sdk::function<int32_t(struct ndis::ndk_connector_t*, struct ndis::ndk_qp_t*, uint32_t, uint32_t, void const*, uint32_t, sdk::function<void(void*)>*, void*, sdk::function<void(void*, int32_t)>*, void*)>*;                                 
        using ndk_reject_t =                       sdk::function<int32_t(struct ndis::ndk_connector_t*, void const*, uint32_t)>*;                                 
        using ndk_get_connection_data_t =          sdk::function<int32_t(struct ndis::ndk_connector_t*, uint32_t*, uint32_t*, void*, uint32_t*)>*;                                 
        using ndk_get_local_address_t =            sdk::function<int32_t(struct ndis::ndk_connector_t*, struct ndis::sockaddr_t*, uint32_t*)>*;                                 
        using ndk_get_peer_address_t =             sdk::function<int32_t(struct ndis::ndk_connector_t*, struct ndis::sockaddr_t*, uint32_t*)>*;                                 
        using ndk_disconnect_t =                   sdk::function<int32_t(struct ndis::ndk_connector_t*, sdk::function<void(void*, int32_t)>*, void*)>*;                                 
        using ndk_complete_connect_ex_t =          sdk::function<int32_t(struct ndis::ndk_connector_t*, sdk::function<void(void*, uint32_t)>*, void*, sdk::function<void(void*, int32_t)>*, void*)>*;                                 
        using ndk_accept_ex_t =                    sdk::function<int32_t(struct ndis::ndk_connector_t*, struct ndis::ndk_qp_t*, uint32_t, uint32_t, void const*, uint32_t, sdk::function<void(void*, uint32_t)>*, void*, sdk::function<void(void*, int32_t)>*, void*)>*;                                 
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                        
        _m00 ndk_close_connector_t               ndk_close_connector;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdkCloseConnector
        _m01 ndk_query_extension_t               ndk_query_extension;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdkQueryExtension
        _m02 ndk_connect_t                       ndk_connect;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NdkConnect
        _m03 ndk_connect_with_shared_endpoint_t  ndk_connect_with_shared_endpoint;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NdkConnectWithSharedEndpoint
        _m04 ndk_complete_connect_t              ndk_complete_connect;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NdkCompleteConnect
        _m05 ndk_accept_t                        ndk_accept;                        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NdkAccept
        _m06 ndk_reject_t                        ndk_reject;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NdkReject
        _m07 ndk_get_connection_data_t           ndk_get_connection_data;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NdkGetConnectionData
        _m08 ndk_get_local_address_t             ndk_get_local_address;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NdkGetLocalAddress
        _m09 ndk_get_peer_address_t              ndk_get_peer_address;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NdkGetPeerAddress
        _m10 ndk_disconnect_t                    ndk_disconnect;                    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .NdkDisconnect
                                                                                  
        // Windows 11                                                             
        //                                                                        
        _m11 ndk_complete_connect_ex_t           ndk_complete_connect_ex;           //{ +0x0058    } | .NdkCompleteConnectEx
        _m12 ndk_accept_ex_t                     ndk_accept_ex;                     //{ +0x0060    } | .NdkAcceptEx
                                                                                  
        SDK_MAGIC_PROPERTIES( "_NDK_CONNECTOR_DISPATCH.$", 0x58, true, 0x21d9a3065a45537b );                                 
        SDK_DYNAMIC_SIZE( ndk_connector_dispatch_t );                                 
    };                                                                            
};
#include "magic/ndk_connector_dispatch_t.end.hpp"
