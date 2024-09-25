#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/minidump_vm_pre_read_callback_t.start.hpp"
namespace win
{
    // [struct _MINIDUMP_VM_PRE_READ_CALLBACK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_vm_pre_read_callback_t
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint64_t offset;               //{ +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 void*    buffer;               //{ +0x0008    +0x0008    +0x0008    } | .Buffer
        _m02 uint32_t size;                 //{ +0x0010    +0x0010    +0x0010    } | .Size
                                          
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_VM_PRE_READ_CALLBACK.$", 0x14, true, 0xba2edce98d3c5195 );       
        SDK_FIXED_SIZE( minidump_vm_pre_read_callback_t, 0x14 );       
    };                                    
};
#include "magic/minidump_vm_pre_read_callback_t.end.hpp"
SDK_VERIFY( struct win::minidump_vm_pre_read_callback_t, 0x14 );
