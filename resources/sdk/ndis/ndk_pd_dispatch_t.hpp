#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct group_affinity_t; }
namespace nt { struct guid_t;           }

#include "magic/ndk_pd_dispatch_t.start.hpp"
namespace ndis
{
    struct ndk_cq_t;
    struct ndk_mr_t;
    struct ndk_mw_t;
    struct ndk_pd_t;
    struct ndk_qp_t;
    struct ndk_srq_t;
    struct ndk_version_t;
    struct ndk_object_header_t;
    struct ndk_extension_interface_t;

    // [struct _NDK_PD_DISPATCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_pd_dispatch_t                                                                  
    {                                                                                         
        using ndk_close_pd_t =                           sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*;                                       
        using ndk_query_extension_t =                    sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*;                                       
        using ndk_create_mr_t =                          sdk::function<int32_t(struct ndis::ndk_pd_t*, uint8_t, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_mr_t**)>*;                                       
        using ndk_create_mw_t =                          sdk::function<int32_t(struct ndis::ndk_pd_t*, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_mw_t**)>*;                                       
        using ndk_create_srq_t =                         sdk::function<int32_t(struct ndis::ndk_pd_t*, uint32_t, uint32_t, uint32_t, sdk::function<void(void*, int32_t)>*, void*, struct nt::group_affinity_t*, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_srq_t**)>*;                                       
        using ndk_create_qp_t =                          sdk::function<int32_t(struct ndis::ndk_pd_t*, struct ndis::ndk_cq_t*, struct ndis::ndk_cq_t*, void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_qp_t**)>*;                                       
        using ndk_create_qp_with_srq_t =                 sdk::function<int32_t(struct ndis::ndk_pd_t*, struct ndis::ndk_cq_t*, struct ndis::ndk_cq_t*, struct ndis::ndk_srq_t*, void*, uint32_t, uint32_t, uint32_t, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_qp_t**)>*;                                       
        using ndk_get_privileged_memory_region_token_t = sdk::function<void(struct ndis::ndk_pd_t*, uint32_t*)>*;                                       
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                    
        _m00 ndk_close_pd_t                            ndk_close_pd;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdkClosePd
        _m01 ndk_query_extension_t                     ndk_query_extension;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdkQueryExtension
        _m02 ndk_create_mr_t                           ndk_create_mr;                           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NdkCreateMr
        _m03 ndk_create_mw_t                           ndk_create_mw;                           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NdkCreateMw
        _m04 ndk_create_srq_t                          ndk_create_srq;                          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NdkCreateSrq
        _m05 ndk_create_qp_t                           ndk_create_qp;                           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NdkCreateQp
        _m06 ndk_create_qp_with_srq_t                  ndk_create_qp_with_srq;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NdkCreateQpWithSrq
        _m07 ndk_get_privileged_memory_region_token_t  ndk_get_privileged_memory_region_token;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NdkGetPrivilegedMemoryRegionToken
                                                                                              
        SDK_MAGIC_PROPERTIES( "_NDK_PD_DISPATCH.$", 0x40, true, 0x275c2a9e2eeecd48 );                                       
        SDK_FIXED_SIZE( ndk_pd_dispatch_t, 0x40 );                                            
    };                                                                                        
};
#include "magic/ndk_pd_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_pd_dispatch_t, 0x40 );
