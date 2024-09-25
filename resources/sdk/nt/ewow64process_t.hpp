#pragma once
#include <sdkgen/support_library.hpp>
#include "system_dll_type_t.hpp"

#include "magic/ewow64process_t.start.hpp"
namespace nt
{
    // [struct _EWOW64PROCESS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ewow64process_t                         
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                         
        _m00 void*                      peb;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Peb
                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2           
        //                                         
        _m01 uint16_t                   machine;     //{ +0x0008    +0x0008    +0x0008    } | .Machine
                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                         
        _m02 enum nt::system_dll_type_t ntdll_type;  //{ +0x000c    +0x0008    +0x000c    } | .NtdllType
                                                   
        SDK_MAGIC_PROPERTIES( "_EWOW64PROCESS.$", 0x10, true, 0x45d1cfbef1eb8de4 );           
        SDK_FIXED_SIZE( ewow64process_t, 0x10 );           
    };                                             
};
#include "magic/ewow64process_t.end.hpp"
SDK_VERIFY( struct nt::ewow64process_t, 0x10 );
