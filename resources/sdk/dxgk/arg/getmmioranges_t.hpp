#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk { struct mmiorangeinfo_t; }

#include "magic/getmmioranges_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETMMIORANGES]
    // => WDK 10 (NV)
    //
    struct getmmioranges_t                                        
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 uint32_t                      virtual_function_index;  //{ +0x0000    } | .VirtualFunctionIndex
        _m01 uint32_t                      bar_index;               //{ +0x0004    } | .BarIndex
        _m02 uint32_t                      num_ranges;              //{ +0x0008    } | .NumRanges
        _m03 struct dxgk::mmiorangeinfo_t* p_mmio_ranges;           //{ +0x0010    } | .pMmioRanges
                                                                  
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETMMIORANGES.$", 0x0, false, 0xf327d20d2b5ec5d7 );                       
        SDK_FIXED_SIZE( getmmioranges_t, 0x18 );                       
    };                                                            
};
#include "magic/getmmioranges_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getmmioranges_t, 0x18 );
