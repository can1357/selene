#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_machine_names_helper_t.start.hpp"
namespace win
{
    // [class CMachineNamesHelper]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_machine_names_helper_t    
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                            
        _m00 uint32_t  l_refs;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._lRefs
        _m01 uint32_t  dw_num_strings;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | ._dwNumStrings
        _m02 wchar_t** ppsz_strings;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._ppszStrings
                                      
        SDK_MAGIC_PROPERTIES( "CMachineNamesHelper.$", 0x10, true, 0xcf41589c99e4fd92 );               
        SDK_FIXED_SIZE( c_machine_names_helper_t, 0x10 );               
    };                                
};
#include "magic/c_machine_names_helper_t.end.hpp"
SDK_VERIFY( class win::c_machine_names_helper_t, 0x10 );
