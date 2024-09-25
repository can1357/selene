#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_LD_INTERLEAVE_SET_INFO]
    // => WDK 10
    //
    struct scm_ld_interleave_set_info_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "_SCM_LD_INTERLEAVE_SET_INFO.$", 0x0, false, 0xf9f8a7a63e0d35e3 );
        SDK_FIXED_SIZE( scm_ld_interleave_set_info_t, 0x0 );
    };                                 
};
SDK_VERIFY( struct nt::scm_ld_interleave_set_info_t, 0x0 );
