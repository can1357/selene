#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/ndk_cq_dispatch_t.start.hpp"
namespace ndis
{
    struct ndk_cq_t;
    struct ndk_result_t;
    struct ndk_version_t;
    struct ndk_result_ex_t;
    struct ndk_object_header_t;
    struct ndk_extension_interface_t;

    // [struct _NDK_CQ_DISPATCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_cq_dispatch_t                                                            
    {                                                                                   
        using ndk_close_cq_t =                        sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*;                                    
        using ndk_query_extension_t =                 sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*;                                    
        using ndk_resize_cq_t =                       sdk::function<int32_t(struct ndis::ndk_cq_t*, uint32_t, sdk::function<void(void*, int32_t)>*, void*)>*;                                    
        using ndk_arm_cq_t =                          sdk::function<void(struct ndis::ndk_cq_t*, uint32_t)>*;                                    
        using ndk_get_cq_results_t =                  sdk::function<uint32_t(struct ndis::ndk_cq_t*, struct ndis::ndk_result_t*, uint32_t)>*;                                    
        using ndk_control_cq_interrupt_moderation_t = sdk::function<int32_t(struct ndis::ndk_cq_t*, uint32_t, uint32_t)>*;                                    
        using ndk_get_cq_results_ex_t =               sdk::function<uint32_t(struct ndis::ndk_cq_t*, struct ndis::ndk_result_ex_t*, uint32_t)>*;                                    
                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                              
        _m00 ndk_close_cq_t                         ndk_close_cq;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdkCloseCq
        _m01 ndk_query_extension_t                  ndk_query_extension;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdkQueryExtension
        _m02 ndk_resize_cq_t                        ndk_resize_cq;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NdkResizeCq
        _m03 ndk_arm_cq_t                           ndk_arm_cq;                           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NdkArmCq
        _m04 ndk_get_cq_results_t                   ndk_get_cq_results;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NdkGetCqResults
        _m05 ndk_control_cq_interrupt_moderation_t  ndk_control_cq_interrupt_moderation;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NdkControlCqInterruptModeration
        _m06 ndk_get_cq_results_ex_t                ndk_get_cq_results_ex;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NdkGetCqResultsEx
                                                                                        
        SDK_MAGIC_PROPERTIES( "_NDK_CQ_DISPATCH.$", 0x38, true, 0xb8eade2aba34723 );                                    
        SDK_FIXED_SIZE( ndk_cq_dispatch_t, 0x38 );                                      
    };                                                                                  
};
#include "magic/ndk_cq_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_cq_dispatch_t, 0x38 );
