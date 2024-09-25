#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk      { struct virtualgpudriverescape_t; }
namespace dxgk::arg { struct createvirtualgpu_t;       }
namespace dxgk::arg { struct destroyvirtualgpu_t;      }
namespace dxgk::arg { struct getgpuengines_t;          }
namespace dxgk::arg { struct getgpupartitioninfo_t;    }
namespace dxgk::arg { struct getvirtualgpuinfo_t;      }
namespace dxgk::arg { struct getvirtualgpuprofile_t;   }
namespace dxgk::arg { struct resumevirtualgpu_t;       }
namespace dxgk::arg { struct setgpupartitioncount_t;   }
namespace dxgk::arg { struct setvirtualgpuresources_t; }
namespace dxgk::arg { struct setvirtualgpuvmbus_t;     }
namespace dxgk::arg { struct suspendvirtualgpu_t;      }

#include "magic/gpu_partition_interface_t.start.hpp"
namespace dxgk::ddi
{
    // [struct _DXGKDDI_GPU_PARTITION_INTERFACE]
    // => WDK 10 (NV)
    //
    struct gpu_partition_interface_t                                               
    {                                                                              
        using pdxgkddi_getgpupartitioninfo_t =    sdk::function<int32_t(void*, struct dxgk::arg::getgpupartitioninfo_t*)>*;                                   
        using pdxgkddi_setgpupartitioncount_t =   sdk::function<int32_t(void*, struct dxgk::arg::setgpupartitioncount_t*)>*;                                   
        using pdxgkddi_getgpuengines_t =          sdk::function<int32_t(void*, struct dxgk::arg::getgpuengines_t*)>*;                                   
        using pdxgkddi_getvirtualgpuprofile_t =   sdk::function<int32_t(void*, struct dxgk::arg::getvirtualgpuprofile_t*)>*;                                   
        using pdxgkddi_createvirtualgpu_t =       sdk::function<int32_t(void*, struct dxgk::arg::createvirtualgpu_t*)>*;                                   
        using pdxgkddi_getvirtualgpuinfo_t =      sdk::function<int32_t(void*, struct dxgk::arg::getvirtualgpuinfo_t*)>*;                                   
        using pdxgkddi_setvirtualgpuresources_t = sdk::function<int32_t(void*, struct dxgk::arg::setvirtualgpuresources_t*)>*;                                   
        using pdxgkddi_destroyvirtualgpu_t =      sdk::function<int32_t(void*, struct dxgk::arg::destroyvirtualgpu_t*)>*;                                   
        using pdxgkddi_suspendvirtualgpu_t =      sdk::function<int32_t(void*, struct dxgk::arg::suspendvirtualgpu_t*)>*;                                   
        using pdxgkddi_resumevirtualgpu_t =       sdk::function<int32_t(void*, struct dxgk::arg::resumevirtualgpu_t*)>*;                                   
        using pdxgkddi_virtualgpudriverescape_t = sdk::function<int32_t(void*, struct dxgk::virtualgpudriverescape_t*)>*;                                   
        using pdxgkddi_setvirtualgpuvmbus_t =     sdk::function<int32_t(void*, struct dxgk::arg::setvirtualgpuvmbus_t*)>*;                                   
                                                                                   
        // WDK 10                                                                  
        //                                                                         
        _m00 uint16_t                           size;                                //{ +0x0000    } | .Size
        _m01 uint16_t                           version;                             //{ +0x0002    } | .Version
        _m02 void*                              context;                             //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*        interface_reference;                 //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*        interface_dereference;               //{ +0x0018    } | .InterfaceDereference
        _m05 pdxgkddi_getgpupartitioninfo_t     dxgk_ddi_get_gpu_partition_info;     //{ +0x0020    } | .DxgkDdiGetGpuPartitionInfo
        _m06 pdxgkddi_setgpupartitioncount_t    dxgk_ddi_set_gpu_partition_count;    //{ +0x0028    } | .DxgkDdiSetGpuPartitionCount
        _m07 pdxgkddi_getgpuengines_t           dxgk_ddi_get_gpu_engines;            //{ +0x0030    } | .DxgkDdiGetGpuEngines
        _m08 pdxgkddi_getvirtualgpuprofile_t    dxgk_ddi_get_virtual_gpu_profile;    //{ +0x0038    } | .DxgkDdiGetVirtualGpuProfile
        _m09 pdxgkddi_createvirtualgpu_t        dxgk_ddi_create_virtual_gpu;         //{ +0x0040    } | .DxgkDdiCreateVirtualGpu
        _m10 pdxgkddi_getvirtualgpuinfo_t       dxgk_ddi_get_virtual_gpu_info;       //{ +0x0048    } | .DxgkDdiGetVirtualGpuInfo
        _m11 pdxgkddi_setvirtualgpuresources_t  dxgk_ddi_set_virtual_gpu_resources;  //{ +0x0050    } | .DxgkDdiSetVirtualGpuResources
        _m12 pdxgkddi_destroyvirtualgpu_t       dxgk_ddi_destroy_virtual_gpu;        //{ +0x0058    } | .DxgkDdiDestroyVirtualGpu
        _m13 pdxgkddi_suspendvirtualgpu_t       dxgk_ddi_suspend_virtual_gpu;        //{ +0x0060    } | .DxgkDdiSuspendVirtualGpu
        _m14 pdxgkddi_resumevirtualgpu_t        dxgk_ddi_resume_virtual_gpu;         //{ +0x0068    } | .DxgkDdiResumeVirtualGpu
        _m15 pdxgkddi_virtualgpudriverescape_t  dxgk_ddi_virtual_gpu_driver_escape;  //{ +0x0070    } | .DxgkDdiVirtualGpuDriverEscape
        _m16 pdxgkddi_setvirtualgpuvmbus_t      dxgk_ddi_set_virtual_gpu_vm_bus;     //{ +0x0078    } | .DxgkDdiSetVirtualGpuVmBus
                                                                                   
        SDK_NONVOL_PROPERTIES( "_DXGKDDI_GPU_PARTITION_INTERFACE.$", 0x0, false, 0x1e737d05152081b8 );                                   
        SDK_FIXED_SIZE( gpu_partition_interface_t, 0x80 );                                   
    };                                                                             
};
#include "magic/gpu_partition_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::ddi::gpu_partition_interface_t, 0x80 );
