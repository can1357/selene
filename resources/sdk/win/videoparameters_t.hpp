#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/videoparameters_t.start.hpp"
namespace win
{
    // [struct _VIDEOPARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct videoparameters_t                                   
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                     
        _m00 struct nt::guid_t        guid;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Guid
        _m01 uint32_t                 dw_offset;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .dwOffset
        _m02 uint32_t                 dw_command;                //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .dwCommand
        _m03 uint32_t                 dw_flags;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .dwFlags
        _m04 uint32_t                 dw_mode;                   //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .dwMode
        _m05 uint32_t                 dw_tv_standard;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .dwTVStandard
        _m06 uint32_t                 dw_available_modes;        //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .dwAvailableModes
        _m07 uint32_t                 dw_available_tv_standard;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .dwAvailableTVStandard
        _m08 uint32_t                 dw_flicker_filter;         //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .dwFlickerFilter
        _m09 uint32_t                 dw_over_scan_x;            //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .dwOverScanX
        _m10 uint32_t                 dw_over_scan_y;            //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .dwOverScanY
        _m11 uint32_t                 dw_max_unscaled_x;         //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .dwMaxUnscaledX
        _m12 uint32_t                 dw_max_unscaled_y;         //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .dwMaxUnscaledY
        _m13 uint32_t                 dw_position_x;             //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .dwPositionX
        _m14 uint32_t                 dw_position_y;             //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .dwPositionY
        _m15 uint32_t                 dw_brightness;             //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .dwBrightness
        _m16 uint32_t                 dw_contrast;               //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .dwContrast
        _m17 uint32_t                 dw_cp_type;                //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .dwCPType
        _m18 uint32_t                 dw_cp_command;             //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .dwCPCommand
        _m19 uint32_t                 dw_cp_standard;            //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .dwCPStandard
        _m20 uint32_t                 dw_cp_key;                 //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .dwCPKey
        _m21 uint32_t                 b_cp_aps_trigger_bits;     //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .bCP_APSTriggerBits
        _m22 sdk::array<uint8_t, 256> b_oem_copy_protection;     //{ +0x0064    +0x0064    +0x0064    +0x0064    +0x0064    } | .bOEMCopyProtection
                                                               
        SDK_NONVOL_PROPERTIES( "_VIDEOPARAMETERS.$", 0x164, true, 0x574f37a8d12a1898 );                         
        SDK_FIXED_SIZE( videoparameters_t, 0x164 );                         
    };                                                         
};
#include "magic/videoparameters_t.end.hpp"
SDK_VERIFY( struct win::videoparameters_t, 0x164 );
