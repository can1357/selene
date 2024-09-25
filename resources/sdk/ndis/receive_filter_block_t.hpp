#pragma once
#include <sdkgen/support_library.hpp>
#include "connection_info_t.hpp"
#include "receive_filter_parameters_t.hpp"

#include "magic/receive_filter_block_t.start.hpp"
namespace ndis
{
    struct open_block_t;
    struct vport_block_t;
    struct miniport_block_t;
    struct receive_queue_block_t;

    // [struct _NDIS_RECEIVE_FILTER_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct receive_filter_block_t                                       
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                              
        _m00 nt::list_entry_t                         adapter_link;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AdapterLink
        _m01 nt::list_entry_t                         queue_link;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .QueueLink
        _m02 nt::list_entry_t                         v_port_link;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .VPortLink
        _m03 uint32_t                                 filter_id;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FilterId
        _m04 struct ndis::miniport_block_t*           miniport;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Miniport
        _m05 struct ndis::open_block_t*               open;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Open
        _m06 struct ndis::receive_queue_block_t*      receive_queue;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ReceiveQueue
        _m07 int32_t                                  reference;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Reference
        _m08 struct ndis::connection_info_t           connection_info;    //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .ConnectionInfo
        _m09 struct ndis::receive_filter_parameters_t filter_parameters;  //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .FilterParameters
        _m10 struct ndis::vport_block_t*              v_port_block;       //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .VPortBlock
                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_RECEIVE_FILTER_BLOCK.$", 0xb8, true, 0x96c52f553e0a5254 );                  
        SDK_FIXED_SIZE( receive_filter_block_t, 0xb8 );                  
    };                                                                  
};
#include "magic/receive_filter_block_t.end.hpp"
SDK_VERIFY( struct ndis::receive_filter_block_t, 0xb8 );
