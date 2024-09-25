#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "nsi_network_rw_t.hpp"

namespace nt { struct kevent_t; }

#include "magic/if_network_block_t.start.hpp"
namespace ndis
{
    struct if_compartment_block_t;

    // [struct _NDIS_IF_NETWORK_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct if_network_block_t                                      
    {                                                              
        // Windows 10 v1607                                        
        //                                                         
        _m00 nt::list_entry_t                     link;              //{ +0x0000    } | .Link
        _m01 nt::list_entry_t                     compartment_link;  //{ +0x0010    } | .CompartmentLink
        _m02 struct nt::guid_t                    network_guid;      //{ +0x0020    } | .NetworkGuid
        _m03 struct ndis::if_compartment_block_t* compartment;       //{ +0x0030    } | .Compartment
        _m04 nt::list_entry_t                     interface_link;    //{ +0x0038    } | .InterfaceLink
        _m05 uint32_t                             flags;             //{ +0x0048    } | .Flags
        _m06 int32_t                              ref;               //{ +0x004c    } | .Ref
        _m07 struct ndis::nsi_network_rw_t        network_info;      //{ +0x0050    } | .NetworkInfo
        _m08 struct nt::kevent_t*                 async_event;       //{ +0x0260    } | .AsyncEvent
                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_IF_NETWORK_BLOCK.$", 0x0, true, 0xb11b547400683886 );                 
        SDK_DYNAMIC_SIZE( if_network_block_t );                    
    };                                                             
};
#include "magic/if_network_block_t.end.hpp"
