#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/osversioninfow_t.start.hpp"
namespace nt
{
    // [struct _OSVERSIONINFOW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct osversioninfow_t                                   
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                    
        _m00 uint32_t                 dw_os_version_info_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .dwOSVersionInfoSize
        _m01 uint32_t                 dw_major_version;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMajorVersion
        _m02 uint32_t                 dw_minor_version;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .dwMinorVersion
        _m03 uint32_t                 dw_build_number;          //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .dwBuildNumber
        _m04 uint32_t                 dw_platform_id;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .dwPlatformId
        _m05 sdk::array<wchar_t, 128> sz_csd_version;           //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .szCSDVersion
                                                              
        SDK_NONVOL_PROPERTIES( "_OSVERSIONINFOW.$", 0x114, true, 0x8ce2a9836e4b2deb );                        
        SDK_FIXED_SIZE( osversioninfow_t, 0x114 );                        
    };                                                        
};
#include "magic/osversioninfow_t.end.hpp"
SDK_VERIFY( struct nt::osversioninfow_t, 0x114 );
