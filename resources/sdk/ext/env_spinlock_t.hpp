#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/env_spinlock_t.start.hpp"
namespace ext
{
    // [struct _EXT_ENV_SPINLOCK]
    // => Windows 11
    //
    struct env_spinlock_t                
    {                                    
        // Windows 11                    
        //                               
        _m00 nt::list_entry_t list_entry;  //{ +0x0000    } | .ListEntry
        _m01 uint64_t         lock;        //{ +0x0010    } | .Lock
        _m02 uint8_t          old_irql;    //{ +0x0018    } | .OldIrql
                                         
        SDK_MAGIC_PROPERTIES( "_EXT_ENV_SPINLOCK.$", 0x0, false, 0x63517f9b5256f10 );           
        SDK_FIXED_SIZE( env_spinlock_t, 0x20 );           
    };                                   
};
#include "magic/env_spinlock_t.end.hpp"
SDK_VERIFY( struct ext::env_spinlock_t, 0x20 );
