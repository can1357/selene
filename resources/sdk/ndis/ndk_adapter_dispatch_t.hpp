#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct group_affinity_t; }
namespace nt { struct guid_t;           }
namespace nt { struct mdl_t;            }

#include "magic/ndk_adapter_dispatch_t.start.hpp"
namespace ndis
{
    struct ndk_cq_t;
    struct ndk_pd_t;
    struct sockaddr_t;
    struct ndk_adapter_t;
    struct ndk_version_t;
    struct ndk_listener_t;
    struct ndk_connector_t;
    struct ndk_adapter_info_t;
    struct ndk_object_header_t;
    struct ndk_shared_endpoint_t;
    struct ndk_extension_interface_t;
    struct ndk_logical_address_mapping_t;

    // [struct _NDK_ADAPTER_DISPATCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_adapter_dispatch_t                                     
    {                                                                 
        using ndk_query_extension_t =        sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*;                           
        using ndk_query_adapter_info_t =     sdk::function<int32_t(struct ndis::ndk_adapter_t*, struct ndis::ndk_adapter_info_t*, uint32_t*)>*;                           
        using ndk_create_cq_t =              sdk::function<int32_t(struct ndis::ndk_adapter_t*, uint32_t, sdk::function<void(void*, int32_t)>*, void*, struct nt::group_affinity_t*, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_cq_t**)>*;                           
        using ndk_create_pd_t =              sdk::function<int32_t(struct ndis::ndk_adapter_t*, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_pd_t**)>*;                           
        using ndk_create_shared_endpoint_t = sdk::function<int32_t(struct ndis::ndk_adapter_t*, struct ndis::sockaddr_t const*, uint32_t, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_shared_endpoint_t**)>*;                           
        using ndk_create_connector_t =       sdk::function<int32_t(struct ndis::ndk_adapter_t*, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_connector_t**)>*;                           
        using ndk_create_listener_t =        sdk::function<int32_t(struct ndis::ndk_adapter_t*, sdk::function<void(void*, struct ndis::ndk_connector_t*)>*, void*, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_listener_t**)>*;                           
        using ndk_build_lam_t =              sdk::function<int32_t(struct ndis::ndk_adapter_t*, struct nt::mdl_t*, uint64_t, sdk::function<void(void*, int32_t)>*, void*, struct ndis::ndk_logical_address_mapping_t*, uint32_t*, uint32_t*)>*;                           
        using ndk_release_lam_t =            sdk::function<void(struct ndis::ndk_adapter_t*, struct ndis::ndk_logical_address_mapping_t*)>*;                           
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                            
        _m00 ndk_query_extension_t         ndk_query_extension;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdkQueryExtension
        _m01 ndk_query_adapter_info_t      ndk_query_adapter_info;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdkQueryAdapterInfo
        _m02 ndk_create_cq_t               ndk_create_cq;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NdkCreateCq
        _m03 ndk_create_pd_t               ndk_create_pd;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NdkCreatePd
        _m04 ndk_create_shared_endpoint_t  ndk_create_shared_endpoint;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NdkCreateSharedEndpoint
        _m05 ndk_create_connector_t        ndk_create_connector;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NdkCreateConnector
        _m06 ndk_create_listener_t         ndk_create_listener;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NdkCreateListener
        _m07 ndk_build_lam_t               ndk_build_lam;               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NdkBuildLAM
        _m08 ndk_release_lam_t             ndk_release_lam;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NdkReleaseLAM
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDK_ADAPTER_DISPATCH.$", 0x48, true, 0x89d85373bf5b856a );                           
        SDK_FIXED_SIZE( ndk_adapter_dispatch_t, 0x48 );                           
    };                                                                
};
#include "magic/ndk_adapter_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_adapter_dispatch_t, 0x48 );
