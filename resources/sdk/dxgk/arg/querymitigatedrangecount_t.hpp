#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/querymitigatedrangecount_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_QUERYMITIGATEDRANGECOUNT]
    // => WDK 10 (NV)
    //
    struct querymitigatedrangecount_t                       
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 uint32_t                virtual_function_index;  //{ +0x0000    } | .VirtualFunctionIndex
        _m01 sdk::array<uint32_t, 6> range_count;             //{ +0x0004    } | .RangeCount
                                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARG_QUERYMITIGATEDRANGECOUNT.$", 0x0, false, 0x26f3961c73dd702d );                       
        SDK_FIXED_SIZE( querymitigatedrangecount_t, 0x1c );                       
    };                                                      
};
#include "magic/querymitigatedrangecount_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::querymitigatedrangecount_t, 0x1c );
