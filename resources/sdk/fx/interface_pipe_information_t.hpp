#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/interface_pipe_information_t.start.hpp"
namespace fx
{
    class usb_pipe_t;

    // [struct FxInterfacePipeInformation]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interface_pipe_information_t       
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 class fx::usb_pipe_t** pipes;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Pipes
        _m01 uint32_t               num_pipes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumPipes
                                              
        SDK_MAGIC_PROPERTIES( "FxInterfacePipeInformation.$", 0x10, true, 0x9e4ae16c030d8dd9 );          
        SDK_FIXED_SIZE( interface_pipe_information_t, 0x10 );          
    };                                        
};
#include "magic/interface_pipe_information_t.end.hpp"
SDK_VERIFY( struct fx::interface_pipe_information_t, 0x10 );
