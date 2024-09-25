#pragma once
#include <sdkgen/support_library.hpp>
#include "opm_random_number_t.hpp"

#include "magic/opm_standard_information_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_STANDARD_INFORMATION]
    // => WDK 10 (NV)
    //
    struct opm_standard_information_t                               
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 struct dxgk::mdt::opm_random_number_t rn_random_number;  //{ +0x0000    } | .rnRandomNumber
        _m01 uint32_t                              ul_status_flags;   //{ +0x0010    } | .ulStatusFlags
        _m02 uint32_t                              ul_information;    //{ +0x0014    } | .ulInformation
        _m03 uint32_t                              ul_reserved;       //{ +0x0018    } | .ulReserved
        _m04 uint32_t                              ul_reserved2;      //{ +0x001c    } | .ulReserved2
                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_STANDARD_INFORMATION.$", 0x0, false, 0x672fe164013d067f );                 
        SDK_FIXED_SIZE( opm_standard_information_t, 0x20 );                 
    };                                                              
};
#include "magic/opm_standard_information_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_standard_information_t, 0x20 );
