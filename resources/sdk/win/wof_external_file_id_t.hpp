#pragma once
#include <sdkgen/support_library.hpp>
#include "file_id_128_t.hpp"

#include "magic/wof_external_file_id_t.start.hpp"
namespace win
{
    // [struct _WOF_EXTERNAL_FILE_ID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wof_external_file_id_t              
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                     
        _m00 struct win::file_id_128_t file_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileId
                                               
        SDK_NONVOL_PROPERTIES( "_WOF_EXTERNAL_FILE_ID.$", 0x10, true, 0xca9d72b66319be40 );        
        SDK_FIXED_SIZE( wof_external_file_id_t, 0x10 );        
    };                                         
};
#include "magic/wof_external_file_id_t.end.hpp"
SDK_VERIFY( struct win::wof_external_file_id_t, 0x10 );
