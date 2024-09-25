#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct dxgi1_1_ddi_base_functions_t;   }
namespace nt { struct dxgi1_2_ddi_base_functions_t;   }
namespace nt { struct dxgi1_3_ddi_base_functions_t;   }
namespace nt { struct dxgi1_4_ddi_base_functions_t;   }
namespace nt { struct dxgi1_5_ddi_base_functions_t;   }
namespace nt { struct dxgi1_6_1_ddi_base_functions_t; }

#include "magic/ddi_base_args_t.start.hpp"
namespace dxgi
{
    struct ddi_base_callbacks_t;
    struct ddi_base_functions_t;

    // [struct DXGI_DDI_BASE_ARGS]
    // => WDK 10 (NV)
    //
    struct ddi_base_args_t                                                          
    {                                                                               
        // WDK 10                                                                   
        //                                                                          
        _m00 struct dxgi::ddi_base_callbacks_t*         p_dxgi_base_callbacks;        //{ +0x0000    } | .pDXGIBaseCallbacks
        _m01 struct nt::dxgi1_6_1_ddi_base_functions_t* p_dxgiddi_base_functions6_1;  //{ +0x0008    } | .pDXGIDDIBaseFunctions6_1
        _m02 struct nt::dxgi1_5_ddi_base_functions_t*   p_dxgiddi_base_functions6;    //{ +0x0008    } | .pDXGIDDIBaseFunctions6
        _m03 struct nt::dxgi1_4_ddi_base_functions_t*   p_dxgiddi_base_functions5;    //{ +0x0008    } | .pDXGIDDIBaseFunctions5
        _m04 struct nt::dxgi1_3_ddi_base_functions_t*   p_dxgiddi_base_functions4;    //{ +0x0008    } | .pDXGIDDIBaseFunctions4
        _m05 struct nt::dxgi1_2_ddi_base_functions_t*   p_dxgiddi_base_functions3;    //{ +0x0008    } | .pDXGIDDIBaseFunctions3
        _m06 struct nt::dxgi1_1_ddi_base_functions_t*   p_dxgiddi_base_functions2;    //{ +0x0008    } | .pDXGIDDIBaseFunctions2
        _m07 struct dxgi::ddi_base_functions_t*         p_dxgiddi_base_functions;     //{ +0x0008    } | .pDXGIDDIBaseFunctions
                                                                                    
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_BASE_ARGS.$", 0x0, false, 0x5e37fbf9e3c37614 );                            
        SDK_FIXED_SIZE( ddi_base_args_t, 0x10 );                                    
    };                                                                              
};
#include "magic/ddi_base_args_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_base_args_t, 0x10 );
