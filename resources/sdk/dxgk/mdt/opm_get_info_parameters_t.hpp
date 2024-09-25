#pragma once
#include <sdkgen/support_library.hpp>
#include "opm_omac_t.hpp"
#include "../../nt/guid_t.hpp"
#include "opm_random_number_t.hpp"

#include "magic/opm_get_info_parameters_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_GET_INFO_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct opm_get_info_parameters_t                                  
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 struct dxgk::mdt::opm_omac_t          omac;                //{ +0x0000    } | .omac
        _m01 struct dxgk::mdt::opm_random_number_t rn_random_number;    //{ +0x0010    } | .rnRandomNumber
        _m02 struct nt::guid_t                     guid_information;    //{ +0x0020    } | .guidInformation
        _m03 uint32_t                              ul_sequence_number;  //{ +0x0030    } | .ulSequenceNumber
        _m04 uint32_t                              cb_parameters_size;  //{ +0x0034    } | .cbParametersSize
        _m05 sdk::array<uint8_t, 4056>             ab_parameters;       //{ +0x0038    } | .abParameters
                                                                      
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_GET_INFO_PARAMETERS.$", 0x0, false, 0x276c3a0ab5cec37d );                   
        SDK_FIXED_SIZE( opm_get_info_parameters_t, 0x1010 );                   
    };                                                                
};
#include "magic/opm_get_info_parameters_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_get_info_parameters_t, 0x1010 );
