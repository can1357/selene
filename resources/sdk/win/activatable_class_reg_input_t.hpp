#pragma once
#include <sdkgen/support_library.hpp>
#include "activatable_class_reg_input_entry_t.hpp"

#include "magic/activatable_class_reg_input_t.start.hpp"
namespace win
{
    // [struct ActivatableClassRegInput]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activatable_class_reg_input_t
    {                                   
        using rginent_t = sdk::array<struct win::activatable_class_reg_input_entry_t, 1>;        
                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                      
        _m00 uint32_t   dw_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 rginent_t  rginent;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rginent
                                        
        SDK_MAGIC_PROPERTIES( "ActivatableClassRegInput.$", 0x38, true, 0xe5efc2eea548cbe5 );        
        SDK_FIXED_SIZE( activatable_class_reg_input_t, 0x38 );        
    };                                  
};
#include "magic/activatable_class_reg_input_t.end.hpp"
SDK_VERIFY( struct win::activatable_class_reg_input_t, 0x38 );
