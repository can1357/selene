#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_REINITIALIZE_MEDIA_OUTPUT]
    // => WDK 10
    //
    struct scm_pd_reinitialize_media_output_t
    {                                        
                                             
        SDK_MAGIC_PROPERTIES( "_SCM_PD_REINITIALIZE_MEDIA_OUTPUT.$", 0x0, false, 0x7bfb2abd51bcad3c );
        SDK_FIXED_SIZE( scm_pd_reinitialize_media_output_t, 0x0 );
    };                                       
};
SDK_VERIFY( struct nt::scm_pd_reinitialize_media_output_t, 0x0 );
