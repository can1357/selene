#pragma once
#include <sdkgen/support_library.hpp>
#include "nsi_compartment_rw_t.hpp"

namespace nt { struct ejob_t;   }
namespace nt { struct kevent_t; }

#include "magic/if_compartment_block_t.start.hpp"
namespace ndis
{
    struct if_block_t;
    struct if_network_block_t;

    // [struct _NDIS_IF_COMPARTMENT_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct if_compartment_block_t                               
    {                                                           
        // Windows 10 v1607                                     
        //                                                      
        _m00 nt::list_entry_t                  link;              //{ +0x0000    } | .Link
        _m01 uint32_t                          compartment_id;    //{ +0x0010    } | .CompartmentId
        _m02 nt::list_entry_t                  network_link;      //{ +0x0018    } | .NetworkLink
        _m03 uint32_t                          flags;             //{ +0x0028    } | .Flags
        _m04 int32_t                           ref;               //{ +0x002c    } | .Ref
        _m05 int32_t                           user_ref;          //{ +0x0030    } | .UserRef
        _m06 struct ndis::if_network_block_t*  loopback_network;  //{ +0x0038    } | .LoopbackNetwork
        _m07 struct ndis::nsi_compartment_rw_t loopback_info;     //{ +0x0040    } | .LoopbackInfo
        _m08 struct ndis::if_block_t*          loopback_if;       //{ +0x06a8    } | .LoopbackIf
        _m09 struct nt::kevent_t*              async_event;       //{ +0x06b0    } | .AsyncEvent
        _m10 struct nt::ejob_t*                job_object;        //{ +0x06b8    } | .JobObject
                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_IF_COMPARTMENT_BLOCK.$", 0x0, true, 0x5715ea3caef4c61f );                 
        SDK_DYNAMIC_SIZE( if_compartment_block_t );                 
    };                                                          
};
#include "magic/if_compartment_block_t.end.hpp"
