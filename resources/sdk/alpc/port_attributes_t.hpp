#pragma once
#include <sdkgen/support_library.hpp>
#include "../sec/quality_of_service_t.hpp"

#include "magic/port_attributes_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_PORT_ATTRIBUTES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct port_attributes_t                                         
    {                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                           
        _m00 uint32_t                         flags;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 struct sec::quality_of_service_t security_qos;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SecurityQos
        _m02 uint64_t                         max_message_length;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxMessageLength
        _m03 uint64_t                         memory_bandwidth;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MemoryBandwidth
        _m04 uint64_t                         max_pool_usage;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .MaxPoolUsage
        _m05 uint64_t                         max_section_size;        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .MaxSectionSize
        _m06 uint64_t                         max_view_size;           //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .MaxViewSize
        _m07 uint64_t                         max_total_section_size;  //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .MaxTotalSectionSize
        _m08 uint32_t                         dup_object_types;        //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .DupObjectTypes
                                                                     
        SDK_NONVOL_PROPERTIES( "_ALPC_PORT_ATTRIBUTES.$", 0x48, true, 0xedfc940c4170b423 );                       
        SDK_FIXED_SIZE( port_attributes_t, 0x48 );                       
    };                                                               
};
#include "magic/port_attributes_t.end.hpp"
SDK_VERIFY( struct alpc::port_attributes_t, 0x48 );
