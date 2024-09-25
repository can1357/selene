#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/generic_descriptor_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GENERIC_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct generic_descriptor_t                    
    {                                              
        // WDK 10                                  
        //                                         
        _m00 sdk::array<wchar_t, 51> hardware_id;    //{ +0x0000    } | .HardwareId
        _m01 sdk::array<wchar_t, 51> instance_id;    //{ +0x0066    } | .InstanceId
        _m02 sdk::array<wchar_t, 51> compatible_id;  //{ +0x00cc    } | .CompatibleId
        _m03 sdk::array<wchar_t, 51> device_text;    //{ +0x0132    } | .DeviceText
                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_GENERIC_DESCRIPTOR.$", 0x0, false, 0xa2187fa0c8cf27e8 );              
        SDK_FIXED_SIZE( generic_descriptor_t, 0x198 );              
    };                                             
};
#include "magic/generic_descriptor_t.end.hpp"
SDK_VERIFY( struct dxgk::generic_descriptor_t, 0x198 );
