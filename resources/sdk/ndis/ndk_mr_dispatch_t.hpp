#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }
namespace nt { struct mdl_t;  }

#include "magic/ndk_mr_dispatch_t.start.hpp"
namespace ndis
{
    struct ndk_mr_t;
    struct ndk_version_t;
    struct ndk_object_header_t;
    struct ndk_extension_interface_t;

    // [struct _NDK_MR_DISPATCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_mr_dispatch_t                                                                  
    {                                                                                         
        using ndk_close_mr_t =                    sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*;                                
        using ndk_query_extension_t =             sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*;                                
        using ndk_register_mr_t =                 sdk::function<int32_t(struct ndis::ndk_mr_t*, struct nt::mdl_t*, uint64_t, uint32_t, sdk::function<void(void*, int32_t)>*, void*)>*;                                
        using ndk_deregister_mr_t =               sdk::function<int32_t(struct ndis::ndk_mr_t*, sdk::function<void(void*, int32_t)>*, void*)>*;                                
        using ndk_initialize_fast_register_mr_t = sdk::function<int32_t(struct ndis::ndk_mr_t*, uint32_t, uint8_t, sdk::function<void(void*, int32_t)>*, void*)>*;                                
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                                    
        _m00 ndk_close_mr_t                                   ndk_close_mr;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdkCloseMr
        _m01 ndk_query_extension_t                            ndk_query_extension;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdkQueryExtension
        _m02 ndk_register_mr_t                                ndk_register_mr;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NdkRegisterMr
        _m03 ndk_deregister_mr_t                              ndk_deregister_mr;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NdkDeregisterMr
        _m04 ndk_initialize_fast_register_mr_t                ndk_initialize_fast_register_mr;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NdkInitializeFastRegisterMr
        _m05 sdk::function<uint32_t(struct ndis::ndk_mr_t*)>* ndk_get_remote_token_from_mr;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NdkGetRemoteTokenFromMr
        _m06 sdk::function<uint32_t(struct ndis::ndk_mr_t*)>* ndk_get_local_token_from_mr;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NdkGetLocalTokenFromMr
                                                                                              
        SDK_MAGIC_PROPERTIES( "_NDK_MR_DISPATCH.$", 0x38, true, 0x9f3362524270ba5f );                                
        SDK_FIXED_SIZE( ndk_mr_dispatch_t, 0x38 );                                            
    };                                                                                        
};
#include "magic/ndk_mr_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_mr_dispatch_t, 0x38 );
