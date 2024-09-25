#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_exhaustion_type_t.hpp"

#include "magic/memory_exhaustion_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_EXHAUSTION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_exhaustion_information_t              
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                              
        _m00 uint16_t                           version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 enum win::memory_exhaustion_type_t type;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m02 uint64_t                           value;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Value
                                                        
        SDK_MAGIC_PROPERTIES( "_MEMORY_EXHAUSTION_INFORMATION.$", 0x10, true, 0x45d223cdd280f143 );        
        SDK_FIXED_SIZE( memory_exhaustion_information_t, 0x10 );        
    };                                                  
};
#include "magic/memory_exhaustion_information_t.end.hpp"
SDK_VERIFY( struct win::memory_exhaustion_information_t, 0x10 );
