#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/opm_omac_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_OMAC]
    // => WDK 10 (NV)
    //
    struct opm_omac_t                        
    {                                        
        // WDK 10                            
        //                                   
        _m00 sdk::array<uint8_t, 16> ab_omac;  //{ +0x0000    } | .abOMAC
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_OMAC.$", 0x0, false, 0xde8d457e2c375522 );        
        SDK_FIXED_SIZE( opm_omac_t, 0x10 );        
    };                                       
};
#include "magic/opm_omac_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_omac_t, 0x10 );
