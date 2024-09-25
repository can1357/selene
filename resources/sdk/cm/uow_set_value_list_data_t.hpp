#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/child_list_t.hpp"

#include "magic/uow_set_value_list_data_t.start.hpp"
namespace cm
{
    // [struct _CM_UOW_SET_VALUE_LIST_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct uow_set_value_list_data_t            
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                      
        _m00 uint32_t                ref_count;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RefCount
        _m01 struct nt::child_list_t value_list;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ValueList
                                                
        SDK_MAGIC_PROPERTIES( "_CM_UOW_SET_VALUE_LIST_DATA.$", 0xc, true, 0x8a9eeb3e34edf780 );           
        SDK_FIXED_SIZE( uow_set_value_list_data_t, 0xc );           
    };                                          
};
#include "magic/uow_set_value_list_data_t.end.hpp"
SDK_VERIFY( struct cm::uow_set_value_list_data_t, 0xc );
