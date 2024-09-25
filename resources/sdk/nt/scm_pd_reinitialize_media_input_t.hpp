#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_REINITIALIZE_MEDIA_INPUT]
    // => WDK 10
    //
    struct scm_pd_reinitialize_media_input_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "_SCM_PD_REINITIALIZE_MEDIA_INPUT.$", 0x0, false, 0x6f7cc2b0c6f417a );
        SDK_FIXED_SIZE( scm_pd_reinitialize_media_input_t, 0x0 );
    };                                      
};
SDK_VERIFY( struct nt::scm_pd_reinitialize_media_input_t, 0x0 );
