#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pointer_device_property_t.start.hpp"
namespace tag
{
    // [struct tagPOINTER_DEVICE_PROPERTY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pointer_device_property_t
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 int32_t  logical_min;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .logicalMin
        _m01 int32_t  logical_max;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .logicalMax
        _m02 int32_t  physical_min;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .physicalMin
        _m03 int32_t  physical_max;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .physicalMax
        _m04 uint32_t unit;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .unit
        _m05 uint32_t unit_exponent;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .unitExponent
        _m06 uint16_t usage_page_id;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .usagePageId
        _m07 uint16_t usage_id;       //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .usageId
                                    
        SDK_MAGIC_PROPERTIES( "tagPOINTER_DEVICE_PROPERTY.$", 0x1c, true, 0x3d9dc50048c5193c );              
        SDK_FIXED_SIZE( pointer_device_property_t, 0x1c );              
    };                              
};
#include "magic/pointer_device_property_t.end.hpp"
SDK_VERIFY( struct tag::pointer_device_property_t, 0x1c );
