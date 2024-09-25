#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfirpqueue_triage_info_v1_11_t.start.hpp"
namespace wdf
{
    // [struct _WDFIRPQUEUE_TRIAGE_INFO_V1_11]
    // => Windows 10 v1607
    //
    struct wdfirpqueue_triage_info_v1_11_t
    {                                     
        // Windows 10 v1607                
        //                            
        _m00 uint32_t irp_queue_size;       //{ +0x0000    } | .IrpQueueSize
        _m01 uint32_t irp_list_header;      //{ +0x0004    } | .IrpListHeader
        _m02 uint32_t irp_list_entry;       //{ +0x0008    } | .IrpListEntry
        _m03 uint32_t irp_context;          //{ +0x000c    } | .IrpContext
                                          
        SDK_MAGIC_PROPERTIES( "_WDFIRPQUEUE_TRIAGE_INFO_V1_11.$", 0x0, false, 0xbda0d9a703fffcc7 );                
        SDK_FIXED_SIZE( wdfirpqueue_triage_info_v1_11_t, 0x10 );                
    };                                    
};
#include "magic/wdfirpqueue_triage_info_v1_11_t.end.hpp"
SDK_VERIFY( struct wdf::wdfirpqueue_triage_info_v1_11_t, 0x10 );
