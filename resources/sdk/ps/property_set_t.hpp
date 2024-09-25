#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/property_set_t.start.hpp"
namespace ps
{
    // [struct _PS_PROPERTY_SET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct property_set_t               
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                              
        _m00 nt::list_entry_t list_head;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListHead
        _m01 uint64_t         lock;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Lock
                                        
        SDK_MAGIC_PROPERTIES( "_PS_PROPERTY_SET.$", 0x18, true, 0x4355da785f5d8942 );          
        SDK_FIXED_SIZE( property_set_t, 0x18 );          
    };                                  
};
#include "magic/property_set_t.end.hpp"
SDK_VERIFY( struct ps::property_set_t, 0x18 );
