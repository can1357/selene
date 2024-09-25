#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_prefetch_ex_t.start.hpp"
namespace win
{
    // [struct _FILE_PREFETCH_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_prefetch_ex_t                 
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                    
        _m00 uint32_t                type;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                count;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Count
        _m02 void*                   context;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::array<uint64_t, 1> prefetch;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Prefetch
                                              
        SDK_NONVOL_PROPERTIES( "_FILE_PREFETCH_EX.$", 0x18, true, 0xa163f03712ec2ecf );         
        SDK_FIXED_SIZE( file_prefetch_ex_t, 0x18 );         
    };                                        
};
#include "magic/file_prefetch_ex_t.end.hpp"
SDK_VERIFY( struct win::file_prefetch_ex_t, 0x18 );
