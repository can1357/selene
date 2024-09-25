#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unique_process_information_t.start.hpp"
namespace win
{
    // [struct _UNIQUE_PROCESS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct unique_process_information_t  
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint9_t  dont_use;            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DontUse
        _m01 uint48_t unique_process_key;  //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .UniqueProcessKey
                                         
        SDK_MAGIC_PROPERTIES( "_UNIQUE_PROCESS_INFORMATION.$", 0x8, true, 0xd62c2040f989b8e3 );                   
        SDK_FIXED_SIZE( unique_process_information_t, 0x8 );                   
    };                                   
};
#include "magic/unique_process_information_t.end.hpp"
SDK_VERIFY( struct win::unique_process_information_t, 0x8 );
