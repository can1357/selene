#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/binding_handle_options_v1_t.start.hpp"
namespace rpc
{
    // [struct _RPC_BINDING_HANDLE_OPTIONS_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct binding_handle_options_v1_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t version;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t flags;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t com_timeout;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ComTimeout
        _m03 uint32_t call_timeout;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CallTimeout
                                      
        SDK_MAGIC_PROPERTIES( "_RPC_BINDING_HANDLE_OPTIONS_V1.$", 0x10, true, 0xff7a9790179fc3a );             
        SDK_FIXED_SIZE( binding_handle_options_v1_t, 0x10 );             
    };                                
};
#include "magic/binding_handle_options_v1_t.end.hpp"
SDK_VERIFY( struct rpc::binding_handle_options_v1_t, 0x10 );
