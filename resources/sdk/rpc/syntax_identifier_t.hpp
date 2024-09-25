#pragma once
#include <sdkgen/support_library.hpp>
#include "version_t.hpp"
#include "../nt/guid_t.hpp"

#include "magic/syntax_identifier_t.start.hpp"
namespace rpc
{
    // [struct _RPC_SYNTAX_IDENTIFIER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct syntax_identifier_t                    
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                        
        _m00 struct nt::guid_t     syntax_guid;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SyntaxGUID
        _m01 struct rpc::version_t syntax_version;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SyntaxVersion
                                                  
        SDK_MAGIC_PROPERTIES( "_RPC_SYNTAX_IDENTIFIER.$", 0x14, true, 0xc53698dc56feeca3 );               
        SDK_FIXED_SIZE( syntax_identifier_t, 0x14 );               
    };                                            
};
#include "magic/syntax_identifier_t.end.hpp"
SDK_VERIFY( struct rpc::syntax_identifier_t, 0x14 );
