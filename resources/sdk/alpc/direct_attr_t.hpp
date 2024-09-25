#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/direct_attr_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_DIRECT_ATTR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct direct_attr_t 
    {                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //               
        _m00 void* event;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Event
                         
        SDK_MAGIC_PROPERTIES( "_ALPC_DIRECT_ATTR.$", 0x8, true, 0x1711c1161445d599 );      
        SDK_FIXED_SIZE( direct_attr_t, 0x8 );      
    };                   
};
#include "magic/direct_attr_t.end.hpp"
SDK_VERIFY( struct alpc::direct_attr_t, 0x8 );
