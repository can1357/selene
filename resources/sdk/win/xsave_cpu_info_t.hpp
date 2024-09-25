#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xsave_cpu_info_t.start.hpp"
namespace win
{
    // [struct XSAVE_CPU_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct xsave_cpu_info_t             
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint8_t  processor;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Processor
        _m01 uint16_t family;             //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Family
        _m02 uint16_t model;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Model
        _m03 uint16_t stepping;           //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Stepping
        _m04 uint16_t extended_model;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ExtendedModel
        _m05 uint32_t extended_family;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ExtendedFamily
        _m06 uint64_t microcode_version;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MicrocodeVersion
                                        
        SDK_MAGIC_PROPERTIES( "XSAVE_CPU_INFO.$", 0x20, true, 0xdb93c1ea315de4b3 );                  
        SDK_FIXED_SIZE( xsave_cpu_info_t, 0x20 );                  
    };                                  
};
#include "magic/xsave_cpu_info_t.end.hpp"
SDK_VERIFY( struct win::xsave_cpu_info_t, 0x20 );
