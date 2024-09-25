#pragma once
#include <sdkgen/support_library.hpp>
#include "diagnostic_header_t.hpp"
#include "diagnostic_psr_refresh_reason_t.hpp"

#include "magic/diagnostic_psr_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DIAGNOSTIC_PSR]
    // => WDK 10 (NV)
    //
    struct diagnostic_psr_t                                             
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 struct dxgk::diagnostic_header_t            header;          //{ +0x0000    } | .Header
        _m01 union dxgk::diagnostic_psr_refresh_reason_t refresh_reason;  //{ +0x0014    } | .RefreshReason
        _m02 uint32_t                                    value;           //{ +0x0014    } | .Value
                                                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_DIAGNOSTIC_PSR.$", 0x0, false, 0x33aa8e640e39a5ed );               
        SDK_FIXED_SIZE( diagnostic_psr_t, 0x18 );                       
    };                                                                  
};
#include "magic/diagnostic_psr_t.end.hpp"
SDK_VERIFY( struct dxgk::diagnostic_psr_t, 0x18 );
