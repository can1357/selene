#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"
#include "opm_video_output_semantics_t.hpp"

#include "magic/opm_create_video_output_for_target_parameters_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_CREATE_VIDEO_OUTPUT_FOR_TARGET_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct opm_create_video_output_for_target_parameters_t             
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 struct nt::luid_t                            adapter_luid;  //{ +0x0000    } | .AdapterLuid
        _m01 uint32_t                                     target_id;     //{ +0x0008    } | .TargetId
        _m02 enum dxgk::mdt::opm_video_output_semantics_t vos;           //{ +0x000c    } | .Vos
                                                                       
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_CREATE_VIDEO_OUTPUT_FOR_TARGET_PARAMETERS.$", 0x0, false, 0xbc126a906143509e );             
        SDK_FIXED_SIZE( opm_create_video_output_for_target_parameters_t, 0x10 );             
    };                                                                 
};
#include "magic/opm_create_video_output_for_target_parameters_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_create_video_output_for_target_parameters_t, 0x10 );
