#pragma once
#include <sdkgen/support_library.hpp>
#include "interface_header_t.hpp"

namespace nt { struct driver_object_t; }

#include "magic/loader_interface_t.start.hpp"
namespace wdf
{
    struct bind_info_t;
    struct library_info_t;

    // [struct _WDF_LOADER_INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct loader_interface_t                                                                  
    {                                                                                          
        using pwdf_register_library_t =                       sdk::function<int32_t(struct wdf::library_info_t*, nt::unicode_view*, const nt::unicode_view*)>*;                                   
        using pwdf_version_bind_t =                           sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*, struct wdf::bind_info_t*, void***)>*;                                   
        using pwdf_version_unbind_t =                         sdk::function<int32_t(nt::unicode_view*, struct wdf::bind_info_t*, void**)>*;                                   
        using pwdf_ldr_diagnostics_value_by_name_as_ulong_t = sdk::function<int32_t(const nt::unicode_view*, uint32_t*)>*;                                   
                                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                     
        _m00 struct wdf::interface_header_t                 header;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 pwdf_register_library_t                        register_library;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .RegisterLibrary
        _m02 pwdf_version_bind_t                            version_bind;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .VersionBind
        _m03 pwdf_version_unbind_t                          version_unbind;                      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .VersionUnbind
        _m04 pwdf_ldr_diagnostics_value_by_name_as_ulong_t  diagnostics_value_by_name_as_ulong;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .DiagnosticsValueByNameAsULONG
                                                                                               
        SDK_NONVOL_PROPERTIES( "_WDF_LOADER_INTERFACE.$", 0x30, true, 0x5015f252d750b13e );                                   
        SDK_FIXED_SIZE( loader_interface_t, 0x30 );                                            
    };                                                                                         
};
#include "magic/loader_interface_t.end.hpp"
SDK_VERIFY( struct wdf::loader_interface_t, 0x30 );
