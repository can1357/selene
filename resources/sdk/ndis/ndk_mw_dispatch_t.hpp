#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/ndk_mw_dispatch_t.start.hpp"
namespace ndis
{
    struct ndk_mw_t;
    struct ndk_version_t;
    struct ndk_object_header_t;
    struct ndk_extension_interface_t;

    // [struct _NDK_MW_DISPATCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_mw_dispatch_t                                                               
    {                                                                                      
        using ndk_close_mw_t =        sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*;                             
        using ndk_query_extension_t = sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*;                             
                                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                                 
        _m00 ndk_close_mw_t                                   ndk_close_mw;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdkCloseMw
        _m01 ndk_query_extension_t                            ndk_query_extension;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdkQueryExtension
        _m02 sdk::function<uint32_t(struct ndis::ndk_mw_t*)>* ndk_get_remote_token_from_mw;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NdkGetRemoteTokenFromMw
                                                                                           
        SDK_MAGIC_PROPERTIES( "_NDK_MW_DISPATCH.$", 0x18, true, 0xc230620b6fca9a0b );                             
        SDK_FIXED_SIZE( ndk_mw_dispatch_t, 0x18 );                                         
    };                                                                                     
};
#include "magic/ndk_mw_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_mw_dispatch_t, 0x18 );
