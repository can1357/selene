#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flt_related_contexts_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_RELATED_CONTEXTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_related_contexts_t        
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                               
        _m00 void* volume_context;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VolumeContext
        _m01 void* instance_context;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InstanceContext
        _m02 void* file_context;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FileContext
        _m03 void* stream_context;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StreamContext
        _m04 void* stream_handle_context;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .StreamHandleContext
        _m05 void* transaction_context;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TransactionContext
                                         
        SDK_MAGIC_PROPERTIES( "_FLT_RELATED_CONTEXTS.$", 0x30, true, 0x2abef721cccce0d5 );                      
        SDK_FIXED_SIZE( flt_related_contexts_t, 0x30 );                      
    };                                   
};
#include "magic/flt_related_contexts_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_related_contexts_t, 0x30 );
