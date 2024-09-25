#pragma once
#include <sdkgen/support_library.hpp>
#include "../sec/client_context_t.hpp"

namespace alpc { struct handle_table_t; }
namespace alpc { struct port_t;         }

#include "magic/kalpc_security_data_t.start.hpp"
namespace nt
{
    struct eprocess_t;

    // [struct _KALPC_SECURITY_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kalpc_security_data_t                           
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                 
        _m00 struct alpc::handle_table_t* handle_table;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HandleTable
        _m01 void*                        context_handle;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextHandle
        _m02 struct nt::eprocess_t*       owning_process;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OwningProcess
        _m03 struct alpc::port_t*         owner_port;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OwnerPort
        _m04 struct sec::client_context_t dynamic_security;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DynamicSecurity
        _m05 uint1_t                      revoked;           //{ +0x0068@0  +0x0068@0  +0x0068@0  +0x0068@0  } | .Revoked
        _m06 uint1_t                      impersonated;      //{ +0x0068@1  +0x0068@1  +0x0068@1  +0x0068@1  } | .Impersonated
                                                           
        SDK_MAGIC_PROPERTIES( "_KALPC_SECURITY_DATA.$", 0x70, true, 0x4b51dc45bcc27534 );                 
        SDK_FIXED_SIZE( kalpc_security_data_t, 0x70 );                 
    };                                                     
};
#include "magic/kalpc_security_data_t.end.hpp"
SDK_VERIFY( struct nt::kalpc_security_data_t, 0x70 );
