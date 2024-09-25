#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_PASSTHROUGH_OUTPUT]
    // => WDK 10
    //
    struct scm_pd_passthrough_output_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "_SCM_PD_PASSTHROUGH_OUTPUT.$", 0x0, false, 0x3fa0c83f6a19948d );
        SDK_FIXED_SIZE( scm_pd_passthrough_output_t, 0x0 );
    };                                
};
SDK_VERIFY( struct nt::scm_pd_passthrough_output_t, 0x0 );
