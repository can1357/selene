#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/auto_reg_key_t.start.hpp"
namespace fx
{
    // [struct FxAutoRegKey]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct auto_reg_key_t
    {                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //               
        _m00 void* m_key;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Key
                         
        SDK_MAGIC_PROPERTIES( "FxAutoRegKey.$", 0x8, true, 0xe77512048cf19eb7 );      
        SDK_FIXED_SIZE( auto_reg_key_t, 0x8 );      
    };                   
};
#include "magic/auto_reg_key_t.end.hpp"
SDK_VERIFY( struct fx::auto_reg_key_t, 0x8 );
