#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wmi_legacy_perfstate_t.start.hpp"
namespace ppm
{
    // [struct PPM_WMI_LEGACY_PERFSTATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wmi_legacy_perfstate_t       
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t frequency;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Frequency
        _m01 uint32_t flags;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t percent_frequency;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PercentFrequency
                                        
        SDK_MAGIC_PROPERTIES( "PPM_WMI_LEGACY_PERFSTATE.$", 0xc, true, 0xea89675f8c2f045 );                  
        SDK_FIXED_SIZE( wmi_legacy_perfstate_t, 0xc );                  
    };                                  
};
#include "magic/wmi_legacy_perfstate_t.end.hpp"
SDK_VERIFY( struct ppm::wmi_legacy_perfstate_t, 0xc );
