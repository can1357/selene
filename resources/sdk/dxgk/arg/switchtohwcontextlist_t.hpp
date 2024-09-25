#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/switchtohwcontextlist_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SWITCHTOHWCONTEXTLIST]
    // => WDK 10 (NV)
    //
    struct switchtohwcontextlist_t        
    {                                     
        // WDK 10                         
        //                                
        _m00 void*    h_hw_context_first;   //{ +0x0000    } | .hHwContextFirst
        _m01 void*    h_hw_context_second;  //{ +0x0008    } | .hHwContextSecond
        _m02 uint32_t node_ordinal;         //{ +0x0010    } | .NodeOrdinal
        _m03 uint32_t engine_ordinal;       //{ +0x0014    } | .EngineOrdinal
                                          
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SWITCHTOHWCONTEXTLIST.$", 0x0, false, 0x9b344c9c9e765c81 );                    
        SDK_FIXED_SIZE( switchtohwcontextlist_t, 0x18 );                    
    };                                    
};
#include "magic/switchtohwcontextlist_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::switchtohwcontextlist_t, 0x18 );
