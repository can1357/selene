#pragma once
#include <sdkgen/support_library.hpp>
#include "gpu_physical_address_t.hpp"

#include "magic/virtualgpumemoryresource_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VIRTUALGPUMEMORYRESOURCE]
    // => WDK 10 (NV)
    //
    struct virtualgpumemoryresource_t                                     
    {                                                                     
        // WDK 10                                                         
        //                                                                
        _m00 void*                               driver_allocation_handle;  //{ +0x0000    } | .DriverAllocationHandle
        _m01 struct dxgk::gpu_physical_address_t allocation_address;        //{ +0x0008    } | .AllocationAddress
        _m02 uint64_t                            allocation_size;           //{ +0x0018    } | .AllocationSize
                                                                          
        SDK_NONVOL_PROPERTIES( "_DXGK_VIRTUALGPUMEMORYRESOURCE.$", 0x0, false, 0x32b48183a6d239dd );                         
        SDK_FIXED_SIZE( virtualgpumemoryresource_t, 0x20 );                         
    };                                                                    
};
#include "magic/virtualgpumemoryresource_t.end.hpp"
SDK_VERIFY( struct dxgk::virtualgpumemoryresource_t, 0x20 );
