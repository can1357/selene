#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/as_pdc_phase_blocker_group_t.start.hpp"
namespace wdf
{
    // [struct _AsPdcPhaseBlockerGroup]
    // => Windows 11
    //
    struct as_pdc_phase_blocker_group_t       
    {                                         
        // Windows 11                         
        //                                    
        _m00 uint32_t blocker_group_signature;  //{ +0x0000    } | .BlockerGroupSignature
        _m01 uint8_t  blocker_group_desc;       //{ +0x0004    } | .BlockerGroupDesc
                                              
        SDK_MAGIC_PROPERTIES( "_AsPdcPhaseBlockerGroup.$", 0x0, false, 0x7906431f206716f );                        
        SDK_FIXED_SIZE( as_pdc_phase_blocker_group_t, 0x10 );                        
    };                                        
};
#include "magic/as_pdc_phase_blocker_group_t.end.hpp"
SDK_VERIFY( struct wdf::as_pdc_phase_blocker_group_t, 0x10 );
