#pragma once
#include <sdkgen/support_library.hpp>
#include "../io/status_block_t.hpp"

namespace nt { struct kthread_t; }

#include "magic/flt_callback_data_t.start.hpp"
namespace fltmgr
{
    struct flt_tag_data_buffer_t;
    struct flt_io_parameter_block_t;

    // [struct _FLT_CALLBACK_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_callback_data_t                                             
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                                 
        _m00 uint32_t                                       flags;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 struct nt::kthread_t const*                    thread;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Thread
        _m02 struct fltmgr::flt_io_parameter_block_t const* iopb;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Iopb
        _m03 struct io::status_block_t                      io_status;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IoStatus
        _m04 struct fltmgr::flt_tag_data_buffer_t*          tag_data;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TagData
        _m05 nt::list_entry_t                               queue_links;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .QueueLinks
        _m06 sdk::array<void*, 2>                           queue_context;   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .QueueContext
        _m07 sdk::array<void*, 4>                           filter_context;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FilterContext
        _m08 char                                           requestor_mode;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .RequestorMode
                                                                           
        SDK_MAGIC_PROPERTIES( "_FLT_CALLBACK_DATA.$", 0x58, true, 0xa4c4ee38b2d37ddd );               
        SDK_FIXED_SIZE( flt_callback_data_t, 0x58 );                       
    };                                                                     
};
#include "magic/flt_callback_data_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_callback_data_t, 0x58 );
