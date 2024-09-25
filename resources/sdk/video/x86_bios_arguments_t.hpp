#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/x86_bios_arguments_t.start.hpp"
namespace video
{
    // [struct _VIDEO_X86_BIOS_ARGUMENTS]
    // => WDK 10 (NV)
    //
    struct x86_bios_arguments_t
    {                          
        // WDK 10         
        //                
        _m00 uint32_t eax;       //{ +0x0000    } | .Eax
        _m01 uint32_t ebx;       //{ +0x0004    } | .Ebx
        _m02 uint32_t ecx;       //{ +0x0008    } | .Ecx
        _m03 uint32_t edx;       //{ +0x000c    } | .Edx
        _m04 uint32_t esi;       //{ +0x0010    } | .Esi
        _m05 uint32_t edi;       //{ +0x0014    } | .Edi
        _m06 uint32_t ebp;       //{ +0x0018    } | .Ebp
                               
        SDK_NONVOL_PROPERTIES( "_VIDEO_X86_BIOS_ARGUMENTS.$", 0x0, false, 0x64a54fbb12e2912b );    
        SDK_FIXED_SIZE( x86_bios_arguments_t, 0x1c );    
    };                         
};
#include "magic/x86_bios_arguments_t.end.hpp"
SDK_VERIFY( struct video::x86_bios_arguments_t, 0x1c );
