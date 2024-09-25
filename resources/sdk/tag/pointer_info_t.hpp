#pragma once
#include <sdkgen/support_library.hpp>
#include "point_t.hpp"
#include "pointer_button_change_type_t.hpp"

namespace win { struct hwnd_t; }

#include "magic/pointer_info_t.start.hpp"
namespace tag
{
    // [struct tagPOINTER_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pointer_info_t                                                    
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                   
        _m00 uint32_t                               pointer_type;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pointerType
        _m01 uint32_t                               pointer_id;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .pointerId
        _m02 uint32_t                               frame_id;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .frameId
        _m03 uint32_t                               pointer_flags;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .pointerFlags
        _m04 void*                                  source_device;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .sourceDevice
        _m05 struct win::hwnd_t*                    hwnd_target;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hwndTarget
        _m06 struct tag::point_t                    pt_pixel_location;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ptPixelLocation
        _m07 struct tag::point_t                    pt_himetric_location;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ptHimetricLocation
        _m08 struct tag::point_t                    pt_pixel_location_raw;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ptPixelLocationRaw
        _m09 struct tag::point_t                    pt_himetric_location_raw;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ptHimetricLocationRaw
        _m10 uint32_t                               dw_time;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .dwTime
        _m11 uint32_t                               history_count;             //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .historyCount
        _m12 int32_t                                input_data;                //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .InputData
        _m13 uint32_t                               dw_key_states;             //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .dwKeyStates
        _m14 uint64_t                               performance_count;         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .PerformanceCount
        _m15 enum tag::pointer_button_change_type_t button_change_type;        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ButtonChangeType
                                                                             
        SDK_MAGIC_PROPERTIES( "tagPOINTER_INFO.$", 0x60, true, 0x426621e370c9eab7 );                         
        SDK_FIXED_SIZE( pointer_info_t, 0x60 );                              
    };                                                                       
};
#include "magic/pointer_info_t.end.hpp"
SDK_VERIFY( struct tag::pointer_info_t, 0x60 );
