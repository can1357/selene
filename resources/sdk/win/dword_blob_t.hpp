#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dword_blob_t.start.hpp"
namespace win
{
    // [struct _DWORD_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dword_blob_t                      
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m00 uint32_t                cl_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clSize
        _m01 sdk::array<uint32_t, 1> al_data;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .alData
                                             
        SDK_MAGIC_PROPERTIES( "_DWORD_BLOB.$", 0x8, true, 0x255d2efed3bb78f1 );        
        SDK_FIXED_SIZE( dword_blob_t, 0x8 );        
    };                                       
};
#include "magic/dword_blob_t.end.hpp"
SDK_VERIFY( struct win::dword_blob_t, 0x8 );
