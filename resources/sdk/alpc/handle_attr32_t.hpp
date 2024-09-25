#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/handle_attr32_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_HANDLE_ATTR32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct handle_attr32_t            
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t flags;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  same_access;      //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .SameAccess
        _m02 uint1_t  same_attributes;  //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .SameAttributes
        _m03 uint1_t  indirect;         //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .Indirect
        _m04 uint1_t  inherit;          //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .Inherit
        _m05 uint32_t handle;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Handle
        _m06 uint32_t object_type;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ObjectType
        _m07 uint32_t desired_access;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DesiredAccess
        _m08 uint32_t granted_access;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .GrantedAccess
                                      
        SDK_MAGIC_PROPERTIES( "_ALPC_HANDLE_ATTR32.$", 0x10, true, 0xd877e2f16036708d );                
        SDK_FIXED_SIZE( handle_attr32_t, 0x10 );                
    };                                
};
#include "magic/handle_attr32_t.end.hpp"
SDK_VERIFY( struct alpc::handle_attr32_t, 0x10 );
