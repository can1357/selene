#pragma once
#include <sdkgen/support_library.hpp>
#include "ktss64_t.hpp"
#include "kldtentry_t.hpp"
#include "kgdtentry64_t.hpp"
#include "kidtentry64_t.hpp"
#include "ktransition_stack_t.hpp"

#include "magic/kprocessor_descriptor_area_t.start.hpp"
namespace nt
{
    struct kpcr_t;

    // [struct _KPROCESSOR_DESCRIPTOR_AREA]
    // => Windows 10 v1607
    //
    struct kprocessor_descriptor_area_t                                          
    {                                                                            
        // Windows 10 v1607                                                      
        //                                                                       
        _m00 sdk::array<union nt::kidtentry64_t, 256>      idt;                    //{ +0x0000    } | .Idt
        _m01 struct nt::ktss64_t                           tss;                    //{ +0x1000    } | .Tss
        _m02 uint64_t                                      tss_spare;              //{ +0x1068    } | .TssSpare
        _m03 struct nt::kpcr_t*                            kernel_gs_base;         //{ +0x1070    } | .KernelGsBase
        _m04 void*                                         idle_stack;             //{ +0x1078    } | .IdleStack
        _m05 sdk::array<uint8_t, 3888>                     tss_pad;                //{ +0x1080    } | .TssPad
        _m06 sdk::array<uint8_t, 4096>                     gdt_pad_temp;           //{ +0x1fb0    } | .GdtPadTemp
        _m07 sdk::array<union nt::kgdtentry64_t, 5>        gdt;                    //{ +0x2fb0    } | .Gdt
        _m08 struct nt::kldtentry_t                        gdt_cm_teb_descriptor;  //{ +0x3000    } | .GdtCmTebDescriptor
        _m09 sdk::array<uint8_t, 4088>                     gdt_end_padding;        //{ +0x3008    } | .GdtEndPadding
        _m10 sdk::array<struct nt::ktransition_stack_t, 8> transition_stack;       //{ +0x4000    } | .TransitionStack
                                                                                 
        SDK_MAGIC_PROPERTIES( "_KPROCESSOR_DESCRIPTOR_AREA.$", 0x0, false, 0x11ed538103f45b94 );                      
        SDK_FIXED_SIZE( kprocessor_descriptor_area_t, 0x5000 );                      
    };                                                                           
};
#include "magic/kprocessor_descriptor_area_t.end.hpp"
SDK_VERIFY( struct nt::kprocessor_descriptor_area_t, 0x5000 );
