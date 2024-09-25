#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/offline_crashdump_configuration_table_v2_t.start.hpp"
namespace nt
{
    // [struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct offline_crashdump_configuration_table_v2_t
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t version;                         //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t abnormal_reset_occurred;         //{ +0x0004    +0x0004    +0x0004    } | .AbnormalResetOccurred
        _m02 uint32_t offline_memory_dump_capable;     //{ +0x0008    +0x0008    +0x0008    } | .OfflineMemoryDumpCapable
        _m03 int64_t  reset_data_address;              //{ +0x0010    +0x0010    +0x0010    } | .ResetDataAddress
        _m04 uint32_t reset_data_size;                 //{ +0x0018    +0x0018    +0x0018    } | .ResetDataSize
                                                     
        SDK_MAGIC_PROPERTIES( "_OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2.$", 0x20, true, 0x322c9ded49d8430c );                            
        SDK_FIXED_SIZE( offline_crashdump_configuration_table_v2_t, 0x20 );                            
    };                                               
};
#include "magic/offline_crashdump_configuration_table_v2_t.end.hpp"
SDK_VERIFY( struct nt::offline_crashdump_configuration_table_v2_t, 0x20 );
