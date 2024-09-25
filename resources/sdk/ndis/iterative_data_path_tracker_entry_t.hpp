#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iterative_data_path_tracker_entry_t.start.hpp"
namespace ndis
{
    struct net_buffer_list_t;

    // [struct _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iterative_data_path_tracker_entry_t                     
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                         
        _m00 struct ndis::net_buffer_list_t* first_nbl;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FirstNbl
        _m01 struct ndis::net_buffer_list_t* last_nbl;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LastNbl
        _m02 uint8_t                         iteration_in_progress;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IterationInProgress
                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY.$", 0x18, true, 0x8a38783452cadb2 );                      
        SDK_FIXED_SIZE( iterative_data_path_tracker_entry_t, 0x18 );                      
    };                                                             
};
#include "magic/iterative_data_path_tracker_entry_t.end.hpp"
SDK_VERIFY( struct ndis::iterative_data_path_tracker_entry_t, 0x18 );
