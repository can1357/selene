#pragma once
#include <sdkgen/support_library.hpp>
#include "wow64_floating_save_area_t.hpp"

#include "magic/wow64_context_t.start.hpp"
namespace win
{
    // [struct _WOW64_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wow64_context_t                                             
    {                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                             
        _m00 uint32_t                               context_flags;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ContextFlags
        _m01 uint32_t                               dr0;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Dr0
        _m02 uint32_t                               dr1;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Dr1
        _m03 uint32_t                               dr2;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Dr2
        _m04 uint32_t                               dr3;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Dr3
        _m05 uint32_t                               dr6;                 //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Dr6
        _m06 uint32_t                               dr7;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Dr7
        _m07 struct win::wow64_floating_save_area_t float_save;          //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .FloatSave
        _m08 uint32_t                               seg_gs;              //{ +0x008c    +0x008c    +0x008c    +0x008c    +0x008c    } | .SegGs
        _m09 uint32_t                               seg_fs;              //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .SegFs
        _m10 uint32_t                               seg_es;              //{ +0x0094    +0x0094    +0x0094    +0x0094    +0x0094    } | .SegEs
        _m11 uint32_t                               seg_ds;              //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .SegDs
        _m12 uint32_t                               edi;                 //{ +0x009c    +0x009c    +0x009c    +0x009c    +0x009c    } | .Edi
        _m13 uint32_t                               esi;                 //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .Esi
        _m14 uint32_t                               ebx;                 //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .Ebx
        _m15 uint32_t                               edx;                 //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .Edx
        _m16 uint32_t                               ecx;                 //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .Ecx
        _m17 uint32_t                               eax;                 //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .Eax
        _m18 uint32_t                               ebp;                 //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .Ebp
        _m19 uint32_t                               eip;                 //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .Eip
        _m20 uint32_t                               seg_cs;              //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .SegCs
        _m21 uint32_t                               e_flags;             //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .EFlags
        _m22 uint32_t                               esp;                 //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .Esp
        _m23 uint32_t                               seg_ss;              //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .SegSs
        _m24 sdk::array<uint8_t, 512>               extended_registers;  //{ +0x00cc    +0x00cc    +0x00cc    +0x00cc    +0x00cc    } | .ExtendedRegisters
                                                                       
        SDK_NONVOL_PROPERTIES( "_WOW64_CONTEXT.$", 0x2cc, true, 0x88852598d83d9551 );                   
        SDK_FIXED_SIZE( wow64_context_t, 0x2cc );                      
    };                                                                 
};
#include "magic/wow64_context_t.end.hpp"
SDK_VERIFY( struct win::wow64_context_t, 0x2cc );
