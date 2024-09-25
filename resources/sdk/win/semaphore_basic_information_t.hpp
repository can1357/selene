#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/semaphore_basic_information_t.start.hpp"
namespace win
{
    // [struct _SEMAPHORE_BASIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct semaphore_basic_information_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                         
        _m00 int32_t current_count;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentCount
        _m01 int32_t maximum_count;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaximumCount
                                        
        SDK_MAGIC_PROPERTIES( "_SEMAPHORE_BASIC_INFORMATION.$", 0x8, true, 0x73d007594f29e0af );              
        SDK_FIXED_SIZE( semaphore_basic_information_t, 0x8 );              
    };                                  
};
#include "magic/semaphore_basic_information_t.end.hpp"
SDK_VERIFY( struct win::semaphore_basic_information_t, 0x8 );
