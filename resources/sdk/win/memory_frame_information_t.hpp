#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_frame_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_FRAME_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_frame_information_t  
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint4_t  use_description;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .UseDescription
        _m01 uint3_t  list_description;  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ListDescription
        _m02 uint1_t  pinned;            //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Pinned
        _m03 uint48_t dont_use;          //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .DontUse
        _m04 uint3_t  priority;          //{ +0x0000@57 +0x0000@57 +0x0000@57 +0x0000@57 } | .Priority
                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m05 uint1_t  cold;              //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .Cold
                                       
        // Windows 11                  
        //                             
        _m06 uint1_t  non_tradeable;     //{ +0x0000@60 } | .NonTradeable
                                       
        SDK_MAGIC_PROPERTIES( "_MEMORY_FRAME_INFORMATION.$", 0x8, true, 0xf5c4a450e13eb71b );                 
        SDK_FIXED_SIZE( memory_frame_information_t, 0x8 );                 
    };                                 
};
#include "magic/memory_frame_information_t.end.hpp"
SDK_VERIFY( struct win::memory_frame_information_t, 0x8 );
