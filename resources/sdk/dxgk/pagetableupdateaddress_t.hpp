#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/d3dgpu_physical_address_t.hpp"

#include "magic/pagetableupdateaddress_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PAGETABLEUPDATEADDRESS]
    // => WDK 10 (NV)
    //
    struct pagetableupdateaddress_t                            
    {                                                          
        // WDK 10                                              
        //                                                     
        _m00 void*                                cpu_virtual;   //{ +0x0000    } | .CpuVirtual
        _m01 struct nt::d3dgpu_physical_address_t gpu_physical;  //{ +0x0000    } | .GpuPhysical
        _m02 uint64_t                             gpu_virtual;   //{ +0x0000    } | .GpuVirtual
                                                               
        SDK_NONVOL_PROPERTIES( "_DXGK_PAGETABLEUPDATEADDRESS.$", 0x0, false, 0x9cdf295707d62724 );             
        SDK_FIXED_SIZE( pagetableupdateaddress_t, 0x10 );             
    };                                                         
};
#include "magic/pagetableupdateaddress_t.end.hpp"
SDK_VERIFY( struct dxgk::pagetableupdateaddress_t, 0x10 );
