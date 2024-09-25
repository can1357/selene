#pragma once
#include <sdkgen/support_library.hpp>
#include "winrt_rtti_kind_t.hpp"
#include "midl_method_property_map_t.hpp"

#include "magic/winrt_rtti_runtime_class_v1_t.start.hpp"
namespace win
{
    struct winrt_rtti_t;

    // [struct WinrtRttiRuntimeClass_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct winrt_rtti_runtime_class_v1_t                              
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                            
        _m00 enum win::winrt_rtti_kind_t            kind;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Kind
        _m01 uint32_t                               version;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m02 const struct win::winrt_rtti_t*        _namespace;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Namespace
        _m03 const wchar_t*                         name;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Name
        _m04 struct win::midl_method_property_map_t property_map;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PropertyMap
        _m05 const struct win::winrt_rtti_t*        default_interface;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DefaultInterface
                                                                      
        SDK_MAGIC_PROPERTIES( "WinrtRttiRuntimeClass_V1.$", 0x30, true, 0x7a0b8c9cfd586a14 );                  
        SDK_FIXED_SIZE( winrt_rtti_runtime_class_v1_t, 0x30 );                  
    };                                                                
};
#include "magic/winrt_rtti_runtime_class_v1_t.end.hpp"
SDK_VERIFY( struct win::winrt_rtti_runtime_class_v1_t, 0x30 );
