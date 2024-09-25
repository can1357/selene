#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct NDIS_PD_COUNTER_HANDLE__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_counter_handle_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "NDIS_PD_COUNTER_HANDLE__.$", 0x4, true, 0x55ad2124bef19cae );
        SDK_FIXED_SIZE( pd_counter_handle_t, 0x4 );
    };                        
};
SDK_VERIFY( struct ndis::pd_counter_handle_t, 0x4 );
