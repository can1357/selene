#pragma once
#include <sdkgen/support_library.hpp>
#include "../vgpu_capability_t.hpp"

#include "magic/getvirtualgpuinfo_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETVIRTUALGPUINFO]
    // => WDK 10 (NV)
    //
    struct getvirtualgpuinfo_t                                          
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 uint32_t                                      partition_id;  //{ +0x0000    } | .PartitionId
        _m01 sdk::array<struct dxgk::vgpu_capability_t, 4> capability;    //{ +0x0008    } | .Capability
                                                                        
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETVIRTUALGPUINFO.$", 0x0, false, 0x44239fc287ece730 );             
        SDK_FIXED_SIZE( getvirtualgpuinfo_t, 0x68 );                    
    };                                                                  
};
#include "magic/getvirtualgpuinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getvirtualgpuinfo_t, 0x68 );
