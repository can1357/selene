#pragma once
#include <sdkgen/support_library.hpp>
#include "objectowner_s_t.hpp"

#include "magic/objectowner_t.start.hpp"
namespace kuser
{
    // [union _OBJECTOWNER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union objectowner_t                           
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                        
        _m00 struct kuser::objectowner_s_t share;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Share
        _m01 uint32_t                      ul_obj;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulObj
                                                  
        SDK_MAGIC_PROPERTIES( "_OBJECTOWNER.$", 0x4, true, 0x8151ca1765024e89 );       
        SDK_FIXED_SIZE( objectowner_t, 0x4 );       
    };                                            
};
#include "magic/objectowner_t.end.hpp"
SDK_VERIFY( union kuser::objectowner_t, 0x4 );
