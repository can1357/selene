#pragma once
#include <sdkgen/support_library.hpp>
#include "physicaladapterflags_t.hpp"

#include "magic/physicaladaptercaps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PHYSICALADAPTERCAPS]
    // => WDK 10 (NV)
    //
    struct physicaladaptercaps_t                                              
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 uint16_t                            num_execution_nodes;           //{ +0x0000    } | .NumExecutionNodes
        _m01 uint16_t                            paging_node_index;             //{ +0x0002    } | .PagingNodeIndex
        _m02 void*                               dxgk_physical_adapter_handle;  //{ +0x0008    } | .DxgkPhysicalAdapterHandle
        _m03 struct dxgk::physicaladapterflags_t flags;                         //{ +0x0010    } | .Flags
        _m04 uint32_t                            vpr_paging_node;               //{ +0x0014    } | .VPRPagingNode
        _m05 uint32_t                            virtual_copy_node_index;       //{ +0x0018    } | .VirtualCopyNodeIndex
                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGK_PHYSICALADAPTERCAPS.$", 0x0, false, 0xb3eb5d564ca06f87 );                             
        SDK_FIXED_SIZE( physicaladaptercaps_t, 0x20 );                             
    };                                                                        
};
#include "magic/physicaladaptercaps_t.end.hpp"
SDK_VERIFY( struct dxgk::physicaladaptercaps_t, 0x20 );
