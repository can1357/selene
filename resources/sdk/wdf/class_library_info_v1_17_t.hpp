#pragma once
#include <sdkgen/support_library.hpp>
#include "class_version_v1_17_t.hpp"

#include "magic/class_library_info_v1_17_t.start.hpp"
namespace wdf
{
    struct class_bind_info_t;

    // [struct _WDF_CLASS_LIBRARY_INFO_V1_17]
    // => Windows 10 v1607
    //
    struct class_library_info_v1_17_t                                           
    {                                                                           
        using pfn_wdf_class_library_bind_client_t =   sdk::function<int32_t(struct wdf::class_bind_info_t*, void**)>*;                            
        using pfn_wdf_class_library_unbind_client_t = sdk::function<void(struct wdf::class_bind_info_t*, void**)>*;                            
                                                                                
        // Windows 10 v1607                                                     
        //                                                                      
        _m00 uint32_t                               size;                         //{ +0x0000    } | .Size
        _m01 struct wdf::class_version_v1_17_t      version;                      //{ +0x0004    } | .Version
        _m02 sdk::function<int32_t()>*              class_library_initialize;     //{ +0x0010    } | .ClassLibraryInitialize
        _m03 sdk::function<void()>*                 class_library_deinitialize;   //{ +0x0018    } | .ClassLibraryDeinitialize
        _m04 pfn_wdf_class_library_bind_client_t    class_library_bind_client;    //{ +0x0020    } | .ClassLibraryBindClient
        _m05 pfn_wdf_class_library_unbind_client_t  class_library_unbind_client;  //{ +0x0028    } | .ClassLibraryUnbindClient
                                                                                
        SDK_MAGIC_PROPERTIES( "_WDF_CLASS_LIBRARY_INFO_V1_17.$", 0x0, false, 0xc791da7fdb2d677d );                            
        SDK_FIXED_SIZE( class_library_info_v1_17_t, 0x30 );                            
    };                                                                          
};
#include "magic/class_library_info_v1_17_t.end.hpp"
SDK_VERIFY( struct wdf::class_library_info_v1_17_t, 0x30 );
