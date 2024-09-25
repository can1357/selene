#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/x86_register_state_t.start.hpp"
namespace whea
{
    // [struct _WHEA_X86_REGISTER_STATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct x86_register_state_t
    {                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t eax;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Eax
        _m01 uint32_t ebx;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Ebx
        _m02 uint32_t ecx;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Ecx
        _m03 uint32_t edx;       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Edx
        _m04 uint32_t esi;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Esi
        _m05 uint32_t edi;       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Edi
        _m06 uint32_t ebp;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Ebp
        _m07 uint32_t esp;       //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .Esp
        _m08 uint16_t cs;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Cs
        _m09 uint16_t ds;        //{ +0x0022    +0x0022    +0x0022    +0x0022    +0x0022    } | .Ds
        _m10 uint16_t ss;        //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .Ss
        _m11 uint16_t es;        //{ +0x0026    +0x0026    +0x0026    +0x0026    +0x0026    } | .Es
        _m12 uint16_t fs;        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Fs
        _m13 uint16_t gs;        //{ +0x002a    +0x002a    +0x002a    +0x002a    +0x002a    } | .Gs
        _m14 uint32_t eflags;    //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .Eflags
        _m15 uint32_t eip;       //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Eip
        _m16 uint32_t cr0;       //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .Cr0
        _m17 uint32_t cr1;       //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .Cr1
        _m18 uint32_t cr2;       //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .Cr2
        _m19 uint32_t cr3;       //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .Cr3
        _m20 uint32_t cr4;       //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .Cr4
        _m21 uint64_t gdtr;      //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .Gdtr
        _m22 uint64_t idtr;      //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .Idtr
        _m23 uint16_t ldtr;      //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .Ldtr
        _m24 uint16_t tr;        //{ +0x005a    +0x005a    +0x005a    +0x005a    +0x005a    } | .Tr
                               
        SDK_NONVOL_PROPERTIES( "_WHEA_X86_REGISTER_STATE.$", 0x5c, true, 0x584ec3364dff9379 );       
        SDK_FIXED_SIZE( x86_register_state_t, 0x5c );       
    };                         
};
#include "magic/x86_register_state_t.end.hpp"
SDK_VERIFY( struct whea::x86_register_state_t, 0x5c );
