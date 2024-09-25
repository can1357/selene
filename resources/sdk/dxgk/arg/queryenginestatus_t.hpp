#pragma once
#include <sdkgen/support_library.hpp>
#include "../enginestatus_t.hpp"

#include "magic/queryenginestatus_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_QUERYENGINESTATUS]
    // => WDK 10 (NV)
    //
    struct queryenginestatus_t                          
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint32_t                    node_ordinal;    //{ +0x0000    } | .NodeOrdinal
        _m01 uint32_t                    engine_ordinal;  //{ +0x0004    } | .EngineOrdinal
        _m02 struct dxgk::enginestatus_t engine_status;   //{ +0x0008    } | .EngineStatus
                                                        
        SDK_NONVOL_PROPERTIES( "_DXGKARG_QUERYENGINESTATUS.$", 0x0, false, 0x728099bbbd40135c );               
        SDK_FIXED_SIZE( queryenginestatus_t, 0xc );               
    };                                                  
};
#include "magic/queryenginestatus_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::queryenginestatus_t, 0xc );
