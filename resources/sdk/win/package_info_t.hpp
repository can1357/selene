#pragma once
#include <sdkgen/support_library.hpp>
#include "package_id_t.hpp"

#include "magic/package_info_t.start.hpp"
namespace win
{
    // [struct PACKAGE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct package_info_t                                 
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                
        _m00 uint32_t                 flags;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .flags
        _m01 wchar_t*                 path;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .path
        _m02 wchar_t*                 package_full_name;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .packageFullName
        _m03 wchar_t*                 package_family_name;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .packageFamilyName
        _m04 struct win::package_id_t package_id;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .packageId
                                                          
        SDK_MAGIC_PROPERTIES( "PACKAGE_INFO.$", 0x50, true, 0xd347625d3cb7bf85 );                    
        SDK_FIXED_SIZE( package_info_t, 0x50 );                    
    };                                                    
};
#include "magic/package_info_t.end.hpp"
SDK_VERIFY( struct win::package_info_t, 0x50 );
