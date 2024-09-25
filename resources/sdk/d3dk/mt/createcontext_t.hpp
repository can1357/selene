#pragma once
#include <sdkgen/support_library.hpp>
#include "clienthint_t.hpp"
#include "../../d3d/ddi/createcontextflags_t.hpp"

namespace d3d::ddi { struct allocationlist_t;    }
namespace d3d::ddi { struct patchlocationlist_t; }

#include "magic/createcontext_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATECONTEXT]
    // => WDK 10 (NV)
    //
    struct createcontext_t                                                  
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 uint32_t                              h_device;                  //{ +0x0000    } | .hDevice
        _m01 uint32_t                              node_ordinal;              //{ +0x0004    } | .NodeOrdinal
        _m02 uint32_t                              engine_affinity;           //{ +0x0008    } | .EngineAffinity
        _m03 struct d3d::ddi::createcontextflags_t flags;                     //{ +0x000c    } | .Flags
        _m04 void*                                 p_private_driver_data;     //{ +0x0010    } | .pPrivateDriverData
        _m05 uint32_t                              private_driver_data_size;  //{ +0x0018    } | .PrivateDriverDataSize
        _m06 enum d3dk::mt::clienthint_t           client_hint;               //{ +0x001c    } | .ClientHint
        _m07 uint32_t                              h_context;                 //{ +0x0020    } | .hContext
        _m08 void*                                 p_command_buffer;          //{ +0x0028    } | .pCommandBuffer
        _m09 uint32_t                              command_buffer_size;       //{ +0x0030    } | .CommandBufferSize
        _m10 struct d3d::ddi::allocationlist_t*    p_allocation_list;         //{ +0x0038    } | .pAllocationList
        _m11 uint32_t                              allocation_list_size;      //{ +0x0040    } | .AllocationListSize
        _m12 struct d3d::ddi::patchlocationlist_t* p_patch_location_list;     //{ +0x0048    } | .pPatchLocationList
        _m13 uint32_t                              patch_location_list_size;  //{ +0x0050    } | .PatchLocationListSize
        _m14 uint64_t                              command_buffer;            //{ +0x0058    } | .CommandBuffer
                                                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATECONTEXT.$", 0x0, false, 0x16ac50c3d615cc07 );                         
        SDK_FIXED_SIZE( createcontext_t, 0x60 );                            
    };                                                                      
};
#include "magic/createcontext_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createcontext_t, 0x60 );
