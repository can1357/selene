#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setupprioritybands_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETUPPRIORITYBANDS]
    // => WDK 10 (NV)
    //
    struct setupprioritybands_t                                    
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 sdk::array<uint64_t, 4> grace_period_for_band;          //{ +0x0000    } | .gracePeriodForBand
        _m01 sdk::array<uint64_t, 4> process_quantum_for_band;       //{ +0x0020    } | .processQuantumForBand
        _m02 sdk::array<uint64_t, 4> process_grace_period_for_band;  //{ +0x0040    } | .processGracePeriodForBand
        _m03 uint32_t                target_normal_band_percentage;  //{ +0x0060    } | .targetNormalBandPercentage
                                                                   
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETUPPRIORITYBANDS.$", 0x0, false, 0x3ec4d4587edcd880 );                              
        SDK_FIXED_SIZE( setupprioritybands_t, 0x68 );                              
    };                                                             
};
#include "magic/setupprioritybands_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setupprioritybands_t, 0x68 );
