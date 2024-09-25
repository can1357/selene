#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_PASSTHROUGH_INVDIMM_INPUT]
    // => WDK 10
    //
    struct scm_pd_passthrough_invdimm_input_t
    {                                        
                                             
        SDK_MAGIC_PROPERTIES( "_SCM_PD_PASSTHROUGH_INVDIMM_INPUT.$", 0x0, false, 0x38ac131b402aa27e );
        SDK_FIXED_SIZE( scm_pd_passthrough_invdimm_input_t, 0x0 );
    };                                       
};
SDK_VERIFY( struct nt::scm_pd_passthrough_invdimm_input_t, 0x0 );
