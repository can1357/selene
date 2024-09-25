#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/uow_set_value_key_data_t.start.hpp"
namespace cm
{
    // [struct _CM_UOW_SET_VALUE_KEY_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct uow_set_value_key_data_t  
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t prepared_cell;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreparedCell
        _m01 uint32_t old_value_cell;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OldValueCell
        _m02 uint16_t name_length;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NameLength
        _m03 uint32_t data_size;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DataSize
                                     
        SDK_MAGIC_PROPERTIES( "_CM_UOW_SET_VALUE_KEY_DATA.$", 0x10, true, 0x36872330844804e3 );               
        SDK_FIXED_SIZE( uow_set_value_key_data_t, 0x10 );               
    };                               
};
#include "magic/uow_set_value_key_data_t.end.hpp"
SDK_VERIFY( struct cm::uow_set_value_key_data_t, 0x10 );
