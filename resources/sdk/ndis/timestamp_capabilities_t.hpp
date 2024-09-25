#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "timestamp_capability_flags_t.hpp"

#include "magic/timestamp_capabilities_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TIMESTAMP_CAPABILITIES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct timestamp_capabilities_t                                                
    {                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                         
        _m00 struct ndis::object_header_t              header;                       //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint64_t                                  hardware_clock_frequency_hz;  //{ +0x0008    +0x0008    +0x0008    } | .HardwareClockFrequencyHz
        _m02 uint8_t                                   cross_timestamp;              //{ +0x0010    +0x0010    +0x0010    } | .CrossTimestamp
        _m03 struct ndis::timestamp_capability_flags_t timestamp_flags;              //{ +0x0028    +0x0028    +0x0028    } | .TimestampFlags
                                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_TIMESTAMP_CAPABILITIES.$", 0x38, true, 0x4c6e64b48f878a30 );                            
        SDK_FIXED_SIZE( timestamp_capabilities_t, 0x38 );                            
    };                                                                             
};
#include "magic/timestamp_capabilities_t.end.hpp"
SDK_VERIFY( struct ndis::timestamp_capabilities_t, 0x38 );
