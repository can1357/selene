#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xml_error_t.start.hpp"
namespace win
{
    // [struct _xml_error]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct xml_error_t             
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t n_line;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._nLine
        _m01 wchar_t* pch_buf;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pchBuf
        _m02 uint32_t cch_buf;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._cchBuf
        _m03 uint32_t ich;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | ._ich
        _m04 wchar_t* psz_found;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._pszFound
        _m05 wchar_t* psz_expected;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._pszExpected
        _m06 uint32_t reserved1;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._reserved1
        _m07 uint32_t reserved2;     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | ._reserved2
                                   
        SDK_MAGIC_PROPERTIES( "_xml_error.$", 0x30, true, 0x1671fb46193e51ea );             
        SDK_FIXED_SIZE( xml_error_t, 0x30 );             
    };                             
};
#include "magic/xml_error_t.end.hpp"
SDK_VERIFY( struct win::xml_error_t, 0x30 );
