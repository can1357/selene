#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr64_bind_context_t.hpp"

#include "magic/ndr64_bind_and_notify_extension_t.start.hpp"
namespace win
{
    // [struct _NDR64_BIND_AND_NOTIFY_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_bind_and_notify_extension_t               
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                 
        _m00 struct win::ndr64_bind_context_t binding;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Binding
        _m01 uint16_t                         notify_index;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .NotifyIndex
                                                           
        SDK_MAGIC_PROPERTIES( "_NDR64_BIND_AND_NOTIFY_EXTENSION.$", 0x8, true, 0x4ab6a039beb693a6 );             
        SDK_FIXED_SIZE( ndr64_bind_and_notify_extension_t, 0x8 );             
    };                                                     
};
#include "magic/ndr64_bind_and_notify_extension_t.end.hpp"
SDK_VERIFY( struct win::ndr64_bind_and_notify_extension_t, 0x8 );
