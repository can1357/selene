#pragma once
#include <sdkgen/support_library.hpp>
#include "msv1_0_protocol_message_type_t.hpp"

#include "magic/msv1_0_enumusers_response_t.start.hpp"
namespace nt
{
    struct luid_t;

    // [struct _MSV1_0_ENUMUSERS_RESPONSE]
    // => WDK 10 (NV)
    //
    struct msv1_0_enumusers_response_t                                         
    {                                                                          
        // WDK 10                                                              
        //                                                                     
        _m00 enum nt::msv1_0_protocol_message_type_t message_type;               //{ +0x0000    } | .MessageType
        _m01 uint32_t                                number_of_logged_on_users;  //{ +0x0004    } | .NumberOfLoggedOnUsers
        _m02 struct nt::luid_t*                      logon_ids;                  //{ +0x0008    } | .LogonIds
        _m03 uint32_t*                               enum_handles;               //{ +0x0010    } | .EnumHandles
                                                                               
        SDK_NONVOL_PROPERTIES( "_MSV1_0_ENUMUSERS_RESPONSE.$", 0x0, false, 0x6ca6195e783f2ece );                          
        SDK_FIXED_SIZE( msv1_0_enumusers_response_t, 0x18 );                          
    };                                                                         
};
#include "magic/msv1_0_enumusers_response_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_enumusers_response_t, 0x18 );
