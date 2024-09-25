#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/opm_random_number_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_RANDOM_NUMBER]
    // => WDK 10 (NV)
    //
    struct opm_random_number_t                        
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 sdk::array<uint8_t, 16> ab_random_number;  //{ +0x0000    } | .abRandomNumber
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_RANDOM_NUMBER.$", 0x0, false, 0x545aacac7a3fce31 );                 
        SDK_FIXED_SIZE( opm_random_number_t, 0x10 );                 
    };                                                
};
#include "magic/opm_random_number_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_random_number_t, 0x10 );
