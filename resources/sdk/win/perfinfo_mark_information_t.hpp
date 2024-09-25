#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_mark_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_MARK_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_mark_information_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                            
        _m00 sdk::array<char, 1> name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
                                      
        SDK_MAGIC_PROPERTIES( "_PERFINFO_MARK_INFORMATION.$", 0x1, true, 0x48ee5568774ef93d );     
        SDK_FIXED_SIZE( perfinfo_mark_information_t, 0x1 );     
    };                                
};
#include "magic/perfinfo_mark_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_mark_information_t, 0x1 );
