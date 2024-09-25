#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lock_entry_t.start.hpp"
namespace win
{
    class crw_lock_t;
    class lock_entry_t;

    // [class LockEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class lock_entry_t                               
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m00 class win::lock_entry_t* p_next;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pNext
        _m01 class win::lock_entry_t* p_prev;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pPrev
        _m02 class win::crw_lock_t*   p_rw_lock;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pRWLock
        _m03 uint16_t                 w_reader_level;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._wReaderLevel
                                                     
        SDK_MAGIC_PROPERTIES( "LockEntry.$", 0x20, true, 0x865aeb7ead8832c0 );               
        SDK_FIXED_SIZE( lock_entry_t, 0x20 );               
    };                                               
};
#include "magic/lock_entry_t.end.hpp"
SDK_VERIFY( class win::lock_entry_t, 0x20 );
