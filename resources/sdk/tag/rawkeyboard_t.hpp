#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rawkeyboard_t.start.hpp"
namespace tag
{
    // [struct tagRAWKEYBOARD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rawkeyboard_t                
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint16_t make_code;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MakeCode
        _m01 uint16_t flags;              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m02 uint16_t v_key;              //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .VKey
        _m03 uint32_t message;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Message
        _m04 uint32_t extra_information;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ExtraInformation
                                        
        SDK_MAGIC_PROPERTIES( "tagRAWKEYBOARD.$", 0x10, true, 0xd8f00e74cf41b868 );                  
        SDK_FIXED_SIZE( rawkeyboard_t, 0x10 );                  
    };                                  
};
#include "magic/rawkeyboard_t.end.hpp"
SDK_VERIFY( struct tag::rawkeyboard_t, 0x10 );
