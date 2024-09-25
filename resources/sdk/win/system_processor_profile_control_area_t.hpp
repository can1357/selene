#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct processor_profile_control_area_t; }

#include "magic/system_processor_profile_control_area_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESSOR_PROFILE_CONTROL_AREA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_processor_profile_control_area_t                                       
    {                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                               
        _m00 struct nt::processor_profile_control_area_t* processor_profile_control_area;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessorProfileControlArea
        _m01 uint8_t                                      allocate;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Allocate
                                                                                         
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESSOR_PROFILE_CONTROL_AREA.$", 0x10, true, 0x3c0a38a2f9ff6d3b );                               
        SDK_FIXED_SIZE( system_processor_profile_control_area_t, 0x10 );                               
    };                                                                                   
};
#include "magic/system_processor_profile_control_area_t.end.hpp"
SDK_VERIFY( struct win::system_processor_profile_control_area_t, 0x10 );
