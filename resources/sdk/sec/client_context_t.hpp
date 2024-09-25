#pragma once
#include <sdkgen/support_library.hpp>
#include "quality_of_service_t.hpp"
#include "../nt/token_control_t.hpp"

#include "magic/client_context_t.start.hpp"
namespace sec
{
    // [struct _SECURITY_CLIENT_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct client_context_t                                                
    {                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                 
        _m00 struct sec::quality_of_service_t security_qos;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityQos
        _m01 void*                            client_token;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ClientToken
        _m02 uint8_t                          directly_access_client_token;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DirectlyAccessClientToken
        _m03 uint8_t                          direct_access_effective_only;  //{ +0x0019    +0x0019    +0x0019    +0x0019    +0x0019    } | .DirectAccessEffectiveOnly
        _m04 uint8_t                          server_is_remote;              //{ +0x001a    +0x001a    +0x001a    +0x001a    +0x001a    } | .ServerIsRemote
        _m05 struct nt::token_control_t       client_token_control;          //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .ClientTokenControl
                                                                           
        SDK_NONVOL_PROPERTIES( "_SECURITY_CLIENT_CONTEXT.$", 0x48, true, 0x892d29166421146b );                             
        SDK_FIXED_SIZE( client_context_t, 0x48 );                             
    };                                                                     
};
#include "magic/client_context_t.end.hpp"
SDK_VERIFY( struct sec::client_context_t, 0x48 );
