#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mutant_basic_information_t.start.hpp"
namespace win
{
    // [struct _MUTANT_BASIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mutant_basic_information_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                           
        _m00 int32_t current_count;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentCount
        _m01 uint8_t owned_by_caller;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OwnedByCaller
        _m02 uint8_t abandoned_state;  //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .AbandonedState
                                     
        SDK_MAGIC_PROPERTIES( "_MUTANT_BASIC_INFORMATION.$", 0x8, true, 0x348cf4e654c1b6b4 );                
        SDK_FIXED_SIZE( mutant_basic_information_t, 0x8 );                
    };                               
};
#include "magic/mutant_basic_information_t.end.hpp"
SDK_VERIFY( struct win::mutant_basic_information_t, 0x8 );
