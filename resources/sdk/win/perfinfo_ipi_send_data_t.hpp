#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_ipi_send_data_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_IPI_SEND_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_ipi_send_data_t  
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 void*    worker_routine;  //{ +0x0008    +0x0000    +0x0008    } | .WorkerRoutine
        _m01 uint32_t request_type;    //{ +0x0010    +0x0008    +0x0010    } | .RequestType
        _m02 uint32_t ipi_type;        //{ +0x0014    +0x000c    +0x0014    } | .IpiType
        _m03 uint32_t target_count;    //{ +0x0018    +0x0010    +0x0018    } | .TargetCount
                                     
        // Windows 10 v2004, Windows 10 v20H2               
        //                           
        _m04 uint64_t initial_time;    //{ +0x0000    +0x0000    } | .InitialTime
                                     
        SDK_MAGIC_PROPERTIES( "_PERFINFO_IPI_SEND_DATA.$", 0x1c, true, 0x31f03d288e3bc34b );               
        SDK_DYNAMIC_SIZE( perfinfo_ipi_send_data_t );               
    };                               
};
#include "magic/perfinfo_ipi_send_data_t.end.hpp"
