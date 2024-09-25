#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_DESCRIPTOR_HEADER]
    // => WDK 10
    //
    struct scm_pd_descriptor_header_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "_SCM_PD_DESCRIPTOR_HEADER.$", 0x0, false, 0xe062869dac669a1d );
        SDK_FIXED_SIZE( scm_pd_descriptor_header_t, 0x0 );
    };                               
};
SDK_VERIFY( struct nt::scm_pd_descriptor_header_t, 0x0 );
