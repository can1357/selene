#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/int10_bios_arguments_t.start.hpp"
namespace nt
{
    // [struct _INT10_BIOS_ARGUMENTS]
    // => WDK 10 (NV)
    //
    struct int10_bios_arguments_t
    {                            
        // WDK 10            
        //                   
        _m00 uint32_t eax;         //{ +0x0000    } | .Eax
        _m01 uint32_t ebx;         //{ +0x0004    } | .Ebx
        _m02 uint32_t ecx;         //{ +0x0008    } | .Ecx
        _m03 uint32_t edx;         //{ +0x000c    } | .Edx
        _m04 uint32_t esi;         //{ +0x0010    } | .Esi
        _m05 uint32_t edi;         //{ +0x0014    } | .Edi
        _m06 uint32_t ebp;         //{ +0x0018    } | .Ebp
        _m07 uint16_t seg_ds;      //{ +0x001c    } | .SegDs
        _m08 uint16_t seg_es;      //{ +0x001e    } | .SegEs
                                 
        SDK_NONVOL_PROPERTIES( "_INT10_BIOS_ARGUMENTS.$", 0x0, false, 0x9b72ad28ccd3a384 );       
        SDK_FIXED_SIZE( int10_bios_arguments_t, 0x20 );       
    };                           
};
#include "magic/int10_bios_arguments_t.end.hpp"
SDK_VERIFY( struct nt::int10_bios_arguments_t, 0x20 );
