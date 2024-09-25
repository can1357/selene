#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_structure_flags_t.start.hpp"
namespace win
{
    // [struct _NDR64_STRUCTURE_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_structure_flags_t         
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                 
        _m00 uint1_t has_pointer_info;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .HasPointerInfo
        _m01 uint1_t has_member_info;        //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .HasMemberInfo
        _m02 uint1_t has_conf_array;         //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .HasConfArray
        _m03 uint1_t has_orig_pointer_info;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .HasOrigPointerInfo
        _m04 uint1_t has_orig_member_info;   //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .HasOrigMemberInfo
                                           
        SDK_MAGIC_PROPERTIES( "_NDR64_STRUCTURE_FLAGS.$", 0x1, true, 0x690c641355e30ea9 );                      
        SDK_FIXED_SIZE( ndr64_structure_flags_t, 0x1 );                      
    };                                     
};
#include "magic/ndr64_structure_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr64_structure_flags_t, 0x1 );
