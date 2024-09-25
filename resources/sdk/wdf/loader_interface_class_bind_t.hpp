#pragma once
#include <sdkgen/support_library.hpp>
#include "interface_header_t.hpp"

#include "magic/loader_interface_class_bind_t.start.hpp"
namespace wdf
{
    struct bind_info_t;
    struct class_bind_info_t;

    // [struct _WDF_LOADER_INTERFACE_CLASS_BIND]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct loader_interface_class_bind_t                          
    {                                                             
        using pfn_wdf_version_bind_class_t =   sdk::function<int32_t(struct wdf::bind_info_t*, void**, struct wdf::class_bind_info_t*)>*;                     
        using pfn_wdf_version_unbind_class_t = sdk::function<void(struct wdf::bind_info_t*, void**, struct wdf::class_bind_info_t*)>*;                     
                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                        
        _m00 struct wdf::interface_header_t  header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 pfn_wdf_version_bind_class_t    version_bind_class;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .VersionBindClass
        _m02 pfn_wdf_version_unbind_class_t  version_unbind_class;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .VersionUnbindClass
                                                                  
        SDK_NONVOL_PROPERTIES( "_WDF_LOADER_INTERFACE_CLASS_BIND.$", 0x20, true, 0xbf68a040f53e876f );                     
        SDK_FIXED_SIZE( loader_interface_class_bind_t, 0x20 );                     
    };                                                            
};
#include "magic/loader_interface_class_bind_t.end.hpp"
SDK_VERIFY( struct wdf::loader_interface_class_bind_t, 0x20 );
