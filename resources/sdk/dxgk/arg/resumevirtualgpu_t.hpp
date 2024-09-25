#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resumevirtualgpu_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_RESUMEVIRTUALGPU]
    // => WDK 10 (NV)
    //
    struct resumevirtualgpu_t      
    {                              
        // WDK 10                  
        //                         
        _m00 uint32_t partition_id;  //{ +0x0000    } | .PartitionId
                                   
        SDK_NONVOL_PROPERTIES( "_DXGKARG_RESUMEVIRTUALGPU.$", 0x0, false, 0x5ab58d05a140e05f );             
        SDK_FIXED_SIZE( resumevirtualgpu_t, 0x4 );             
    };                             
};
#include "magic/resumevirtualgpu_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::resumevirtualgpu_t, 0x4 );
