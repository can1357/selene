#pragma once
#include <sdkgen/support_library.hpp>
#include "opm_omac_t.hpp"
#include "../../nt/guid_t.hpp"

#include "magic/opm_configure_parameters_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct opm_configure_parameters_t                        
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 struct dxgk::mdt::opm_omac_t omac;                //{ +0x0000    } | .omac
        _m01 struct nt::guid_t            guid_setting;        //{ +0x0010    } | .guidSetting
        _m02 uint32_t                     ul_sequence_number;  //{ +0x0020    } | .ulSequenceNumber
        _m03 uint32_t                     cb_parameters_size;  //{ +0x0024    } | .cbParametersSize
        _m04 sdk::array<uint8_t, 4056>    ab_parameters;       //{ +0x0028    } | .abParameters
                                                             
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_CONFIGURE_PARAMETERS.$", 0x0, false, 0x4895e524053297e );                   
        SDK_FIXED_SIZE( opm_configure_parameters_t, 0x1000 );                   
    };                                                       
};
#include "magic/opm_configure_parameters_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_configure_parameters_t, 0x1000 );
