#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_descriptionw_t.start.hpp"
namespace win
{
    // [struct _SERVICE_DESCRIPTIONW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_descriptionw_t    
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 wchar_t* lp_description;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpDescription
                                     
        SDK_MAGIC_PROPERTIES( "_SERVICE_DESCRIPTIONW.$", 0x8, true, 0x11ddfb4e1dc67622 );               
        SDK_FIXED_SIZE( service_descriptionw_t, 0x8 );               
    };                               
};
#include "magic/service_descriptionw_t.end.hpp"
SDK_VERIFY( struct win::service_descriptionw_t, 0x8 );
