#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/feature_logged_traits_t.start.hpp"
namespace nt
{
    // [struct FEATURE_LOGGED_TRAITS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_logged_traits_t 
    {                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint16_t version;       //{ +0x0000    +0x0000    +0x0000    } | .version
        _m01 uint16_t base_version;  //{ +0x0002    +0x0002    +0x0002    } | .baseVersion
        _m02 uint8_t  stage;         //{ +0x0004    +0x0004    +0x0004    } | .stage
                                   
        SDK_MAGIC_PROPERTIES( "FEATURE_LOGGED_TRAITS.$", 0x6, true, 0xb12828aa3158179f );             
        SDK_FIXED_SIZE( feature_logged_traits_t, 0x6 );             
    };                             
};
#include "magic/feature_logged_traits_t.end.hpp"
SDK_VERIFY( struct nt::feature_logged_traits_t, 0x6 );
