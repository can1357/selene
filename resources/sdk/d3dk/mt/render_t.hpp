#pragma once
#include <sdkgen/support_library.hpp>
#include "renderflags_t.hpp"

namespace d3d::ddi { struct allocationlist_t;    }
namespace d3d::ddi { struct patchlocationlist_t; }

#include "magic/render_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_RENDER]
    // => WDK 10 (NV)
    //
    struct render_t                                                             
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 uint32_t                              h_device;                      //{ +0x0000    } | .hDevice
        _m01 uint32_t                              h_context;                     //{ +0x0000    } | .hContext
        _m02 uint32_t                              command_offset;                //{ +0x0004    } | .CommandOffset
        _m03 uint32_t                              command_length;                //{ +0x0008    } | .CommandLength
        _m04 uint32_t                              allocation_count;              //{ +0x000c    } | .AllocationCount
        _m05 uint32_t                              patch_location_count;          //{ +0x0010    } | .PatchLocationCount
        _m06 void*                                 p_new_command_buffer;          //{ +0x0018    } | .pNewCommandBuffer
        _m07 uint32_t                              new_command_buffer_size;       //{ +0x0020    } | .NewCommandBufferSize
        _m08 struct d3d::ddi::allocationlist_t*    p_new_allocation_list;         //{ +0x0028    } | .pNewAllocationList
        _m09 uint32_t                              new_allocation_list_size;      //{ +0x0030    } | .NewAllocationListSize
        _m10 struct d3d::ddi::patchlocationlist_t* p_new_patch_location_list;     //{ +0x0038    } | .pNewPatchLocationList
        _m11 uint32_t                              new_patch_location_list_size;  //{ +0x0040    } | .NewPatchLocationListSize
        _m12 struct d3dk::mt::renderflags_t        flags;                         //{ +0x0044    } | .Flags
        _m13 uint64_t                              present_history_token;         //{ +0x0048    } | .PresentHistoryToken
        _m14 uint32_t                              broadcast_context_count;       //{ +0x0050    } | .BroadcastContextCount
        _m15 sdk::array<uint32_t, 64>              broadcast_context;             //{ +0x0054    } | .BroadcastContext
        _m16 uint32_t                              queued_buffer_count;           //{ +0x0154    } | .QueuedBufferCount
        _m17 uint64_t                              new_command_buffer;            //{ +0x0158    } | .NewCommandBuffer
        _m18 void*                                 p_private_driver_data;         //{ +0x0160    } | .pPrivateDriverData
        _m19 uint32_t                              private_driver_data_size;      //{ +0x0168    } | .PrivateDriverDataSize
                                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_RENDER.$", 0x0, false, 0x673a66be73b50677 );                             
        SDK_FIXED_SIZE( render_t, 0x170 );                                      
    };                                                                          
};
#include "magic/render_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::render_t, 0x170 );
