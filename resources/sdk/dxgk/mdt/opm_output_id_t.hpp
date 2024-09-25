#pragma once
#include <sdkgen/support_library.hpp>
#include "opm_random_number_t.hpp"

#include "magic/opm_output_id_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_OUTPUT_ID]
    // => WDK 10 (NV)
    //
    struct opm_output_id_t                                          
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 struct dxgk::mdt::opm_random_number_t rn_random_number;  //{ +0x0000    } | .rnRandomNumber
        _m01 uint32_t                              ul_status_flags;   //{ +0x0010    } | .ulStatusFlags
        _m02 uint64_t                              output_id;         //{ +0x0014    } | .OutputId
                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_OUTPUT_ID.$", 0x0, false, 0x4d37aae5c1f1ad38 );                 
        SDK_FIXED_SIZE( opm_output_id_t, 0x1c );                    
    };                                                              
};
#include "magic/opm_output_id_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_output_id_t, 0x1c );
