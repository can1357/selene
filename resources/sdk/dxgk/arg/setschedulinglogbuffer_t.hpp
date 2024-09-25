#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk { struct scheduling_log_buffer_t; }

#include "magic/setschedulinglogbuffer_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETSCHEDULINGLOGBUFFER]
    // => WDK 10 (NV)
    //
    struct setschedulinglogbuffer_t                                  
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 uint32_t                              node_ordinal;       //{ +0x0000    } | .NodeOrdinal
        _m01 uint32_t                              engine_ordinal;     //{ +0x0004    } | .EngineOrdinal
        _m02 uint32_t                              number_of_entries;  //{ +0x0008    } | .NumberOfEntries
        _m03 struct dxgk::scheduling_log_buffer_t* log_buffer_cpu_va;  //{ +0x0010    } | .LogBufferCpuVa
        _m04 uint64_t                              log_buffer_gpu_va;  //{ +0x0018    } | .LogBufferGpuVa
        _m05 uint32_t                              interrupt_entry;    //{ +0x0020    } | .InterruptEntry
                                                                     
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETSCHEDULINGLOGBUFFER.$", 0x0, false, 0xdf1bdc1e619d47a4 );                  
        SDK_FIXED_SIZE( setschedulinglogbuffer_t, 0x28 );                  
    };                                                               
};
#include "magic/setschedulinglogbuffer_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setschedulinglogbuffer_t, 0x28 );
