#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum MIDL_ES_CODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_es_code_t : int32_t
    {                                  
        encode =       0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        decode =       0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        encode_ndr64 = 0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
