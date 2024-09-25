#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/job_object_io_rate_control_flags_t.hpp"

#include "magic/jobobject_io_rate_control_information_native_v2_t.start.hpp"
namespace win
{
    // [struct JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_io_rate_control_information_native_v2_t                               
    {                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                 
        _m00 int64_t                                     max_iops;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaxIops
        _m01 int64_t                                     max_bandwidth;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxBandwidth
        _m02 int64_t                                     reservation_iops;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReservationIops
        _m03 wchar_t*                                    volume_name;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .VolumeName
        _m04 uint32_t                                    base_io_size;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BaseIoSize
        _m05 enum nt::job_object_io_rate_control_flags_t control_flags;                      //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ControlFlags
        _m06 uint16_t                                    volume_name_length;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .VolumeNameLength
        _m07 int64_t                                     critical_reservation_iops;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CriticalReservationIops
        _m08 int64_t                                     reservation_bandwidth;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ReservationBandwidth
        _m09 int64_t                                     critical_reservation_bandwidth;     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CriticalReservationBandwidth
        _m10 int64_t                                     max_time_percent;                   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .MaxTimePercent
        _m11 int64_t                                     reservation_time_percent;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ReservationTimePercent
        _m12 int64_t                                     critical_reservation_time_percent;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .CriticalReservationTimePercent
                                                                                           
        SDK_MAGIC_PROPERTIES( "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2.$", 0x60, true, 0x9bcf01fc19d299ba );                                  
        SDK_FIXED_SIZE( jobobject_io_rate_control_information_native_v2_t, 0x60 );                                  
    };                                                                                     
};
#include "magic/jobobject_io_rate_control_information_native_v2_t.end.hpp"
SDK_VERIFY( struct win::jobobject_io_rate_control_information_native_v2_t, 0x60 );
