#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct driver_object_t; }

#include "magic/class_extension_descriptor_t.start.hpp"
namespace wdf
{
    struct class_extension_descriptor_t;

    // [struct _WDF_CLASS_EXTENSION_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct class_extension_descriptor_t                             
    {                                                               
        using bind_t =   sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*;       
        using unbind_t = sdk::function<void(struct nt::driver_object_t*)>*;       
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                          
        _m00 const struct wdf::class_extension_descriptor_t* next;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 uint32_t                                        size;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 bind_t                                          bind;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Bind
        _m03 unbind_t                                        unbind;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Unbind
                                                                    
        SDK_MAGIC_PROPERTIES( "_WDF_CLASS_EXTENSION_DESCRIPTOR.$", 0x20, true, 0x98abf6b5518566f7 );       
        SDK_FIXED_SIZE( class_extension_descriptor_t, 0x20 );       
    };                                                              
};
#include "magic/class_extension_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::class_extension_descriptor_t, 0x20 );
