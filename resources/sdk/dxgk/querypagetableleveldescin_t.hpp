#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/querypagetableleveldescin_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_QUERYPAGETABLELEVELDESCIN]
    // => WDK 10 (NV)
    //
    struct querypagetableleveldescin_t       
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint16_t level_index;             //{ +0x0000    } | .LevelIndex
        _m01 uint16_t physical_adapter_index;  //{ +0x0002    } | .PhysicalAdapterIndex
                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYPAGETABLELEVELDESCIN.$", 0x0, false, 0x483ea0aab0e2b31b );                       
        SDK_FIXED_SIZE( querypagetableleveldescin_t, 0x4 );                       
    };                                       
};
#include "magic/querypagetableleveldescin_t.end.hpp"
SDK_VERIFY( struct dxgk::querypagetableleveldescin_t, 0x4 );
