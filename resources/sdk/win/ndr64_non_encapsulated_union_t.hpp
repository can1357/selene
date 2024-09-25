#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_non_encapsulated_union_t.start.hpp"
namespace win
{
    // [struct _NDR64_NON_ENCAPSULATED_UNION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_non_encapsulated_union_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                           
        _m00 uint8_t     format_code;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t     alignment;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Alignment
        _m02 uint8_t     flags;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m03 uint8_t     switch_type;      //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .SwitchType
        _m04 uint32_t    memory_size;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MemorySize
        _m05 const void* _switch;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Switch
                                         
        SDK_MAGIC_PROPERTIES( "_NDR64_NON_ENCAPSULATED_UNION.$", 0x18, true, 0x5c49f000247027d8 );            
        SDK_FIXED_SIZE( ndr64_non_encapsulated_union_t, 0x18 );            
    };                                   
};
#include "magic/ndr64_non_encapsulated_union_t.end.hpp"
SDK_VERIFY( struct win::ndr64_non_encapsulated_union_t, 0x18 );
