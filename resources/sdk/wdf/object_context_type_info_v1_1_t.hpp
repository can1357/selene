#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_context_type_info_v1_1_t.start.hpp"
namespace wdf
{
    struct object_context_type_info_t;
    struct object_context_type_info_v1_1_t;

    // [struct _WDF_OBJECT_CONTEXT_TYPE_INFO_V1_1]
    // => Windows 10 v1607
    //
    struct object_context_type_info_v1_1_t                                             
    {                                                                                  
        using pcwdf_object_context_type_info_v1_1_t = const struct wdf::object_context_type_info_v1_1_t*;                                   
        using pfn_get_unique_context_type_t =         sdk::function<const struct wdf::object_context_type_info_t*()>*;                                   
                                                                                       
        // Windows 10 v1607                                                            
        //                                                                             
        _m00 uint32_t                               size;                                //{ +0x0000    } | .Size
        _m01 char*                                  context_name;                        //{ +0x0008    } | .ContextName
        _m02 uint64_t                               context_size;                        //{ +0x0010    } | .ContextSize
        _m03 pcwdf_object_context_type_info_v1_1_t  unique_type;                         //{ +0x0018    } | .UniqueType
        _m04 pfn_get_unique_context_type_t          evt_driver_get_unique_context_type;  //{ +0x0020    } | .EvtDriverGetUniqueContextType
                                                                                       
        SDK_MAGIC_PROPERTIES( "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_1.$", 0x0, false, 0x78e9774966e5ad00 );                                   
        SDK_FIXED_SIZE( object_context_type_info_v1_1_t, 0x28 );                                   
    };                                                                                 
};
#include "magic/object_context_type_info_v1_1_t.end.hpp"
SDK_VERIFY( struct wdf::object_context_type_info_v1_1_t, 0x28 );
