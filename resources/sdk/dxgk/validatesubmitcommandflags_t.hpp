#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/validatesubmitcommandflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VALIDATESUBMITCOMMANDFLAGS]
    // => WDK 10 (NV)
    //
    struct validatesubmitcommandflags_t         
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint1_t  hardware_queue_submission;  //{ +0x0000@0  } | .HardwareQueueSubmission
        _m01 uint32_t value;                      //{ +0x0000    } | .Value
                                                
        SDK_NONVOL_PROPERTIES( "_DXGK_VALIDATESUBMITCOMMANDFLAGS.$", 0x0, false, 0xaaf9ca8029272aff );                          
        SDK_FIXED_SIZE( validatesubmitcommandflags_t, 0x4 );                          
    };                                          
};
#include "magic/validatesubmitcommandflags_t.end.hpp"
SDK_VERIFY( struct dxgk::validatesubmitcommandflags_t, 0x4 );
