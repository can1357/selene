#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iosapic_t.start.hpp"
namespace nt
{
    // [struct _IOSAPIC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iosapic_t                     
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint8_t  type;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t  length;              //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Length
        _m02 uint8_t  iosapicid;           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .IOSAPICID
        _m03 uint32_t system_vector_base;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SystemVectorBase
        _m04 uint64_t iosapic_address;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IOSAPICAddress
                                         
        SDK_MAGIC_PROPERTIES( "_IOSAPIC.$", 0x10, true, 0xe095de1c566ff5cd );                   
        SDK_FIXED_SIZE( iosapic_t, 0x10 );                   
    };                                   
};
#include "magic/iosapic_t.end.hpp"
SDK_VERIFY( struct nt::iosapic_t, 0x10 );
