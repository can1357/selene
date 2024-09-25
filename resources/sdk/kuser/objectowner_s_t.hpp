#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/objectowner_s_t.start.hpp"
namespace kuser
{
    // [struct _OBJECTOWNER_S]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct objectowner_s_t        
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint1_t  lock;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Lock
        _m01 uint31_t pid_shifted;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Pid_Shifted
                                  
        SDK_MAGIC_PROPERTIES( "_OBJECTOWNER_S.$", 0x4, true, 0x2d9fd8fd798d90d3 );            
        SDK_FIXED_SIZE( objectowner_s_t, 0x4 );            
    };                            
};
#include "magic/objectowner_s_t.end.hpp"
SDK_VERIFY( struct kuser::objectowner_s_t, 0x4 );
