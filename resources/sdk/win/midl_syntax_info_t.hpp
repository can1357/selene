#pragma once
#include <sdkgen/support_library.hpp>
#include "../rpc/syntax_identifier_t.hpp"

namespace rpc { struct dispatch_table_t; }

#include "magic/midl_syntax_info_t.start.hpp"
namespace win
{
    struct midl_interface_method_properties_t;

    // [struct _MIDL_SYNTAX_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_syntax_info_t                                         
    {                                                                 
        using p_method_properties_t = const struct win::midl_interface_method_properties_t*;                         
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                            
        _m00 struct rpc::syntax_identifier_t transfer_syntax;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TransferSyntax
        _m01 struct rpc::dispatch_table_t*   dispatch_table;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DispatchTable
        _m02 const uint8_t*                  proc_string;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ProcString
        _m03 const uint16_t*                 fmt_string_offset;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FmtStringOffset
        _m04 const uint8_t*                  type_string;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TypeString
        _m05 const void*                     a_user_marshal_quadruple;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .aUserMarshalQuadruple
        _m06 p_method_properties_t           p_method_properties;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pMethodProperties
        _m07 uint64_t                        p_reserved2;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pReserved2
                                                                      
        SDK_MAGIC_PROPERTIES( "_MIDL_SYNTAX_INFO.$", 0x50, true, 0xe569e7ace2ab8563 );                         
        SDK_FIXED_SIZE( midl_syntax_info_t, 0x50 );                         
    };                                                                
};
#include "magic/midl_syntax_info_t.end.hpp"
SDK_VERIFY( struct win::midl_syntax_info_t, 0x50 );
