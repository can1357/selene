#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/sid_t.hpp"
#include "hot_patch_image_info_t.hpp"

#include "magic/manage_hot_patch_load_patch_t.start.hpp"
namespace win
{
    // [struct _MANAGE_HOT_PATCH_LOAD_PATCH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct manage_hot_patch_load_patch_t                   
    {                                                      
        union u0_user_sid_t                                
        {                                                  
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
            //                                             
            _m02 struct nt::sid_t        sid;                //{ +0x0000    +0x0000    +0x0000    } | .Sid
            _m03 sdk::array<uint8_t, 68> buffer;             //{ +0x0000    +0x0000    +0x0000    } | .Buffer
                                                           
            SDK_MAGIC_PROPERTIES( "_MANAGE_HOT_PATCH_LOAD_PATCH.UserSid.$", 0x44, true, 0xc9ea942d7bc78013 );                  
            SDK_FIXED_SIZE( u0_user_sid_t, 0x44 );                  
        };                                                 
                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                 
        _m00 uint32_t                           version;     //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 nt::unicode_view                   patch_path;  //{ +0x0008    +0x0008    +0x0008    } | .PatchPath
        _m04 u0_user_sid_t                      user_sid;    //{ +0x0018    +0x0018    +0x0018    } | .UserSid
        _m05 struct win::hot_patch_image_info_t base_info;   //{ +0x005c    +0x005c    +0x005c    } | .BaseInfo
                                                           
        SDK_MAGIC_PROPERTIES( "_MANAGE_HOT_PATCH_LOAD_PATCH.$", 0x68, true, 0xb3738a92d5cd6665 );           
        SDK_FIXED_SIZE( manage_hot_patch_load_patch_t, 0x68 );           
    };                                                     
};
#include "magic/manage_hot_patch_load_patch_t.end.hpp"
SDK_VERIFY( union win::manage_hot_patch_load_patch_t::u0_user_sid_t, 0x44 );
SDK_VERIFY( struct win::manage_hot_patch_load_patch_t, 0x68 );
