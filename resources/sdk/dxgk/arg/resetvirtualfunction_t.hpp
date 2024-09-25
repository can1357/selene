#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resetvirtualfunction_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_RESETVIRTUALFUNCTION]
    // => WDK 10 (NV)
    //
    struct resetvirtualfunction_t            
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t virtual_function_index;  //{ +0x0000    } | .VirtualFunctionIndex
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_RESETVIRTUALFUNCTION.$", 0x0, false, 0x897ae405a6ef38c3 );                       
        SDK_FIXED_SIZE( resetvirtualfunction_t, 0x4 );                       
    };                                       
};
#include "magic/resetvirtualfunction_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::resetvirtualfunction_t, 0x4 );
