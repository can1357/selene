#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3dk/mdt/standardallocation_type_t.hpp"

namespace d3dk::mdt { struct gdisurfacedata_t;           }
namespace d3dk::mdt { struct shadowsurfacedata_t;        }
namespace d3dk::mdt { struct sharedprimarysurfacedata_t; }
namespace d3dk::mdt { struct stagingsurfacedata_t;       }
namespace d3dk::mdt { struct virtualgpusurfacedata_t;    }

#include "magic/getstandardallocationdriverdata_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA]
    // => WDK 10 (NV)
    //
    struct getstandardallocationdriverdata_t                                                    
    {                                                                                           
        // WDK 10                                                                               
        //                                                                                      
        _m00 enum d3dk::mdt::standardallocation_type_t     standard_allocation_type;              //{ +0x0000    } | .StandardAllocationType
        _m01 struct d3dk::mdt::sharedprimarysurfacedata_t* p_create_shared_primary_surface_data;  //{ +0x0008    } | .pCreateSharedPrimarySurfaceData
        _m02 struct d3dk::mdt::shadowsurfacedata_t*        p_create_shadow_surface_data;          //{ +0x0008    } | .pCreateShadowSurfaceData
        _m03 struct d3dk::mdt::stagingsurfacedata_t*       p_create_staging_surface_data;         //{ +0x0008    } | .pCreateStagingSurfaceData
        _m04 struct d3dk::mdt::gdisurfacedata_t*           p_create_gdi_surface_data;             //{ +0x0008    } | .pCreateGdiSurfaceData
        _m05 struct d3dk::mdt::virtualgpusurfacedata_t*    p_create_virtual_gpu_surface_data;     //{ +0x0008    } | .pCreateVirtualGpuSurfaceData
        _m06 void*                                         p_allocation_private_driver_data;      //{ +0x0010    } | .pAllocationPrivateDriverData
        _m07 uint32_t                                      allocation_private_driver_data_size;   //{ +0x0018    } | .AllocationPrivateDriverDataSize
        _m08 void*                                         p_resource_private_driver_data;        //{ +0x0020    } | .pResourcePrivateDriverData
        _m09 uint32_t                                      resource_private_driver_data_size;     //{ +0x0028    } | .ResourcePrivateDriverDataSize
        _m10 uint32_t                                      physical_adapter_index;                //{ +0x002c    } | .PhysicalAdapterIndex
                                                                                                
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA.$", 0x0, false, 0xf4a113cfe7713294 );                                     
        SDK_FIXED_SIZE( getstandardallocationdriverdata_t, 0x30 );                                     
    };                                                                                          
};
#include "magic/getstandardallocationdriverdata_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getstandardallocationdriverdata_t, 0x30 );
