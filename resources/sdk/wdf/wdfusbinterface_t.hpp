#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFUSBINTERFACE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfusbinterface_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "WDFUSBINTERFACE__.$", 0x4, true, 0x17bb4470ff7cf668 );
        SDK_FIXED_SIZE( wdfusbinterface_t, 0x4 );
    };                      
};
SDK_VERIFY( struct wdf::wdfusbinterface_t, 0x4 );
