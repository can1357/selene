#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_REGION]
    // => WDK 10
    //
    struct scm_region_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "_SCM_REGION.$", 0x0, false, 0x943e0fe581168a8c );
        SDK_FIXED_SIZE( scm_region_t, 0x0 );
    };                 
};
SDK_VERIFY( struct nt::scm_region_t, 0x0 );
