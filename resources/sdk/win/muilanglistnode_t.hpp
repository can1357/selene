#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/muilanglistnode_t.start.hpp"
namespace win
{
    // [struct _MUILANGLISTNODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct muilanglistnode_t        
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint16_t language_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LanguageType
        _m01 int16_t  language_spec;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LanguageSpec
                                    
        SDK_MAGIC_PROPERTIES( "_MUILANGLISTNODE.$", 0x6, true, 0x9e1072a70512eeb5 );              
        SDK_FIXED_SIZE( muilanglistnode_t, 0x6 );              
    };                              
};
#include "magic/muilanglistnode_t.end.hpp"
SDK_VERIFY( struct win::muilanglistnode_t, 0x6 );
