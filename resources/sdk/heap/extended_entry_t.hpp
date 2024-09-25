#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/extended_entry_t.start.hpp"
namespace heap
{
    // [struct _HEAP_EXTENDED_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct extended_entry_t                    
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint16_t function_index;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FunctionIndex
        _m01 uint16_t context_value;             //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .ContextValue
        _m02 uint32_t interceptor_value;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InterceptorValue
        _m03 uint16_t unused_bytes_length;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .UnusedBytesLength
        _m04 uint8_t  entry_offset;              //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .EntryOffset
        _m05 uint8_t  extended_block_signature;  //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .ExtendedBlockSignature
                                               
        SDK_MAGIC_PROPERTIES( "_HEAP_EXTENDED_ENTRY.$", 0x10, true, 0x6954fecaf29a7661 );                         
        SDK_FIXED_SIZE( extended_entry_t, 0x10 );                         
    };                                         
};
#include "magic/extended_entry_t.end.hpp"
SDK_VERIFY( struct heap::extended_entry_t, 0x10 );
