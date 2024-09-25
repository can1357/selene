#pragma once
#include <sdkgen/support_library.hpp>
#include "flipinfoflags_t.hpp"

#include "magic/flipqueueinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_FLIPQUEUEINFO]
    // => WDK 10 (NV)
    //
    struct flipqueueinfo_t                                                   
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 uint32_t                         max_hardware_flip_queue_length;  //{ +0x0000    } | .MaxHardwareFlipQueueLength
        _m01 uint32_t                         max_software_flip_queue_length;  //{ +0x0004    } | .MaxSoftwareFlipQueueLength
        _m02 struct d3dk::mt::flipinfoflags_t flip_flags;                      //{ +0x0008    } | .FlipFlags
                                                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_FLIPQUEUEINFO.$", 0x0, false, 0x798144fb8a455740 );                               
        SDK_FIXED_SIZE( flipqueueinfo_t, 0xc );                               
    };                                                                       
};
#include "magic/flipqueueinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::flipqueueinfo_t, 0xc );
