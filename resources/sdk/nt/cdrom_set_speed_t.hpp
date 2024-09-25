#pragma once
#include <sdkgen/support_library.hpp>
#include "write_rotation_t.hpp"
#include "cdrom_speed_request_t.hpp"

#include "magic/cdrom_set_speed_t.start.hpp"
namespace nt
{
    // [struct _CDROM_SET_SPEED]
    // => WDK 10 (NV)
    //
    struct cdrom_set_speed_t                                 
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 enum nt::cdrom_speed_request_t request_type;      //{ +0x0000    } | .RequestType
        _m01 uint16_t                       read_speed;        //{ +0x0004    } | .ReadSpeed
        _m02 uint16_t                       write_speed;       //{ +0x0006    } | .WriteSpeed
        _m03 enum nt::write_rotation_t      rotation_control;  //{ +0x0008    } | .RotationControl
                                                             
        SDK_NONVOL_PROPERTIES( "_CDROM_SET_SPEED.$", 0x0, false, 0x25cbef64c7f528d3 );                 
        SDK_FIXED_SIZE( cdrom_set_speed_t, 0xc );                 
    };                                                       
};
#include "magic/cdrom_set_speed_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_set_speed_t, 0xc );
