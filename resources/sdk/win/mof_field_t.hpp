#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mof_field_t.start.hpp"
namespace win
{
    // [struct _MOF_FIELD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mof_field_t          
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint64_t data_ptr;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DataPtr
        _m01 uint32_t length;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
        _m02 uint32_t data_type;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DataType
                                
        SDK_MAGIC_PROPERTIES( "_MOF_FIELD.$", 0x10, true, 0x350740ca1151f6fc );          
        SDK_FIXED_SIZE( mof_field_t, 0x10 );          
    };                          
};
#include "magic/mof_field_t.end.hpp"
SDK_VERIFY( struct win::mof_field_t, 0x10 );
