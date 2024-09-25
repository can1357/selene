#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_PROPERTY_QUERY]
    // => WDK 10
    //
    struct scm_pd_property_query_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "_SCM_PD_PROPERTY_QUERY.$", 0x0, false, 0x4f1167a3ec3c5831 );
        SDK_FIXED_SIZE( scm_pd_property_query_t, 0x0 );
    };                            
};
SDK_VERIFY( struct nt::scm_pd_property_query_t, 0x0 );
