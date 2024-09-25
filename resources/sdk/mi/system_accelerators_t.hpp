#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_accelerators_t.start.hpp"
namespace mi
{
    // [struct _MI_SYSTEM_ACCELERATORS]
    // => Windows 11
    //
    struct system_accelerators_t                           
    {                                                      
        // Windows 11                                      
        //                                                 
        _m00 nt::list_entry_t hardware_instances;            //{ +0x0000    } | .HardwareInstances
        _m01 uint32_t         number_of_hardware_instances;  //{ +0x0010    } | .NumberOfHardwareInstances
        _m02 uint8_t          shutting_down;                 //{ +0x0014    } | .ShuttingDown
        _m03 uint8_t          allocation_failures;           //{ +0x0015    } | .AllocationFailures
        _m04 uint8_t          allocation_query_failures;     //{ +0x0016    } | .AllocationQueryFailures
        _m05 void**           opaque_context;                //{ +0x0018    } | .OpaqueContext
        _m06 volatile int32_t lock;                          //{ +0x0020    } | .Lock
                                                           
        SDK_MAGIC_PROPERTIES( "_MI_SYSTEM_ACCELERATORS.$", 0x0, false, 0xb451be4718240140 );                             
        SDK_FIXED_SIZE( system_accelerators_t, 0x28 );                             
    };                                                     
};
#include "magic/system_accelerators_t.end.hpp"
SDK_VERIFY( struct mi::system_accelerators_t, 0x28 );
