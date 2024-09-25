#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/request_completion_params_t.hpp"

namespace wdf { class i_fx_memory_t; }

#include "magic/request_context_t.start.hpp"
namespace fx
{
    // [struct FxRequestContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct request_context_t                                             
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                               
        _m00 struct wdf::request_completion_params_t m_completion_params;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_CompletionParams
        _m01 class wdf::i_fx_memory_t*               m_request_memory;     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .m_RequestMemory
        _m02 uint8_t                                 m_request_type;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_RequestType
                                                                         
        SDK_MAGIC_PROPERTIES( "FxRequestContext.$", 0x60, true, 0x9dee0ebab66c13b8 );                    
        SDK_FIXED_SIZE( request_context_t, 0x60 );                       
    };                                                                   
};
#include "magic/request_context_t.end.hpp"
SDK_VERIFY( struct fx::request_context_t, 0x60 );
