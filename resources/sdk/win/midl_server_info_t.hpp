#pragma once
#include <sdkgen/support_library.hpp>

namespace rpc { struct syntax_identifier_t; }

#include "magic/midl_server_info_t.start.hpp"
namespace win
{
    struct midl_stub_desc_t;
    struct midl_syntax_info_t;
    struct midl_stub_message_t;

    // [struct _MIDL_SERVER_INFO_]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_server_info_t                                      
    {                                                              
        using dispatch_table_t = sdk::variant<sdk::function<int32_t()> const**, sdk::function<int32_t(...)> const**>;                  
        using thunk_table_t =    sdk::function<void(struct win::midl_stub_message_t*)> const**;                  
                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                         
        _m00 const struct win::midl_stub_desc_t* p_stub_desc;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pStubDesc
        _m01 dispatch_table_t                    dispatch_table;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DispatchTable
        _m02 const uint8_t*                      proc_string;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcString
        _m03 const uint16_t*                     fmt_string_offset;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FmtStringOffset
        _m04 thunk_table_t                       thunk_table;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ThunkTable
        _m05 struct rpc::syntax_identifier_t*    p_transfer_syntax;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pTransferSyntax
        _m06 uint64_t                            n_count;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .nCount
        _m07 struct win::midl_syntax_info_t*     p_syntax_info;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pSyntaxInfo
                                                                   
        SDK_MAGIC_PROPERTIES( "_MIDL_SERVER_INFO_.$", 0x40, true, 0x3faace0aaec5127b );                  
        SDK_FIXED_SIZE( midl_server_info_t, 0x40 );                  
    };                                                             
};
#include "magic/midl_server_info_t.end.hpp"
SDK_VERIFY( struct win::midl_server_info_t, 0x40 );
