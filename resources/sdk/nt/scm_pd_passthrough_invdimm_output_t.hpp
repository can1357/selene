#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_PASSTHROUGH_INVDIMM_OUTPUT]
    // => WDK 10
    //
    struct scm_pd_passthrough_invdimm_output_t
    {                                         
                                              
        SDK_MAGIC_PROPERTIES( "_SCM_PD_PASSTHROUGH_INVDIMM_OUTPUT.$", 0x0, false, 0x57a193f9c3e0c0f2 );
        SDK_FIXED_SIZE( scm_pd_passthrough_invdimm_output_t, 0x0 );
    };                                        
};
SDK_VERIFY( struct nt::scm_pd_passthrough_invdimm_output_t, 0x0 );
