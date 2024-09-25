#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/linenumber_t.start.hpp"
namespace image
{
    // [struct _IMAGE_LINENUMBER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct linenumber_t                                 
    {                                                   
        union u0_type_t                                 
        {                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                          
            _m00 uint32_t symbol_table_index;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SymbolTableIndex
            _m01 uint32_t virtual_address;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualAddress
                                                        
            SDK_MAGIC_PROPERTIES( "_IMAGE_LINENUMBER.Type.$", 0x4, true, 0xf3f07224b7f449df );                              
            SDK_FIXED_SIZE( u0_type_t, 0x4 );                              
        };                                              
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                              
        _m02 u0_type_t                       type;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m03 uint16_t                        linenumber;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Linenumber
                                                        
        SDK_MAGIC_PROPERTIES( "_IMAGE_LINENUMBER.$", 0x6, true, 0xba4981c87aa3e986 );           
        SDK_FIXED_SIZE( linenumber_t, 0x6 );            
    };                                                  
};
#include "magic/linenumber_t.end.hpp"
SDK_VERIFY( union image::linenumber_t::u0_type_t, 0x4 );
SDK_VERIFY( struct image::linenumber_t, 0x6 );
