#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trans_ptr_t.start.hpp"
namespace cm
{
    // [union _CM_TRANS_PTR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union trans_ptr_t             
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 uint1_t light_weight;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .LightWeight
        _m01 void*   trans_ptr;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TransPtr
                                  
        SDK_MAGIC_PROPERTIES( "_CM_TRANS_PTR.$", 0x8, true, 0x35b5a2b8ac43c93a );             
        SDK_FIXED_SIZE( trans_ptr_t, 0x8 );             
    };                            
};
#include "magic/trans_ptr_t.end.hpp"
SDK_VERIFY( union cm::trans_ptr_t, 0x8 );
