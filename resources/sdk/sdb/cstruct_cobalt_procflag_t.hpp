#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cstruct_cobalt_procflag_t.start.hpp"
namespace sdb
{
    // [struct _SDB_CSTRUCT_COBALT_PROCFLAG]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cstruct_cobalt_procflag_t                                          
    {                                                                         
        struct u0_specified_t                                                 
        {                                                                     
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                
            _m10 uint64_t group1_as_uint64;                                     //{ +0x0000    +0x0000    +0x0000    } | .Group1AsUINT64
            _m11 uint1_t  affinity_mask;                                        //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .AffinityMask
            _m12 uint1_t  cpuid_ecx_override;                                   //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .CPUIDEcxOverride
            _m13 uint1_t  cpuid_edx_override;                                   //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .CPUIDEdxOverride
            _m14 uint1_t  processor_group;                                      //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .ProcessorGroup
            _m15 uint1_t  fast_self_mod_threshold;                              //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .FastSelfModThreshold
            _m16 uint1_t  cpuid_brand;                                          //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .CPUIDBrand
            _m17 uint1_t  rdtsc_scaling;                                        //{ +0x0001@1  +0x0001@1  +0x0001@1  } | .RdtscScaling
            _m18 uint1_t  unaligned_atomic_approach;                            //{ +0x0001@3  +0x0001@3  +0x0001@3  } | .UnalignedAtomicApproach
            _m19 uint1_t  run_on_single_core;                                   //{ +0x0001@4  +0x0001@4  +0x0001@4  } | .RunOnSingleCore
            _m20 uint1_t  patch_unaligned;                                      //{ +0x0001@6  +0x0001@6  +0x0001@6  } | .PatchUnaligned
                                                                              
            // Windows 10 v2004, Windows 10 v20H2                                                    
            //                                                                
            _m21 uint1_t  inline_cfg_checks;                                    //{ +0x0001@5  +0x0001@5  } | .InlineCFGChecks
                                                                              
            // Windows 11                                                     
            //                                                                
            _m22 uint1_t  x64cpuid;                                             //{ +0x0001@5  } | .X64CPUID
            _m23 uint1_t  interpreter_or_jitter;                                //{ +0x0001@7  } | .InterpreterOrJitter
                                                                              
            SDK_MAGIC_PROPERTIES( "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.$", 0x8, true, 0xbd3578e94f710e8a );                                                    
            SDK_FIXED_SIZE( u0_specified_t, 0x8 );                                                    
        };                                                                    
                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                    
        _m00 uint64_t                               affinity_mask;              //{ +0x0000    +0x0000    +0x0000    } | .AffinityMask
        _m01 uint32_t                               cpuid_ecx_override;         //{ +0x0008    +0x0008    +0x0008    } | .CPUIDEcxOverride
        _m02 uint32_t                               cpuid_edx_override;         //{ +0x000c    +0x000c    +0x000c    } | .CPUIDEdxOverride
        _m03 uint16_t                               processor_group;            //{ +0x0010    +0x0010    +0x0010    } | .ProcessorGroup
        _m04 uint16_t                               fast_self_mod_threshold;    //{ +0x0012    +0x0012    +0x0012    } | .FastSelfModThreshold
        _m05 uint4_t                                cpuid_brand;                //{ +0x0017@0  +0x0017@0  +0x0017@0  } | .CPUIDBrand
        _m06 uint3_t                                rdtsc_scaling;              //{ +0x0018@0  +0x0018@0  +0x0018@0  } | .RdtscScaling
        _m07 uint2_t                                unaligned_atomic_approach;  //{ +0x0018@5  +0x0018@5  +0x0018@5  } | .UnalignedAtomicApproach
        _m08 uint1_t                                run_on_single_core;         //{ +0x0018@7  +0x0018@7  +0x0018@7  } | .RunOnSingleCore
        _m09 uint1_t                                patch_unaligned;            //{ +0x0019@1  +0x0019@1  +0x0019@1  } | .PatchUnaligned
        _m24 u0_specified_t                         specified;                  //{ +0x0020    +0x0020    +0x0020    } | .Specified
                                                                              
        // Windows 10 v2004, Windows 10 v20H2                                 
        //                                                                    
        _m25 uint1_t                                inline_cfg_checks;          //{ +0x0019@0  +0x0019@0  } | .InlineCFGChecks
                                                                              
        // Windows 11                                                         
        //                                                                    
        _m26 uint1_t                                x64cpuid;                   //{ +0x0019@0  } | .X64CPUID
        _m27 uint1_t                                interpreter_or_jitter;      //{ +0x0019@2  } | .InterpreterOrJitter
                                                                              
        SDK_MAGIC_PROPERTIES( "_SDB_CSTRUCT_COBALT_PROCFLAG.$", 0x28, true, 0xabb83a2e7df8b5d3 );                          
        SDK_FIXED_SIZE( cstruct_cobalt_procflag_t, 0x28 );                          
    };                                                                        
};
#include "magic/cstruct_cobalt_procflag_t.end.hpp"
SDK_VERIFY( struct sdb::cstruct_cobalt_procflag_t::u0_specified_t, 0x8 );
SDK_VERIFY( struct sdb::cstruct_cobalt_procflag_t, 0x28 );
