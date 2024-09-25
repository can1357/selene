#pragma once
#include <sdkgen/support_library.hpp>
#include "driverstatus_t.hpp"

#include "magic/sendcmdoutparams_t.start.hpp"
namespace nt
{
    // [struct _SENDCMDOUTPARAMS]
    // => WDK 10 (NV)
    //
    struct sendcmdoutparams_t                        
    {                                                
        // WDK 10                                    
        //                                           
        _m00 uint32_t                  c_buffer_size;  //{ +0x0000    } | .cBufferSize
        _m01 struct nt::driverstatus_t driver_status;  //{ +0x0004    } | .DriverStatus
        _m02 sdk::array<uint8_t, 1>    b_buffer;       //{ +0x0010    } | .bBuffer
                                                     
        SDK_NONVOL_PROPERTIES( "_SENDCMDOUTPARAMS.$", 0x0, false, 0xe6de5c910b4bbf09 );              
        SDK_FIXED_SIZE( sendcmdoutparams_t, 0x11 );              
    };                                               
};
#include "magic/sendcmdoutparams_t.end.hpp"
SDK_VERIFY( struct nt::sendcmdoutparams_t, 0x11 );
