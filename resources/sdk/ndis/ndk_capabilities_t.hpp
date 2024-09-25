#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/ndk_capabilities_t.start.hpp"
namespace ndis
{
    struct ndk_adapter_info_t;

    // [struct _NDIS_NDK_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_capabilities_t                                         
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                            
        _m00 struct ndis::object_header_t     header;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                         flags;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                         max_qp_count;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxQpCount
        _m03 uint32_t                         max_cq_count;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MaxCqCount
        _m04 uint32_t                         max_mr_count;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxMrCount
        _m05 uint32_t                         max_pd_count;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MaxPdCount
        _m06 uint32_t                         max_inbound_read_limit;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxInboundReadLimit
        _m07 uint32_t                         max_outbound_read_limit;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .MaxOutboundReadLimit
        _m08 uint32_t                         max_mw_count;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MaxMwCount
        _m09 uint32_t                         max_srq_count;            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .MaxSrqCount
        _m10 uint64_t                         missing_counter_mask;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MissingCounterMask
        _m11 struct ndis::ndk_adapter_info_t* ndk_info;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NdkInfo
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_NDK_CAPABILITIES.$", 0x38, true, 0xc462da2614cd562c );                        
        SDK_FIXED_SIZE( ndk_capabilities_t, 0x38 );                        
    };                                                                
};
#include "magic/ndk_capabilities_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_capabilities_t, 0x38 );
