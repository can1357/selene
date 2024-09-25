#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/msix_table_pointer_t.start.hpp"
namespace ndis
{
    // [struct MSIX_TABLE_POINTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct msix_table_pointer_t           
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint3_t  base_index_register;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .BaseIndexRegister
        _m01 uint32_t table_offset;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TableOffset
                                          
        SDK_MAGIC_PROPERTIES( "MSIX_TABLE_POINTER.$", 0x4, true, 0xfb9639781f66be1b );                    
        SDK_FIXED_SIZE( msix_table_pointer_t, 0x4 );                    
    };                                    
};
#include "magic/msix_table_pointer_t.end.hpp"
SDK_VERIFY( struct ndis::msix_table_pointer_t, 0x4 );
