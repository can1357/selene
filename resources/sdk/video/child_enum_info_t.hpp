#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/child_enum_info_t.start.hpp"
namespace video
{
    // [struct _VIDEO_CHILD_ENUM_INFO]
    // => WDK 10 (NV)
    //
    struct child_enum_info_t                    
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint32_t size;                       //{ +0x0000    } | .Size
        _m01 uint32_t child_descriptor_size;      //{ +0x0004    } | .ChildDescriptorSize
        _m02 uint32_t child_index;                //{ +0x0008    } | .ChildIndex
        _m03 uint32_t acpi_hw_id;                 //{ +0x000c    } | .ACPIHwId
        _m04 void*    child_hw_device_extension;  //{ +0x0010    } | .ChildHwDeviceExtension
                                                
        SDK_NONVOL_PROPERTIES( "_VIDEO_CHILD_ENUM_INFO.$", 0x0, false, 0x34620e14ca2a9402 );                          
        SDK_FIXED_SIZE( child_enum_info_t, 0x18 );                          
    };                                          
};
#include "magic/child_enum_info_t.end.hpp"
SDK_VERIFY( struct video::child_enum_info_t, 0x18 );
