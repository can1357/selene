#pragma once
#include <sdkgen/support_library.hpp>
#include "streaming_control_request_type_t.hpp"

#include "magic/cdrom_streaming_control_t.start.hpp"
namespace nt
{
    // [struct _CDROM_STREAMING_CONTROL]
    // => WDK 10 (NV)
    //
    struct cdrom_streaming_control_t                                
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 enum nt::streaming_control_request_type_t request_type;  //{ +0x0000    } | .RequestType
                                                                    
        SDK_NONVOL_PROPERTIES( "_CDROM_STREAMING_CONTROL.$", 0x0, false, 0x862042d9c3a9982c );             
        SDK_FIXED_SIZE( cdrom_streaming_control_t, 0x4 );             
    };                                                              
};
#include "magic/cdrom_streaming_control_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_streaming_control_t, 0x4 );
