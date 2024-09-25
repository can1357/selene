#pragma once
#include <sdkgen/support_library.hpp>

namespace tp
{
    // [struct _TP_JOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct job_t
    {           
                
        SDK_MAGIC_PROPERTIES( "_TP_JOB.$", 0x0, true, 0xd811c28d47846ca3 );
        SDK_FIXED_SIZE( job_t, 0x0 );
    };          
};
SDK_VERIFY( struct tp::job_t, 0x0 );
