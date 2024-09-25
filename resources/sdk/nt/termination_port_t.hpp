#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/termination_port_t.start.hpp"
namespace nt
{
    struct termination_port_t;

    // [struct _TERMINATION_PORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct termination_port_t                    
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                       
        _m00 struct nt::termination_port_t* next;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 void*                          port;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Port
                                                 
        SDK_MAGIC_PROPERTIES( "_TERMINATION_PORT.$", 0x10, true, 0x41745abba5f2cb6 );     
        SDK_FIXED_SIZE( termination_port_t, 0x10 );     
    };                                           
};
#include "magic/termination_port_t.end.hpp"
SDK_VERIFY( struct nt::termination_port_t, 0x10 );
