#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rpc_local_address_format_t.hpp"

#include "magic/call_local_address_v1_t.start.hpp"
namespace rpc
{
    // [struct _RPC_CALL_LOCAL_ADDRESS_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct call_local_address_v1_t                               
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                       
        _m00 uint32_t                             version;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 void*                                buffer;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
        _m02 uint32_t                             buffer_size;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BufferSize
        _m03 enum tag::rpc_local_address_format_t address_format;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .AddressFormat
                                                                 
        SDK_MAGIC_PROPERTIES( "_RPC_CALL_LOCAL_ADDRESS_V1.$", 0x18, true, 0x8b3fc6e50d07ec2f );               
        SDK_FIXED_SIZE( call_local_address_v1_t, 0x18 );               
    };                                                           
};
#include "magic/call_local_address_v1_t.end.hpp"
SDK_VERIFY( struct rpc::call_local_address_v1_t, 0x18 );
