#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lock_cookie_t.start.hpp"
namespace win
{
    // [struct LockCookie]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lock_cookie_t                
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t dw_flags;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFlags
        _m01 uint32_t dw_writer_seq_num;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwWriterSeqNum
        _m02 uint16_t w_reader_level;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wReaderLevel
        _m03 uint16_t w_writer_level;     //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .wWriterLevel
        _m04 uint32_t dw_thread_id;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwThreadID
                                        
        SDK_MAGIC_PROPERTIES( "LockCookie.$", 0x10, true, 0x17c6d42830304801 );                  
        SDK_FIXED_SIZE( lock_cookie_t, 0x10 );                  
    };                                  
};
#include "magic/lock_cookie_t.end.hpp"
SDK_VERIFY( struct win::lock_cookie_t, 0x10 );
