#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum BCRYPT_HASH_OPERATION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bcrypt_hash_operation_type_t : int32_t
    {                                                
        hash_data =   0x1,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        finish_hash = 0x2,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
