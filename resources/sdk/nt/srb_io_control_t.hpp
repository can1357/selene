#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/srb_io_control_t.start.hpp"
namespace nt
{
    // [struct _SRB_IO_CONTROL]
    // => WDK 10 (NV)
    //
    struct srb_io_control_t                       
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint32_t               header_length;  //{ +0x0000    } | .HeaderLength
        _m01 sdk::array<uint8_t, 8> signature;      //{ +0x0004    } | .Signature
        _m02 uint32_t               timeout;        //{ +0x000c    } | .Timeout
        _m03 uint32_t               control_code;   //{ +0x0010    } | .ControlCode
        _m04 uint32_t               return_code;    //{ +0x0014    } | .ReturnCode
        _m05 uint32_t               length;         //{ +0x0018    } | .Length
                                                  
        SDK_NONVOL_PROPERTIES( "_SRB_IO_CONTROL.$", 0x0, false, 0xc277a22ee7c9ed41 );              
        SDK_FIXED_SIZE( srb_io_control_t, 0x1c );              
    };                                            
};
#include "magic/srb_io_control_t.end.hpp"
SDK_VERIFY( struct nt::srb_io_control_t, 0x1c );
