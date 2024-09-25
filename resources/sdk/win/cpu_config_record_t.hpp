#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cpu_config_record_t.start.hpp"
namespace win
{
    // [struct _CPU_CONFIG_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cpu_config_record_t                               
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                   
        _m00 uint32_t                 processor_speed;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessorSpeed
        _m01 uint32_t                 number_of_processors;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfProcessors
        _m02 uint32_t                 memory_size;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MemorySize
        _m03 uint32_t                 page_size;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PageSize
        _m04 uint32_t                 allocation_granularity;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocationGranularity
        _m05 sdk::array<wchar_t, 256> computer_name;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ComputerName
        _m06 sdk::array<wchar_t, 134> domain_name;             //{ +0x0214    +0x0214    +0x0214    +0x0214    } | .DomainName
        _m07 uint64_t                 hyper_threading_flag;    //{ +0x0320    +0x0320    +0x0320    +0x0320    } | .HyperThreadingFlag
        _m08 uint64_t                 highest_user_address;    //{ +0x0328    +0x0328    +0x0328    +0x0328    } | .HighestUserAddress
        _m09 uint16_t                 processor_architecture;  //{ +0x0330    +0x0330    +0x0330    +0x0330    } | .ProcessorArchitecture
        _m10 uint16_t                 processor_level;         //{ +0x0332    +0x0332    +0x0332    +0x0332    } | .ProcessorLevel
        _m11 uint16_t                 processor_revision;      //{ +0x0334    +0x0334    +0x0334    +0x0334    } | .ProcessorRevision
        _m12 uint8_t                  nx_enabled;              //{ +0x0336    +0x0336    +0x0336    +0x0336    } | .NxEnabled
        _m13 uint8_t                  pae_enabled;             //{ +0x0337    +0x0337    +0x0337    +0x0337    } | .PaeEnabled
        _m14 uint32_t                 memory_speed;            //{ +0x0338    +0x0338    +0x0338    +0x0338    } | .MemorySpeed
                                                             
        SDK_MAGIC_PROPERTIES( "_CPU_CONFIG_RECORD.$", 0x340, true, 0x1955891c3b61e3ca );                       
        SDK_FIXED_SIZE( cpu_config_record_t, 0x340 );                       
    };                                                       
};
#include "magic/cpu_config_record_t.end.hpp"
SDK_VERIFY( struct win::cpu_config_record_t, 0x340 );
