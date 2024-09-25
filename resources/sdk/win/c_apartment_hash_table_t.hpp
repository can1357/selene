#pragma once
#include <sdkgen/support_library.hpp>
#include "cdword_hash_table_t.hpp"

#include "magic/c_apartment_hash_table_t.start.hpp"
namespace win
{
    // [class CApartmentHashTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_apartment_hash_table_t                              
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                      
        _m00 class win::cdword_hash_table_t hashtbl;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._hashtbl
        _m01 int32_t                        f_table_initialized;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._fTableInitialized
                                                                
        SDK_MAGIC_PROPERTIES( "CApartmentHashTable.$", 0x30, true, 0xe45876ec9e88ba0f );                    
        SDK_FIXED_SIZE( c_apartment_hash_table_t, 0x30 );                    
    };                                                          
};
#include "magic/c_apartment_hash_table_t.end.hpp"
SDK_VERIFY( class win::c_apartment_hash_table_t, 0x30 );
