#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/writevirtualfunctionconfig_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIG]
    // => WDK 10 (NV)
    //
    struct writevirtualfunctionconfig_t      
    {                                        
        // WDK 10                            
        //                                   
        _m00 void*    data;                    //{ +0x0000    } | .Data
        _m01 uint32_t virtual_function_index;  //{ +0x0008    } | .VirtualFunctionIndex
        _m02 uint32_t offset;                  //{ +0x000c    } | .Offset
        _m03 uint32_t length;                  //{ +0x0010    } | .Length
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG.$", 0x0, false, 0xed9efd65e5a03ff );                       
        SDK_FIXED_SIZE( writevirtualfunctionconfig_t, 0x18 );                       
    };                                       
};
#include "magic/writevirtualfunctionconfig_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::writevirtualfunctionconfig_t, 0x18 );
