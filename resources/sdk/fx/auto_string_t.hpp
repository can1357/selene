#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/auto_string_t.start.hpp"
namespace fx
{
    // [struct FxAutoString]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct auto_string_t                       
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                     
        _m00 nt::unicode_view m_unicode_string;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_UnicodeString
                                               
        SDK_MAGIC_PROPERTIES( "FxAutoString.$", 0x10, true, 0x3b026ae4fcc5ab08 );                 
        SDK_FIXED_SIZE( auto_string_t, 0x10 );                 
    };                                         
};
#include "magic/auto_string_t.end.hpp"
SDK_VERIFY( struct fx::auto_string_t, 0x10 );
