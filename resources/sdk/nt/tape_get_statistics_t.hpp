#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tape_get_statistics_t.start.hpp"
namespace nt
{
    // [struct _TAPE_GET_STATISTICS]
    // => WDK 10 (NV)
    //
    struct tape_get_statistics_t
    {                           
        // WDK 10               
        //                      
        _m00 uint32_t operation;  //{ +0x0000    } | .Operation
                                
        SDK_NONVOL_PROPERTIES( "_TAPE_GET_STATISTICS.$", 0x0, false, 0x72f887134c158357 );          
        SDK_FIXED_SIZE( tape_get_statistics_t, 0x4 );          
    };                          
};
#include "magic/tape_get_statistics_t.end.hpp"
SDK_VERIFY( struct nt::tape_get_statistics_t, 0x4 );
