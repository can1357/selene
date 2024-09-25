#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gft_flow_state_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_FLOW_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_flow_state_t       
    {                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t tcp_seq_num;  //{ +0x0000    +0x0000    +0x0000    } | .TcpSeqNum
        _m01 uint32_t tcp_ack_num;  //{ +0x0004    +0x0004    +0x0004    } | .TcpAckNum
                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_FLOW_STATE.$", 0x8, true, 0x22679a90a915d4b3 );            
        SDK_FIXED_SIZE( gft_flow_state_t, 0x8 );            
    };                            
};
#include "magic/gft_flow_state_t.end.hpp"
SDK_VERIFY( struct ndis::gft_flow_state_t, 0x8 );
