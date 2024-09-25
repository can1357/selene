#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/win32k_param_data_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_WIN32K_PARAM_DATA]
    // => WDK 10 (NV)
    //
    struct win32k_param_data_t                
    {                                         
        // WDK 10                             
        //                                    
        _m00 void*    paths_array;              //{ +0x0000    } | .PathsArray
        _m01 void*    modes_array;              //{ +0x0008    } | .ModesArray
        _m02 uint32_t num_path_array_elements;  //{ +0x0010    } | .NumPathArrayElements
        _m03 uint32_t num_mode_array_elements;  //{ +0x0014    } | .NumModeArrayElements
        _m04 uint32_t sdc_flags;                //{ +0x0018    } | .SDCFlags
                                              
        SDK_NONVOL_PROPERTIES( "_DXGK_WIN32K_PARAM_DATA.$", 0x0, false, 0x89b1b205f37bd823 );                        
        SDK_FIXED_SIZE( win32k_param_data_t, 0x20 );                        
    };                                        
};
#include "magic/win32k_param_data_t.end.hpp"
SDK_VERIFY( struct dxgk::win32k_param_data_t, 0x20 );
