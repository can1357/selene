#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_descriptor_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DEVICE_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct device_descriptor_t          
    {                                   
        // WDK 10                       
        //                              
        _m00 uint32_t descriptor_offset;  //{ +0x0000    } | .DescriptorOffset
        _m01 uint32_t descriptor_length;  //{ +0x0004    } | .DescriptorLength
        _m02 void*    descriptor_buffer;  //{ +0x0008    } | .DescriptorBuffer
                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_DEVICE_DESCRIPTOR.$", 0x0, false, 0x28aa9499855fe186 );                  
        SDK_FIXED_SIZE( device_descriptor_t, 0x10 );                  
    };                                  
};
#include "magic/device_descriptor_t.end.hpp"
SDK_VERIFY( struct dxgk::device_descriptor_t, 0x10 );
