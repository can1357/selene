#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_member_ref_enumerator_t.start.hpp"
namespace win
{
    // [class CMemberRefEnumerator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_member_ref_enumerator_t  
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t token_type_ref;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._tokenTypeRef
                                     
        SDK_MAGIC_PROPERTIES( "CMemberRefEnumerator.$", 0x20, true, 0x817fbb1b8fa00f09 );               
        SDK_FIXED_SIZE( c_member_ref_enumerator_t, 0x20 );               
    };                               
};
#include "magic/c_member_ref_enumerator_t.end.hpp"
SDK_VERIFY( class win::c_member_ref_enumerator_t, 0x20 );
