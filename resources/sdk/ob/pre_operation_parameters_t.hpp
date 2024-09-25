#pragma once
#include <sdkgen/support_library.hpp>
#include "pre_create_handle_information_t.hpp"
#include "pre_duplicate_handle_information_t.hpp"

#include "magic/pre_operation_parameters_t.start.hpp"
namespace ob
{
    // [union _OB_PRE_OPERATION_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union pre_operation_parameters_t                                                    
    {                                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                              
        _m00 struct ob::pre_create_handle_information_t    create_handle_information;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CreateHandleInformation
        _m01 struct ob::pre_duplicate_handle_information_t duplicate_handle_information;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DuplicateHandleInformation
                                                                                        
        SDK_NONVOL_PROPERTIES( "_OB_PRE_OPERATION_PARAMETERS.$", 0x18, true, 0xf984921ab0744a46 );                             
        SDK_FIXED_SIZE( pre_operation_parameters_t, 0x18 );                             
    };                                                                                  
};
#include "magic/pre_operation_parameters_t.end.hpp"
SDK_VERIFY( union ob::pre_operation_parameters_t, 0x18 );
