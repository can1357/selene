#pragma once
#include <sdkgen/support_library.hpp>
#include "../diagnostic_types_t.hpp"
#include "../diagnostic_categories_t.hpp"

#include "magic/controldiagnosticreporting_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CONTROLDIAGNOSTICREPORTING]
    // => WDK 10 (NV)
    //
    struct controldiagnosticreporting_t                                 
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 struct dxgk::diagnostic_categories_t diagnostic_category;    //{ +0x0000    } | .DiagnosticCategory
        _m01 struct dxgk::diagnostic_types_t      requested_diagnostics;  //{ +0x0004    } | .RequestedDiagnostics
                                                                        
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CONTROLDIAGNOSTICREPORTING.$", 0x0, false, 0xff537cea53e1c36c );                      
        SDK_FIXED_SIZE( controldiagnosticreporting_t, 0x8 );                      
    };                                                                  
};
#include "magic/controldiagnosticreporting_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::controldiagnosticreporting_t, 0x8 );
