#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/minidump_vm_post_read_callback_t.start.hpp"
namespace win
{
    // [struct _MINIDUMP_VM_POST_READ_CALLBACK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_vm_post_read_callback_t
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                          
        _m00 uint64_t     offset;            //{ +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 void*        buffer;            //{ +0x0008    +0x0008    +0x0008    } | .Buffer
        _m02 uint32_t     size;              //{ +0x0010    +0x0010    +0x0010    } | .Size
        _m03 uint32_t     completed;         //{ +0x0014    +0x0014    +0x0014    } | .Completed
        _m04 sdk::hresult status;            //{ +0x0018    +0x0018    +0x0018    } | .Status
                                           
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_VM_POST_READ_CALLBACK.$", 0x1c, true, 0x63efb7b628f5604f );          
        SDK_FIXED_SIZE( minidump_vm_post_read_callback_t, 0x1c );          
    };                                     
};
#include "magic/minidump_vm_post_read_callback_t.end.hpp"
SDK_VERIFY( struct win::minidump_vm_post_read_callback_t, 0x1c );
