#pragma once
#include <sdkgen/support_library.hpp>
#include "opm_random_number_t.hpp"
#include "opm_hdcp_key_selection_vector_t.hpp"

#include "magic/opm_connected_hdcp_device_information_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_CONNECTED_HDCP_DEVICE_INFORMATION]
    // => WDK 10 (NV)
    //
    struct opm_connected_hdcp_device_information_t                  
    {                                                               
        using ksv_b_t = struct dxgk::mdt::opm_hdcp_key_selection_vector_t;                 
                                                                    
        // WDK 10                                                   
        //                                                          
        _m00 struct dxgk::mdt::opm_random_number_t rn_random_number;  //{ +0x0000    } | .rnRandomNumber
        _m01 uint32_t                              ul_status_flags;   //{ +0x0010    } | .ulStatusFlags
        _m02 uint32_t                              ul_hdcp_flags;     //{ +0x0014    } | .ulHDCPFlags
        _m03 ksv_b_t                               ksv_b;             //{ +0x0018    } | .ksvB
                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_CONNECTED_HDCP_DEVICE_INFORMATION.$", 0x0, false, 0xfd1b71612df4ae13 );                 
        SDK_FIXED_SIZE( opm_connected_hdcp_device_information_t, 0x48 );                 
    };                                                              
};
#include "magic/opm_connected_hdcp_device_information_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_connected_hdcp_device_information_t, 0x48 );
