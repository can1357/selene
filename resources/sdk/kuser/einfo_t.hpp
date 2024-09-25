#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/einfo_t.start.hpp"
namespace kuser
{
    struct hobj_t;

    // [union _EINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union einfo_t                                     
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                            
        _m00 uint24_t              entry_index;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .entryIndex
        _m01 uint40_t              compatibility_bits;  //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .compatibilityBits
        _m02 struct kuser::hobj_t* h_free;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hFree
                                                      
        SDK_MAGIC_PROPERTIES( "_EINFO.$", 0x8, true, 0xc7053e2ef44bee13 );                   
        SDK_FIXED_SIZE( einfo_t, 0x8 );                   
    };                                                
};
#include "magic/einfo_t.end.hpp"
SDK_VERIFY( union kuser::einfo_t, 0x8 );
