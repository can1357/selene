#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_processor_features_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESSOR_FEATURES_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_processor_features_information_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint64_t processor_feature_bits;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessorFeatureBits
                                                  
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESSOR_FEATURES_INFORMATION.$", 0x20, true, 0xdbb4330536775015 );                       
        SDK_FIXED_SIZE( system_processor_features_information_t, 0x20 );                       
    };                                            
};
#include "magic/system_processor_features_information_t.end.hpp"
SDK_VERIFY( struct win::system_processor_features_information_t, 0x20 );
