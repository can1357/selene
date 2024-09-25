#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_processor_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESSOR_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_processor_information_t    
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint16_t processor_architecture;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessorArchitecture
        _m01 uint16_t processor_level;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ProcessorLevel
        _m02 uint16_t processor_revision;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProcessorRevision
        _m03 uint16_t maximum_processors;      //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .MaximumProcessors
        _m04 uint32_t processor_feature_bits;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessorFeatureBits
                                             
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESSOR_INFORMATION.$", 0xc, true, 0xd6111114b1f35ad1 );                       
        SDK_FIXED_SIZE( system_processor_information_t, 0xc );                       
    };                                       
};
#include "magic/system_processor_information_t.end.hpp"
SDK_VERIFY( struct win::system_processor_information_t, 0xc );
