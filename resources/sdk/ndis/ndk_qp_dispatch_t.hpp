#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/ndk_qp_dispatch_t.start.hpp"
namespace ndis
{
    struct ndk_mr_t;
    struct ndk_mw_t;
    struct ndk_qp_t;
    struct ndk_sge_t;
    struct ndk_version_t;
    struct ndk_object_header_t;
    struct ndk_extension_interface_t;

    // [struct _NDK_QP_DISPATCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_qp_dispatch_t                                                      
    {                                                                             
        using ndk_close_qp_t =            sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*;                        
        using ndk_query_extension_t =     sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*;                        
        using ndk_send_t =                sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, const struct ndis::ndk_sge_t*, uint32_t, uint32_t)>*;                        
        using ndk_receive_t =             sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, const struct ndis::ndk_sge_t*, uint32_t)>*;                        
        using ndk_bind_t =                sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, struct ndis::ndk_mr_t*, struct ndis::ndk_mw_t*, void*, uint64_t, uint32_t)>*;                        
        using ndk_fast_register_t =       sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, struct ndis::ndk_mr_t*, uint32_t, const int64_t*, uint32_t, uint64_t, void*, uint32_t)>*;                        
        using ndk_invalidate_t =          sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, struct ndis::ndk_object_header_t*, uint32_t)>*;                        
        using ndk_read_t =                sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, const struct ndis::ndk_sge_t*, uint32_t, uint64_t, uint32_t, uint32_t)>*;                        
        using ndk_write_t =               sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, const struct ndis::ndk_sge_t*, uint32_t, uint64_t, uint32_t, uint32_t)>*;                        
        using ndk_send_and_invalidate_t = sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, const struct ndis::ndk_sge_t*, uint32_t, uint32_t, uint32_t)>*;                        
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                        
        _m00 ndk_close_qp_t                               ndk_close_qp;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdkCloseQp
        _m01 ndk_query_extension_t                        ndk_query_extension;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdkQueryExtension
        _m02 sdk::function<void(struct ndis::ndk_qp_t*)>* ndk_flush;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NdkFlush
        _m03 ndk_send_t                                   ndk_send;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NdkSend
        _m04 ndk_receive_t                                ndk_receive;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NdkReceive
        _m05 ndk_bind_t                                   ndk_bind;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NdkBind
        _m06 ndk_fast_register_t                          ndk_fast_register;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NdkFastRegister
        _m07 ndk_invalidate_t                             ndk_invalidate;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NdkInvalidate
        _m08 ndk_read_t                                   ndk_read;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NdkRead
        _m09 ndk_write_t                                  ndk_write;                //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NdkWrite
        _m10 ndk_send_and_invalidate_t                    ndk_send_and_invalidate;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .NdkSendAndInvalidate
                                                                                  
        SDK_MAGIC_PROPERTIES( "_NDK_QP_DISPATCH.$", 0x58, true, 0x5dbe6f627e69eaf6 );                        
        SDK_FIXED_SIZE( ndk_qp_dispatch_t, 0x58 );                                
    };                                                                            
};
#include "magic/ndk_qp_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_qp_dispatch_t, 0x58 );
