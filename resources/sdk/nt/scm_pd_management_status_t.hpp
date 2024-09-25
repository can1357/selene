#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_MANAGEMENT_STATUS]
    // => WDK 10
    //
    struct scm_pd_management_status_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "_SCM_PD_MANAGEMENT_STATUS.$", 0x0, false, 0x521cfa1c8b128701 );
        SDK_FIXED_SIZE( scm_pd_management_status_t, 0x0 );
    };                               
};
SDK_VERIFY( struct nt::scm_pd_management_status_t, 0x0 );
