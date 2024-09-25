#pragma once
#include <sdkgen/support_library.hpp>
#include "offload_state_header_t.hpp"

#include "magic/tcp_offload_state_const_t.start.hpp"
namespace ndis
{
    // [struct _TCP_OFFLOAD_STATE_CONST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_offload_state_const_t                            
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                      
        _m00 struct ndis::offload_state_header_t header;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint16_t                            flags;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint16_t                            remote_port;     //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .RemotePort
        _m03 uint16_t                            local_port;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .LocalPort
        _m04 uint4_t                             snd_wind_scale;  //{ +0x000e@0  +0x000e@0  +0x000e@0  +0x000e@0  } | .SndWindScale
        _m05 uint4_t                             rcv_wind_scale;  //{ +0x000e@4  +0x000e@4  +0x000e@4  +0x000e@4  } | .RcvWindScale
        _m06 uint16_t                            remote_mss;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RemoteMss
        _m07 uint32_t                            hash_value;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .HashValue
                                                                
        SDK_MAGIC_PROPERTIES( "_TCP_OFFLOAD_STATE_CONST.$", 0x18, true, 0x64b32fbd8973ffb2 );               
        SDK_FIXED_SIZE( tcp_offload_state_const_t, 0x18 );               
    };                                                          
};
#include "magic/tcp_offload_state_const_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_offload_state_const_t, 0x18 );
