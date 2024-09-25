#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/net_buffer_list_filtering_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NET_BUFFER_LIST_FILTERING_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_list_filtering_info_t                              
    {                                                                    
        struct u0_filtering_info_t                                       
        {                                                                
            union u4_queue_v_port_info_t                                 
            {                                                            
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
                //                                                       
                _m01 uint16_t queue_id;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueueId
                _m02 uint16_t v_port_id;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VPortId
                                                                         
                SDK_MAGIC_PROPERTIES( "_NDIS_NET_BUFFER_LIST_FILTERING_INFO.FilteringInfo.QueueVPortInfo.$", 0x2, true, 0x7b6eb4fe60586892 );                                           
                SDK_FIXED_SIZE( u4_queue_v_port_info_t, 0x2 );                                           
            };                                                           
                                                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
            //                                                           
            _m00 uint16_t               filter_id;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FilterId
            _m03 u4_queue_v_port_info_t queue_v_port_info;                 //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .QueueVPortInfo
                                                                         
            SDK_MAGIC_PROPERTIES( "_NDIS_NET_BUFFER_LIST_FILTERING_INFO.FilteringInfo.$", 0x4, true, 0x13d9b7c7016f31dd );                                 
            SDK_FIXED_SIZE( u0_filtering_info_t, 0x4 );                                 
        };                                                               
                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                               
        _m04 u0_filtering_info_t                          filtering_info;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FilteringInfo
        _m05 void*                                        value;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_NET_BUFFER_LIST_FILTERING_INFO.$", 0x8, true, 0xfedf4077f2d3307d );               
        SDK_FIXED_SIZE( net_buffer_list_filtering_info_t, 0x8 );               
    };                                                                   
};
#include "magic/net_buffer_list_filtering_info_t.end.hpp"
SDK_VERIFY( union ndis::net_buffer_list_filtering_info_t::u0_filtering_info_t::u4_queue_v_port_info_t, 0x2 );
SDK_VERIFY( struct ndis::net_buffer_list_filtering_info_t::u0_filtering_info_t, 0x4 );
SDK_VERIFY( struct ndis::net_buffer_list_filtering_info_t, 0x8 );
