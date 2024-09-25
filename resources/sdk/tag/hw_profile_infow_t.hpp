#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hw_profile_infow_t.start.hpp"
namespace tag
{
    // [struct tagHW_PROFILE_INFOW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hw_profile_infow_t                           
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                              
        _m00 uint32_t                dw_dock_info;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwDockInfo
        _m01 sdk::array<wchar_t, 39> sz_hw_profile_guid;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .szHwProfileGuid
        _m02 sdk::array<wchar_t, 80> sz_hw_profile_name;  //{ +0x0052    +0x0052    +0x0052    +0x0052    } | .szHwProfileName
                                                        
        SDK_MAGIC_PROPERTIES( "tagHW_PROFILE_INFOW.$", 0xf4, true, 0x61bca8544a4a9532 );                   
        SDK_FIXED_SIZE( hw_profile_infow_t, 0xf4 );                   
    };                                                  
};
#include "magic/hw_profile_infow_t.end.hpp"
SDK_VERIFY( struct tag::hw_profile_infow_t, 0xf4 );
