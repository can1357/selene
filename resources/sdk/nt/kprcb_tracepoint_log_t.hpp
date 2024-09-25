#pragma once
#include <sdkgen/support_library.hpp>
#include "kprcb_tracepoint_log_entry_t.hpp"

#include "magic/kprcb_tracepoint_log_t.start.hpp"
namespace nt
{
    // [struct _KPRCB_TRACEPOINT_LOG]
    // => Windows 11
    //
    struct kprcb_tracepoint_log_t 
    {                             
        using entries_t = sdk::array<struct nt::kprcb_tracepoint_log_entry_t, 256>;          
                                  
        // Windows 11             
        //                        
        _m00 entries_t  entries;    //{ +0x0000    } | .Entries
        _m01 uint32_t   log_index;  //{ +0x2000    } | .LogIndex
                                  
        SDK_MAGIC_PROPERTIES( "_KPRCB_TRACEPOINT_LOG.$", 0x0, false, 0xc7492066f1e96f8 );          
        SDK_FIXED_SIZE( kprcb_tracepoint_log_t, 0x2008 );          
    };                            
};
#include "magic/kprcb_tracepoint_log_t.end.hpp"
SDK_VERIFY( struct nt::kprcb_tracepoint_log_t, 0x2008 );
