#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/minidump_vm_query_callback_t.start.hpp"
namespace win
{
    // [struct _MINIDUMP_VM_QUERY_CALLBACK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_vm_query_callback_t
    {                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint64_t offset;            //{ +0x0000    +0x0000    +0x0000    } | .Offset
                                       
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_VM_QUERY_CALLBACK.$", 0x8, true, 0x2d6bd452379969bb );       
        SDK_FIXED_SIZE( minidump_vm_query_callback_t, 0x8 );       
    };                                 
};
#include "magic/minidump_vm_query_callback_t.end.hpp"
SDK_VERIFY( struct win::minidump_vm_query_callback_t, 0x8 );
