#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pnp_record_v3_t.start.hpp"
namespace wmi
{
    // [struct _WMI_PNP_RECORD_V3]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pnp_record_v3_t                               
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                               
        _m00 uint32_t               id_length;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IDLength
        _m01 uint32_t               description_length;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DescriptionLength
        _m02 uint32_t               friendly_name_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FriendlyNameLength
        _m03 sdk::array<wchar_t, 1> strings;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Strings
                                                         
        SDK_MAGIC_PROPERTIES( "_WMI_PNP_RECORD_V3.$", 0x10, true, 0x1169e1bd36ead711 );                     
        SDK_FIXED_SIZE( pnp_record_v3_t, 0x10 );                     
    };                                                   
};
#include "magic/pnp_record_v3_t.end.hpp"
SDK_VERIFY( struct wmi::pnp_record_v3_t, 0x10 );
