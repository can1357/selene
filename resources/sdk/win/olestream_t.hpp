#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/olestream_t.start.hpp"
namespace win
{
    struct olestreamvtbl_t;

    // [struct _OLESTREAM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct olestream_t                           
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                       
        _m00 struct win::olestreamvtbl_t* lpstbl;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpstbl
                                                 
        SDK_MAGIC_PROPERTIES( "_OLESTREAM.$", 0x8, true, 0x81a46995fc8de2d4 );       
        SDK_FIXED_SIZE( olestream_t, 0x8 );       
    };                                           
};
#include "magic/olestream_t.end.hpp"
SDK_VERIFY( struct win::olestream_t, 0x8 );
