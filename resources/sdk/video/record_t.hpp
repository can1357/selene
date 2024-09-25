#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/record_t.start.hpp"
namespace video
{
    // [struct _VIDEO_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct record_t                                  
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m00 uint32_t                 memory_size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MemorySize
        _m01 uint32_t                 x_resolution;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .XResolution
        _m02 uint32_t                 y_resolution;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .YResolution
        _m03 uint32_t                 bits_per_pixel;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .BitsPerPixel
        _m04 uint32_t                 v_refresh;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VRefresh
        _m05 sdk::array<wchar_t, 256> chip_type;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ChipType
        _m06 sdk::array<wchar_t, 256> dac_type;        //{ +0x0214    +0x0214    +0x0214    +0x0214    } | .DACType
        _m07 sdk::array<wchar_t, 256> adapter_string;  //{ +0x0414    +0x0414    +0x0414    +0x0414    } | .AdapterString
        _m08 sdk::array<wchar_t, 256> bios_string;     //{ +0x0614    +0x0614    +0x0614    +0x0614    } | .BiosString
        _m09 sdk::array<wchar_t, 256> device_id;       //{ +0x0814    +0x0814    +0x0814    +0x0814    } | .DeviceId
        _m10 uint32_t                 state_flags;     //{ +0x0a14    +0x0a14    +0x0a14    +0x0a14    } | .StateFlags
                                                     
        SDK_MAGIC_PROPERTIES( "_VIDEO_RECORD.$", 0xa18, true, 0x37704fd55c4e2c0d );               
        SDK_FIXED_SIZE( record_t, 0xa18 );               
    };                                               
};
#include "magic/record_t.end.hpp"
SDK_VERIFY( struct video::record_t, 0xa18 );
