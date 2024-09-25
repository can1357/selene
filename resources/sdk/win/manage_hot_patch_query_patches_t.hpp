#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/sid_t.hpp"

#include "magic/manage_hot_patch_query_patches_t.start.hpp"
namespace win
{
    struct hot_patch_image_info_t;

    // [struct _MANAGE_HOT_PATCH_QUERY_PATCHES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct manage_hot_patch_query_patches_t                         
    {                                                               
        union u0_user_sid_t                                         
        {                                                           
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                                      
            _m01 struct nt::sid_t        sid;                         //{ +0x0000    +0x0000    +0x0000    } | .Sid
            _m02 sdk::array<uint8_t, 68> buffer;                      //{ +0x0000    +0x0000    +0x0000    } | .Buffer
                                                                    
            SDK_MAGIC_PROPERTIES( "_MANAGE_HOT_PATCH_QUERY_PATCHES.UserSid.$", 0x44, true, 0x489175a9cbf0f3ad );                          
            SDK_FIXED_SIZE( u0_user_sid_t, 0x44 );                          
        };                                                          
                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                          
        _m00 uint32_t                            version;             //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m03 u0_user_sid_t                       user_sid;            //{ +0x0004    +0x0004    +0x0004    } | .UserSid
        _m04 uint32_t                            patch_count;         //{ +0x0048    +0x0048    +0x0048    } | .PatchCount
        _m05 nt::unicode_view*                   patch_path_strings;  //{ +0x0050    +0x0050    +0x0050    } | .PatchPathStrings
        _m06 struct win::hot_patch_image_info_t* base_infos;          //{ +0x0058    +0x0058    +0x0058    } | .BaseInfos
                                                                    
        SDK_MAGIC_PROPERTIES( "_MANAGE_HOT_PATCH_QUERY_PATCHES.$", 0x60, true, 0xd2ff31b456cceaf3 );                   
        SDK_FIXED_SIZE( manage_hot_patch_query_patches_t, 0x60 );                   
    };                                                              
};
#include "magic/manage_hot_patch_query_patches_t.end.hpp"
SDK_VERIFY( union win::manage_hot_patch_query_patches_t::u0_user_sid_t, 0x44 );
SDK_VERIFY( struct win::manage_hot_patch_query_patches_t, 0x60 );
