#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_INTERLEAVED_PD_INFO]
    // => WDK 10
    //
    struct scm_interleaved_pd_info_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "_SCM_INTERLEAVED_PD_INFO.$", 0x0, false, 0x526c35683bddef8c );
        SDK_FIXED_SIZE( scm_interleaved_pd_info_t, 0x0 );
    };                              
};
SDK_VERIFY( struct nt::scm_interleaved_pd_info_t, 0x0 );
