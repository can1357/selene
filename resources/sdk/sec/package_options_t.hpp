#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/package_options_t.start.hpp"
namespace sec
{
    // [struct _SECURITY_PACKAGE_OPTIONS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct package_options_t         
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t size;            //{ +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t type;            //{ +0x0004    +0x0004    +0x0004    } | .Type
        _m02 uint32_t flags;           //{ +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint32_t signature_size;  //{ +0x000c    +0x000c    +0x000c    } | .SignatureSize
        _m04 void*    signature;       //{ +0x0010    +0x0010    +0x0010    } | .Signature
                                     
        SDK_MAGIC_PROPERTIES( "_SECURITY_PACKAGE_OPTIONS.$", 0x18, true, 0xdc83a6e10c05b8f1 );               
        SDK_FIXED_SIZE( package_options_t, 0x18 );               
    };                               
};
#include "magic/package_options_t.end.hpp"
SDK_VERIFY( struct sec::package_options_t, 0x18 );
