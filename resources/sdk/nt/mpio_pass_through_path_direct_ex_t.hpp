#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mpio_pass_through_path_direct_ex_t.start.hpp"
namespace nt
{
    // [struct _MPIO_PASS_THROUGH_PATH_DIRECT_EX]
    // => WDK 10 (NV)
    //
    struct mpio_pass_through_path_direct_ex_t
    {                                        
        // WDK 10                         
        //                                
        _m00 uint32_t pass_through_offset;     //{ +0x0000    } | .PassThroughOffset
        _m01 uint32_t version;                 //{ +0x0004    } | .Version
        _m02 uint16_t length;                  //{ +0x0008    } | .Length
        _m03 uint8_t  flags;                   //{ +0x000a    } | .Flags
        _m04 uint8_t  port_number;             //{ +0x000b    } | .PortNumber
        _m05 uint64_t mpio_path_id;            //{ +0x0010    } | .MpioPathId
                                             
        SDK_NONVOL_PROPERTIES( "_MPIO_PASS_THROUGH_PATH_DIRECT_EX.$", 0x0, false, 0x56ecd8ed4eadc76f );                    
        SDK_FIXED_SIZE( mpio_pass_through_path_direct_ex_t, 0x18 );                    
    };                                       
};
#include "magic/mpio_pass_through_path_direct_ex_t.end.hpp"
SDK_VERIFY( struct nt::mpio_pass_through_path_direct_ex_t, 0x18 );
