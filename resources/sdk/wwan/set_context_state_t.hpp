#pragma once
#include <sdkgen/support_library.hpp>
#include "ip_type_t.hpp"
#include "compression_t.hpp"
#include "auth_protocol_t.hpp"
#include "activation_command_t.hpp"
#include "psmedia_preference_t.hpp"
#include "configuration_source_t.hpp"

#include "magic/set_context_state_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_SET_CONTEXT_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct set_context_state_t                                         
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                             
        _m00 uint32_t                          connection_id;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ConnectionId
        _m01 enum wwan::activation_command_t   activation_command;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ActivationCommand
        _m02 sdk::array<wchar_t, 101>          access_string;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AccessString
        _m03 sdk::array<wchar_t, 256>          user_name;                //{ +0x00d2    +0x00d2    +0x00d2    +0x00d2    } | .UserName
        _m04 sdk::array<wchar_t, 256>          password;                 //{ +0x02d2    +0x02d2    +0x02d2    +0x02d2    } | .Password
        _m05 enum wwan::compression_t          compression;              //{ +0x04d4    +0x04d4    +0x04d4    +0x04d4    } | .Compression
        _m06 enum wwan::auth_protocol_t        auth_type;                //{ +0x04d8    +0x04d8    +0x04d8    +0x04d8    } | .AuthType
        _m07 enum wwan::ip_type_t              ip_type;                  //{ +0x04dc    +0x04dc    +0x04dc    +0x04dc    } | .IPType
        _m08 enum wwan::psmedia_preference_t   media_preference;         //{ +0x04e0    +0x04e0    +0x04e0    +0x04e0    } | .MediaPreference
        _m09 enum wwan::configuration_source_t connection_media_source;  //{ +0x04e4    +0x04e4    +0x04e4    +0x04e4    } | .ConnectionMediaSource
                                                                       
        SDK_MAGIC_PROPERTIES( "_WWAN_SET_CONTEXT_STATE.$", 0x4e8, true, 0x9bdbdac4825dd5c5 );                        
        SDK_FIXED_SIZE( set_context_state_t, 0x4e8 );                        
    };                                                                 
};
#include "magic/set_context_state_t.end.hpp"
SDK_VERIFY( struct wwan::set_context_state_t, 0x4e8 );
