#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_REGIONS]
    // => WDK 10
    //
    struct scm_regions_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "_SCM_REGIONS.$", 0x0, false, 0x4be20fc4f866541d );
        SDK_FIXED_SIZE( scm_regions_t, 0x0 );
    };                  
};
SDK_VERIFY( struct nt::scm_regions_t, 0x0 );
