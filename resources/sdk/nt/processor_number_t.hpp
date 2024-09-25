#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_number_t.start.hpp"
namespace nt
{
    // [struct _PROCESSOR_NUMBER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct processor_number_t
    {                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint16_t group;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Group
        _m01 uint8_t  number;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Number
                             
        SDK_NONVOL_PROPERTIES( "_PROCESSOR_NUMBER.$", 0x4, true, 0x59be76aabe2407eb );       
        SDK_FIXED_SIZE( processor_number_t, 0x4 );       
    };                       
};
#include "magic/processor_number_t.end.hpp"
SDK_VERIFY( struct nt::processor_number_t, 0x4 );
