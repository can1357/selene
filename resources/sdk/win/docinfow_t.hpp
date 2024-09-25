#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/docinfow_t.start.hpp"
namespace win
{
    // [struct _DOCINFOW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct docinfow_t                     
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                
        _m00 int32_t        cb_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 const wchar_t* lpsz_doc_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .lpszDocName
        _m02 const wchar_t* lpsz_output;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .lpszOutput
        _m03 const wchar_t* lpsz_datatype;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .lpszDatatype
        _m04 uint32_t       fw_type;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .fwType
                                          
        SDK_NONVOL_PROPERTIES( "_DOCINFOW.$", 0x28, true, 0x12dc2a0bec2b9281 );              
        SDK_FIXED_SIZE( docinfow_t, 0x28 );              
    };                                    
};
#include "magic/docinfow_t.end.hpp"
SDK_VERIFY( struct win::docinfow_t, 0x28 );
