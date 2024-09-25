#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/zoneattributes_t.start.hpp"
namespace win
{
    // [struct _ZONEATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct zoneattributes_t                                     
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                      
        _m00 uint32_t                 cb_size;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 sdk::array<wchar_t, 260> sz_display_name;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .szDisplayName
        _m02 sdk::array<wchar_t, 200> sz_description;             //{ +0x020c    +0x020c    +0x020c    +0x020c    } | .szDescription
        _m03 sdk::array<wchar_t, 260> sz_icon_path;               //{ +0x039c    +0x039c    +0x039c    +0x039c    } | .szIconPath
        _m04 uint32_t                 dw_template_min_level;      //{ +0x05a4    +0x05a4    +0x05a4    +0x05a4    } | .dwTemplateMinLevel
        _m05 uint32_t                 dw_template_recommended;    //{ +0x05a8    +0x05a8    +0x05a8    +0x05a8    } | .dwTemplateRecommended
        _m06 uint32_t                 dw_template_current_level;  //{ +0x05ac    +0x05ac    +0x05ac    +0x05ac    } | .dwTemplateCurrentLevel
        _m07 uint32_t                 dw_flags;                   //{ +0x05b0    +0x05b0    +0x05b0    +0x05b0    } | .dwFlags
                                                                
        SDK_MAGIC_PROPERTIES( "_ZONEATTRIBUTES.$", 0x5b4, true, 0x709c37c3eddab930 );                          
        SDK_FIXED_SIZE( zoneattributes_t, 0x5b4 );                          
    };                                                          
};
#include "magic/zoneattributes_t.end.hpp"
SDK_VERIFY( struct win::zoneattributes_t, 0x5b4 );
