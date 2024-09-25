#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/as_pdc_phase_blocker_group_client_t.start.hpp"
namespace wdf
{
    // [struct _AsPdcPhaseBlockerGroupClient]
    // => Windows 11
    //
    struct as_pdc_phase_blocker_group_client_t
    {                                         
        // Windows 11                         
        //                                    
        _m00 uint32_t blocker_group_signature;  //{ +0x0000    } | .BlockerGroupSignature
        _m01 uint8_t  blocker_group_desc;       //{ +0x0004    } | .BlockerGroupDesc
        _m02 uint32_t client_id;                //{ +0x0008    } | .ClientId
                                              
        SDK_MAGIC_PROPERTIES( "_AsPdcPhaseBlockerGroupClient.$", 0x0, false, 0x982f50749fd52a3b );                        
        SDK_FIXED_SIZE( as_pdc_phase_blocker_group_client_t, 0x10 );                        
    };                                        
};
#include "magic/as_pdc_phase_blocker_group_client_t.end.hpp"
SDK_VERIFY( struct wdf::as_pdc_phase_blocker_group_client_t, 0x10 );
