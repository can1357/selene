#pragma once
#include <sdkgen/support_library.hpp>
#include "../io/counters_t.hpp"
#include "../nt/process_disk_counters_t.hpp"
#include "../nt/process_energy_values_t.hpp"
#include "jobobject_basic_accounting_information_t.hpp"

#include "magic/jobobject_extended_accounting_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_extended_accounting_information_t                  
    {                                                                   
        using jobobject_basic_accounting_information_t = struct win::jobobject_basic_accounting_information_t;                 
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                              
        _m00 jobobject_basic_accounting_information_t  basic_info;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BasicInfo
        _m01 struct io::counters_t                     io_info;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .IoInfo
        _m02 struct nt::process_disk_counters_t        disk_io_info;      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .DiskIoInfo
        _m03 uint64_t                                  context_switches;  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ContextSwitches
        _m04 int64_t                                   total_cycle_time;  //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .TotalCycleTime
        _m05 uint64_t                                  ready_time;        //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .ReadyTime
        _m06 struct nt::process_energy_values_t        energy_values;     //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .EnergyValues
                                                                        
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION.$", 0x1b0, true, 0xf8817f8609a935b9 );                 
        SDK_DYNAMIC_SIZE( jobobject_extended_accounting_information_t );                 
    };                                                                  
};
#include "magic/jobobject_extended_accounting_information_t.end.hpp"
