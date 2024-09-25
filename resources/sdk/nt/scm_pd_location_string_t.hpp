#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_LOCATION_STRING]
    // => WDK 10
    //
    struct scm_pd_location_string_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_SCM_PD_LOCATION_STRING.$", 0x0, false, 0xde5fbcd4e3180909 );
        SDK_FIXED_SIZE( scm_pd_location_string_t, 0x0 );
    };                             
};
SDK_VERIFY( struct nt::scm_pd_location_string_t, 0x0 );
