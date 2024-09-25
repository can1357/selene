#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_bm_domain_member_handle_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__.$", 0x4, true, 0x9a8925f9ada021cc );
        SDK_FIXED_SIZE( pd_bm_domain_member_handle_t, 0x4 );
    };                                 
};
SDK_VERIFY( struct ndis::pd_bm_domain_member_handle_t, 0x4 );
