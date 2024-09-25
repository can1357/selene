#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_processor_performance_distribution_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESSOR_PERFORMANCE_DISTRIBUTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_processor_performance_distribution_t
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 uint32_t                processor_count;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessorCount
        _m01 sdk::array<uint32_t, 1> offsets;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Offsets
                                                      
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESSOR_PERFORMANCE_DISTRIBUTION.$", 0x8, true, 0x35a46b0d5eb9ea97 );                
        SDK_FIXED_SIZE( system_processor_performance_distribution_t, 0x8 );                
    };                                                
};
#include "magic/system_processor_performance_distribution_t.end.hpp"
SDK_VERIFY( struct win::system_processor_performance_distribution_t, 0x8 );
