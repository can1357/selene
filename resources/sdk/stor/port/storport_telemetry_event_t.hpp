#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storport_telemetry_event_t.start.hpp"
namespace stor::port
{
    // [struct _STORPORT_TELEMETRY_EVENT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct storport_telemetry_event_t                    
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                               
        _m00 uint32_t                driver_version;       //{ +0x0000    +0x0000    +0x0000    } | .DriverVersion
        _m01 uint32_t                event_id;             //{ +0x0004    +0x0004    +0x0004    } | .EventId
        _m02 sdk::array<uint8_t, 32> event_name;           //{ +0x0008    +0x0008    +0x0008    } | .EventName
        _m03 uint32_t                event_version;        //{ +0x0028    +0x0028    +0x0028    } | .EventVersion
        _m04 uint32_t                flags;                //{ +0x002c    +0x002c    +0x002c    } | .Flags
        _m05 uint32_t                event_buffer_length;  //{ +0x0030    +0x0030    +0x0030    } | .EventBufferLength
        _m06 uint8_t*                event_buffer;         //{ +0x0038    +0x0038    +0x0038    } | .EventBuffer
        _m07 sdk::array<uint8_t, 32> parameter_name0;      //{ +0x0040    +0x0040    +0x0040    } | .ParameterName0
        _m08 uint64_t                parameter_value0;     //{ +0x0060    +0x0060    +0x0060    } | .ParameterValue0
        _m09 sdk::array<uint8_t, 32> parameter_name1;      //{ +0x0068    +0x0068    +0x0068    } | .ParameterName1
        _m10 uint64_t                parameter_value1;     //{ +0x0088    +0x0088    +0x0088    } | .ParameterValue1
        _m11 sdk::array<uint8_t, 32> parameter_name2;      //{ +0x0090    +0x0090    +0x0090    } | .ParameterName2
        _m12 uint64_t                parameter_value2;     //{ +0x00b0    +0x00b0    +0x00b0    } | .ParameterValue2
        _m13 sdk::array<uint8_t, 32> parameter_name3;      //{ +0x00b8    +0x00b8    +0x00b8    } | .ParameterName3
        _m14 uint64_t                parameter_value3;     //{ +0x00d8    +0x00d8    +0x00d8    } | .ParameterValue3
        _m15 sdk::array<uint8_t, 32> parameter_name4;      //{ +0x00e0    +0x00e0    +0x00e0    } | .ParameterName4
        _m16 uint64_t                parameter_value4;     //{ +0x0100    +0x0100    +0x0100    } | .ParameterValue4
        _m17 sdk::array<uint8_t, 32> parameter_name5;      //{ +0x0108    +0x0108    +0x0108    } | .ParameterName5
        _m18 uint64_t                parameter_value5;     //{ +0x0128    +0x0128    +0x0128    } | .ParameterValue5
        _m19 sdk::array<uint8_t, 32> parameter_name6;      //{ +0x0130    +0x0130    +0x0130    } | .ParameterName6
        _m20 uint64_t                parameter_value6;     //{ +0x0150    +0x0150    +0x0150    } | .ParameterValue6
        _m21 sdk::array<uint8_t, 32> parameter_name7;      //{ +0x0158    +0x0158    +0x0158    } | .ParameterName7
        _m22 uint64_t                parameter_value7;     //{ +0x0178    +0x0178    +0x0178    } | .ParameterValue7
                                                         
        SDK_MAGIC_PROPERTIES( "_STORPORT_TELEMETRY_EVENT.$", 0x180, true, 0x2b1ce2b2c9e3c092 );                    
        SDK_FIXED_SIZE( storport_telemetry_event_t, 0x180 );                    
    };                                                   
};
#include "magic/storport_telemetry_event_t.end.hpp"
SDK_VERIFY( struct stor::port::storport_telemetry_event_t, 0x180 );
