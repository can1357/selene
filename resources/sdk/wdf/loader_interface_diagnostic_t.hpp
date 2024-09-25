#pragma once
#include <sdkgen/support_library.hpp>
#include "interface_header_t.hpp"

#include "magic/loader_interface_diagnostic_t.start.hpp"
namespace wdf
{
    // [struct _WDF_LOADER_INTERFACE_DIAGNOSTIC]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct loader_interface_diagnostic_t                                                       
    {                                                                                          
        using pwdf_ldr_diagnostics_value_by_name_as_ulong_t = sdk::function<int32_t(const nt::unicode_view*, uint32_t*)>*;                                   
                                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                     
        _m00 struct wdf::interface_header_t                 header;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 pwdf_ldr_diagnostics_value_by_name_as_ulong_t  diagnostics_value_by_name_as_ulong;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DiagnosticsValueByNameAsULONG
                                                                                               
        SDK_NONVOL_PROPERTIES( "_WDF_LOADER_INTERFACE_DIAGNOSTIC.$", 0x18, true, 0x3f04227c0cb76a14 );                                   
        SDK_FIXED_SIZE( loader_interface_diagnostic_t, 0x18 );                                   
    };                                                                                         
};
#include "magic/loader_interface_diagnostic_t.end.hpp"
SDK_VERIFY( struct wdf::loader_interface_diagnostic_t, 0x18 );
