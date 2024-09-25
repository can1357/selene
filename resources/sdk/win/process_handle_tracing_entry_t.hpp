#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/client_id_t.hpp"

#include "magic/process_handle_tracing_entry_t.start.hpp"
namespace win
{
    // [struct _PROCESS_HANDLE_TRACING_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_handle_tracing_entry_t     
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 void*                  handle;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Handle
        _m01 struct nt::client_id_t client_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ClientId
        _m02 uint32_t               type;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Type
        _m03 sdk::array<void*, 16>  stacks;     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Stacks
                                              
        SDK_NONVOL_PROPERTIES( "_PROCESS_HANDLE_TRACING_ENTRY.$", 0xa0, true, 0xb8d60c78ae1af4c1 );          
        SDK_FIXED_SIZE( process_handle_tracing_entry_t, 0xa0 );          
    };                                        
};
#include "magic/process_handle_tracing_entry_t.end.hpp"
SDK_VERIFY( struct win::process_handle_tracing_entry_t, 0xa0 );
