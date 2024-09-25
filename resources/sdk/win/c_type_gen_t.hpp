#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_type_gen_t.start.hpp"
namespace win
{
    // [class CTypeGen]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_type_gen_t                     
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                 
        _m00 const uint8_t* p_type_format;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pTypeFormat
        _m01 uint16_t       cb_type_format;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cbTypeFormat
        _m02 uint16_t       offset;          //{ +0x000a    +0x000a    +0x000a    +0x000a    } | ._offset
        _m03 uint32_t       u_struct_size;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._uStructSize
                                           
        SDK_MAGIC_PROPERTIES( "CTypeGen.$", 0x10, true, 0xdd912e9e3880c346 );               
        SDK_FIXED_SIZE( c_type_gen_t, 0x10 );               
    };                                     
};
#include "magic/c_type_gen_t.end.hpp"
SDK_VERIFY( class win::c_type_gen_t, 0x10 );
