#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_thread_feedback_read_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_THREAD_FEEDBACK_READ]
    // => Windows 11
    //
    struct perfinfo_thread_feedback_read_t
    {                                     
        // Windows 11                 
        //                            
        _m00 uint32_t thread_id;            //{ +0x0000    } | .ThreadId
        _m01 uint32_t processor_index;      //{ +0x0004    } | .ProcessorIndex
        _m02 uint64_t feedback;             //{ +0x0008    } | .Feedback
                                          
        SDK_MAGIC_PROPERTIES( "_PERFINFO_THREAD_FEEDBACK_READ.$", 0x0, false, 0x1b35045d8a267d95 );                
        SDK_FIXED_SIZE( perfinfo_thread_feedback_read_t, 0x10 );                
    };                                    
};
#include "magic/perfinfo_thread_feedback_read_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_thread_feedback_read_t, 0x10 );
