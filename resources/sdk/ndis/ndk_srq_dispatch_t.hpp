#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/ndk_srq_dispatch_t.start.hpp"
namespace ndis
{
    struct ndk_sge_t;
    struct ndk_srq_t;
    struct ndk_version_t;
    struct ndk_object_header_t;
    struct ndk_extension_interface_t;

    // [struct _NDK_SRQ_DISPATCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_srq_dispatch_t                           
    {                                                   
        using ndk_close_srq_t =       sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*;                    
        using ndk_query_extension_t = sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*;                    
        using ndk_modify_srq_t =      sdk::function<int32_t(struct ndis::ndk_srq_t*, uint32_t, uint32_t, sdk::function<void(void*, int32_t)>*, void*)>*;                    
        using ndk_srq_receive_t =     sdk::function<int32_t(struct ndis::ndk_srq_t*, void*, const struct ndis::ndk_sge_t*, uint32_t)>*;                    
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 ndk_close_srq_t        ndk_close_srq;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdkCloseSrq
        _m01 ndk_query_extension_t  ndk_query_extension;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdkQueryExtension
        _m02 ndk_modify_srq_t       ndk_modify_srq;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NdkModifySrq
        _m03 ndk_srq_receive_t      ndk_srq_receive;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NdkSrqReceive
                                                        
        SDK_MAGIC_PROPERTIES( "_NDK_SRQ_DISPATCH.$", 0x20, true, 0x357ed40fd600007b );                    
        SDK_FIXED_SIZE( ndk_srq_dispatch_t, 0x20 );                    
    };                                                  
};
#include "magic/ndk_srq_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_srq_dispatch_t, 0x20 );
