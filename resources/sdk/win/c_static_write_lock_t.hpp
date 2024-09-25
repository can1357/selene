#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_static_write_lock_t.start.hpp"
namespace win
{
    class crw_lock_t;

    // [class CStaticWriteLock]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_static_write_lock_t             
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m00 class win::crw_lock_t& rw_lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._rwLock
                                            
        SDK_MAGIC_PROPERTIES( "CStaticWriteLock.$", 0x8, true, 0xbcc33421e34daf04 );        
        SDK_FIXED_SIZE( c_static_write_lock_t, 0x8 );        
    };                                      
};
#include "magic/c_static_write_lock_t.end.hpp"
SDK_VERIFY( class win::c_static_write_lock_t, 0x8 );
