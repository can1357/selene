#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_handle_count_entry_t.start.hpp"
namespace nt
{
    struct eprocess_t;

    // [struct _OBJECT_HANDLE_COUNT_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_handle_count_entry_t           
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                       
        _m00 struct nt::eprocess_t* process;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Process
        _m01 uint24_t               handle_count;  //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .HandleCount
        _m02 uint8_t                lock_count;    //{ +0x0008@24 +0x0008@24 +0x0008@24 +0x0008@24 } | .LockCount
                                                 
        SDK_MAGIC_PROPERTIES( "_OBJECT_HANDLE_COUNT_ENTRY.$", 0x10, true, 0xf9f1a30e7c69fa61 );             
        SDK_FIXED_SIZE( object_handle_count_entry_t, 0x10 );             
    };                                           
};
#include "magic/object_handle_count_entry_t.end.hpp"
SDK_VERIFY( struct nt::object_handle_count_entry_t, 0x10 );
