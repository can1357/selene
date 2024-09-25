#pragma once
#include <sdkgen/support_library.hpp>
#include "opm_omac_t.hpp"

#include "magic/opm_requested_information_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_REQUESTED_INFORMATION]
    // => WDK 10 (NV)
    //
    struct opm_requested_information_t                                  
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 struct dxgk::mdt::opm_omac_t omac;                           //{ +0x0000    } | .omac
        _m01 uint32_t                     cb_requested_information_size;  //{ +0x0010    } | .cbRequestedInformationSize
        _m02 sdk::array<uint8_t, 4076>    ab_requested_information;       //{ +0x0014    } | .abRequestedInformation
                                                                        
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_REQUESTED_INFORMATION.$", 0x0, false, 0xc406c0f95896a98e );                              
        SDK_FIXED_SIZE( opm_requested_information_t, 0x1000 );                              
    };                                                                  
};
#include "magic/opm_requested_information_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_requested_information_t, 0x1000 );
