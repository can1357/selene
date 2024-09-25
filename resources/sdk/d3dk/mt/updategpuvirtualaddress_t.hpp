#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi { struct updategpuvirtualaddress_operation_t; }

#include "magic/updategpuvirtualaddress_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_UPDATEGPUVIRTUALADDRESS]
    // => WDK 10 (NV)
    //
    struct updategpuvirtualaddress_t                 
    {                                                
        union u0_flags_t                             
        {                                            
            // WDK 10                                
            //                                       
            _m06 uint1_t  do_not_wait;                 //{ +0x0000@0  } | .DoNotWait
            _m07 uint32_t value;                       //{ +0x0000    } | .Value
                                                     
            SDK_NONVOL_PROPERTIES( "_D3DKMT_UPDATEGPUVIRTUALADDRESS.Flags.$", 0x0, false, 0x14fcd8aecc4ba65b );                           
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                           
        };                                           
                                                     
        using operations_t = struct d3d::ddi::updategpuvirtualaddress_operation_t*;               
                                                     
        // WDK 10                                    
        //                                           
        _m00 uint32_t                 h_device;        //{ +0x0000    } | .hDevice
        _m01 uint32_t                 h_context;       //{ +0x0004    } | .hContext
        _m02 uint32_t                 h_fence_object;  //{ +0x0008    } | .hFenceObject
        _m03 uint32_t                 num_operations;  //{ +0x000c    } | .NumOperations
        _m04 operations_t             operations;      //{ +0x0010    } | .Operations
        _m05 uint64_t                 fence_value;     //{ +0x0028    } | .FenceValue
        _m08 u0_flags_t               flags;           //{ +0x0030    } | .Flags
                                                     
        SDK_NONVOL_PROPERTIES( "_D3DKMT_UPDATEGPUVIRTUALADDRESS.$", 0x0, false, 0x240698712999c033 );               
        SDK_FIXED_SIZE( updategpuvirtualaddress_t, 0x38 );               
    };                                               
};
#include "magic/updategpuvirtualaddress_t.end.hpp"
SDK_VERIFY( union d3dk::mt::updategpuvirtualaddress_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct d3dk::mt::updategpuvirtualaddress_t, 0x38 );
