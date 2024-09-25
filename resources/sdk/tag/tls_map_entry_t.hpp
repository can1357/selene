#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tls_map_entry_t.start.hpp"
namespace tag
{
    struct s_ole_tls_data_t;

    // [struct tagTLSMapEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tls_map_entry_t                              
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                              
        _m00 uint32_t                      dw_thread_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwThreadId
        _m01 struct tag::s_ole_tls_data_t* ptls;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ptls
                                                        
        SDK_MAGIC_PROPERTIES( "tagTLSMapEntry.$", 0x10, true, 0x3045a7d0425e4aca );             
        SDK_FIXED_SIZE( tls_map_entry_t, 0x10 );             
    };                                                  
};
#include "magic/tls_map_entry_t.end.hpp"
SDK_VERIFY( struct tag::tls_map_entry_t, 0x10 );
