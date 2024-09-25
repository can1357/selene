#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/readvirtualfunctionconfigblock_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK]
    // => WDK 10 (NV)
    //
    struct readvirtualfunctionconfigblock_t  
    {                                        
        // WDK 10                            
        //                                   
        _m00 void*    data;                    //{ +0x0000    } | .Data
        _m01 uint32_t virtual_function_index;  //{ +0x0008    } | .VirtualFunctionIndex
        _m02 uint32_t block_id;                //{ +0x000c    } | .BlockId
        _m03 uint32_t length;                  //{ +0x0010    } | .Length
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK.$", 0x0, false, 0xc0d48fc88248ff7 );                       
        SDK_FIXED_SIZE( readvirtualfunctionconfigblock_t, 0x18 );                       
    };                                       
};
#include "magic/readvirtualfunctionconfigblock_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::readvirtualfunctionconfigblock_t, 0x18 );
