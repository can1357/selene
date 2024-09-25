#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_handle_information_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_HANDLE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct object_handle_information_t  
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t handle_attributes;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .HandleAttributes
        _m01 uint32_t granted_access;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .GrantedAccess
                                        
        SDK_NONVOL_PROPERTIES( "_OBJECT_HANDLE_INFORMATION.$", 0x8, true, 0x9310128f59d4bdac );                  
        SDK_FIXED_SIZE( object_handle_information_t, 0x8 );                  
    };                                  
};
#include "magic/object_handle_information_t.end.hpp"
SDK_VERIFY( struct nt::object_handle_information_t, 0x8 );
