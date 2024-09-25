#pragma once
#include <sdkgen/support_library.hpp>
#include "ioring_cqe_t.hpp"

#include "magic/ioring_completion_queue_t.start.hpp"
namespace os
{
    // [struct _NT_IORING_COMPLETION_QUEUE]
    // => Windows 11
    //
    struct ioring_completion_queue_t                        
    {                                                       
        // Windows 11                                       
        //                                                  
        _m00 uint32_t                               head;     //{ +0x0000    } | .Head
        _m01 uint32_t                               tail;     //{ +0x0004    } | .Tail
        _m02 sdk::array<struct os::ioring_cqe_t, 1> entries;  //{ +0x0008    } | .Entries
                                                            
        SDK_MAGIC_PROPERTIES( "_NT_IORING_COMPLETION_QUEUE.$", 0x0, false, 0xf4ce58c51c189d54 );        
        SDK_FIXED_SIZE( ioring_completion_queue_t, 0x20 );        
    };                                                      
};
#include "magic/ioring_completion_queue_t.end.hpp"
SDK_VERIFY( struct os::ioring_completion_queue_t, 0x20 );
