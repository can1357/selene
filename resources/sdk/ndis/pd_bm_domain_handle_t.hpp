#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct NDIS_PD_BM_DOMAIN_HANDLE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_bm_domain_handle_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "NDIS_PD_BM_DOMAIN_HANDLE__.$", 0x4, true, 0xa6e0709522573a9a );
        SDK_FIXED_SIZE( pd_bm_domain_handle_t, 0x4 );
    };                          
};
SDK_VERIFY( struct ndis::pd_bm_domain_handle_t, 0x4 );
