#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_bigpool_entry_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_BIGPOOL_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_bigpool_entry_t                   
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                          
        _m00 void*                  virtual_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualAddress
        _m01 uint1_t                non_paged;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .NonPaged
        _m02 uint64_t               size_in_bytes;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SizeInBytes
        _m03 sdk::array<uint8_t, 4> tag;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Tag
        _m04 uint32_t               tag_ulong;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TagUlong
                                                    
        SDK_MAGIC_PROPERTIES( "_SYSTEM_BIGPOOL_ENTRY.$", 0x18, true, 0x4f9e1d81a9b5302e );                
        SDK_FIXED_SIZE( system_bigpool_entry_t, 0x18 );                
    };                                              
};
#include "magic/system_bigpool_entry_t.end.hpp"
SDK_VERIFY( struct win::system_bigpool_entry_t, 0x18 );
