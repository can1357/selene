#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kdescriptor_t.start.hpp"
namespace nt
{
    // [struct _KDESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kdescriptor_t    
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint16_t limit;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Limit
        _m01 void*    base;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Base
                            
        SDK_MAGIC_PROPERTIES( "_KDESCRIPTOR.$", 0x10, true, 0xb8415837a17ccdb6 );      
        SDK_FIXED_SIZE( kdescriptor_t, 0x10 );      
    };                      
};
#include "magic/kdescriptor_t.end.hpp"
SDK_VERIFY( struct nt::kdescriptor_t, 0x10 );
