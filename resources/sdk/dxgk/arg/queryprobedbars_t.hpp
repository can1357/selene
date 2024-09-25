#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/queryprobedbars_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_QUERYPROBEDBARS]
    // => WDK 10 (NV)
    //
    struct queryprobedbars_t                  
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint32_t  virtual_function_index;  //{ +0x0000    } | .VirtualFunctionIndex
        _m01 uint32_t* base_register_values;    //{ +0x0008    } | .BaseRegisterValues
                                              
        SDK_NONVOL_PROPERTIES( "_DXGKARG_QUERYPROBEDBARS.$", 0x0, false, 0xbfa65ee8252f2433 );                       
        SDK_FIXED_SIZE( queryprobedbars_t, 0x10 );                       
    };                                        
};
#include "magic/queryprobedbars_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::queryprobedbars_t, 0x10 );
