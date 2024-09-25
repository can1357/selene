#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/pnp_record_v4_t.start.hpp"
namespace wmi
{
    // [struct _WMI_PNP_RECORD_V4]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pnp_record_v4_t                             
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 struct nt::guid_t      class_guid;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ClassGuid
        _m01 uint32_t               upper_filter_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UpperFilterCount
        _m02 uint32_t               lower_filter_count;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .LowerFilterCount
        _m03 sdk::array<wchar_t, 1> strings;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Strings
                                                       
        SDK_MAGIC_PROPERTIES( "_WMI_PNP_RECORD_V4.$", 0x1c, true, 0xa738daccb576ce57 );                   
        SDK_FIXED_SIZE( pnp_record_v4_t, 0x1c );                   
    };                                                 
};
#include "magic/pnp_record_v4_t.end.hpp"
SDK_VERIFY( struct wmi::pnp_record_v4_t, 0x1c );
