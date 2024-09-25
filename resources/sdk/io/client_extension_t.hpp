#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/client_extension_t.start.hpp"
namespace io
{
    struct client_extension_t;

    // [struct _IO_CLIENT_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct client_extension_t                                             
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 struct io::client_extension_t* next_extension;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextExtension
        _m01 void*                          client_identification_address;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ClientIdentificationAddress
                                                                          
        SDK_MAGIC_PROPERTIES( "_IO_CLIENT_EXTENSION.$", 0x10, true, 0x9e8df07f572326fa );                              
        SDK_FIXED_SIZE( client_extension_t, 0x10 );                              
    };                                                                    
};
#include "magic/client_extension_t.end.hpp"
SDK_VERIFY( struct io::client_extension_t, 0x10 );
