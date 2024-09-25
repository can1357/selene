#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/docinfoa_t.start.hpp"
namespace win
{
    // [struct _DOCINFOA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct docinfoa_t                  
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                             
        _m00 int32_t     cb_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 const char* lpsz_doc_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .lpszDocName
        _m02 const char* lpsz_output;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .lpszOutput
        _m03 const char* lpsz_datatype;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .lpszDatatype
        _m04 uint32_t    fw_type;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .fwType
                                       
        SDK_NONVOL_PROPERTIES( "_DOCINFOA.$", 0x28, true, 0xf80355efd2f27601 );              
        SDK_FIXED_SIZE( docinfoa_t, 0x28 );              
    };                                 
};
#include "magic/docinfoa_t.end.hpp"
SDK_VERIFY( struct win::docinfoa_t, 0x28 );
