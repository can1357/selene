#pragma once
#include <sdkgen/support_library.hpp>
#include "trust_level_t.hpp"

#include "magic/c_activatable_class_registration_t.start.hpp"
namespace win
{
    // [class CActivatableClassRegistration]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_activatable_class_registration_t     
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                       
        _m00 enum win::trust_level_t trust_level;  //{ +0x0014    +0x0024    +0x0024    +0x0024    } | ._trustLevel
                                                 
        SDK_MAGIC_PROPERTIES( "CActivatableClassRegistration.$", 0x30, true, 0x3c79342a8455171c );            
        SDK_DYNAMIC_SIZE( c_activatable_class_registration_t );            
    };                                           
};
#include "magic/c_activatable_class_registration_t.end.hpp"
