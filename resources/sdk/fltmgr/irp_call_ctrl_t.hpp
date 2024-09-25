#pragma once
#include <sdkgen/support_library.hpp>
#include "icc_flags_t.hpp"
#include "../nt/single_list_entry_t.hpp"

namespace nt { struct irp_t; }

#include "magic/irp_call_ctrl_t.start.hpp"
namespace fltmgr
{
    struct irp_ctrl_t;
    struct flt_volume_t;
    struct callback_node_t;

    // [struct _IRP_CALL_CTRL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irp_call_ctrl_t                                                       
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                       
        _m00 struct fltmgr::flt_volume_t*    volume;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Volume
        _m01 struct nt::irp_t*               irp;                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Irp
        _m02 struct fltmgr::irp_ctrl_t*      irp_ctrl;                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IrpCtrl
        _m03 struct fltmgr::callback_node_t* starting_callback_node;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StartingCallbackNode
        _m04 struct nt::single_list_entry_t  operation_status_callback_list_head;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OperationStatusCallbackListHead
        _m05 enum fltmgr::icc_flags_t        flags;                                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Flags
                                                                                 
        SDK_MAGIC_PROPERTIES( "_IRP_CALL_CTRL.$", 0x30, true, 0x83285413d442cf43 );                                    
        SDK_FIXED_SIZE( irp_call_ctrl_t, 0x30 );                                    
    };                                                                           
};
#include "magic/irp_call_ctrl_t.end.hpp"
SDK_VERIFY( struct fltmgr::irp_call_ctrl_t, 0x30 );
