#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace fx { class string_t; }

#include "magic/init_t.start.hpp"
namespace sec
{
    // [struct SecurityInit]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct init_t                                 
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                        
        _m00 class fx::string_t* sddl;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Sddl
        _m01 struct nt::guid_t   device_class;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceClass
        _m02 uint8_t             device_class_set;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DeviceClassSet
                                                  
        SDK_MAGIC_PROPERTIES( "SecurityInit.$", 0x20, true, 0x5fd9d72f1cce32aa );                 
        SDK_FIXED_SIZE( init_t, 0x20 );                 
    };                                            
};
#include "magic/init_t.end.hpp"
SDK_VERIFY( struct sec::init_t, 0x20 );
