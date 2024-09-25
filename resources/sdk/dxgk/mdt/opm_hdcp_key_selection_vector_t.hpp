#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/opm_hdcp_key_selection_vector_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_HDCP_KEY_SELECTION_VECTOR]
    // => WDK 10 (NV)
    //
    struct opm_hdcp_key_selection_vector_t                  
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 sdk::array<uint8_t, 5> ab_key_selection_vector;  //{ +0x0000    } | .abKeySelectionVector
                                                            
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_HDCP_KEY_SELECTION_VECTOR.$", 0x0, false, 0xe2ea0b551635202e );                        
        SDK_FIXED_SIZE( opm_hdcp_key_selection_vector_t, 0x5 );                        
    };                                                      
};
#include "magic/opm_hdcp_key_selection_vector_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_hdcp_key_selection_vector_t, 0x5 );
