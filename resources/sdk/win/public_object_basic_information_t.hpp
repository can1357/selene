#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/public_object_basic_information_t.start.hpp"
namespace win
{
    // [struct _PUBLIC_OBJECT_BASIC_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct public_object_basic_information_t
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t attributes;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Attributes
        _m01 uint32_t granted_access;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .GrantedAccess
        _m02 uint32_t handle_count;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .HandleCount
        _m03 uint32_t pointer_count;          //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .PointerCount
                                            
        SDK_NONVOL_PROPERTIES( "_PUBLIC_OBJECT_BASIC_INFORMATION.$", 0x38, true, 0x9a8306c182c22d3f );               
        SDK_FIXED_SIZE( public_object_basic_information_t, 0x38 );               
    };                                      
};
#include "magic/public_object_basic_information_t.end.hpp"
SDK_VERIFY( struct win::public_object_basic_information_t, 0x38 );
