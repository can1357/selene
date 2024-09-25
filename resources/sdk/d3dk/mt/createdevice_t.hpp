#pragma once
#include <sdkgen/support_library.hpp>
#include "createdeviceflags_t.hpp"

namespace d3d::ddi { struct allocationlist_t;    }
namespace d3d::ddi { struct patchlocationlist_t; }

#include "magic/createdevice_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATEDEVICE]
    // => WDK 10 (NV)
    //
    struct createdevice_t                                                   
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 uint32_t                              h_adapter;                 //{ +0x0000    } | .hAdapter
        _m01 void*                                 p_adapter;                 //{ +0x0000    } | .pAdapter
        _m02 struct d3dk::mt::createdeviceflags_t  flags;                     //{ +0x0008    } | .Flags
        _m03 uint32_t                              h_device;                  //{ +0x000c    } | .hDevice
        _m04 void*                                 p_command_buffer;          //{ +0x0010    } | .pCommandBuffer
        _m05 uint32_t                              command_buffer_size;       //{ +0x0018    } | .CommandBufferSize
        _m06 struct d3d::ddi::allocationlist_t*    p_allocation_list;         //{ +0x0020    } | .pAllocationList
        _m07 uint32_t                              allocation_list_size;      //{ +0x0028    } | .AllocationListSize
        _m08 struct d3d::ddi::patchlocationlist_t* p_patch_location_list;     //{ +0x0030    } | .pPatchLocationList
        _m09 uint32_t                              patch_location_list_size;  //{ +0x0038    } | .PatchLocationListSize
                                                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATEDEVICE.$", 0x0, false, 0x7213e3507c4f1eac );                         
        SDK_FIXED_SIZE( createdevice_t, 0x40 );                             
    };                                                                      
};
#include "magic/createdevice_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createdevice_t, 0x40 );
