#pragma once
#include <sdkgen/support_library.hpp>
#include "write_rotation_t.hpp"
#include "cdrom_speed_request_t.hpp"

#include "magic/cdrom_set_streaming_t.start.hpp"
namespace nt
{
    // [struct _CDROM_SET_STREAMING]
    // => WDK 10 (NV)
    //
    struct cdrom_set_streaming_t                             
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 enum nt::cdrom_speed_request_t request_type;      //{ +0x0000    } | .RequestType
        _m01 uint32_t                       read_size;         //{ +0x0004    } | .ReadSize
        _m02 uint32_t                       read_time;         //{ +0x0008    } | .ReadTime
        _m03 uint32_t                       write_size;        //{ +0x000c    } | .WriteSize
        _m04 uint32_t                       write_time;        //{ +0x0010    } | .WriteTime
        _m05 uint32_t                       start_lba;         //{ +0x0014    } | .StartLba
        _m06 uint32_t                       end_lba;           //{ +0x0018    } | .EndLba
        _m07 enum nt::write_rotation_t      rotation_control;  //{ +0x001c    } | .RotationControl
        _m08 uint8_t                        restore_defaults;  //{ +0x0020    } | .RestoreDefaults
        _m09 uint8_t                        set_exact;         //{ +0x0021    } | .SetExact
        _m10 uint8_t                        random_access;     //{ +0x0022    } | .RandomAccess
        _m11 uint8_t                        persistent;        //{ +0x0023    } | .Persistent
                                                             
        SDK_NONVOL_PROPERTIES( "_CDROM_SET_STREAMING.$", 0x0, false, 0xc7eb0a37c60635f6 );                 
        SDK_FIXED_SIZE( cdrom_set_streaming_t, 0x24 );                 
    };                                                       
};
#include "magic/cdrom_set_streaming_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_set_streaming_t, 0x24 );
