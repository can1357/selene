#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _JOB_ACCESS_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct job_access_state_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "_JOB_ACCESS_STATE.$", 0x0, true, 0x3322a289ee962802 );
        SDK_FIXED_SIZE( job_access_state_t, 0x0 );
    };                       
};
SDK_VERIFY( struct nt::job_access_state_t, 0x0 );
