#pragma once
#include <sdkgen/support_library.hpp>
#include "scsi_pass_through_direct_t.hpp"

#include "magic/mpio_pass_through_path_direct_t.start.hpp"
namespace nt
{
    // [struct _MPIO_PASS_THROUGH_PATH_DIRECT]
    // => WDK 10 (NV)
    //
    struct mpio_pass_through_path_direct_t                      
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 struct nt::scsi_pass_through_direct_t pass_through;  //{ +0x0000    } | .PassThrough
        _m01 uint32_t                              version;       //{ +0x0038    } | .Version
        _m02 uint16_t                              length;        //{ +0x003c    } | .Length
        _m03 uint8_t                               flags;         //{ +0x003e    } | .Flags
        _m04 uint8_t                               port_number;   //{ +0x003f    } | .PortNumber
        _m05 uint64_t                              mpio_path_id;  //{ +0x0040    } | .MpioPathId
                                                                
        SDK_NONVOL_PROPERTIES( "_MPIO_PASS_THROUGH_PATH_DIRECT.$", 0x0, false, 0x482e9a9f83dd0ba4 );             
        SDK_FIXED_SIZE( mpio_pass_through_path_direct_t, 0x48 );             
    };                                                          
};
#include "magic/mpio_pass_through_path_direct_t.end.hpp"
SDK_VERIFY( struct nt::mpio_pass_through_path_direct_t, 0x48 );
