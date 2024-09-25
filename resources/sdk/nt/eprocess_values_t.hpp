#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/eprocess_values_t.start.hpp"
namespace nt
{
    // [struct _EPROCESS_VALUES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct eprocess_values_t                
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint64_t kernel_time;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KernelTime
        _m01 uint64_t user_time;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UserTime
        _m02 uint64_t ready_time;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReadyTime
        _m03 uint64_t cycle_time;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CycleTime
        _m04 uint64_t context_switches;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ContextSwitches
        _m05 int64_t  read_operation_count;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ReadOperationCount
        _m06 int64_t  write_operation_count;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .WriteOperationCount
        _m07 int64_t  other_operation_count;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OtherOperationCount
        _m08 int64_t  read_transfer_count;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ReadTransferCount
        _m09 int64_t  write_transfer_count;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .WriteTransferCount
        _m10 int64_t  other_transfer_count;   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .OtherTransferCount
                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m11 uint64_t kernel_wait_time;       //{ +0x0058    +0x0058    +0x0058    } | .KernelWaitTime
        _m12 uint64_t user_wait_time;         //{ +0x0060    +0x0060    +0x0060    } | .UserWaitTime
                                            
        SDK_MAGIC_PROPERTIES( "_EPROCESS_VALUES.$", 0x68, true, 0xe4bcad1ece50499d );                      
        SDK_DYNAMIC_SIZE( eprocess_values_t );                      
    };                                      
};
#include "magic/eprocess_values_t.end.hpp"
