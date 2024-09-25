#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_context_type_info_t.start.hpp"
namespace wdf
{
    struct object_context_type_info_t;

    // [struct _WDF_OBJECT_CONTEXT_TYPE_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct object_context_type_info_t                                                         
    {                                                                                         
        using pfn_get_unique_context_type_t = sdk::function<const struct wdf::object_context_type_info_t*()>*;                                   
                                                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                    
        _m00 uint32_t                                      size;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 sdk::variant<char*, const char*>              context_name;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextName
        _m02 uint64_t                                      context_size;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ContextSize
        _m03 const struct wdf::object_context_type_info_t* unique_type;                         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .UniqueType
        _m04 pfn_get_unique_context_type_t                 evt_driver_get_unique_context_type;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .EvtDriverGetUniqueContextType
                                                                                              
        SDK_NONVOL_PROPERTIES( "_WDF_OBJECT_CONTEXT_TYPE_INFO.$", 0x28, true, 0x99581f87a2135d76 );                                   
        SDK_FIXED_SIZE( object_context_type_info_t, 0x28 );                                   
    };                                                                                        
};
#include "magic/object_context_type_info_t.end.hpp"
SDK_VERIFY( struct wdf::object_context_type_info_t, 0x28 );
