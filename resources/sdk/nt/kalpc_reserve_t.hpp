#pragma once
#include <sdkgen/support_library.hpp>

namespace alpc { struct handle_table_t; }
namespace alpc { struct port_t;         }

#include "magic/kalpc_reserve_t.start.hpp"
namespace nt
{
    struct kalpc_message_t;

    // [struct _KALPC_RESERVE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kalpc_reserve_t                             
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m00 struct alpc::port_t*         owner_port;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OwnerPort
        _m01 struct alpc::handle_table_t* handle_table;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HandleTable
        _m02 void*                        handle;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Handle
        _m03 struct nt::kalpc_message_t*  message;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Message
        _m04 int32_t                      active;        //{ +0x0020    +0x0028    +0x0028    +0x0028    } | .Active
                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m05 uint64_t                     size;          //{ +0x0020    +0x0020    +0x0020    } | .Size
                                                       
        SDK_MAGIC_PROPERTIES( "_KALPC_RESERVE.$", 0x30, true, 0xc3b693daa5126f78 );             
        SDK_DYNAMIC_SIZE( kalpc_reserve_t );             
    };                                                 
};
#include "magic/kalpc_reserve_t.end.hpp"
