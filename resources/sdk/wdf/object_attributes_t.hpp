#pragma once
#include <sdkgen/support_library.hpp>
#include "execution_level_t.hpp"
#include "synchronization_scope_t.hpp"

#include "magic/object_attributes_t.start.hpp"
namespace wdf
{
    struct object_context_type_info_t;

    // [struct _WDF_OBJECT_ATTRIBUTES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct object_attributes_t                                                   
    {                                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                       
        _m00 uint32_t                                      size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 sdk::function<void(void*)>*                   evt_cleanup_callback;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .EvtCleanupCallback
        _m02 sdk::function<void(void*)>*                   evt_destroy_callback;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .EvtDestroyCallback
        _m03 enum wdf::execution_level_t                   execution_level;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ExecutionLevel
        _m04 enum wdf::synchronization_scope_t             synchronization_scope;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .SynchronizationScope
        _m05 void*                                         parent_object;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ParentObject
        _m06 uint64_t                                      context_size_override;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ContextSizeOverride
        _m07 const struct wdf::object_context_type_info_t* context_type_info;      //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ContextTypeInfo
                                                                                 
        SDK_NONVOL_PROPERTIES( "_WDF_OBJECT_ATTRIBUTES.$", 0x38, true, 0x1cf56f25e83a2e35 );                      
        SDK_FIXED_SIZE( object_attributes_t, 0x38 );                             
    };                                                                           
};
#include "magic/object_attributes_t.end.hpp"
SDK_VERIFY( struct wdf::object_attributes_t, 0x38 );
