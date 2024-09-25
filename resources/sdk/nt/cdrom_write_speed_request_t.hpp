#pragma once
#include <sdkgen/support_library.hpp>
#include "cdrom_performance_request_type_t.hpp"

#include "magic/cdrom_write_speed_request_t.start.hpp"
namespace nt
{
    // [struct _CDROM_WRITE_SPEED_REQUEST]
    // => WDK 10 (NV)
    //
    struct cdrom_write_speed_request_t                              
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 enum nt::cdrom_performance_request_type_t request_type;  //{ +0x0000    } | .RequestType
                                                                    
        SDK_NONVOL_PROPERTIES( "_CDROM_WRITE_SPEED_REQUEST.$", 0x0, false, 0xa3b31e378b0f3f0d );             
        SDK_FIXED_SIZE( cdrom_write_speed_request_t, 0x4 );             
    };                                                              
};
#include "magic/cdrom_write_speed_request_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_write_speed_request_t, 0x4 );
