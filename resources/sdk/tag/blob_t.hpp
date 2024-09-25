#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/blob_t.start.hpp"
namespace tag
{
    // [struct tagBLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct blob_t                 
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t cb_size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint8_t* p_blob_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pBlobData
                                  
        SDK_MAGIC_PROPERTIES( "tagBLOB.$", 0x10, true, 0xad579d74b9bd6a52 );            
        SDK_FIXED_SIZE( blob_t, 0x10 );            
    };                            
};
#include "magic/blob_t.end.hpp"
SDK_VERIFY( struct tag::blob_t, 0x10 );
