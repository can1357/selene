#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_HEALTH_NOTIFICATION_DATA]
    // => WDK 10
    //
    struct scm_pd_health_notification_data_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "_SCM_PD_HEALTH_NOTIFICATION_DATA.$", 0x0, false, 0x96e23d1d11ebed2b );
        SDK_FIXED_SIZE( scm_pd_health_notification_data_t, 0x0 );
    };                                      
};
SDK_VERIFY( struct nt::scm_pd_health_notification_data_t, 0x0 );
