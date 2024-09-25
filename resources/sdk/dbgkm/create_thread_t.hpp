#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/create_thread_t.start.hpp"
namespace dbgkm
{
    // [struct _DBGKM_CREATE_THREAD]
    // => WDK 10 (NV)
    //
    struct create_thread_t           
    {                                
        // WDK 10                    
        //                           
        _m00 uint32_t sub_system_key;  //{ +0x0000    } | .SubSystemKey
        _m01 void*    start_address;   //{ +0x0008    } | .StartAddress
                                     
        SDK_NONVOL_PROPERTIES( "_DBGKM_CREATE_THREAD.$", 0x0, false, 0x2e75e0e7e7b89658 );               
        SDK_FIXED_SIZE( create_thread_t, 0x10 );               
    };                               
};
#include "magic/create_thread_t.end.hpp"
SDK_VERIFY( struct dbgkm::create_thread_t, 0x10 );
