#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_static_read_lock_t.start.hpp"
namespace win
{
    class crw_lock_t;

    // [class CStaticReadLock]
    // => Windows 11
    //
    class c_static_read_lock_t              
    {                                       
        // Windows 11                       
        //                                  
        _m00 class win::crw_lock_t& rw_lock;  //{ +0x0000    } | ._rwLock
                                            
        SDK_MAGIC_PROPERTIES( "CStaticReadLock.$", 0x0, false, 0xeabc42dd868f72d0 );        
        SDK_FIXED_SIZE( c_static_read_lock_t, 0x8 );        
    };                                      
};
#include "magic/c_static_read_lock_t.end.hpp"
SDK_VERIFY( class win::c_static_read_lock_t, 0x8 );
