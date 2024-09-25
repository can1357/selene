#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/handle_attr_t.start.hpp"
namespace alpc
{
    struct handle_attr32_t;

    // [struct _ALPC_HANDLE_ATTR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct handle_attr_t                                     
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                   
        _m00 uint32_t                      flags;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t                       same_access;        //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .SameAccess
        _m02 uint1_t                       same_attributes;    //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .SameAttributes
        _m03 uint1_t                       indirect;           //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .Indirect
        _m04 uint1_t                       inherit;            //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .Inherit
        _m05 void*                         handle;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Handle
        _m06 struct alpc::handle_attr32_t* handle_attr_array;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HandleAttrArray
        _m07 uint32_t                      object_type;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ObjectType
        _m08 uint32_t                      handle_count;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HandleCount
        _m09 uint32_t                      desired_access;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DesiredAccess
        _m10 uint32_t                      granted_access;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .GrantedAccess
                                                             
        SDK_MAGIC_PROPERTIES( "_ALPC_HANDLE_ATTR.$", 0x18, true, 0xcfbf7e6417d5154e );                  
        SDK_FIXED_SIZE( handle_attr_t, 0x18 );                  
    };                                                       
};
#include "magic/handle_attr_t.end.hpp"
SDK_VERIFY( struct alpc::handle_attr_t, 0x18 );
