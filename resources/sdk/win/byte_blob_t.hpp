#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/byte_blob_t.start.hpp"
namespace win
{
    // [struct _BYTE_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct byte_blob_t                      
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m00 uint32_t               cl_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clSize
        _m01 sdk::array<uint8_t, 1> ab_data;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .abData
                                            
        SDK_MAGIC_PROPERTIES( "_BYTE_BLOB.$", 0x8, true, 0x4c3913c07041e150 );        
        SDK_FIXED_SIZE( byte_blob_t, 0x8 );        
    };                                      
};
#include "magic/byte_blob_t.end.hpp"
SDK_VERIFY( struct win::byte_blob_t, 0x8 );
