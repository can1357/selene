#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct NDIS_MINIPORT_ADAPTER_HANDLE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_adapter_handle_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "NDIS_MINIPORT_ADAPTER_HANDLE__.$", 0x4, true, 0x61e260c6e66f614 );
        SDK_FIXED_SIZE( miniport_adapter_handle_t, 0x4 );
    };                              
};
SDK_VERIFY( struct ndis::miniport_adapter_handle_t, 0x4 );
