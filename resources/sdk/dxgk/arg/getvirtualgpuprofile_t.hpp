#pragma once
#include <sdkgen/support_library.hpp>
#include "../vgpu_profile_capability_t.hpp"

#include "magic/getvirtualgpuprofile_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETVIRTUALGPUPROFILE]
    // => WDK 10 (NV)
    //
    struct getvirtualgpuprofile_t                       
    {                                                   
        using profile_capability_t = sdk::array<struct dxgk::vgpu_profile_capability_t, 4>;                     
                                                        
        // WDK 10                                       
        //                                              
        _m00 uint32_t              partition_count;       //{ +0x0000    } | .PartitionCount
        _m01 uint32_t              virtualization_flags;  //{ +0x0004    } | .VirtualizationFlags
        _m02 profile_capability_t  profile_capability;    //{ +0x0008    } | .ProfileCapability
                                                        
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETVIRTUALGPUPROFILE.$", 0x0, false, 0xaa1ddb4d2b5acdc0 );                     
        SDK_FIXED_SIZE( getvirtualgpuprofile_t, 0xa8 );                     
    };                                                  
};
#include "magic/getvirtualgpuprofile_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getvirtualgpuprofile_t, 0xa8 );
