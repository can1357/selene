#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ide_io_control_t.start.hpp"
namespace nt
{
    // [struct _IDE_IO_CONTROL]
    // => WDK 10 (NV)
    //
    struct ide_io_control_t                       
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint32_t               header_length;  //{ +0x0000    } | .HeaderLength
        _m01 sdk::array<uint8_t, 8> signature;      //{ +0x0004    } | .Signature
        _m02 uint32_t               timeout;        //{ +0x000c    } | .Timeout
        _m03 uint32_t               control_code;   //{ +0x0010    } | .ControlCode
        _m04 uint32_t               return_status;  //{ +0x0014    } | .ReturnStatus
        _m05 uint32_t               data_length;    //{ +0x0018    } | .DataLength
                                                  
        SDK_NONVOL_PROPERTIES( "_IDE_IO_CONTROL.$", 0x0, false, 0x9f521cdf28f953a );              
        SDK_FIXED_SIZE( ide_io_control_t, 0x1c );              
    };                                            
};
#include "magic/ide_io_control_t.end.hpp"
SDK_VERIFY( struct nt::ide_io_control_t, 0x1c );
