#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/auto_blob_t.start.hpp"
namespace win
{
    // [class AutoBlob]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class auto_blob_t             
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t cb_size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint8_t* p_blob_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pBlobData
                                  
        SDK_MAGIC_PROPERTIES( "AutoBlob.$", 0x10, true, 0xd4b6f8faba031911 );            
        SDK_FIXED_SIZE( auto_blob_t, 0x10 );            
    };                            
};
#include "magic/auto_blob_t.end.hpp"
SDK_VERIFY( class win::auto_blob_t, 0x10 );
