#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/microsoft_telemetry_assert_args_t.start.hpp"
namespace win
{
    // [struct _MicrosoftTelemetryAssertArgs]
    // => Windows 11
    //
    struct microsoft_telemetry_assert_args_t
    {                                       
        // Windows 11                       
        //                                  
        _m00 uint32_t    version;             //{ +0x0000    } | .Version
        _m01 uint64_t    image_base;          //{ +0x0008    } | .ImageBase
        _m02 uint64_t    return_address;      //{ +0x0010    } | .ReturnAddress
        _m03 uint8_t     has_args;            //{ +0x0018    } | .HasArgs
        _m04 const char* originating_binary;  //{ +0x0020    } | .OriginatingBinary
        _m05 uint32_t    dword1;              //{ +0x0028    } | .Dword1
        _m06 uint32_t    dword2;              //{ +0x002c    } | .Dword2
        _m07 uint8_t     dump_needed;         //{ +0x0030    } | .DumpNeeded
                                            
        SDK_MAGIC_PROPERTIES( "_MicrosoftTelemetryAssertArgs.$", 0x0, false, 0xfe67737112004d85 );                   
        SDK_FIXED_SIZE( microsoft_telemetry_assert_args_t, 0x38 );                   
    };                                      
};
#include "magic/microsoft_telemetry_assert_args_t.end.hpp"
SDK_VERIFY( struct win::microsoft_telemetry_assert_args_t, 0x38 );
