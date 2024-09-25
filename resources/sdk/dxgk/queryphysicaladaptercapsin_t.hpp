#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/queryphysicaladaptercapsin_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_QUERYPHYSICALADAPTERCAPSIN]
    // => WDK 10 (NV)
    //
    struct queryphysicaladaptercapsin_t      
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYPHYSICALADAPTERCAPSIN.$", 0x0, false, 0x285eb6a2d18596d6 );                       
        SDK_FIXED_SIZE( queryphysicaladaptercapsin_t, 0x4 );                       
    };                                       
};
#include "magic/queryphysicaladaptercapsin_t.end.hpp"
SDK_VERIFY( struct dxgk::queryphysicaladaptercapsin_t, 0x4 );
