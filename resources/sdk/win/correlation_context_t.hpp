#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/correlation_context_t.start.hpp"
namespace win
{
    struct midl_stub_message_t;

    // [class CORRELATION_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class correlation_context_t                                        
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                             
        _m00 struct win::midl_stub_message_t const* p_stub_msg;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pStubMsg
        _m01 uint8_t const*                         p_corr_memory_save;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pCorrMemorySave
                                                                       
        SDK_MAGIC_PROPERTIES( "CORRELATION_CONTEXT.$", 0x10, true, 0x4dfa7e1cf4929636 );                   
        SDK_FIXED_SIZE( correlation_context_t, 0x10 );                   
    };                                                                 
};
#include "magic/correlation_context_t.end.hpp"
SDK_VERIFY( class win::correlation_context_t, 0x10 );
