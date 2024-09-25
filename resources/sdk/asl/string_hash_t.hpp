#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/string_hash_t.start.hpp"
namespace asl
{
    struct string_hash_element_t;

    // [struct _ASL_STRING_HASH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct string_hash_t                                            
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                          
        _m00 uint32_t                            hash_size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashSize
        _m01 struct asl::string_hash_element_t** hash_element_table;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HashElementTable
                                                                    
        SDK_MAGIC_PROPERTIES( "_ASL_STRING_HASH.$", 0x10, true, 0xb77b83f74a16122e );                   
        SDK_FIXED_SIZE( string_hash_t, 0x10 );                      
    };                                                              
};
#include "magic/string_hash_t.end.hpp"
SDK_VERIFY( struct asl::string_hash_t, 0x10 );
