#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rm_revoke_message_t.start.hpp"
namespace win
{
    // [struct _RM_REVOKE_MESSAGE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rm_revoke_message_t               
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint8_t  requested_action;        //{ +0x0000    +0x0000    +0x0000    } | .RequestedAction
        _m01 uint8_t  revoke_reason;           //{ +0x0001    +0x0001    +0x0001    } | .RevokeReason
        _m02 uint8_t  external_resource_type;  //{ +0x0002    +0x0002    +0x0002    } | .ExternalResourceType
        _m03 uint32_t all;                     //{ +0x0000    +0x0000    +0x0000    } | .All
                                             
        SDK_MAGIC_PROPERTIES( "_RM_REVOKE_MESSAGE.$", 0x4, true, 0x6f6adca1490d542b );                       
        SDK_FIXED_SIZE( rm_revoke_message_t, 0x4 );                       
    };                                       
};
#include "magic/rm_revoke_message_t.end.hpp"
SDK_VERIFY( struct win::rm_revoke_message_t, 0x4 );
