#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _REFS_STREAM_SNAPSHOT_OPERATION]
    //  Windows 11
    //
    enum class refs_stream_snapshot_operation_t : int32_t
    {                                                    
        invalid =            0x0,                          // Windows 11
        create =             0x1,                          // Windows 11
        list =               0x2,                          // Windows 11
        query_deltas =       0x3,                          // Windows 11
        revert =             0x4,                          // Windows 11
        set_shadow_btree =   0x5,                          // Windows 11
        clear_shadow_btree = 0x6,                          // Windows 11
        max =                0x6,                          // Windows 11
    };                                                   
};
