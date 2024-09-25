#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_spinlock_t.hpp"

#include "magic/stor_lock_handle_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_LOCK_HANDLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_lock_handle_t                         
    {                                                 
        struct u0_context_t                           
        {                                             
            struct u4_lock_queue_t                    
            {                                         
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
                //                                    
                _m01 void* next;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
                _m02 void* lock;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Lock
                                                      
                SDK_MAGIC_PROPERTIES( "_STOR_LOCK_HANDLE.Context.LockQueue.$", 0x10, true, 0x7e8b83b8de8130ea );                        
                SDK_FIXED_SIZE( u4_lock_queue_t, 0x10 );                        
            };                                        
                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
            //                                        
            _m03 u4_lock_queue_t  lock_queue;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LockQueue
            _m04 uint8_t          old_irql;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OldIrql
                                                      
            SDK_MAGIC_PROPERTIES( "_STOR_LOCK_HANDLE.Context.$", 0x18, true, 0x9a4692b803f2d63 );                   
            SDK_FIXED_SIZE( u0_context_t, 0x18 );                   
        };                                            
                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                            
        _m00 enum stor::port::stor_spinlock_t lock;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m05 u0_context_t                     context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
                                                      
        SDK_MAGIC_PROPERTIES( "_STOR_LOCK_HANDLE.$", 0x20, true, 0xed58e1d23752c34d );        
        SDK_FIXED_SIZE( stor_lock_handle_t, 0x20 );        
    };                                                
};
#include "magic/stor_lock_handle_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_lock_handle_t::u0_context_t::u4_lock_queue_t, 0x10 );
SDK_VERIFY( struct stor::port::stor_lock_handle_t::u0_context_t, 0x18 );
SDK_VERIFY( struct stor::port::stor_lock_handle_t, 0x20 );
