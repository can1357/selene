#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/activation_context_t.start.hpp"
namespace win
{
    // [class ActivationContext]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class activation_context_t                         
    {                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                             
        _m00 uint64_t          host_id;                  //{ +0x0040    +0x0040    +0x0040    } | ._hostId
        _m01 uint64_t          user_context;             //{ +0x0048    +0x0048    +0x0048    } | ._userContext
        _m02 struct nt::guid_t component_process_id;     //{ +0x0050    +0x0050    +0x0050    } | ._componentProcessId
        _m03 uint64_t          rac_activation_token_id;  //{ +0x0060    +0x0060    +0x0060    } | ._racActivationTokenId
        _m04 uint64_t          aam_activation_id;        //{ +0x0070    +0x0070    +0x0070    } | ._aamActivationId
                                                       
        SDK_MAGIC_PROPERTIES( "ActivationContext.$", 0x78, true, 0x55c027f29e1cfc87 );                        
        SDK_FIXED_SIZE( activation_context_t, 0x78 );                        
    };                                                 
};
#include "magic/activation_context_t.end.hpp"
SDK_VERIFY( class win::activation_context_t, 0x78 );
