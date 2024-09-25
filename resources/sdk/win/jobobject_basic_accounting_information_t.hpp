#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_basic_accounting_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_basic_accounting_information_t 
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 int64_t  total_user_time;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalUserTime
        _m01 int64_t  total_kernel_time;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalKernelTime
        _m02 int64_t  this_period_total_user_time;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ThisPeriodTotalUserTime
        _m03 int64_t  this_period_total_kernel_time;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ThisPeriodTotalKernelTime
        _m04 uint32_t total_page_fault_count;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TotalPageFaultCount
        _m05 uint32_t total_processes;                //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .TotalProcesses
        _m06 uint32_t active_processes;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ActiveProcesses
        _m07 uint32_t total_terminated_processes;     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .TotalTerminatedProcesses
                                                    
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_BASIC_ACCOUNTING_INFORMATION.$", 0x30, true, 0x5b28ecec841a8498 );                              
        SDK_FIXED_SIZE( jobobject_basic_accounting_information_t, 0x30 );                              
    };                                              
};
#include "magic/jobobject_basic_accounting_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_basic_accounting_information_t, 0x30 );
