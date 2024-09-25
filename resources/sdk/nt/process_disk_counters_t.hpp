#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_disk_counters_t.start.hpp"
namespace nt
{
    // [struct _PROCESS_DISK_COUNTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_disk_counters_t          
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint64_t bytes_read;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BytesRead
        _m01 uint64_t bytes_written;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BytesWritten
        _m02 uint64_t read_operation_count;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReadOperationCount
        _m03 uint64_t write_operation_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WriteOperationCount
        _m04 uint64_t flush_operation_count;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FlushOperationCount
                                            
        SDK_MAGIC_PROPERTIES( "_PROCESS_DISK_COUNTERS.$", 0x28, true, 0x51435131206c9e3d );                      
        SDK_FIXED_SIZE( process_disk_counters_t, 0x28 );                      
    };                                      
};
#include "magic/process_disk_counters_t.end.hpp"
SDK_VERIFY( struct nt::process_disk_counters_t, 0x28 );
