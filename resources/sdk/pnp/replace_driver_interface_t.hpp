#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/replace_driver_interface_t.start.hpp"
namespace pnp
{
    struct replace_parameters_t;

    // [struct _PNP_REPLACE_DRIVER_INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct replace_driver_interface_t                                                         
    {                                                                                         
        using preplace_begin_t =                  sdk::function<int32_t(struct pnp::replace_parameters_t*, void**)>*;                                
        using preplace_set_processor_id_t =       sdk::function<int32_t(void*, uint32_t, uint8_t)>*;                                
        using preplace_get_memory_destination_t = sdk::function<int32_t(void*, int64_t, int64_t*)>*;                                
                                                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                                    
        _m00 uint32_t                                         size;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                                         version;                          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m02 uint32_t                                         flags;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 sdk::function<void()>*                           unload;                           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Unload
        _m04 preplace_begin_t                                 begin_replace;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .BeginReplace
        _m05 sdk::function<int32_t(void*)>*                   end_replace;                      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .EndReplace
        _m06 sdk::function<int32_t(void*, int64_t, int64_t)>* mirror_physical_memory;           //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .MirrorPhysicalMemory
        _m07 preplace_set_processor_id_t                      set_processor_id;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .SetProcessorId
        _m08 sdk::function<int32_t(void*)>*                   swap;                             //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .Swap
        _m09 sdk::function<int32_t(void*)>*                   initiate_hardware_mirror;         //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .InitiateHardwareMirror
        _m10 sdk::function<int32_t(void*)>*                   mirror_platform_memory;           //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .MirrorPlatformMemory
        _m11 preplace_get_memory_destination_t                get_memory_destination;           //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .GetMemoryDestination
        _m12 sdk::function<int32_t(void*, uint8_t)>*          enable_disable_hardware_quiesce;  //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .EnableDisableHardwareQuiesce
                                                                                              
        SDK_NONVOL_PROPERTIES( "_PNP_REPLACE_DRIVER_INTERFACE.$", 0x60, true, 0x93173a615922f975 );                                
        SDK_FIXED_SIZE( replace_driver_interface_t, 0x60 );                                   
    };                                                                                        
};
#include "magic/replace_driver_interface_t.end.hpp"
SDK_VERIFY( struct pnp::replace_driver_interface_t, 0x60 );
