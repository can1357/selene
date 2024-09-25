#pragma once
#include <sdkgen/support_library.hpp>
#include "io_queue_node_type_t.hpp"

#include "magic/io_queue_node_t.start.hpp"
namespace fx
{
    // [struct FxIoQueueNode]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct io_queue_node_t                              
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                              
        _m00 nt::list_entry_t              m_list_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_ListEntry
        _m01 enum fx::io_queue_node_type_t m_type;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Type
                                                        
        SDK_MAGIC_PROPERTIES( "FxIoQueueNode.$", 0x18, true, 0xfcdc40c31621d940 );             
        SDK_FIXED_SIZE( io_queue_node_t, 0x18 );             
    };                                                  
};
#include "magic/io_queue_node_t.end.hpp"
SDK_VERIFY( struct fx::io_queue_node_t, 0x18 );
