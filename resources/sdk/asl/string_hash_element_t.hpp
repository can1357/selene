#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/string_hash_element_t.start.hpp"
namespace asl
{
    struct string_hash_element_t;

    // [struct _ASL_STRING_HASH_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct string_hash_element_t                            
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                  
        _m00 wchar_t*                           hash_string;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashString
        _m01 uint32_t                           string_ref;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StringRef
        _m02 struct asl::string_hash_element_t* next;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Next
                                                            
        SDK_MAGIC_PROPERTIES( "_ASL_STRING_HASH_ELEMENT.$", 0x18, true, 0xcb157d1f3ab65bdf );            
        SDK_FIXED_SIZE( string_hash_element_t, 0x18 );            
    };                                                      
};
#include "magic/string_hash_element_t.end.hpp"
SDK_VERIFY( struct asl::string_hash_element_t, 0x18 );
