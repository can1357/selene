#pragma once
#include <sdkgen/support_library.hpp>

namespace image
{
    // [enum IMAGE_AUX_SYMBOL_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class aux_symbol_type_t : int32_t       
    {                                            
        image_aux_symbol_type_token_def = 0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
