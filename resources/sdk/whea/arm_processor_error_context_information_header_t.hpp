#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_processor_error_context_information_header_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct arm_processor_error_context_information_header_t
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint16_t               version;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t               register_context_type;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .RegisterContextType
        _m02 uint32_t               register_array_size;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .RegisterArraySize
        _m03 sdk::array<uint8_t, 1> register_array;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RegisterArray
                                                           
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER.$", 0x9, true, 0x4c3718cb2dd7aa13 );                      
        SDK_FIXED_SIZE( arm_processor_error_context_information_header_t, 0x9 );                      
    };                                                     
};
#include "magic/arm_processor_error_context_information_header_t.end.hpp"
SDK_VERIFY( struct whea::arm_processor_error_context_information_header_t, 0x9 );
