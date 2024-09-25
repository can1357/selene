#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ktb_flush_va_t.start.hpp"
namespace nt
{
    // [struct _KTB_FLUSH_VA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ktb_flush_va_t               
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint10_t number_of_entries;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .NumberOfEntries
        _m01 uint2_t  page_size;          //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .PageSize
        _m02 void*    va;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Va
        _m03 uint64_t va_long;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VaLong
                                        
        SDK_MAGIC_PROPERTIES( "_KTB_FLUSH_VA.$", 0x8, true, 0xf87bc7f2576def43 );                  
        SDK_FIXED_SIZE( ktb_flush_va_t, 0x8 );                  
    };                                  
};
#include "magic/ktb_flush_va_t.end.hpp"
SDK_VERIFY( struct nt::ktb_flush_va_t, 0x8 );
