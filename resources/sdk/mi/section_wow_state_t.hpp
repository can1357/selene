#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_ex_t.hpp"
#include "dll_overflow_area_t.hpp"

namespace nt { struct control_area_t; }
namespace nt { struct section_t;      }

#include "magic/section_wow_state_t.start.hpp"
namespace mi
{
    // [struct _MI_SECTION_WOW_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct section_wow_state_t                                       
    {                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                           
        _m00 struct rtl::bitmap_ex_t        image_bit_map;             //{ +0x0000    +0x0000    +0x0000    } | .ImageBitMap
        _m01 struct mi::dll_overflow_area_t overflow_area;             //{ +0x0010    +0x0010    +0x0010    } | .OverflowArea
        _m02 struct nt::section_t*          cfg_bit_map_section;       //{ +0x0030    +0x0030    +0x0030    } | .CfgBitMapSection
        _m03 struct nt::control_area_t*     cfg_bit_map_control_area;  //{ +0x0038    +0x0038    +0x0038    } | .CfgBitMapControlArea
                                                                     
        SDK_MAGIC_PROPERTIES( "_MI_SECTION_WOW_STATE.$", 0x40, true, 0xd1d8c46ffecc3f98 );                         
        SDK_FIXED_SIZE( section_wow_state_t, 0x40 );                         
    };                                                               
};
#include "magic/section_wow_state_t.end.hpp"
SDK_VERIFY( struct mi::section_wow_state_t, 0x40 );
