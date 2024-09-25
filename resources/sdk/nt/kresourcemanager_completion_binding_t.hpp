#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kresourcemanager_completion_binding_t.start.hpp"
namespace nt
{
    struct eprocess_t;

    // [struct _KRESOURCEMANAGER_COMPLETION_BINDING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kresourcemanager_completion_binding_t           
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                 
        _m00 nt::list_entry_t       notification_list_head;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NotificationListHead
        _m01 void*                  port;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Port
        _m02 uint64_t               key;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Key
        _m03 struct nt::eprocess_t* binding_process;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BindingProcess
                                                           
        SDK_MAGIC_PROPERTIES( "_KRESOURCEMANAGER_COMPLETION_BINDING.$", 0x28, true, 0xeb746d4e26830709 );                       
        SDK_FIXED_SIZE( kresourcemanager_completion_binding_t, 0x28 );                       
    };                                                     
};
#include "magic/kresourcemanager_completion_binding_t.end.hpp"
SDK_VERIFY( struct nt::kresourcemanager_completion_binding_t, 0x28 );
