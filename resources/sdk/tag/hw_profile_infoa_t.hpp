#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hw_profile_infoa_t.start.hpp"
namespace tag
{
    // [struct tagHW_PROFILE_INFOA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hw_profile_infoa_t                        
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                           
        _m00 uint32_t             dw_dock_info;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwDockInfo
        _m01 sdk::array<char, 39> sz_hw_profile_guid;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .szHwProfileGuid
        _m02 sdk::array<char, 80> sz_hw_profile_name;  //{ +0x002b    +0x002b    +0x002b    +0x002b    } | .szHwProfileName
                                                     
        SDK_MAGIC_PROPERTIES( "tagHW_PROFILE_INFOA.$", 0x7c, true, 0x4ceb233c47b235fe );                   
        SDK_FIXED_SIZE( hw_profile_infoa_t, 0x7c );                   
    };                                               
};
#include "magic/hw_profile_infoa_t.end.hpp"
SDK_VERIFY( struct tag::hw_profile_infoa_t, 0x7c );
