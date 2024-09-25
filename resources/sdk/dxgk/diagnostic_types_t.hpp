#pragma once
#include <sdkgen/support_library.hpp>
#include "diagtype_progressions_t.hpp"
#include "diagtype_notifications_t.hpp"

#include "magic/diagnostic_types_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DIAGNOSTIC_TYPES]
    // => WDK 10 (NV)
    //
    struct diagnostic_types_t                                    
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 struct dxgk::diagtype_notifications_t notifications;  //{ +0x0000    } | .Notifications
        _m01 struct dxgk::diagtype_progressions_t  progressions;   //{ +0x0000    } | .Progressions
        _m02 uint32_t                              value;          //{ +0x0000    } | .Value
                                                                 
        SDK_NONVOL_PROPERTIES( "_DXGK_DIAGNOSTIC_TYPES.$", 0x0, false, 0x54119327cfbcd8cf );              
        SDK_FIXED_SIZE( diagnostic_types_t, 0x4 );               
    };                                                           
};
#include "magic/diagnostic_types_t.end.hpp"
SDK_VERIFY( struct dxgk::diagnostic_types_t, 0x4 );
