#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _JOB_NOTIFICATION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct job_notification_information_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "_JOB_NOTIFICATION_INFORMATION.$", 0x0, true, 0x81238c09042df115 );
        SDK_FIXED_SIZE( job_notification_information_t, 0x0 );
    };                                   
};
SDK_VERIFY( struct nt::job_notification_information_t, 0x0 );
