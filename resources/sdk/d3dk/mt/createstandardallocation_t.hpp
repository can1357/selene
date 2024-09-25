#pragma once
#include <sdkgen/support_library.hpp>
#include "standardallocationtype_t.hpp"
#include "createstandardallocationflags_t.hpp"
#include "standardallocation_existingheap_t.hpp"

#include "magic/createstandardallocation_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATESTANDARDALLOCATION]
    // => WDK 10 (NV)
    //
    struct createstandardallocation_t                                            
    {                                                                            
        using existing_heap_data_t = struct d3dk::mt::standardallocation_existingheap_t;                   
                                                                                 
        // WDK 10                                                                
        //                                                                       
        _m00 enum d3dk::mt::standardallocationtype_t          type;                //{ +0x0000    } | .Type
        _m01 existing_heap_data_t                             existing_heap_data;  //{ +0x0008    } | .ExistingHeapData
        _m02 struct d3dk::mt::createstandardallocationflags_t flags;               //{ +0x0010    } | .Flags
                                                                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATESTANDARDALLOCATION.$", 0x0, false, 0x6f4d62c50de6f2da );                   
        SDK_FIXED_SIZE( createstandardallocation_t, 0x18 );                      
    };                                                                           
};
#include "magic/createstandardallocation_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createstandardallocation_t, 0x18 );
