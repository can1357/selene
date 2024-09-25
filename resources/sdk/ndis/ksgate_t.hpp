#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksgate_t.start.hpp"
namespace ndis
{
    struct ksgate_t;

    // [struct _KSGATE]
    // => Windows 10 v1607
    //
    struct ksgate_t                           
    {                                         
        // Windows 10 v1607                   
        //                                    
        _m00 int32_t                count;      //{ +0x0000    } | .Count
        _m01 struct ndis::ksgate_t* next_gate;  //{ +0x0008    } | .NextGate
                                              
        SDK_MAGIC_PROPERTIES( "_KSGATE.$", 0x0, false, 0xc85b7c7c99b70c2a );          
        SDK_FIXED_SIZE( ksgate_t, 0x10 );          
    };                                        
};
#include "magic/ksgate_t.end.hpp"
SDK_VERIFY( struct ndis::ksgate_t, 0x10 );
