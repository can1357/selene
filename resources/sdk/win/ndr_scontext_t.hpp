#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_scontext_t.start.hpp"
namespace win
{
    // [struct _NDR_SCONTEXT]
    // => Windows 11
    //
    struct ndr_scontext_t                      
    {                                          
        // Windows 11                          
        //                                     
        _m00 sdk::array<void*, 2> pad;           //{ +0x0000    } | .pad
        _m01 void*                user_context;  //{ +0x0010    } | .userContext
                                               
        SDK_MAGIC_PROPERTIES( "_NDR_SCONTEXT.$", 0x0, false, 0xb95d153184f7a494 );             
        SDK_FIXED_SIZE( ndr_scontext_t, 0x18 );             
    };                                         
};
#include "magic/ndr_scontext_t.end.hpp"
SDK_VERIFY( struct win::ndr_scontext_t, 0x18 );
