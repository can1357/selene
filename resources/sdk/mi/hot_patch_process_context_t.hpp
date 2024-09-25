#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct eprocess_t; }

#include "magic/hot_patch_process_context_t.start.hpp"
namespace mi
{
    // [struct _MI_HOT_PATCH_PROCESS_CONTEXT]
    // => Windows 11
    //
    struct hot_patch_process_context_t             
    {                                              
        // Windows 11                              
        //                                         
        _m00 struct nt::eprocess_t* process;         //{ +0x0000    } | .Process
        _m01 void*                  process_handle;  //{ +0x0008    } | .ProcessHandle
        _m02 uint32_t               tb_flush_stamp;  //{ +0x0010    } | .TbFlushStamp
                                                   
        SDK_MAGIC_PROPERTIES( "_MI_HOT_PATCH_PROCESS_CONTEXT.$", 0x0, false, 0x9bfa99865d076ed9 );               
        SDK_FIXED_SIZE( hot_patch_process_context_t, 0x18 );               
    };                                             
};
#include "magic/hot_patch_process_context_t.end.hpp"
SDK_VERIFY( struct mi::hot_patch_process_context_t, 0x18 );
