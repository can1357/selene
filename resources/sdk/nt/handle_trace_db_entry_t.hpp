#pragma once
#include <sdkgen/support_library.hpp>
#include "client_id_t.hpp"

#include "magic/handle_trace_db_entry_t.start.hpp"
namespace nt
{
    // [struct _HANDLE_TRACE_DB_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct handle_trace_db_entry_t              
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 struct nt::client_id_t client_id;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ClientId
        _m01 void*                  handle;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Handle
        _m02 uint32_t               type;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Type
        _m03 sdk::array<void*, 16>  stack_trace;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .StackTrace
                                                
        SDK_MAGIC_PROPERTIES( "_HANDLE_TRACE_DB_ENTRY.$", 0xa0, true, 0xaaf94bc3cd1d864d );            
        SDK_FIXED_SIZE( handle_trace_db_entry_t, 0xa0 );            
    };                                          
};
#include "magic/handle_trace_db_entry_t.end.hpp"
SDK_VERIFY( struct nt::handle_trace_db_entry_t, 0xa0 );
