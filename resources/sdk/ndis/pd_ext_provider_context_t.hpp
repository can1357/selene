#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct NDIS_PD_EXT_PROVIDER_CONTEXT__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_ext_provider_context_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "NDIS_PD_EXT_PROVIDER_CONTEXT__.$", 0x4, true, 0xd7ca87cdcadc4c73 );
        SDK_FIXED_SIZE( pd_ext_provider_context_t, 0x4 );
    };                              
};
SDK_VERIFY( struct ndis::pd_ext_provider_context_t, 0x4 );
