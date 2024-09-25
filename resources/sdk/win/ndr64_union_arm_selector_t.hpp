#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_union_arm_selector_t.start.hpp"
namespace win
{
    // [struct _NDR64_UNION_ARM_SELECTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_union_arm_selector_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint8_t  alignment;       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Alignment
        _m01 uint32_t arms;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Arms
                                     
        SDK_MAGIC_PROPERTIES( "_NDR64_UNION_ARM_SELECTOR.$", 0x8, true, 0x475bf16b57c621cb );          
        SDK_FIXED_SIZE( ndr64_union_arm_selector_t, 0x8 );          
    };                               
};
#include "magic/ndr64_union_arm_selector_t.end.hpp"
SDK_VERIFY( struct win::ndr64_union_arm_selector_t, 0x8 );
