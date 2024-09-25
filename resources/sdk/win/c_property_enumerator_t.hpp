#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_property_enumerator_t.start.hpp"
namespace win
{
    // [class CPropertyEnumerator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_property_enumerator_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t tk_type;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._tkType
                                 
        SDK_MAGIC_PROPERTIES( "CPropertyEnumerator.$", 0x20, true, 0x5dde2f9bb578dc9f );        
        SDK_FIXED_SIZE( c_property_enumerator_t, 0x20 );        
    };                           
};
#include "magic/c_property_enumerator_t.end.hpp"
SDK_VERIFY( class win::c_property_enumerator_t, 0x20 );
