#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_perf_counters_t.start.hpp"
namespace nt
{
    // [struct PROCESS_PERF_COUNTERS]
    // => Windows 11
    //
    struct process_perf_counters_t          
    {                                       
        // Windows 11                       
        //                                  
        _m000 uint64_t processor_time;        //{ +0x0000    } | .ProcessorTime
        _m001 uint64_t user_time;             //{ +0x0008    } | .UserTime
        _m002 uint64_t privileged_time;       //{ +0x0010    } | .PrivilegedTime
        _m003 uint64_t virtual_bytes_peak;    //{ +0x0018    } | .VirtualBytesPeak
        _m004 uint64_t virtual_bytes;         //{ +0x0020    } | .VirtualBytes
        _m005 uint32_t page_faults;           //{ +0x0028    } | .PageFaults
        _m006 uint32_t handle_count;          //{ +0x002c    } | .HandleCount
        _m007 uint64_t working_set_peak;      //{ +0x0030    } | .WorkingSetPeak
        _m008 uint64_t working_set;           //{ +0x0038    } | .WorkingSet
        _m009 uint64_t page_file_bytes_peak;  //{ +0x0040    } | .PageFileBytesPeak
        _m010 uint64_t page_file_bytes;       //{ +0x0048    } | .PageFileBytes
        _m011 uint64_t private_bytes;         //{ +0x0050    } | .PrivateBytes
        _m012 uint32_t thread_count;          //{ +0x0058    } | .ThreadCount
        _m013 uint32_t priority_base;         //{ +0x005c    } | .PriorityBase
        _m014 uint64_t elapsed_time;          //{ +0x0060    } | .ElapsedTime
        _m015 uint32_t process_id;            //{ +0x0068    } | .ProcessId
        _m016 uint32_t creating_process_id;   //{ +0x006c    } | .CreatingProcessId
        _m017 uint64_t pool_paged_bytes;      //{ +0x0070    } | .PoolPagedBytes
        _m018 uint64_t pool_nonpaged_bytes;   //{ +0x0078    } | .PoolNonpagedBytes
        _m019 uint64_t io_read_operations;    //{ +0x0080    } | .IoReadOperations
        _m020 uint64_t io_write_operations;   //{ +0x0088    } | .IoWriteOperations
        _m021 uint64_t io_data_operations;    //{ +0x0090    } | .IoDataOperations
        _m022 uint64_t io_other_operations;   //{ +0x0098    } | .IoOtherOperations
        _m023 uint64_t io_read_bytes;         //{ +0x00a0    } | .IoReadBytes
        _m024 uint64_t io_write_bytes;        //{ +0x00a8    } | .IoWriteBytes
        _m025 uint64_t io_data_bytes;         //{ +0x00b0    } | .IoDataBytes
        _m026 uint64_t io_other_bytes;        //{ +0x00b8    } | .IoOtherBytes
        _m027 uint64_t working_set_private;   //{ +0x00c0    } | .WorkingSetPrivate
        _m028 uint64_t perf_freq;             //{ +0x00c8    } | .PerfFreq
        _m029 uint64_t perf_time;             //{ +0x00d0    } | .PerfTime
                                            
        SDK_MAGIC_PROPERTIES( "PROCESS_PERF_COUNTERS.$", 0x0, false, 0x49b500f84739ce4e );                     
        SDK_FIXED_SIZE( process_perf_counters_t, 0xd8 );                     
    };                                      
};
#include "magic/process_perf_counters_t.end.hpp"
SDK_VERIFY( struct nt::process_perf_counters_t, 0xd8 );
