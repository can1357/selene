#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fx_provider_t.start.hpp"
namespace pop
{
    // [struct _POP_FX_PROVIDER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_provider_t         
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t index;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Index
        _m01 uint8_t  activating;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Activating
                                 
        SDK_MAGIC_PROPERTIES( "_POP_FX_PROVIDER.$", 0x8, true, 0x98000ddc8d5f9780 );           
        SDK_FIXED_SIZE( fx_provider_t, 0x8 );           
    };                           
};
#include "magic/fx_provider_t.end.hpp"
SDK_VERIFY( struct pop::fx_provider_t, 0x8 );
