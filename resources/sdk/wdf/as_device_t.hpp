#pragma once
#include <sdkgen/support_library.hpp>
#include "component_t.hpp"

#include "magic/as_device_t.start.hpp"
namespace wdf
{
    // [struct _AsDevice]
    // => Windows 11
    //
    struct as_device_t                         
    {                                          
        // Windows 11                          
        //                                     
        _m00 uint64_t                pdo;        //{ +0x0000    } | .Pdo
        _m01 struct wdf::component_t component;  //{ +0x0008    } | .Component
                                               
        SDK_MAGIC_PROPERTIES( "_AsDevice.$", 0x0, false, 0x98cfca21e3630ca2 );          
        SDK_FIXED_SIZE( as_device_t, 0x10 );          
    };                                         
};
#include "magic/as_device_t.end.hpp"
SDK_VERIFY( struct wdf::as_device_t, 0x10 );
