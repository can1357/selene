#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hidden_processor_power_interface_t.start.hpp"
namespace nt
{
    // [struct _HIDDEN_PROCESSOR_POWER_INTERFACE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hidden_processor_power_interface_t         
    {                                                 
        using read_perf_msr_t =      sdk::function<int32_t(uint32_t, uint32_t, uint64_t*)>*;                   
        using write_perf_msr_t =     sdk::function<int32_t(uint32_t, uint32_t, uint64_t, uint64_t)>*;                   
        using read_perf_io_port_t =  sdk::function<int32_t(uint32_t, uint16_t, uint16_t, uint32_t*)>*;                   
        using write_perf_io_port_t = sdk::function<int32_t(uint32_t, uint16_t, uint16_t, uint32_t, uint32_t)>*;                   
                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                            
        _m00 uint32_t              version;             //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 read_perf_msr_t       read_perf_msr;       //{ +0x0008    +0x0008    +0x0008    } | .ReadPerfMsr
        _m02 write_perf_msr_t      write_perf_msr;      //{ +0x0010    +0x0010    +0x0010    } | .WritePerfMsr
        _m03 read_perf_io_port_t   read_perf_io_port;   //{ +0x0018    +0x0018    +0x0018    } | .ReadPerfIoPort
        _m04 write_perf_io_port_t  write_perf_io_port;  //{ +0x0020    +0x0020    +0x0020    } | .WritePerfIoPort
                                                      
        SDK_MAGIC_PROPERTIES( "_HIDDEN_PROCESSOR_POWER_INTERFACE.$", 0x28, true, 0x71484f7c00d81e69 );                   
        SDK_FIXED_SIZE( hidden_processor_power_interface_t, 0x28 );                   
    };                                                
};
#include "magic/hidden_processor_power_interface_t.end.hpp"
SDK_VERIFY( struct nt::hidden_processor_power_interface_t, 0x28 );
