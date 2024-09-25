#pragma once
#include <sdkgen/support_library.hpp>
#include "pm_wol_pattern_t.hpp"
#include "pm_packet_pattern_t.hpp"
#include "pm_protocol_offload_t.hpp"
#include "../nt/single_list_entry_t.hpp"

#include "magic/packet_pattern_entry_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PACKET_PATTERN_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct packet_pattern_entry_t                                  
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                         
        _m00 struct nt::single_list_entry_t     link;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 struct nt::single_list_entry_t     dup_link;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DupLink
        _m02 uint32_t                           size;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Size
        _m03 void*                              source;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Source
        _m04 uint32_t                           priority;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Priority
        _m05 uint32_t                           effective_priority;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .EffectivePriority
        _m06 uint32_t                           id;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Id
        _m07 uint32_t                           port_number;         //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .PortNumber
        _m08 struct ndis::pm_packet_pattern_t   pattern;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Pattern
        _m09 struct ndis::pm_wol_pattern_t      wo_l_pattern;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .WoLPattern
        _m10 struct ndis::pm_protocol_offload_t protocol_offload;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ProtocolOffload
                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_PACKET_PATTERN_ENTRY.$", 0x130, true, 0xd1da925e9af24199 );                   
        SDK_DYNAMIC_SIZE( packet_pattern_entry_t );                   
    };                                                             
};
#include "magic/packet_pattern_entry_t.end.hpp"
