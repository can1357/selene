#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/querysegmentin4_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_QUERYSEGMENTIN4]
    // => WDK 10 (NV)
    //
    struct querysegmentin4_t                 
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYSEGMENTIN4.$", 0x0, false, 0x32f133a05f0d9567 );                       
        SDK_FIXED_SIZE( querysegmentin4_t, 0x4 );                       
    };                                       
};
#include "magic/querysegmentin4_t.end.hpp"
SDK_VERIFY( struct dxgk::querysegmentin4_t, 0x4 );
