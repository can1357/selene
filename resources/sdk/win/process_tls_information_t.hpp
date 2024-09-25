#pragma once
#include <sdkgen/support_library.hpp>
#include "thread_tls_information_t.hpp"

#include "magic/process_tls_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_TLS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_tls_information_t          
    {                                         
        using thread_data_t = sdk::array<struct win::thread_tls_information_t, 1>;                  
                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                    
        _m00 uint32_t       flags;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t       operation_type;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OperationType
        _m02 uint32_t       thread_data_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadDataCount
        _m03 uint32_t       tls_index;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TlsIndex
        _m04 uint32_t       previous_count;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PreviousCount
        _m05 thread_data_t  thread_data;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ThreadData
                                              
        SDK_MAGIC_PROPERTIES( "_PROCESS_TLS_INFORMATION.$", 0x28, true, 0xa3399318cb9b237d );                  
        SDK_FIXED_SIZE( process_tls_information_t, 0x28 );                  
    };                                        
};
#include "magic/process_tls_information_t.end.hpp"
SDK_VERIFY( struct win::process_tls_information_t, 0x28 );
