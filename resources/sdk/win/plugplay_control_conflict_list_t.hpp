#pragma once
#include <sdkgen/support_library.hpp>
#include "plugplay_control_conflict_entry_t.hpp"

#include "magic/plugplay_control_conflict_list_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_CONFLICT_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_conflict_list_t         
    {                                               
        using conflict_entry_t = sdk::array<struct win::plugplay_control_conflict_entry_t, 1>;                     
                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                          
        _m00 uint32_t          conflicts_counted;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ConflictsCounted
        _m01 uint32_t          conflicts_listed;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ConflictsListed
        _m02 uint32_t          required_buffer_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RequiredBufferSize
        _m03 conflict_entry_t  conflict_entry;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ConflictEntry
                                                    
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_CONFLICT_LIST.$", 0x40, true, 0x6e5971f0e7986a7b );                     
        SDK_FIXED_SIZE( plugplay_control_conflict_list_t, 0x40 );                     
    };                                              
};
#include "magic/plugplay_control_conflict_list_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_conflict_list_t, 0x40 );
