#pragma once
#include <sdkgen/support_library.hpp>
#include "fltp_workitem_t.hpp"
#include "../ex/push_lock_t.hpp"

namespace nt { struct kenlistment_t; }

#include "magic/tx_context_extension_t.start.hpp"
namespace fltmgr
{
    // [struct _TX_CONTEXT_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tx_context_extension_t                                     
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                            
        _m00 void*                          tx_enlistment_handle;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TxEnlistmentHandle
        _m01 struct nt::kenlistment_t*      tx_enlistment_object;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TxEnlistmentObject
        _m02 uint32_t                       tx_notification_mask;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TxNotificationMask
        _m03 struct fltmgr::fltp_workitem_t tx_complete_finalize_work;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TxCompleteFinalizeWork
        _m04 struct ex::push_lock_t         tx_ctx_extension_lock;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .TxCtxExtensionLock
                                                                      
        SDK_MAGIC_PROPERTIES( "_TX_CONTEXT_EXTENSION.$", 0x48, true, 0xbbf052ba66a9982e );                          
        SDK_FIXED_SIZE( tx_context_extension_t, 0x48 );                          
    };                                                                
};
#include "magic/tx_context_extension_t.end.hpp"
SDK_VERIFY( struct fltmgr::tx_context_extension_t, 0x48 );
