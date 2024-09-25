#pragma once
#include <sdkgen/support_library.hpp>
#include "kprcb_t.hpp"
#include "../os/tib_t.hpp"

#include "magic/kpcr_t.start.hpp"
namespace nt
{
    struct kpcr_t;
    struct ktss64_t;
    union kgdtentry64_t;
    union kidtentry64_t;
    struct kspin_lock_queue_t;

    // [struct _KPCR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kpcr_t                                                            
    {                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                   
        _m00 struct os::tib_t               nt_tib;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NtTib
        _m01 union nt::kgdtentry64_t*       gdt_base;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .GdtBase
        _m02 struct nt::ktss64_t*           tss_base;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TssBase
        _m03 uint64_t                       user_rsp;                          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .UserRsp
        _m04 struct nt::kpcr_t*             self;                              //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Self
        _m05 struct nt::kprcb_t*            current_prcb;                      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .CurrentPrcb
        _m06 struct nt::kspin_lock_queue_t* lock_array;                        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .LockArray
        _m07 void*                          used_self;                         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Used_Self
        _m08 union nt::kidtentry64_t*       idt_base;                          //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .IdtBase
        _m09 uint8_t                        irql;                              //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .Irql
        _m10 uint8_t                        second_level_cache_associativity;  //{ +0x0051    +0x0051    +0x0051    +0x0051    +0x0051    } | .SecondLevelCacheAssociativity
        _m11 uint8_t                        obsolete_number;                   //{ +0x0052    +0x0052    +0x0052    +0x0052    +0x0052    } | .ObsoleteNumber
        _m12 uint16_t                       major_version;                     //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .MajorVersion
        _m13 uint16_t                       minor_version;                     //{ +0x0062    +0x0062    +0x0062    +0x0062    +0x0062    } | .MinorVersion
        _m14 uint32_t                       stall_scale_factor;                //{ +0x0064    +0x0064    +0x0064    +0x0064    +0x0064    } | .StallScaleFactor
        _m15 sdk::array<uint32_t, 15>       kernel_reserved;                   //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .KernelReserved
        _m16 uint32_t                       second_level_cache_size;           //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .SecondLevelCacheSize
        _m17 sdk::array<uint32_t, 16>       hal_reserved;                      //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .HalReserved
        _m18 void*                          kd_version_block;                  //{ +0x0108    +0x0108    +0x0108    +0x0108    +0x0108    } | .KdVersionBlock
        _m19 sdk::array<uint32_t, 24>       pcr_align1;                        //{ +0x0118    +0x0118    +0x0118    +0x0118    +0x0118    } | .PcrAlign1
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                   
        _m20 struct nt::kprcb_t             prcb;                              //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .Prcb
                                                                             
        SDK_NONVOL_PROPERTIES( "_KPCR.$", 0xb080, true, 0x75b5263d316675d1 );                                 
        SDK_DYNAMIC_SIZE( kpcr_t );                                          
    };                                                                       
};
#include "magic/kpcr_t.end.hpp"
