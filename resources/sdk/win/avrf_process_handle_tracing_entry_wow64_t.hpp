#pragma once
#include <sdkgen/support_library.hpp>
#include "avrf_client_id_wow64_t.hpp"

#include "magic/avrf_process_handle_tracing_entry_wow64_t.start.hpp"
namespace win
{
    // [struct _AVRF_PROCESS_HANDLE_TRACING_ENTRY_WOW64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct avrf_process_handle_tracing_entry_wow64_t      
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                
        _m00 uint64_t                           handle;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Handle
        _m01 struct win::avrf_client_id_wow64_t client_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ClientId
        _m02 uint32_t                           type;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Type
        _m03 sdk::array<uint64_t, 16>           stacks;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Stacks
                                                          
        SDK_MAGIC_PROPERTIES( "_AVRF_PROCESS_HANDLE_TRACING_ENTRY_WOW64.$", 0xa0, true, 0xd8c69e1c3dc4206b );          
        SDK_FIXED_SIZE( avrf_process_handle_tracing_entry_wow64_t, 0xa0 );          
    };                                                    
};
#include "magic/avrf_process_handle_tracing_entry_wow64_t.end.hpp"
SDK_VERIFY( struct win::avrf_process_handle_tracing_entry_wow64_t, 0xa0 );
