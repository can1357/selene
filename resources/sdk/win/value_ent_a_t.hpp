#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/value_ent_a_t.start.hpp"
namespace win
{
    // [struct value_entA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct value_ent_a_t           
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 char*    ve_valuename;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ve_valuename
        _m01 uint32_t ve_valuelen;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ve_valuelen
        _m02 uint64_t ve_valueptr;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ve_valueptr
        _m03 uint32_t ve_type;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ve_type
                                   
        SDK_MAGIC_PROPERTIES( "value_entA.$", 0x20, true, 0x36c1c30479a803b6 );             
        SDK_FIXED_SIZE( value_ent_a_t, 0x20 );             
    };                             
};
#include "magic/value_ent_a_t.end.hpp"
SDK_VERIFY( struct win::value_ent_a_t, 0x20 );
