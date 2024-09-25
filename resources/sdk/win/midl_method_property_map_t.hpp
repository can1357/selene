#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_method_property_map_t.start.hpp"
namespace win
{
    struct midl_method_property_t;

    // [struct _MIDL_METHOD_PROPERTY_MAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_method_property_map_t                             
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                        
        _m00 uint32_t                                  count;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 const struct win::midl_method_property_t* properties;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Properties
                                                                  
        SDK_MAGIC_PROPERTIES( "_MIDL_METHOD_PROPERTY_MAP.$", 0x10, true, 0xbf07e539bfc30771 );           
        SDK_FIXED_SIZE( midl_method_property_map_t, 0x10 );           
    };                                                            
};
#include "magic/midl_method_property_map_t.end.hpp"
SDK_VERIFY( struct win::midl_method_property_map_t, 0x10 );
