#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heapinfo_t.start.hpp"
namespace win
{
    // [struct _heapinfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heapinfo_t         
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 int32_t* pentry;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pentry
        _m01 uint64_t size;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._size
        _m02 int32_t  useflag;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._useflag
                              
        SDK_MAGIC_PROPERTIES( "_heapinfo.$", 0x18, true, 0xc41ce9207dd42976 );        
        SDK_FIXED_SIZE( heapinfo_t, 0x18 );        
    };                        
};
#include "magic/heapinfo_t.end.hpp"
SDK_VERIFY( struct win::heapinfo_t, 0x18 );
