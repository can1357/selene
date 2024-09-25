#pragma once
#include <sdkgen/support_library.hpp>
#include "disk_performance_type_t.hpp"

#include "magic/disk_performance_parameters_t.start.hpp"
namespace nt
{
    // [struct _DISK_PERFORMANCE_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct disk_performance_parameters_t              
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint32_t                         version;  //{ +0x0000    } | .Version
        _m01 enum nt::disk_performance_type_t type;     //{ +0x0004    } | .Type
                                                      
        SDK_NONVOL_PROPERTIES( "_DISK_PERFORMANCE_PARAMETERS.$", 0x0, false, 0xeb7eb9ea7f742da0 );        
        SDK_FIXED_SIZE( disk_performance_parameters_t, 0x8 );        
    };                                                
};
#include "magic/disk_performance_parameters_t.end.hpp"
SDK_VERIFY( struct nt::disk_performance_parameters_t, 0x8 );
