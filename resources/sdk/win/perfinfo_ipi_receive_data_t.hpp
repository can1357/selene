#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_ipi_receive_data_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_IPI_RECEIVE_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_ipi_receive_data_t
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 void*    worker_routine;   //{ +0x0008    +0x0000    +0x0008    } | .WorkerRoutine
        _m01 uint32_t request_type;     //{ +0x0010    +0x0008    +0x0010    } | .RequestType
                                      
        // Windows 10 v2004, Windows 10 v20H2               
        //                           
        _m02 uint64_t initial_time;     //{ +0x0000    +0x0000    } | .InitialTime
                                      
        SDK_MAGIC_PROPERTIES( "_PERFINFO_IPI_RECEIVE_DATA.$", 0x14, true, 0xf3d1de0b8de12f8 );               
        SDK_DYNAMIC_SIZE( perfinfo_ipi_receive_data_t );               
    };                                
};
#include "magic/perfinfo_ipi_receive_data_t.end.hpp"
