#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_io_parameter_block_t.hpp"

#include "magic/completion_node_t.start.hpp"
namespace fltmgr
{
    struct irp_ctrl_t;
    struct flt_filter_t;
    struct callback_node_t;
    struct completion_node_tracking_list_t;

    // [struct _COMPLETION_NODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct completion_node_t                                                        
    {                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                          
        _m00 struct fltmgr::irp_ctrl_t*                      irp_ctrl;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IrpCtrl
        _m01 struct fltmgr::callback_node_t*                 callback_node;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CallbackNode
        _m02 struct fltmgr::flt_filter_t*                    filter;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Filter
        _m03 nt::list_entry_t                                instance_link;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InstanceLink
        _m04 struct fltmgr::completion_node_tracking_list_t* instance_tracking_list;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .InstanceTrackingList
        _m05 void*                                           context;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Context
        _m06 struct fltmgr::flt_io_parameter_block_t         data_snapshot;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DataSnapshot
        _m07 uint16_t                                        flags;                   //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .Flags
                                                                                    
        SDK_MAGIC_PROPERTIES( "_COMPLETION_NODE.$", 0x80, true, 0xb614390925fd37ce );                       
        SDK_FIXED_SIZE( completion_node_t, 0x80 );                                  
    };                                                                              
};
#include "magic/completion_node_t.end.hpp"
SDK_VERIFY( struct fltmgr::completion_node_t, 0x80 );
