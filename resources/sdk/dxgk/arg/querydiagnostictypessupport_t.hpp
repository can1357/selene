#pragma once
#include <sdkgen/support_library.hpp>
#include "../diagnostic_types_t.hpp"
#include "../diagnostic_categories_t.hpp"

#include "magic/querydiagnostictypessupport_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT]
    // => WDK 10 (NV)
    //
    struct querydiagnostictypessupport_t                              
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 struct dxgk::diagnostic_categories_t diagnostic_category;  //{ +0x0000    } | .DiagnosticCategory
        _m01 struct dxgk::diagnostic_types_t      noninvasive_types;    //{ +0x0004    } | .NoninvasiveTypes
        _m02 struct dxgk::diagnostic_types_t      invasive_types;       //{ +0x0008    } | .InvasiveTypes
                                                                      
        SDK_NONVOL_PROPERTIES( "_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT.$", 0x0, false, 0x67f300f347922140 );                    
        SDK_FIXED_SIZE( querydiagnostictypessupport_t, 0xc );                    
    };                                                                
};
#include "magic/querydiagnostictypessupport_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::querydiagnostictypessupport_t, 0xc );
