#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/irp_stack_profiler_t.start.hpp"
namespace iop
{
    // [struct _IOP_IRP_STACK_PROFILER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irp_stack_profiler_t                  
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                       
        _m00 sdk::array<uint32_t, 20> profile;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Profile
        _m01 uint32_t                 total_irps;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .TotalIrps
                                                 
        SDK_MAGIC_PROPERTIES( "_IOP_IRP_STACK_PROFILER.$", 0x54, true, 0x131e9191327e69a );           
        SDK_FIXED_SIZE( irp_stack_profiler_t, 0x54 );           
    };                                           
};
#include "magic/irp_stack_profiler_t.end.hpp"
SDK_VERIFY( struct iop::irp_stack_profiler_t, 0x54 );
