#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trimresidencyset_flags_t.start.hpp"
namespace d3d::ddi
{
    // [struct D3DDDI_TRIMRESIDENCYSET_FLAGS]
    // => WDK 10 (NV)
    //
    struct trimresidencyset_flags_t         
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint1_t  periodic_trim;          //{ +0x0000@0  } | .PeriodicTrim
        _m01 uint1_t  restart_periodic_trim;  //{ +0x0000@1  } | .RestartPeriodicTrim
        _m02 uint1_t  trim_to_budget;         //{ +0x0000@2  } | .TrimToBudget
        _m03 uint32_t value;                  //{ +0x0000    } | .Value
                                            
        SDK_NONVOL_PROPERTIES( "D3DDDI_TRIMRESIDENCYSET_FLAGS.$", 0x0, false, 0x581ef52a5c4f4375 );                      
        SDK_FIXED_SIZE( trimresidencyset_flags_t, 0x4 );                      
    };                                      
};
#include "magic/trimresidencyset_flags_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::trimresidencyset_flags_t, 0x4 );
