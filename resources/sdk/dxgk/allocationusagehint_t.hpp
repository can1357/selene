#pragma once
#include <sdkgen/support_library.hpp>
#include "allocationusageinfo1_t.hpp"

#include "magic/allocationusagehint_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_ALLOCATIONUSAGEHINT]
    // => WDK 10 (NV)
    //
    struct allocationusagehint_t                         
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint32_t                            version;  //{ +0x0000    } | .Version
        _m01 struct dxgk::allocationusageinfo1_t v1;       //{ +0x0004    } | .v1
                                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_ALLOCATIONUSAGEHINT.$", 0x0, false, 0x100255e79d07a26d );        
        SDK_FIXED_SIZE( allocationusagehint_t, 0x28 );        
    };                                                   
};
#include "magic/allocationusagehint_t.end.hpp"
SDK_VERIFY( struct dxgk::allocationusagehint_t, 0x28 );
