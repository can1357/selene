#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/recorder_log_create_params_t.start.hpp"
namespace pci
{
    // [struct _RECORDER_LOG_CREATE_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct recorder_log_create_params_t                           
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                        
        _m00 uint32_t             size;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t             log_tag;                          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LogTag
        _m02 uint32_t             total_buffer_size;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalBufferSize
        _m03 uint32_t             error_partition_size;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ErrorPartitionSize
        _m04 uint64_t             log_identifier_append_value;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LogIdentifierAppendValue
        _m05 uint8_t              log_identifier_append_value_set;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LogIdentifierAppendValueSet
        _m06 uint32_t             log_identifier_size;              //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .LogIdentifierSize
        _m07 sdk::array<char, 16> log_identifier;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LogIdentifier
                                                                  
        SDK_MAGIC_PROPERTIES( "_RECORDER_LOG_CREATE_PARAMS.$", 0x30, true, 0x53b52f36fb12f7b6 );                                
        SDK_FIXED_SIZE( recorder_log_create_params_t, 0x30 );                                
    };                                                            
};
#include "magic/recorder_log_create_params_t.end.hpp"
SDK_VERIFY( struct pci::recorder_log_create_params_t, 0x30 );
