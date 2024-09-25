#pragma once
#include <sdkgen/support_library.hpp>
#include "system_pagefile_information_t.hpp"

#include "magic/system_pagefile_information_ex_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PAGEFILE_INFORMATION_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_pagefile_information_ex_t                         
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                          
        _m00 struct win::system_pagefile_information_t info;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Info
        _m01 uint32_t                                  minimum_size;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MinimumSize
        _m02 uint32_t                                  maximum_size;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .MaximumSize
                                                                    
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PAGEFILE_INFORMATION_EX.$", 0x28, true, 0x962f46b965440f10 );             
        SDK_FIXED_SIZE( system_pagefile_information_ex_t, 0x28 );             
    };                                                              
};
#include "magic/system_pagefile_information_ex_t.end.hpp"
SDK_VERIFY( struct win::system_pagefile_information_ex_t, 0x28 );
