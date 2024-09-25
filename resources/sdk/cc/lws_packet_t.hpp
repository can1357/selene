#pragma once
#include <sdkgen/support_library.hpp>
#include "lws_packet_type_t.hpp"

namespace nt { struct private_volume_cachemap_t; }

#include "magic/lws_packet_t.start.hpp"
namespace cc
{
    struct partition_t;

    // [struct _CC_LWS_PACKET]
    // => Windows 11
    //
    struct lws_packet_t                                                                 
    {                                                                                   
        union u0_overlay_t                                                              
        {                                                                               
            // Windows 11                                                               
            //                                                                          
            _m02 struct cc::partition_t*               partition;                         //{ +0x0000    } | .Partition
            _m03 struct nt::private_volume_cachemap_t* private_volume_cache_map;          //{ +0x0000    } | .PrivateVolumeCacheMap
                                                                                        
            SDK_MAGIC_PROPERTIES( "_CC_LWS_PACKET.Overlay.$", 0x0, false, 0x6a4a5e757ddf1d2 );                                 
            SDK_FIXED_SIZE( u0_overlay_t, 0x8 );                                        
        };                                                                              
                                                                                        
        // Windows 11                                                                   
        //                                                                              
        _m00 enum cc::lws_packet_type_t                                         type;     //{ +0x0000    } | .Type
        _m01 uint8_t                                                            active;   //{ +0x0004    } | .Active
        _m04 u0_overlay_t                                                       overlay;  //{ +0x0008    } | .Overlay
                                                                                        
        SDK_MAGIC_PROPERTIES( "_CC_LWS_PACKET.$", 0x0, false, 0x625929351ec4ef59 );        
        SDK_FIXED_SIZE( lws_packet_t, 0x10 );                                           
    };                                                                                  
};
#include "magic/lws_packet_t.end.hpp"
SDK_VERIFY( union cc::lws_packet_t::u0_overlay_t, 0x8 );
SDK_VERIFY( struct cc::lws_packet_t, 0x10 );
