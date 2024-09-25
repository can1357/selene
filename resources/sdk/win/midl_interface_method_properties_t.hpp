#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_interface_method_properties_t.start.hpp"
namespace win
{
    struct midl_method_property_map_t;

    // [struct _MIDL_INTERFACE_METHOD_PROPERTIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_interface_method_properties_t       
    {                                               
        using method_properties_t = const struct win::midl_method_property_map_t const**;                  
                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                          
        _m00 uint16_t             method_count;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MethodCount
        _m01 method_properties_t  method_properties;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MethodProperties
                                                    
        SDK_MAGIC_PROPERTIES( "_MIDL_INTERFACE_METHOD_PROPERTIES.$", 0x10, true, 0x3e8b7244e163c955 );                  
        SDK_FIXED_SIZE( midl_interface_method_properties_t, 0x10 );                  
    };                                              
};
#include "magic/midl_interface_method_properties_t.end.hpp"
SDK_VERIFY( struct win::midl_interface_method_properties_t, 0x10 );
