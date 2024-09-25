#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sectionbasicinfo_t.start.hpp"
namespace win
{
    // [struct _SECTIONBASICINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sectionbasicinfo_t               
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 void*    base_address;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddress
        _m01 uint32_t allocation_attributes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocationAttributes
        _m02 int64_t  maximum_size;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumSize
                                            
        SDK_MAGIC_PROPERTIES( "_SECTIONBASICINFO.$", 0x18, true, 0x25a53fb9fa68d26c );                      
        SDK_FIXED_SIZE( sectionbasicinfo_t, 0x18 );                      
    };                                      
};
#include "magic/sectionbasicinfo_t.end.hpp"
SDK_VERIFY( struct win::sectionbasicinfo_t, 0x18 );
