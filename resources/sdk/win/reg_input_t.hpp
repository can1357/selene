#pragma once
#include <sdkgen/support_library.hpp>
#include "reg_input_entry_t.hpp"

#include "magic/reg_input_t.start.hpp"
namespace win
{
    // [struct _RegInput]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reg_input_t                                            
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                        
        _m00 uint32_t                                     dw_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 sdk::array<struct win::reg_input_entry_t, 1> rginent;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rginent
                                                                  
        SDK_MAGIC_PROPERTIES( "_RegInput.$", 0x38, true, 0xd9ebaeb35ef10b01 );        
        SDK_FIXED_SIZE( reg_input_t, 0x38 );                      
    };                                                            
};
#include "magic/reg_input_t.end.hpp"
SDK_VERIFY( struct win::reg_input_t, 0x38 );
