#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vpb_t.start.hpp"
namespace nt
{
    struct device_object_t;

    // [struct _VPB]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct vpb_t                                             
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                   
        _m00 int16_t                     type;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 int16_t                     size;                 //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 uint16_t                    flags;                //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m03 uint16_t                    volume_label_length;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .VolumeLabelLength
        _m04 struct nt::device_object_t* device_object;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceObject
        _m05 struct nt::device_object_t* real_device;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .RealDevice
        _m06 uint32_t                    serial_number;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SerialNumber
        _m07 uint32_t                    reference_count;      //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .ReferenceCount
        _m08 sdk::array<wchar_t, 32>     volume_label;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .VolumeLabel
                                                             
        SDK_NONVOL_PROPERTIES( "_VPB.$", 0x60, true, 0x937e616a2a0d5dd0 );                    
        SDK_FIXED_SIZE( vpb_t, 0x60 );                       
    };                                                       
};
#include "magic/vpb_t.end.hpp"
SDK_VERIFY( struct nt::vpb_t, 0x60 );
