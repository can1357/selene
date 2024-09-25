#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cpu_info_t.start.hpp"
namespace nt
{
    // [union _CPU_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union cpu_info_t                           
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                     
        _m00 sdk::array<uint32_t, 4> as_uint32;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUINT32
        _m01 uint32_t                eax;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Eax
        _m02 uint32_t                ebx;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Ebx
        _m03 uint32_t                ecx;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Ecx
        _m04 uint32_t                edx;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Edx
                                               
        SDK_MAGIC_PROPERTIES( "_CPU_INFO.$", 0x10, true, 0xa78cf680effdae07 );          
        SDK_FIXED_SIZE( cpu_info_t, 0x10 );          
    };                                         
};
#include "magic/cpu_info_t.end.hpp"
SDK_VERIFY( union nt::cpu_info_t, 0x10 );
