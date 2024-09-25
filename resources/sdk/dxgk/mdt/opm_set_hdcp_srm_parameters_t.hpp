#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/opm_set_hdcp_srm_parameters_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_SET_HDCP_SRM_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct opm_set_hdcp_srm_parameters_t
    {                                   
        // WDK 10                    
        //                           
        _m00 uint32_t ul_srm_version;     //{ +0x0000    } | .ulSRMVersion
                                        
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_SET_HDCP_SRM_PARAMETERS.$", 0x0, false, 0x3aad636dc983b29a );               
        SDK_FIXED_SIZE( opm_set_hdcp_srm_parameters_t, 0x4 );               
    };                                  
};
#include "magic/opm_set_hdcp_srm_parameters_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_set_hdcp_srm_parameters_t, 0x4 );
