#pragma once
#include <sdkgen/support_library.hpp>
#include "ioring_sqe_t.hpp"
#include "ioring_sq_flags_t.hpp"

#include "magic/ioring_submission_queue_t.start.hpp"
namespace os
{
    // [struct _NT_IORING_SUBMISSION_QUEUE]
    // => Windows 11
    //
    struct ioring_submission_queue_t                        
    {                                                       
        // Windows 11                                       
        //                                                  
        _m00 uint32_t                               head;     //{ +0x0000    } | .Head
        _m01 uint32_t                               tail;     //{ +0x0004    } | .Tail
        _m02 enum os::ioring_sq_flags_t             flags;    //{ +0x0008    } | .Flags
        _m03 sdk::array<struct os::ioring_sqe_t, 1> entries;  //{ +0x0010    } | .Entries
                                                            
        SDK_MAGIC_PROPERTIES( "_NT_IORING_SUBMISSION_QUEUE.$", 0x0, false, 0x2c178159a2a0db95 );        
        SDK_FIXED_SIZE( ioring_submission_queue_t, 0x50 );        
    };                                                      
};
#include "magic/ioring_submission_queue_t.end.hpp"
SDK_VERIFY( struct os::ioring_submission_queue_t, 0x50 );
