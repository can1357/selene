#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vp_device_description_t.start.hpp"
namespace nt
{
    // [struct _VP_DEVICE_DESCRIPTION]
    // => WDK 10 (NV)
    //
    struct vp_device_description_t        
    {                                     
        // WDK 10                         
        //                                
        _m00 uint8_t  scatter_gather;       //{ +0x0000    } | .ScatterGather
        _m01 uint8_t  dma32_bit_addresses;  //{ +0x0001    } | .Dma32BitAddresses
        _m02 uint8_t  dma64_bit_addresses;  //{ +0x0002    } | .Dma64BitAddresses
        _m03 uint32_t maximum_length;       //{ +0x0004    } | .MaximumLength
                                          
        SDK_NONVOL_PROPERTIES( "_VP_DEVICE_DESCRIPTION.$", 0x0, false, 0xb8026e96937304a1 );                    
        SDK_FIXED_SIZE( vp_device_description_t, 0x8 );                    
    };                                    
};
#include "magic/vp_device_description_t.end.hpp"
SDK_VERIFY( struct nt::vp_device_description_t, 0x8 );
