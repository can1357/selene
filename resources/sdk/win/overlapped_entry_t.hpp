#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/overlapped_entry_t.start.hpp"
namespace win
{
    struct overlapped_t;

    // [struct _OVERLAPPED_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct overlapped_entry_t                                         
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                            
        _m00 uint64_t                  lp_completion_key;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpCompletionKey
        _m01 struct win::overlapped_t* lp_overlapped;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpOverlapped
        _m02 uint64_t                  internal;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Internal
        _m03 uint32_t                  dw_number_of_bytes_transferred;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwNumberOfBytesTransferred
                                                                      
        SDK_MAGIC_PROPERTIES( "_OVERLAPPED_ENTRY.$", 0x20, true, 0x742beed83555c735 );                               
        SDK_FIXED_SIZE( overlapped_entry_t, 0x20 );                               
    };                                                                
};
#include "magic/overlapped_entry_t.end.hpp"
SDK_VERIFY( struct win::overlapped_entry_t, 0x20 );
