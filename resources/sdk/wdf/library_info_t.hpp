#pragma once
#include <sdkgen/support_library.hpp>
#include "version_t.hpp"

#include "magic/library_info_t.start.hpp"
namespace wdf
{
    struct bind_info_t;

    // [struct _WDF_LIBRARY_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct library_info_t                                            
    {                                                                
        using pfnlibraryregisterclient_t =   sdk::function<int32_t(struct wdf::bind_info_t*, void***, void**)>*;                          
        using pfnlibraryunregisterclient_t = sdk::function<int32_t(struct wdf::bind_info_t*, void**)>*;                          
                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                           
        _m00 uint32_t                      size;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 sdk::function<int32_t()>*     library_commission;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LibraryCommission
        _m02 sdk::function<int32_t()>*     library_decommission;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LibraryDecommission
        _m03 pfnlibraryregisterclient_t    library_register_client;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .LibraryRegisterClient
        _m04 pfnlibraryunregisterclient_t  library_unregister_client;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .LibraryUnregisterClient
        _m05 struct wdf::version_t         version;                    //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Version
                                                                     
        SDK_NONVOL_PROPERTIES( "_WDF_LIBRARY_INFO.$", 0x38, true, 0x25142cf9651f6a5c );                          
        SDK_FIXED_SIZE( library_info_t, 0x38 );                          
    };                                                               
};
#include "magic/library_info_t.end.hpp"
SDK_VERIFY( struct wdf::library_info_t, 0x38 );
