#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_union_arm_t.start.hpp"
namespace win
{
    // [struct _NDR64_UNION_ARM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_union_arm_t        
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                          
        _m00 int64_t     case_value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CaseValue
        _m01 const void* type;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
                                    
        SDK_MAGIC_PROPERTIES( "_NDR64_UNION_ARM.$", 0x18, true, 0x2c88a2b1f75e4e1f );           
        SDK_FIXED_SIZE( ndr64_union_arm_t, 0x18 );           
    };                              
};
#include "magic/ndr64_union_arm_t.end.hpp"
SDK_VERIFY( struct win::ndr64_union_arm_t, 0x18 );
