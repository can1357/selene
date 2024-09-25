#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kprcb_tracepoint_log_entry_t.start.hpp"
namespace nt
{
    // [struct _KPRCB_TRACEPOINT_LOG_ENTRY]
    // => Windows 11
    //
    struct kprcb_tracepoint_log_entry_t
    {                                  
        // Windows 11        
        //                   
        _m00 uint64_t old_pc;            //{ +0x0000    } | .OldPc
        _m01 uint64_t old_sp;            //{ +0x0008    } | .OldSp
        _m02 uint64_t new_pc;            //{ +0x0010    } | .NewPc
        _m03 uint64_t new_sp;            //{ +0x0018    } | .NewSp
                                       
        SDK_MAGIC_PROPERTIES( "_KPRCB_TRACEPOINT_LOG_ENTRY.$", 0x0, false, 0x1ef4e41be80b4d75 );       
        SDK_FIXED_SIZE( kprcb_tracepoint_log_entry_t, 0x20 );       
    };                                 
};
#include "magic/kprcb_tracepoint_log_entry_t.end.hpp"
SDK_VERIFY( struct nt::kprcb_tracepoint_log_entry_t, 0x20 );
