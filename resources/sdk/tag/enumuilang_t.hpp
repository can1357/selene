#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enumuilang_t.start.hpp"
namespace tag
{
    // [struct tagENUMUILANG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enumuilang_t                       
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                    
        _m00 uint32_t  num_of_enum_ui_lang;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumOfEnumUILang
        _m01 uint32_t  size_of_enum_ui_buffer;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SizeOfEnumUIBuffer
        _m02 uint16_t* p_enum_ui_buffer;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pEnumUIBuffer
                                              
        SDK_MAGIC_PROPERTIES( "tagENUMUILANG.$", 0x10, true, 0x3710cb8495eeefe2 );                       
        SDK_FIXED_SIZE( enumuilang_t, 0x10 );                       
    };                                        
};
#include "magic/enumuilang_t.end.hpp"
SDK_VERIFY( struct tag::enumuilang_t, 0x10 );
