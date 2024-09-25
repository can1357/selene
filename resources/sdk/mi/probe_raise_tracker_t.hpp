#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/probe_raise_tracker_t.start.hpp"
namespace mi
{
    // [struct _MI_PROBE_RAISE_TRACKER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct probe_raise_tracker_t                         
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                               
        _m00 uint32_t user_range_in_kernel;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UserRangeInKernel
        _m01 uint32_t fault_failed;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FaultFailed
        _m02 uint32_t write_fault_failed;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WriteFaultFailed
        _m03 uint32_t large_page_failed;                   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .LargePageFailed
        _m04 uint32_t user_access_to_kernel_pte;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UserAccessToKernelPte
        _m05 uint32_t bad_page_location;                   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .BadPageLocation
        _m06 uint32_t insufficient_charge;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InsufficientCharge
        _m07 uint32_t page_table_charge;                   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .PageTableCharge
        _m08 uint32_t no_io_reference;                     //{ +0x0024    +0x0024    +0x0020    +0x0024    } | .NoIoReference
        _m09 uint32_t probe_failed;                        //{ +0x0028    +0x0028    +0x0024    +0x0028    } | .ProbeFailed
        _m10 uint32_t pte_is_zero;                         //{ +0x002c    +0x002c    +0x0028    +0x002c    } | .PteIsZero
        _m11 uint32_t strong_code_write;                   //{ +0x0030    +0x0030    +0x002c    +0x0030    } | .StrongCodeWrite
        _m12 uint32_t reduced_clone_commit_charge_failed;  //{ +0x0034    +0x0034    +0x0030    +0x0034    } | .ReducedCloneCommitChargeFailed
        _m13 uint32_t copy_on_write_at_dispatch_no_pages;  //{ +0x0038    +0x0038    +0x0034    +0x0038    } | .CopyOnWriteAtDispatchNoPages
        _m14 uint32_t enclave_page_failed;                 //{ +0x003c    +0x0040    +0x003c    +0x0040    } | .EnclavePageFailed
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                   
        //                                               
        _m15 uint32_t no_physical_mapping;                 //{ +0x0020    +0x0020    +0x0020    } | .NoPhysicalMapping
                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                               
        _m16 uint32_t no_page_tables_allowed;              //{ +0x003c    +0x0038    +0x003c    } | .NoPageTablesAllowed
                                                         
        SDK_MAGIC_PROPERTIES( "_MI_PROBE_RAISE_TRACKER.$", 0x44, true, 0x9947ae238561982a );                                   
        SDK_DYNAMIC_SIZE( probe_raise_tracker_t );                                   
    };                                                   
};
#include "magic/probe_raise_tracker_t.end.hpp"
