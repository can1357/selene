#pragma once
#include <sdkgen/support_library.hpp>
#include "ioring_create_flags_t.hpp"
#include "../nt/ioring_version_t.hpp"

#include "magic/ioring_info_t.start.hpp"
namespace os
{
    struct ioring_completion_queue_t;
    struct ioring_submission_queue_t;

    // [struct _NT_IORING_INFO]
    // => Windows 11
    //
    struct ioring_info_t                                                      
    {                                                                         
        // Windows 11                                                         
        //                                                                    
        _m00 enum nt::ioring_version_t             io_ring_version;             //{ +0x0000    } | .IoRingVersion
        _m01 struct os::ioring_create_flags_t      flags;                       //{ +0x0004    } | .Flags
        _m02 uint32_t                              submission_queue_size;       //{ +0x000c    } | .SubmissionQueueSize
        _m03 uint32_t                              submission_queue_ring_mask;  //{ +0x0010    } | .SubmissionQueueRingMask
        _m04 uint32_t                              completion_queue_size;       //{ +0x0014    } | .CompletionQueueSize
        _m05 uint32_t                              completion_queue_ring_mask;  //{ +0x0018    } | .CompletionQueueRingMask
        _m06 struct os::ioring_submission_queue_t* submission_queue;            //{ +0x0020    } | .SubmissionQueue
        _m07 struct os::ioring_completion_queue_t* completion_queue;            //{ +0x0028    } | .CompletionQueue
                                                                              
        SDK_MAGIC_PROPERTIES( "_NT_IORING_INFO.$", 0x0, false, 0xa915e934754474d4 );                           
        SDK_FIXED_SIZE( ioring_info_t, 0x30 );                                
    };                                                                        
};
#include "magic/ioring_info_t.end.hpp"
SDK_VERIFY( struct os::ioring_info_t, 0x30 );
