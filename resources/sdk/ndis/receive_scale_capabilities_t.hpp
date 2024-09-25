#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/receive_scale_capabilities_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_RECEIVE_SCALE_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct receive_scale_capabilities_t                                       
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                    
        _m00 struct ndis::object_header_t header;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     capabilities_flags;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CapabilitiesFlags
        _m02 uint32_t                     number_of_interrupt_messages;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfInterruptMessages
        _m03 uint32_t                     number_of_receive_queues;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumberOfReceiveQueues
        _m04 uint16_t                     number_of_indirection_table_entries;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfIndirectionTableEntries
                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_RECEIVE_SCALE_CAPABILITIES.$", 0x14, true, 0x91dfbc3b172b6b7b );                                    
        SDK_FIXED_SIZE( receive_scale_capabilities_t, 0x14 );                                    
    };                                                                        
};
#include "magic/receive_scale_capabilities_t.end.hpp"
SDK_VERIFY( struct ndis::receive_scale_capabilities_t, 0x14 );
