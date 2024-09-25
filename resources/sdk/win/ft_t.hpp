#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"

#include "magic/ft_t.start.hpp"
namespace win
{
    // [union FT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union ft_t                                
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 uint64_t               ft_scalar;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ft_scalar
        _m01 struct win::filetime_t ft_struct;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ft_struct
                                              
        SDK_MAGIC_PROPERTIES( "FT.$", 0x8, true, 0x736c92ee19d78013 );          
        SDK_FIXED_SIZE( ft_t, 0x8 );          
    };                                        
};
#include "magic/ft_t.end.hpp"
SDK_VERIFY( union win::ft_t, 0x8 );
