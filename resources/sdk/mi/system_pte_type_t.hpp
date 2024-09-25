#pragma once
#include <sdkgen/support_library.hpp>
#include "system_va_type_t.hpp"
#include "../rtl/bitmap_ex_t.hpp"

namespace ex { struct push_lock_t;          }
namespace nt { struct mmpte_t;              }
namespace nt { struct mmsupport_instance_t; }

#include "magic/system_pte_type_t.start.hpp"
namespace mi
{
    struct cached_ptes_t;

    // [struct _MI_SYSTEM_PTE_TYPE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_pte_type_t                                              
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                
        _m00 struct rtl::bitmap_ex_t            bitmap;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bitmap
        _m01 struct nt::mmpte_t*                base_pte;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BasePte
        _m02 uint32_t                           flags;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
        _m03 enum mi::system_va_type_t          va_type;                    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .VaType
        _m04 uint32_t                           pte_failures;               //{ +0x0028    +0x0028    +0x0020    +0x0028    } | .PteFailures
        _m05 uint64_t                           spin_lock;                  //{ +0x0030    +0x0030    +0x0028    +0x0030    } | .SpinLock
        _m06 volatile uint64_t                  total_system_ptes;          //{ +0x0040    +0x0038    +0x0030    +0x0038    } | .TotalSystemPtes
        _m07 uint64_t                           hint;                       //{ +0x0048    +0x0040    +0x0038    +0x0040    } | .Hint
        _m08 uint64_t                           lowest_bit_ever_allocated;  //{ +0x0050    +0x0048    +0x0040    +0x0048    } | .LowestBitEverAllocated
        _m09 volatile struct mi::cached_ptes_t* cached_ptes;                //{ +0x0058    +0x0050    +0x0048    +0x0050    } | .CachedPtes
        _m10 volatile uint64_t                  total_free_system_ptes;     //{ +0x0060    +0x0058    +0x0050    +0x0058    } | .TotalFreeSystemPtes
                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                          
        //                                                                
        _m11 uint32_t*                          failure_count;              //{ +0x0020    +0x0020    +0x0020    } | .FailureCount
        _m12 struct ex::push_lock_t*            global_push_lock;           //{ +0x0030    +0x0030    +0x0030    } | .GlobalPushLock
                                                                          
        // Windows 10 v1607                                               
        //                                                                
        _m13 struct nt::mmsupport_instance_t*   vm;                         //{ +0x0038    } | .Vm
                                                                          
        SDK_MAGIC_PROPERTIES( "_MI_SYSTEM_PTE_TYPE.$", 0x60, true, 0xc05bb07517b06505 );                          
        SDK_DYNAMIC_SIZE( system_pte_type_t );                            
    };                                                                    
};
#include "magic/system_pte_type_t.end.hpp"
