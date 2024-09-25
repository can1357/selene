#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdrom_write_speed_descriptor_t.start.hpp"
namespace nt
{
    // [struct _CDROM_WRITE_SPEED_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct cdrom_write_speed_descriptor_t                  
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 uint1_t                mixed_read_write;        //{ +0x0000@0  } | .MixedReadWrite
        _m01 uint1_t                exact;                   //{ +0x0000@1  } | .Exact
        _m02 uint2_t                write_rotation_control;  //{ +0x0000@3  } | .WriteRotationControl
        _m03 sdk::array<uint8_t, 4> end_lba;                 //{ +0x0004    } | .EndLba
        _m04 sdk::array<uint8_t, 4> read_speed;              //{ +0x0008    } | .ReadSpeed
        _m05 sdk::array<uint8_t, 4> write_speed;             //{ +0x000c    } | .WriteSpeed
                                                           
        SDK_NONVOL_PROPERTIES( "_CDROM_WRITE_SPEED_DESCRIPTOR.$", 0x0, false, 0x19b965cf2a0ed7bd );                       
        SDK_FIXED_SIZE( cdrom_write_speed_descriptor_t, 0x10 );                       
    };                                                     
};
#include "magic/cdrom_write_speed_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_write_speed_descriptor_t, 0x10 );
