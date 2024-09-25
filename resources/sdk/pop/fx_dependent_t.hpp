#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fx_dependent_t.start.hpp"
namespace pop
{
    // [struct _POP_FX_DEPENDENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_dependent_t            
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t index;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Index
        _m01 uint32_t provider_index;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProviderIndex
                                     
        SDK_MAGIC_PROPERTIES( "_POP_FX_DEPENDENT.$", 0x8, true, 0x49ec2671a97af0e4 );               
        SDK_FIXED_SIZE( fx_dependent_t, 0x8 );               
    };                               
};
#include "magic/fx_dependent_t.end.hpp"
SDK_VERIFY( struct pop::fx_dependent_t, 0x8 );
