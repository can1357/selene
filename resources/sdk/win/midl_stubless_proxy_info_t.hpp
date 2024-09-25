#pragma once
#include <sdkgen/support_library.hpp>

namespace rpc { struct syntax_identifier_t; }

#include "magic/midl_stubless_proxy_info_t.start.hpp"
namespace win
{
    struct midl_stub_desc_t;
    struct midl_syntax_info_t;

    // [struct _MIDL_STUBLESS_PROXY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_stubless_proxy_info_t                                 
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 const struct win::midl_stub_desc_t* p_stub_desc;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pStubDesc
        _m01 const uint8_t*                      proc_format_string;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcFormatString
        _m02 const uint16_t*                     format_string_offset;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FormatStringOffset
        _m03 struct rpc::syntax_identifier_t*    p_transfer_syntax;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pTransferSyntax
        _m04 uint64_t                            n_count;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .nCount
        _m05 struct win::midl_syntax_info_t*     p_syntax_info;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pSyntaxInfo
                                                                      
        SDK_MAGIC_PROPERTIES( "_MIDL_STUBLESS_PROXY_INFO.$", 0x30, true, 0xfa2158237ef4c3c7 );                     
        SDK_FIXED_SIZE( midl_stubless_proxy_info_t, 0x30 );                     
    };                                                                
};
#include "magic/midl_stubless_proxy_info_t.end.hpp"
SDK_VERIFY( struct win::midl_stubless_proxy_info_t, 0x30 );
