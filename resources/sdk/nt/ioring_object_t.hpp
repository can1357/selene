#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"
#include "../os/ioring_info_t.hpp"

namespace iop { struct mc_buffer_entry_t;         }
namespace os  { struct ioring_completion_queue_t; }
namespace os  { struct ioring_submission_queue_t; }

#include "magic/ioring_object_t.start.hpp"
namespace nt
{
    struct mdl_t;

    // [struct _IORING_OBJECT]
    // => Windows 11
    //
    struct ioring_object_t                                                 
    {                                                                      
        // Windows 11                                                      
        //                                                                 
        _m00 int16_t                               type;                     //{ +0x0000    } | .Type
        _m01 int16_t                               size;                     //{ +0x0002    } | .Size
        _m02 struct os::ioring_info_t              user_info;                //{ +0x0008    } | .UserInfo
        _m03 void*                                 section;                  //{ +0x0038    } | .Section
        _m04 struct os::ioring_submission_queue_t* submission_queue;         //{ +0x0040    } | .SubmissionQueue
        _m05 struct nt::mdl_t*                     completion_queue_mdl;     //{ +0x0048    } | .CompletionQueueMdl
        _m06 struct os::ioring_completion_queue_t* completion_queue;         //{ +0x0050    } | .CompletionQueue
        _m07 uint64_t                              view_size;                //{ +0x0058    } | .ViewSize
        _m08 int32_t                               in_submit;                //{ +0x0060    } | .InSubmit
        _m09 uint64_t                              completion_lock;          //{ +0x0068    } | .CompletionLock
        _m10 uint64_t                              submit_count;             //{ +0x0070    } | .SubmitCount
        _m11 uint64_t                              completion_count;         //{ +0x0078    } | .CompletionCount
        _m12 uint64_t                              completion_wait_until;    //{ +0x0080    } | .CompletionWaitUntil
        _m13 struct nt::kevent_t                   completion_event;         //{ +0x0088    } | .CompletionEvent
        _m14 uint8_t                               signal_completion_event;  //{ +0x00a0    } | .SignalCompletionEvent
        _m15 struct nt::kevent_t*                  completion_user_event;    //{ +0x00a8    } | .CompletionUserEvent
        _m16 uint32_t                              reg_buffers_count;        //{ +0x00b0    } | .RegBuffersCount
        _m17 struct iop::mc_buffer_entry_t**       reg_buffers;              //{ +0x00b8    } | .RegBuffers
        _m18 uint32_t                              reg_files_count;          //{ +0x00c0    } | .RegFilesCount
        _m19 void**                                reg_files;                //{ +0x00c8    } | .RegFiles
                                                                           
        SDK_MAGIC_PROPERTIES( "_IORING_OBJECT.$", 0x0, false, 0xff50abf810c8705e );                        
        SDK_FIXED_SIZE( ioring_object_t, 0xd0 );                           
    };                                                                     
};
#include "magic/ioring_object_t.end.hpp"
SDK_VERIFY( struct nt::ioring_object_t, 0xd0 );
