#pragma once
#include <sdkgen/support_library.hpp>

namespace cm { struct resource_list_t; }
namespace nt { struct device_object_t; }

#include "magic/device_info_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DEVICE_INFO]
    // => WDK 10 (NV)
    //
    struct device_info_t                                                
    {                                                                   
        enum class u0_docking_state_t : int32_t                         
        {                                                               
            unsupported = 0x0,                                            // WDK 10
            un_docked =   0x1,                                            // WDK 10
            docked =      0x2,                                            // WDK 10
            unknown =     0x3,                                            // WDK 10
        };                                                              
                                                                        
        // WDK 10                                                       
        //                                                              
        _m00 void*                             miniport_device_context;   //{ +0x0000    } | .MiniportDeviceContext
        _m01 struct nt::device_object_t*       physical_device_object;    //{ +0x0008    } | .PhysicalDeviceObject
        _m02 nt::unicode_view                  device_registry_path;      //{ +0x0010    } | .DeviceRegistryPath
        _m03 struct cm::resource_list_t*       translated_resource_list;  //{ +0x0020    } | .TranslatedResourceList
        _m04 int64_t                           system_memory_size;        //{ +0x0028    } | .SystemMemorySize
        _m05 int64_t                           highest_physical_address;  //{ +0x0030    } | .HighestPhysicalAddress
        _m06 int64_t                           agp_aperture_base;         //{ +0x0038    } | .AgpApertureBase
        _m07 uint64_t                          agp_aperture_size;         //{ +0x0040    } | .AgpApertureSize
        _m08 u0_docking_state_t                docking_state;             //{ +0x0048    } | .DockingState
                                                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_DEVICE_INFO.$", 0x0, false, 0xb2e36db3cf6873b8 );                         
        SDK_FIXED_SIZE( device_info_t, 0x50 );                          
    };                                                                  
};
#include "magic/device_info_t.end.hpp"
SDK_VERIFY( struct dxgk::device_info_t, 0x50 );
