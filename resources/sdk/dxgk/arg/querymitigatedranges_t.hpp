#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk { struct mitigatedrangeinfo_t; }

#include "magic/querymitigatedranges_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_QUERYMITIGATEDRANGES]
    // => WDK 10 (NV)
    //
    struct querymitigatedranges_t                                      
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 uint32_t                           virtual_function_index;  //{ +0x0000    } | .VirtualFunctionIndex
        _m01 uint32_t                           bar_index;               //{ +0x0004    } | .BarIndex
        _m02 uint32_t                           num_ranges;              //{ +0x0008    } | .NumRanges
        _m03 struct dxgk::mitigatedrangeinfo_t* p_mitigated_range;       //{ +0x0010    } | .pMitigatedRange
                                                                       
        SDK_NONVOL_PROPERTIES( "_DXGKARG_QUERYMITIGATEDRANGES.$", 0x0, false, 0x57cdd344e4f590f6 );                       
        SDK_FIXED_SIZE( querymitigatedranges_t, 0x18 );                       
    };                                                                 
};
#include "magic/querymitigatedranges_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::querymitigatedranges_t, 0x18 );
