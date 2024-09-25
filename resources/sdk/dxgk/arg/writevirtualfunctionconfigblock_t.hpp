#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/writevirtualfunctionconfigblock_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK]
    // => WDK 10 (NV)
    //
    struct writevirtualfunctionconfigblock_t 
    {                                        
        // WDK 10                            
        //                                   
        _m00 void*    data;                    //{ +0x0000    } | .Data
        _m01 uint32_t virtual_function_index;  //{ +0x0008    } | .VirtualFunctionIndex
        _m02 uint32_t block_id;                //{ +0x000c    } | .BlockId
        _m03 uint32_t length;                  //{ +0x0010    } | .Length
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK.$", 0x0, false, 0x18af81f59c90ccdc );                       
        SDK_FIXED_SIZE( writevirtualfunctionconfigblock_t, 0x18 );                       
    };                                       
};
#include "magic/writevirtualfunctionconfigblock_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::writevirtualfunctionconfigblock_t, 0x18 );
