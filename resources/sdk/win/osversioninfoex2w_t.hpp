#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/osversioninfoex2w_t.start.hpp"
namespace win
{
    // [struct _OSVERSIONINFOEX2W]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct osversioninfoex2w_t                                
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                    
        _m00 uint32_t                 dw_os_version_info_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwOSVersionInfoSize
        _m01 uint32_t                 dw_major_version;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMajorVersion
        _m02 uint32_t                 dw_minor_version;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwMinorVersion
        _m03 uint32_t                 dw_build_number;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwBuildNumber
        _m04 uint32_t                 dw_platform_id;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwPlatformId
        _m05 sdk::array<wchar_t, 128> sz_csd_version;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .szCSDVersion
        _m06 uint16_t                 w_service_pack_major;     //{ +0x0114    +0x0114    +0x0114    +0x0114    } | .wServicePackMajor
        _m07 uint16_t                 w_service_pack_minor;     //{ +0x0116    +0x0116    +0x0116    +0x0116    } | .wServicePackMinor
        _m08 uint16_t                 w_suite_mask;             //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .wSuiteMask
        _m09 uint8_t                  w_product_type;           //{ +0x011a    +0x011a    +0x011a    +0x011a    } | .wProductType
        _m10 uint8_t                  w_reserved;               //{ +0x011b    +0x011b    +0x011b    +0x011b    } | .wReserved
        _m11 uint32_t                 w_suite_mask_ex;          //{ +0x011c    +0x011c    +0x011c    +0x011c    } | .wSuiteMaskEx
        _m12 uint32_t                 w_reserved2;              //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .wReserved2
                                                              
        SDK_MAGIC_PROPERTIES( "_OSVERSIONINFOEX2W.$", 0x124, true, 0x3019515d899c5de1 );                        
        SDK_FIXED_SIZE( osversioninfoex2w_t, 0x124 );                        
    };                                                        
};
#include "magic/osversioninfoex2w_t.end.hpp"
SDK_VERIFY( struct win::osversioninfoex2w_t, 0x124 );
