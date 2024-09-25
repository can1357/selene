#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bstrblob_t.start.hpp"
namespace tag
{
    // [struct tagBSTRBLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bstrblob_t         
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t cb_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint8_t* p_data;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pData
                              
        SDK_MAGIC_PROPERTIES( "tagBSTRBLOB.$", 0x10, true, 0xed521435d7e9e363 );        
        SDK_FIXED_SIZE( bstrblob_t, 0x10 );        
    };                        
};
#include "magic/bstrblob_t.end.hpp"
SDK_VERIFY( struct tag::bstrblob_t, 0x10 );
