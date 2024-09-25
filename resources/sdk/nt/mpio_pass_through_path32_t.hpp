#pragma once
#include <sdkgen/support_library.hpp>
#include "scsi_pass_through32_t.hpp"

#include "magic/mpio_pass_through_path32_t.start.hpp"
namespace nt
{
    // [struct _MPIO_PASS_THROUGH_PATH32]
    // => WDK 10 (NV)
    //
    struct mpio_pass_through_path32_t                      
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 struct nt::scsi_pass_through32_t pass_through;  //{ +0x0000    } | .PassThrough
        _m01 uint32_t                         version;       //{ +0x002c    } | .Version
        _m02 uint16_t                         length;        //{ +0x0030    } | .Length
        _m03 uint8_t                          flags;         //{ +0x0032    } | .Flags
        _m04 uint8_t                          port_number;   //{ +0x0033    } | .PortNumber
        _m05 uint64_t                         mpio_path_id;  //{ +0x0038    } | .MpioPathId
                                                           
        SDK_NONVOL_PROPERTIES( "_MPIO_PASS_THROUGH_PATH32.$", 0x0, false, 0x638813d8385f3e68 );             
        SDK_FIXED_SIZE( mpio_pass_through_path32_t, 0x40 );             
    };                                                     
};
#include "magic/mpio_pass_through_path32_t.end.hpp"
SDK_VERIFY( struct nt::mpio_pass_through_path32_t, 0x40 );
