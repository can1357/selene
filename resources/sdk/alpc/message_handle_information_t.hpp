#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/message_handle_information_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_MESSAGE_HANDLE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct message_handle_information_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t index;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Index
        _m01 uint32_t flags;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t handle;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Handle
        _m03 uint32_t object_type;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ObjectType
        _m04 uint32_t granted_access;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GrantedAccess
                                       
        SDK_MAGIC_PROPERTIES( "_ALPC_MESSAGE_HANDLE_INFORMATION.$", 0x14, true, 0xa202bc102e5c0034 );               
        SDK_FIXED_SIZE( message_handle_information_t, 0x14 );               
    };                                 
};
#include "magic/message_handle_information_t.end.hpp"
SDK_VERIFY( struct alpc::message_handle_information_t, 0x14 );
