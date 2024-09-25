#pragma once
#include <sdkgen/support_library.hpp>
#include "cr_event_t.hpp"

namespace mx { class device_object_t; }

#include "magic/usage_workitem_parameters_t.start.hpp"
namespace fx
{
    class irp_t;

    // [struct FxUsageWorkitemParameters]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usage_workitem_parameters_t                 
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                             
        _m00 class mx::device_object_t* related_device;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RelatedDevice
        _m01 class fx::irp_t*           related_irp;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RelatedIrp
        _m02 class fx::irp_t*           original_irp;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OriginalIrp
        _m03 uint8_t                    revert;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Revert
        _m04 struct fx::cr_event_t      event;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Event
        _m05 int32_t                    status;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Status
                                                       
        SDK_MAGIC_PROPERTIES( "FxUsageWorkitemParameters.$", 0x48, true, 0xac4fc068be1a0188 );               
        SDK_FIXED_SIZE( usage_workitem_parameters_t, 0x48 );               
    };                                                 
};
#include "magic/usage_workitem_parameters_t.end.hpp"
SDK_VERIFY( struct fx::usage_workitem_parameters_t, 0x48 );
