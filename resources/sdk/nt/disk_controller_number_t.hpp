#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disk_controller_number_t.start.hpp"
namespace nt
{
    // [struct _DISK_CONTROLLER_NUMBER]
    // => WDK 10 (NV)
    //
    struct disk_controller_number_t     
    {                                   
        // WDK 10                       
        //                              
        _m00 uint32_t controller_number;  //{ +0x0000    } | .ControllerNumber
        _m01 uint32_t disk_number;        //{ +0x0004    } | .DiskNumber
                                        
        SDK_NONVOL_PROPERTIES( "_DISK_CONTROLLER_NUMBER.$", 0x0, false, 0x9195d6ad6eb401da );                  
        SDK_FIXED_SIZE( disk_controller_number_t, 0x8 );                  
    };                                  
};
#include "magic/disk_controller_number_t.end.hpp"
SDK_VERIFY( struct nt::disk_controller_number_t, 0x8 );
