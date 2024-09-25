#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wan_co_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WAN_CO_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wan_co_info_t              
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t max_frame_size;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaxFrameSize
        _m01 uint32_t max_send_window;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxSendWindow
        _m02 uint32_t framing_bits;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FramingBits
        _m03 uint32_t desired_accm;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DesiredACCM
                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_WAN_CO_INFO.$", 0x10, true, 0x44fa6df16432451e );                
        SDK_FIXED_SIZE( wan_co_info_t, 0x10 );                
    };                                
};
#include "magic/wan_co_info_t.end.hpp"
SDK_VERIFY( struct ndis::wan_co_info_t, 0x10 );
