#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/eresource_t.hpp"
#include "../rtl/critical_section_t.hpp"

#include "magic/lock_t.start.hpp"
namespace heap
{
    // [struct _HEAP_LOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lock_t                                                     
    {                                                                 
        union u0_lock_t                                               
        {                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
            //                                                        
            _m00 struct rtl::critical_section_t critical_section;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CriticalSection
            _m01 struct nt::eresource_t         resource;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Resource
                                                                      
            SDK_MAGIC_PROPERTIES( "_HEAP_LOCK.Lock.$", 0x68, true, 0x2886a26d888398af );                      
            SDK_FIXED_SIZE( u0_lock_t, 0x68 );                        
        };                                                            
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                                            
        _m02 u0_lock_t                                           lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
                                                                      
        SDK_MAGIC_PROPERTIES( "_HEAP_LOCK.$", 0x68, true, 0x504ea5be87ee37a6 );     
        SDK_FIXED_SIZE( lock_t, 0x68 );                               
    };                                                                
};
#include "magic/lock_t.end.hpp"
SDK_VERIFY( union heap::lock_t::u0_lock_t, 0x68 );
SDK_VERIFY( struct heap::lock_t, 0x68 );
