#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flags_t.start.hpp"
namespace mi
{
    // [union _MI_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union flags_t                                                
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                       
        _m000 uint1_t verifier_enabled;                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .VerifierEnabled
        _m001 uint1_t kernel_verifier_enabled;                     //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .KernelVerifierEnabled
        _m002 uint1_t large_page_kernel;                           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .LargePageKernel
        _m003 uint1_t stop_on4d;                                   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .StopOn4d
        _m004 uint2_t initialization_phase;                        //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .InitializationPhase
        _m005 uint1_t page_kernel_stacks;                          //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .PageKernelStacks
        _m006 uint1_t check_zero_pages;                            //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .CheckZeroPages
        _m007 uint1_t processor_prewalks;                          //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .ProcessorPrewalks
        _m008 uint1_t processor_postwalks;                         //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .ProcessorPostwalks
        _m009 uint1_t coverage_build;                              //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .CoverageBuild
        _m010 uint1_t check_execute;                               //{ +0x0000@12 +0x0000@12 +0x0000@11 +0x0000@12 } | .CheckExecute
        _m011 uint1_t protected_pages_enabled;                     //{ +0x0000@13 +0x0000@13 +0x0000@12 +0x0000@13 } | .ProtectedPagesEnabled
        _m012 uint1_t secure_relocations;                          //{ +0x0000@19 +0x0000@14 +0x0000@13 +0x0000@14 } | .SecureRelocations
        _m013 uint1_t strong_page_identity;                        //{ +0x0000@17 +0x0000@15 +0x0000@14 +0x0000@15 } | .StrongPageIdentity
        _m014 uint1_t strong_code_guarantees;                      //{ +0x0000@14 +0x0000@16 +0x0000@15 +0x0000@16 } | .StrongCodeGuarantees
        _m015 uint1_t hard_code_guarantees;                        //{ +0x0000@15 +0x0000@17 +0x0000@16 +0x0000@17 } | .HardCodeGuarantees
        _m016 uint1_t execute_page_privilege_required;             //{ +0x0000@16 +0x0000@18 +0x0000@17 +0x0000@18 } | .ExecutePagePrivilegeRequired
        _m017 uint1_t full_hvci;                                   //{ +0x0000@18 +0x0000@20 +0x0000@19 +0x0000@20 } | .FullHvci
        _m018 uint1_t boot_debugger_active;                        //{ +0x0000@21 +0x0000@21 +0x0000@20 +0x0000@21 } | .BootDebuggerActive
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                           
        //                                                       
        _m019 int32_t entire_flags;                                //{ +0x0000    +0x0000    +0x0000    } | .EntireFlags
        _m020 uint1_t access_bit_replacement_disabled;             //{ +0x0000@11 +0x0000@11 +0x0000@11 } | .AccessBitReplacementDisabled
                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                       
        _m021 uint1_t secure_kernel_cfg_enabled;                   //{ +0x0000@19 +0x0000@18 +0x0000@19 } | .SecureKernelCfgEnabled
        _m022 uint1_t exception_handling_ready;                    //{ +0x0000@22 +0x0000@21 +0x0000@22 } | .ExceptionHandlingReady
        _m023 uint1_t shadow_stacks_supported;                     //{ +0x0000@23 +0x0000@22 +0x0000@23 } | .ShadowStacksSupported
        _m024 uint1_t access_bit_fence_required;                   //{ +0x0000@24 +0x0000@23 +0x0000@24 } | .AccessBitFenceRequired
        _m025 uint1_t pfn_database_exists;                         //{ +0x0000@25 +0x0000@26 +0x0000@25 } | .PfnDatabaseExists
        _m026 uint1_t system_ptes_ready;                           //{ +0x0000@27 +0x0000@28 +0x0000@27 } | .SystemPtesReady
                                                                 
        // Windows 10 v2004, Windows 10 v20H2                                           
        //                                                       
        _m027 uint1_t deferred_hot_adds_completed;                 //{ +0x0000@26 +0x0000@26 } | .DeferredHotAddsCompleted
                                                                 
        // Windows 11                                            
        //                                                       
        _m028 uint2_t access_bit_replacement_capability;           //{ +0x0000@24 } | .AccessBitReplacementCapability
        _m029 uint1_t pfn_database_gaps_filled;                    //{ +0x0000@27 } | .PfnDatabaseGapsFilled
        _m030 uint1_t boot_image_unprivileged_pages_unregistered;  //{ +0x0000@29 } | .BootImageUnprivilegedPagesUnregistered
        _m031 uint1_t image_protected_slab_executable_only;        //{ +0x0000@30 } | .ImageProtectedSlabExecutableOnly
        _m032 uint1_t special_read_only_protected_slab_pages;      //{ +0x0000@31 } | .SpecialReadOnlyProtectedSlabPages
        _m033 uint1_t slab_allocators_ready;                       //{ +0x0004@0  } | .SlabAllocatorsReady
        _m034 uint1_t kasan_enabled;                               //{ +0x0004@1  } | .KasanEnabled
                                                                 
        // Windows 10 v1607                                           
        //                                                       
        _m035 uint1_t slat_kernel_code_protected;                  //{ +0x0000@20 } | .SlatKernelCodeProtected
        _m036 uint2_t kva_shadow;                                  //{ +0x0000@22 } | .KvaShadow
                                                                 
        SDK_MAGIC_PROPERTIES( "_MI_FLAGS.$", 0x4, true, 0xcc1461b795ba165b );                                           
        SDK_DYNAMIC_SIZE( flags_t );                                           
    };                                                           
};
#include "magic/flags_t.end.hpp"
