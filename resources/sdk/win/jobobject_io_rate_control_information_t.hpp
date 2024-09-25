#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_io_rate_control_information_t.start.hpp"
namespace win
{
    // [struct JOBOBJECT_IO_RATE_CONTROL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_io_rate_control_information_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                   
        _m00 int64_t        max_iops;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaxIops
        _m01 int64_t        max_bandwidth;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxBandwidth
        _m02 int64_t        reservation_iops;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReservationIops
        _m03 const wchar_t* volume_name;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .VolumeName
        _m04 uint32_t       base_io_size;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BaseIoSize
        _m05 uint32_t       control_flags;          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ControlFlags
                                                  
        SDK_MAGIC_PROPERTIES( "JOBOBJECT_IO_RATE_CONTROL_INFORMATION.$", 0x28, true, 0x5868c130e666e2bc );                 
        SDK_FIXED_SIZE( jobobject_io_rate_control_information_t, 0x28 );                 
    };                                            
};
#include "magic/jobobject_io_rate_control_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_io_rate_control_information_t, 0x28 );
