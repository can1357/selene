#pragma once
#include <sdkgen/support_library.hpp>
#include "system_activity_moderation_state_t.hpp"
#include "system_activity_moderation_app_type_t.hpp"

#include "magic/system_activity_moderation_info_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_ACTIVITY_MODERATION_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_activity_moderation_info_t                                  
    {                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                    
        _m00 nt::unicode_view                                identifier;        //{ +0x0000    +0x0000    +0x0000    } | .Identifier
        _m01 enum win::system_activity_moderation_state_t    moderation_state;  //{ +0x0010    +0x0010    +0x0010    } | .ModerationState
        _m02 enum win::system_activity_moderation_app_type_t app_type;          //{ +0x0014    +0x0014    +0x0014    } | .AppType
                                                                              
        SDK_MAGIC_PROPERTIES( "_SYSTEM_ACTIVITY_MODERATION_INFO.$", 0x18, true, 0x451061dcf9eea2b8 );                 
        SDK_FIXED_SIZE( system_activity_moderation_info_t, 0x18 );                 
    };                                                                        
};
#include "magic/system_activity_moderation_info_t.end.hpp"
SDK_VERIFY( struct win::system_activity_moderation_info_t, 0x18 );
