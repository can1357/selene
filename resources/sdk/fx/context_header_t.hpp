#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct object_context_type_info_t; }

#include "magic/context_header_t.start.hpp"
namespace fx
{
    class object_t;
    struct context_header_t;

    // [struct FxContextHeader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct context_header_t                                                     
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                      
        _m00 class fx::object_t*                           object;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 struct fx::context_header_t*                  next_header;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextHeader
        _m02 sdk::function<void(void*)>*                   evt_cleanup_callback;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EvtCleanupCallback
        _m03 sdk::function<void(void*)>*                   evt_destroy_callback;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EvtDestroyCallback
        _m04 const struct wdf::object_context_type_info_t* context_type_info;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ContextTypeInfo
        _m05 sdk::array<uint64_t, 1>                       context;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Context
                                                                                
        SDK_MAGIC_PROPERTIES( "FxContextHeader.$", 0x40, true, 0x97005ddbddf2884e );                     
        SDK_FIXED_SIZE( context_header_t, 0x40 );                               
    };                                                                          
};
#include "magic/context_header_t.end.hpp"
SDK_VERIFY( struct fx::context_header_t, 0x40 );
