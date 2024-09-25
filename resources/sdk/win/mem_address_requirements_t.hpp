#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mem_address_requirements_t.start.hpp"
namespace win
{
    // [struct _MEM_ADDRESS_REQUIREMENTS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mem_address_requirements_t         
    {                                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 void*    lowest_starting_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LowestStartingAddress
        _m01 void*    highest_ending_address;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HighestEndingAddress
        _m02 uint64_t alignment;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Alignment
                                              
        SDK_NONVOL_PROPERTIES( "_MEM_ADDRESS_REQUIREMENTS.$", 0x18, true, 0x69b8c3e17c1ee0a9 );                        
        SDK_FIXED_SIZE( mem_address_requirements_t, 0x18 );                        
    };                                        
};
#include "magic/mem_address_requirements_t.end.hpp"
SDK_VERIFY( struct win::mem_address_requirements_t, 0x18 );
