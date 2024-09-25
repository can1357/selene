#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/transfer_syntax_t.start.hpp"
namespace rpc
{
    // [struct _RPC_TRANSFER_SYNTAX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct transfer_syntax_t              
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                
        _m00 struct nt::guid_t uuid;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Uuid
        _m01 uint16_t          vers_major;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VersMajor
        _m02 uint16_t          vers_minor;  //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .VersMinor
                                          
        SDK_MAGIC_PROPERTIES( "_RPC_TRANSFER_SYNTAX.$", 0x14, true, 0x1f1b1f9a1bc42f5 );           
        SDK_FIXED_SIZE( transfer_syntax_t, 0x14 );           
    };                                    
};
#include "magic/transfer_syntax_t.end.hpp"
SDK_VERIFY( struct rpc::transfer_syntax_t, 0x14 );
