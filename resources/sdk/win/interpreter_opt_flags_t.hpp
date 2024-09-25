#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/interpreter_opt_flags_t.start.hpp"
namespace win
{
    // [struct INTERPRETER_OPT_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interpreter_opt_flags_t    
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                            
        _m00 uint1_t server_must_size;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ServerMustSize
        _m01 uint1_t client_must_size;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ClientMustSize
        _m02 uint1_t has_return;        //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .HasReturn
        _m03 uint1_t has_pipes;         //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .HasPipes
        _m04 uint1_t has_async_uuid;    //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .HasAsyncUuid
        _m05 uint1_t has_extensions;    //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .HasExtensions
        _m06 uint1_t has_async_handle;  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasAsyncHandle
                                      
        SDK_MAGIC_PROPERTIES( "INTERPRETER_OPT_FLAGS.$", 0x1, true, 0x590e8298295f212b );                 
        SDK_FIXED_SIZE( interpreter_opt_flags_t, 0x1 );                 
    };                                
};
#include "magic/interpreter_opt_flags_t.end.hpp"
SDK_VERIFY( struct win::interpreter_opt_flags_t, 0x1 );
