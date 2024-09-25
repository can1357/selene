#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/closeadapter_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CLOSEADAPTER]
    // => WDK 10 (NV)
    //
    struct closeadapter_t            
    {                                
        // WDK 10                    
        //                           
        _m00 uint32_t adapter_handle;  //{ +0x0000    } | .AdapterHandle
                                     
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CLOSEADAPTER.$", 0x0, false, 0x7410209df2cdce18 );               
        SDK_FIXED_SIZE( closeadapter_t, 0x4 );               
    };                               
};
#include "magic/closeadapter_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::closeadapter_t, 0x4 );
