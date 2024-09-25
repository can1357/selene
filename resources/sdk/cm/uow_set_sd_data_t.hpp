#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/uow_set_sd_data_t.start.hpp"
namespace cm
{
    // [struct _CM_UOW_SET_SD_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct uow_set_sd_data_t        
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t security_cell;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityCell
                                    
        SDK_MAGIC_PROPERTIES( "_CM_UOW_SET_SD_DATA.$", 0x4, true, 0x23ed5401e696c1ab );              
        SDK_FIXED_SIZE( uow_set_sd_data_t, 0x4 );              
    };                              
};
#include "magic/uow_set_sd_data_t.end.hpp"
SDK_VERIFY( struct cm::uow_set_sd_data_t, 0x4 );
