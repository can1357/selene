#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum BCRYPT_MULTI_OPERATION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bcrypt_multi_operation_type_t : int32_t
    {                                                 
        bcrypt_operation_type_hash = 0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
