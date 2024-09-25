#pragma once
#include <sdkgen/support_library.hpp>
#include "wan_quality_t.hpp"

#include "magic/wan_line_up_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WAN_LINE_UP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wan_line_up_t                                     
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                   
        _m00 uint32_t                 link_speed;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LinkSpeed
        _m01 uint32_t                 maximum_total_size;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaximumTotalSize
        _m02 enum ndis::wan_quality_t quality;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Quality
        _m03 uint16_t                 send_window;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SendWindow
        _m04 sdk::array<uint8_t, 6>   remote_address;          //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .RemoteAddress
        _m05 sdk::array<uint8_t, 6>   local_address;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .LocalAddress
        _m06 uint32_t                 protocol_buffer_length;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ProtocolBufferLength
        _m07 uint8_t*                 protocol_buffer;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ProtocolBuffer
        _m08 uint16_t                 protocol_type;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ProtocolType
        _m09 nt::unicode_view         device_name;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DeviceName
                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_WAN_LINE_UP.$", 0x40, true, 0xe507493a44c7f874 );                       
        SDK_FIXED_SIZE( wan_line_up_t, 0x40 );                       
    };                                                       
};
#include "magic/wan_line_up_t.end.hpp"
SDK_VERIFY( struct ndis::wan_line_up_t, 0x40 );
