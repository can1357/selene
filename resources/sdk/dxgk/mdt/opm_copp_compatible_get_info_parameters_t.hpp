#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/guid_t.hpp"
#include "opm_random_number_t.hpp"

#include "magic/opm_copp_compatible_get_info_parameters_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct opm_copp_compatible_get_info_parameters_t                  
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 struct dxgk::mdt::opm_random_number_t rn_random_number;    //{ +0x0000    } | .rnRandomNumber
        _m01 struct nt::guid_t                     guid_information;    //{ +0x0010    } | .guidInformation
        _m02 uint32_t                              ul_sequence_number;  //{ +0x0020    } | .ulSequenceNumber
        _m03 uint32_t                              cb_parameters_size;  //{ +0x0024    } | .cbParametersSize
        _m04 sdk::array<uint8_t, 4056>             ab_parameters;       //{ +0x0028    } | .abParameters
                                                                      
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS.$", 0x0, false, 0xba5c6abf128762aa );                   
        SDK_FIXED_SIZE( opm_copp_compatible_get_info_parameters_t, 0x1000 );                   
    };                                                                
};
#include "magic/opm_copp_compatible_get_info_parameters_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_copp_compatible_get_info_parameters_t, 0x1000 );
