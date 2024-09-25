#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usage_properties_t.start.hpp"
namespace tag
{
    // [struct tagUSAGE_PROPERTIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usage_properties_t          
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint16_t level;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .level
        _m01 uint16_t page;              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .page
        _m02 uint16_t usage;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .usage
        _m03 int32_t  logical_minimum;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .logicalMinimum
        _m04 int32_t  logical_maximum;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .logicalMaximum
        _m05 uint16_t unit;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .unit
        _m06 uint16_t exponent;          //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .exponent
        _m07 uint8_t  count;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .count
        _m08 int32_t  physical_minimum;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .physicalMinimum
        _m09 int32_t  physical_maximum;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .physicalMaximum
                                       
        SDK_MAGIC_PROPERTIES( "tagUSAGE_PROPERTIES.$", 0x20, true, 0xa6fae52e10f24928 );                 
        SDK_FIXED_SIZE( usage_properties_t, 0x20 );                 
    };                                 
};
#include "magic/usage_properties_t.end.hpp"
SDK_VERIFY( struct tag::usage_properties_t, 0x20 );
