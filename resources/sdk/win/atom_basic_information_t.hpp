#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/atom_basic_information_t.start.hpp"
namespace win
{
    // [struct _ATOM_BASIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct atom_basic_information_t             
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint16_t               usage_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UsageCount
        _m01 uint16_t               flags;        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m02 uint16_t               name_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NameLength
        _m03 sdk::array<wchar_t, 1> name;         //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Name
                                                
        SDK_MAGIC_PROPERTIES( "_ATOM_BASIC_INFORMATION.$", 0x8, true, 0xbe5bbb4e9150a963 );            
        SDK_FIXED_SIZE( atom_basic_information_t, 0x8 );            
    };                                          
};
#include "magic/atom_basic_information_t.end.hpp"
SDK_VERIFY( struct win::atom_basic_information_t, 0x8 );
