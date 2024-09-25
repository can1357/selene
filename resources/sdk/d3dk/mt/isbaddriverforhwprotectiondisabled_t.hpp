#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/isbaddriverforhwprotectiondisabled_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ISBADDRIVERFORHWPROTECTIONDISABLED]
    // => WDK 10 (NV)
    //
    struct isbaddriverforhwprotectiondisabled_t
    {                                          
        // WDK 10             
        //                    
        _m00 int32_t disabled;                   //{ +0x0000    } | .Disabled
                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ISBADDRIVERFORHWPROTECTIONDISABLED.$", 0x0, false, 0x124700ff60750418 );         
        SDK_FIXED_SIZE( isbaddriverforhwprotectiondisabled_t, 0x4 );         
    };                                         
};
#include "magic/isbaddriverforhwprotectiondisabled_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::isbaddriverforhwprotectiondisabled_t, 0x4 );
