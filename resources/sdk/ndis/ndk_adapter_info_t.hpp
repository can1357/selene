#pragma once
#include <sdkgen/support_library.hpp>
#include "ndk_version_t.hpp"
#include "ndk_rdma_technology_t.hpp"

#include "magic/ndk_adapter_info_t.start.hpp"
namespace ndis
{
    // [struct _NDK_ADAPTER_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_adapter_info_t                                           
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                              
        _m00 struct ndis::ndk_version_t       version;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                         vendor_id;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .VendorId
        _m02 uint32_t                         device_id;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceId
        _m03 uint64_t                         max_registration_size;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxRegistrationSize
        _m04 uint64_t                         max_window_size;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxWindowSize
        _m05 uint32_t                         frmr_page_count;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FRMRPageCount
        _m06 uint32_t                         max_initiator_request_sge;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .MaxInitiatorRequestSge
        _m07 uint32_t                         max_receive_request_sge;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MaxReceiveRequestSge
        _m08 uint32_t                         max_read_request_sge;       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .MaxReadRequestSge
        _m09 uint32_t                         max_transfer_length;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MaxTransferLength
        _m10 uint32_t                         max_inline_data_size;       //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .MaxInlineDataSize
        _m11 uint32_t                         max_inbound_read_limit;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MaxInboundReadLimit
        _m12 uint32_t                         max_outbound_read_limit;    //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .MaxOutboundReadLimit
        _m13 uint32_t                         max_receive_queue_depth;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .MaxReceiveQueueDepth
        _m14 uint32_t                         max_initiator_queue_depth;  //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .MaxInitiatorQueueDepth
        _m15 uint32_t                         max_srq_depth;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .MaxSrqDepth
        _m16 uint32_t                         max_cq_depth;               //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .MaxCqDepth
        _m17 uint32_t                         large_request_threshold;    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .LargeRequestThreshold
        _m18 uint32_t                         max_caller_data;            //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .MaxCallerData
        _m19 uint32_t                         max_callee_data;            //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .MaxCalleeData
        _m20 uint32_t                         adapter_flags;              //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .AdapterFlags
        _m21 enum ndis::ndk_rdma_technology_t rdma_technology;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .RdmaTechnology
                                                                        
        SDK_MAGIC_PROPERTIES( "_NDK_ADAPTER_INFO.$", 0x68, true, 0xbb8d114a5e01c19c );                          
        SDK_FIXED_SIZE( ndk_adapter_info_t, 0x68 );                          
    };                                                                  
};
#include "magic/ndk_adapter_info_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_adapter_info_t, 0x68 );
