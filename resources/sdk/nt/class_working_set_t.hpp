#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/class_working_set_t.start.hpp"
namespace nt
{
    // [struct _CLASS_WORKING_SET]
    // => WDK 10 (NV)
    //
    struct class_working_set_t                         
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 uint32_t size;                              //{ +0x0000    } | .Size
        _m01 uint32_t xfer_packets_working_set_maximum;  //{ +0x0004    } | .XferPacketsWorkingSetMaximum
        _m02 uint32_t xfer_packets_working_set_minimum;  //{ +0x0008    } | .XferPacketsWorkingSetMinimum
                                                       
        SDK_NONVOL_PROPERTIES( "_CLASS_WORKING_SET.$", 0x0, false, 0xc9033e1d3a2523a9 );                                 
        SDK_FIXED_SIZE( class_working_set_t, 0xc );                                 
    };                                                 
};
#include "magic/class_working_set_t.end.hpp"
SDK_VERIFY( struct nt::class_working_set_t, 0xc );
