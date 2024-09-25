#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gpuclockdata_flags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GPUCLOCKDATA_FLAGS]
    // => WDK 10 (NV)
    //
    struct gpuclockdata_flags_t                    
    {                                              
        // WDK 10                                  
        //                                         
        _m00 uint1_t  context_management_processor;  //{ +0x0000@0  } | .ContextManagementProcessor
        _m01 uint32_t value;                         //{ +0x0000    } | .Value
                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_GPUCLOCKDATA_FLAGS.$", 0x0, false, 0xb24fb6a43f0fdd2c );                             
        SDK_FIXED_SIZE( gpuclockdata_flags_t, 0x4 );                             
    };                                             
};
#include "magic/gpuclockdata_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::gpuclockdata_flags_t, 0x4 );
