#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getmmiorangecount_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETMMIORANGECOUNT]
    // => WDK 10 (NV)
    //
    struct getmmiorangecount_t                              
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 uint32_t                virtual_function_index;  //{ +0x0000    } | .VirtualFunctionIndex
        _m01 sdk::array<uint32_t, 6> range_count;             //{ +0x0004    } | .RangeCount
                                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETMMIORANGECOUNT.$", 0x0, false, 0x143bfaa08ffd2555 );                       
        SDK_FIXED_SIZE( getmmiorangecount_t, 0x1c );                       
    };                                                      
};
#include "magic/getmmiorangecount_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getmmiorangecount_t, 0x1c );
