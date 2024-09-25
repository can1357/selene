#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/osversioninfoexa_t.start.hpp"
namespace win
{
    // [struct _OSVERSIONINFOEXA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct osversioninfoexa_t                              
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                 
        _m00 uint32_t              dw_os_version_info_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .dwOSVersionInfoSize
        _m01 uint32_t              dw_major_version;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMajorVersion
        _m02 uint32_t              dw_minor_version;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .dwMinorVersion
        _m03 uint32_t              dw_build_number;          //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .dwBuildNumber
        _m04 uint32_t              dw_platform_id;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .dwPlatformId
        _m05 sdk::array<char, 128> sz_csd_version;           //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .szCSDVersion
        _m06 uint16_t              w_service_pack_major;     //{ +0x0094    +0x0094    +0x0094    +0x0094    +0x0094    } | .wServicePackMajor
        _m07 uint16_t              w_service_pack_minor;     //{ +0x0096    +0x0096    +0x0096    +0x0096    +0x0096    } | .wServicePackMinor
        _m08 uint16_t              w_suite_mask;             //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .wSuiteMask
        _m09 uint8_t               w_product_type;           //{ +0x009a    +0x009a    +0x009a    +0x009a    +0x009a    } | .wProductType
        _m10 uint8_t               w_reserved;               //{ +0x009b    +0x009b    +0x009b    +0x009b    +0x009b    } | .wReserved
                                                           
        SDK_NONVOL_PROPERTIES( "_OSVERSIONINFOEXA.$", 0x9c, true, 0x94ae684c8b71576c );                        
        SDK_FIXED_SIZE( osversioninfoexa_t, 0x9c );                        
    };                                                     
};
#include "magic/osversioninfoexa_t.end.hpp"
SDK_VERIFY( struct win::osversioninfoexa_t, 0x9c );
