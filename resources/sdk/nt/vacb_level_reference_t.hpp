#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vacb_level_reference_t.start.hpp"
namespace nt
{
    // [struct _VACB_LEVEL_REFERENCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vacb_level_reference_t      
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                             
        _m00 int32_t reference;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Reference
        _m01 int32_t special_reference;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SpecialReference
                                       
        SDK_MAGIC_PROPERTIES( "_VACB_LEVEL_REFERENCE.$", 0x8, true, 0x4f1c467ecb80c522 );                  
        SDK_FIXED_SIZE( vacb_level_reference_t, 0x8 );                  
    };                                 
};
#include "magic/vacb_level_reference_t.end.hpp"
SDK_VERIFY( struct nt::vacb_level_reference_t, 0x8 );
