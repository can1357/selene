#pragma once
#include <sdkgen/support_library.hpp>
#include "task_t.hpp"

namespace io { struct status_block_t; }

#include "magic/direct_t.start.hpp"
namespace tp
{
    struct direct_t;
    struct callback_instance_t;

    // [struct _TP_DIRECT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct direct_t                                                
    {                                                              
        using ptp_direct_callback_t = sdk::function<void(struct tp::callback_instance_t*, struct tp::direct_t*, void*, struct io::status_block_t*)>*;                               
                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                         
        _m00 struct tp::task_t      task;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Task
        _m01 uint64_t               lock;                            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Lock
        _m02 nt::list_entry_t       io_completion_information_list;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IoCompletionInformationList
        _m03 ptp_direct_callback_t  callback;                        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Callback
        _m04 uint32_t               numa_node;                       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NumaNode
        _m05 uint8_t                ideal_processor;                 //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .IdealProcessor
                                                                   
        SDK_MAGIC_PROPERTIES( "_TP_DIRECT.$", 0x48, true, 0x6b2ef280c41fd682 );                               
        SDK_FIXED_SIZE( direct_t, 0x48 );                               
    };                                                             
};
#include "magic/direct_t.end.hpp"
SDK_VERIFY( struct tp::direct_t, 0x48 );
