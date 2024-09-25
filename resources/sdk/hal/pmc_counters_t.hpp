#pragma once
#include <sdkgen/support_library.hpp>

namespace hal
{
    // [struct _HAL_PMC_COUNTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pmc_counters_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "_HAL_PMC_COUNTERS.$", 0x0, true, 0x739222bb1966c13e );
        SDK_FIXED_SIZE( pmc_counters_t, 0x0 );
    };                   
};
SDK_VERIFY( struct hal::pmc_counters_t, 0x0 );
