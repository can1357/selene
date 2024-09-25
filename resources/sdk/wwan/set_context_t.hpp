#pragma once
#include <sdkgen/support_library.hpp>
#include "compression_t.hpp"
#include "context_type_t.hpp"
#include "auth_protocol_t.hpp"

#include "magic/set_context_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_SET_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct set_context_t                              
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                            
        _m00 uint32_t                   context_id;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContextId
        _m01 enum wwan::context_type_t  context_type;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ContextType
        _m02 sdk::array<wchar_t, 101>   access_string;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AccessString
        _m03 sdk::array<wchar_t, 256>   user_name;      //{ +0x00d2    +0x00d2    +0x00d2    +0x00d2    } | .UserName
        _m04 sdk::array<wchar_t, 256>   password;       //{ +0x02d2    +0x02d2    +0x02d2    +0x02d2    } | .Password
        _m05 enum wwan::compression_t   compression;    //{ +0x04d4    +0x04d4    +0x04d4    +0x04d4    } | .Compression
        _m06 enum wwan::auth_protocol_t auth_type;      //{ +0x04d8    +0x04d8    +0x04d8    +0x04d8    } | .AuthType
        _m07 sdk::array<wchar_t, 7>     provider_id;    //{ +0x04dc    +0x04dc    +0x04dc    +0x04dc    } | .ProviderId
                                                      
        SDK_MAGIC_PROPERTIES( "_WWAN_SET_CONTEXT.$", 0x4ec, true, 0x31eca2bd1e0cb1ef );              
        SDK_FIXED_SIZE( set_context_t, 0x4ec );              
    };                                                
};
#include "magic/set_context_t.end.hpp"
SDK_VERIFY( struct wwan::set_context_t, 0x4ec );
