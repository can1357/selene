#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct acl_t; }

#include "magic/descriptor_t.start.hpp"
namespace sec
{
    // [struct _SECURITY_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct descriptor_t                 
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                              
        _m00 uint8_t           revision;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Revision
        _m01 uint8_t           sbz1;      //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Sbz1
        _m02 uint16_t          control;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Control
        _m03 void*             owner;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Owner
        _m04 void*             group;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Group
        _m05 struct nt::acl_t* sacl;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Sacl
        _m06 struct nt::acl_t* dacl;      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Dacl
                                        
        SDK_NONVOL_PROPERTIES( "_SECURITY_DESCRIPTOR.$", 0x28, true, 0xe54c6f3a955bc25 );         
        SDK_FIXED_SIZE( descriptor_t, 0x28 );         
    };                                  
};
#include "magic/descriptor_t.end.hpp"
SDK_VERIFY( struct sec::descriptor_t, 0x28 );
