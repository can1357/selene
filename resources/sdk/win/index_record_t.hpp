#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/index_record_t.start.hpp"
namespace win
{
    // [struct _INDEX_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct index_record_t     
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint64_t ull_key;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ullKey
        _m01 uint32_t ti_ref;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .tiRef
                              
        SDK_MAGIC_PROPERTIES( "_INDEX_RECORD.$", 0xc, true, 0x7f187caffa56feb6 );        
        SDK_FIXED_SIZE( index_record_t, 0xc );        
    };                        
};
#include "magic/index_record_t.end.hpp"
SDK_VERIFY( struct win::index_record_t, 0xc );
