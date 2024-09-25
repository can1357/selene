#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/softdistinfo_t.start.hpp"
namespace tag
{
    // [struct _tagSOFTDISTINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct softdistinfo_t                      
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t cb_size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_flags;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 uint32_t dw_ad_state;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwAdState
        _m03 wchar_t* sz_title;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .szTitle
        _m04 wchar_t* sz_abstract;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .szAbstract
        _m05 wchar_t* sz_href;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .szHREF
        _m06 uint32_t dw_installed_version_ms;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwInstalledVersionMS
        _m07 uint32_t dw_installed_version_ls;   //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwInstalledVersionLS
        _m08 uint32_t dw_update_version_ms;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwUpdateVersionMS
        _m09 uint32_t dw_update_version_ls;      //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .dwUpdateVersionLS
        _m10 uint32_t dw_advertised_version_ms;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .dwAdvertisedVersionMS
        _m11 uint32_t dw_advertised_version_ls;  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .dwAdvertisedVersionLS
        _m12 uint32_t dw_reserved;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .dwReserved
                                               
        SDK_MAGIC_PROPERTIES( "_tagSOFTDISTINFO.$", 0x48, true, 0xe5c16ad3d830f32e );                         
        SDK_FIXED_SIZE( softdistinfo_t, 0x48 );                         
    };                                         
};
#include "magic/softdistinfo_t.end.hpp"
SDK_VERIFY( struct tag::softdistinfo_t, 0x48 );
