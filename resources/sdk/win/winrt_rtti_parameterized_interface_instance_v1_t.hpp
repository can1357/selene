#pragma once
#include <sdkgen/support_library.hpp>
#include "winrt_rtti_kind_t.hpp"
#include "midl_method_property_map_t.hpp"

namespace nt { struct guid_t; }

#include "magic/winrt_rtti_parameterized_interface_instance_v1_t.start.hpp"
namespace win
{
    struct winrt_rtti_t;

    // [struct WinrtRttiParameterizedInterfaceInstance_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct winrt_rtti_parameterized_interface_instance_v1_t                 
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                  
        _m00 enum win::winrt_rtti_kind_t            kind;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Kind
        _m01 uint32_t                               version;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m02 const struct win::winrt_rtti_t*        _namespace;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Namespace
        _m03 const wchar_t*                         name;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Name
        _m04 struct win::midl_method_property_map_t property_map;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PropertyMap
        _m05 const struct nt::guid_t*               iid;                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Iid
        _m06 const struct win::winrt_rtti_t*        parameterized_interface;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ParameterizedInterface
                                                                            
        SDK_MAGIC_PROPERTIES( "WinrtRttiParameterizedInterfaceInstance_V1.$", 0x38, true, 0x9515c75647a247d5 );                        
        SDK_FIXED_SIZE( winrt_rtti_parameterized_interface_instance_v1_t, 0x38 );                        
    };                                                                      
};
#include "magic/winrt_rtti_parameterized_interface_instance_v1_t.end.hpp"
SDK_VERIFY( struct win::winrt_rtti_parameterized_interface_instance_v1_t, 0x38 );
