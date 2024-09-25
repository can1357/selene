#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/net_buffer_list_media_specific_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NET_BUFFER_LIST_MEDIA_SPECIFIC_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_list_media_specific_info_t
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                   
        _m00 void* media_specific_info;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MediaSpecificInfo
        _m01 void* native_wifi_specific_info;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NativeWifiSpecificInfo
        _m02 void* value;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_NET_BUFFER_LIST_MEDIA_SPECIFIC_INFO.$", 0x8, true, 0xc4008b41528e2816 );                          
        SDK_FIXED_SIZE( net_buffer_list_media_specific_info_t, 0x8 );                          
    };                                          
};
#include "magic/net_buffer_list_media_specific_info_t.end.hpp"
SDK_VERIFY( struct ndis::net_buffer_list_media_specific_info_t, 0x8 );
