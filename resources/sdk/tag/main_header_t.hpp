#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/main_header_t.start.hpp"
namespace tag
{
    // [struct tagMainHeader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct main_header_t         
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t signature;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t version;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m02 uint32_t c_policies;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cPolicies
        _m03 uint32_t cb_buffer;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cbBuffer
        _m04 uint32_t cb_size;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbSize
        _m05 int32_t  hr;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .hr
        _m06 int32_t  hr_server;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hrServer
                                 
        SDK_MAGIC_PROPERTIES( "tagMainHeader.$", 0x20, true, 0x2fc1c0231bd900a2 );           
        SDK_FIXED_SIZE( main_header_t, 0x20 );           
    };                           
};
#include "magic/main_header_t.end.hpp"
SDK_VERIFY( struct tag::main_header_t, 0x20 );
