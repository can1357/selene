#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_usage_match_t.hpp"

#include "magic/cert_chain_para_t.start.hpp"
namespace win
{
    // [struct _CERT_CHAIN_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_chain_para_t                                
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                  
        _m00 uint32_t                       cb_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::cert_usage_match_t requested_usage;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RequestedUsage
                                                            
        SDK_MAGIC_PROPERTIES( "_CERT_CHAIN_PARA.$", 0x20, true, 0x4044a563741990bb );                
        SDK_FIXED_SIZE( cert_chain_para_t, 0x20 );                
    };                                                      
};
#include "magic/cert_chain_para_t.end.hpp"
SDK_VERIFY( struct win::cert_chain_para_t, 0x20 );
