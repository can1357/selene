#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vga_char_t.start.hpp"
namespace nt
{
    // [struct _VGA_CHAR]
    // => WDK 10 (NV)
    //
    struct vga_char_t        
    {                        
        // WDK 10            
        //                   
        _m00 char _char;       //{ +0x0000    } | .Char
        _m01 char attributes;  //{ +0x0001    } | .Attributes
                             
        SDK_NONVOL_PROPERTIES( "_VGA_CHAR.$", 0x0, false, 0x9bad95970f7aba1d );           
        SDK_FIXED_SIZE( vga_char_t, 0x2 );           
    };                       
};
#include "magic/vga_char_t.end.hpp"
SDK_VERIFY( struct nt::vga_char_t, 0x2 );
