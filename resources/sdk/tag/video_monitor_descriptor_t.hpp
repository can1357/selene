#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/video_monitor_descriptor_t.start.hpp"
namespace tag
{
    // [struct tagVIDEO_MONITOR_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct video_monitor_descriptor_t               
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint32_t               descriptor_size;  //{ +0x0000    } | .DescriptorSize
        _m01 sdk::array<uint8_t, 1> descriptor;       //{ +0x0004    } | .Descriptor
                                                    
        SDK_NONVOL_PROPERTIES( "tagVIDEO_MONITOR_DESCRIPTOR.$", 0x0, false, 0xe6c519eaf286217e );                
        SDK_FIXED_SIZE( video_monitor_descriptor_t, 0x8 );                
    };                                              
};
#include "magic/video_monitor_descriptor_t.end.hpp"
SDK_VERIFY( struct tag::video_monitor_descriptor_t, 0x8 );
