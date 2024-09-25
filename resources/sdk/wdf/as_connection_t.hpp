#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/as_connection_t.start.hpp"
namespace wdf
{
    // [struct _AsConnection]
    // => Windows 11
    //
    struct as_connection_t    
    {                         
        // Windows 11         
        //                    
        _m00 uint2_t consumer;  //{ +0x0007@0  } | .Consumer
        _m01 int64_t id;        //{ +0x0008    } | .Id
                              
        SDK_MAGIC_PROPERTIES( "_AsConnection.$", 0x0, false, 0xd4d6b7b281ba4912 );         
        SDK_FIXED_SIZE( as_connection_t, 0x10 );         
    };                        
};
#include "magic/as_connection_t.end.hpp"
SDK_VERIFY( struct wdf::as_connection_t, 0x10 );
