#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_catalogs_t.start.hpp"
namespace win
{
    // [class DeviceCatalogs]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class device_catalogs_t
    {                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                 
        _m00 int32_t m_ref;  //{ +0x0008    +0x0008    +0x0008    } | .m_ref
                           
        SDK_MAGIC_PROPERTIES( "DeviceCatalogs.$", 0x30, true, 0xe13ef13fa39e5f60 );      
        SDK_FIXED_SIZE( device_catalogs_t, 0x30 );      
    };                     
};
#include "magic/device_catalogs_t.end.hpp"
SDK_VERIFY( class win::device_catalogs_t, 0x30 );
