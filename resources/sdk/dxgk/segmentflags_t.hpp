#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/segmentflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SEGMENTFLAGS]
    // => WDK 10 (NV)
    //
    struct segmentflags_t                                  
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 uint1_t  aperture;                              //{ +0x0000@0  } | .Aperture
        _m01 uint1_t  agp;                                   //{ +0x0000@1  } | .Agp
        _m02 uint1_t  cpu_visible;                           //{ +0x0000@2  } | .CpuVisible
        _m03 uint1_t  use_banking;                           //{ +0x0000@3  } | .UseBanking
        _m04 uint1_t  cache_coherent;                        //{ +0x0000@4  } | .CacheCoherent
        _m05 uint1_t  pitch_alignment;                       //{ +0x0000@5  } | .PitchAlignment
        _m06 uint1_t  populated_from_system_memory;          //{ +0x0000@6  } | .PopulatedFromSystemMemory
        _m07 uint1_t  preserved_during_standby;              //{ +0x0000@7  } | .PreservedDuringStandby
        _m08 uint1_t  preserved_during_hibernate;            //{ +0x0000@8  } | .PreservedDuringHibernate
        _m09 uint1_t  partially_preserved_during_hibernate;  //{ +0x0000@9  } | .PartiallyPreservedDuringHibernate
        _m10 uint1_t  direct_flip;                           //{ +0x0000@10 } | .DirectFlip
        _m11 uint1_t  use64kb_pages;                         //{ +0x0000@11 } | .Use64KBPages
        _m12 uint1_t  reserved_sys_mem;                      //{ +0x0000@12 } | .ReservedSysMem
        _m13 uint1_t  supports_cpu_host_aperture;            //{ +0x0000@13 } | .SupportsCpuHostAperture
        _m14 uint1_t  supports_cached_cpu_host_aperture;     //{ +0x0000@14 } | .SupportsCachedCpuHostAperture
        _m15 uint1_t  application_target;                    //{ +0x0000@15 } | .ApplicationTarget
        _m16 uint1_t  vpr_supported;                         //{ +0x0000@16 } | .VprSupported
        _m17 uint1_t  vpr_preserved_during_standby;          //{ +0x0000@17 } | .VprPreservedDuringStandby
        _m18 uint1_t  encrypted_paging_supported;            //{ +0x0000@18 } | .EncryptedPagingSupported
        _m19 uint1_t  local_budget_group;                    //{ +0x0000@19 } | .LocalBudgetGroup
        _m20 uint1_t  non_local_budget_group;                //{ +0x0000@20 } | .NonLocalBudgetGroup
        _m21 uint32_t value;                                 //{ +0x0000    } | .Value
                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_SEGMENTFLAGS.$", 0x0, false, 0x3e320c3a9c5237d8 );                                     
        SDK_FIXED_SIZE( segmentflags_t, 0x4 );                                     
    };                                                     
};
#include "magic/segmentflags_t.end.hpp"
SDK_VERIFY( struct dxgk::segmentflags_t, 0x4 );
