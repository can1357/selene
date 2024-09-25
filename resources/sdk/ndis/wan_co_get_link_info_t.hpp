#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wan_co_get_link_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WAN_CO_GET_LINK_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wan_co_get_link_info_t           
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t max_send_frame_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaxSendFrameSize
        _m01 uint32_t max_recv_frame_size;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxRecvFrameSize
        _m02 uint32_t send_framing_bits;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SendFramingBits
        _m03 uint32_t recv_framing_bits;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .RecvFramingBits
        _m04 uint32_t send_compression_bits;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SendCompressionBits
        _m05 uint32_t recv_compression_bits;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .RecvCompressionBits
        _m06 uint32_t send_accm;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SendACCM
        _m07 uint32_t recv_accm;              //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .RecvACCM
                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_WAN_CO_GET_LINK_INFO.$", 0x20, true, 0x9a6d3308e83a3abc );                      
        SDK_FIXED_SIZE( wan_co_get_link_info_t, 0x20 );                      
    };                                      
};
#include "magic/wan_co_get_link_info_t.end.hpp"
SDK_VERIFY( struct ndis::wan_co_get_link_info_t, 0x20 );
