#pragma once
#include <sdkgen/support_library.hpp>
#include "post_create_handle_information_t.hpp"
#include "post_duplicate_handle_information_t.hpp"

#include "magic/post_operation_parameters_t.start.hpp"
namespace ob
{
    // [union _OB_POST_OPERATION_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union post_operation_parameters_t                                                    
    {                                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                               
        _m00 struct ob::post_create_handle_information_t    create_handle_information;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CreateHandleInformation
        _m01 struct ob::post_duplicate_handle_information_t duplicate_handle_information;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DuplicateHandleInformation
                                                                                         
        SDK_NONVOL_PROPERTIES( "_OB_POST_OPERATION_PARAMETERS.$", 0x4, true, 0xbd19fc32caa32341 );                             
        SDK_FIXED_SIZE( post_operation_parameters_t, 0x4 );                              
    };                                                                                   
};
#include "magic/post_operation_parameters_t.end.hpp"
SDK_VERIFY( union ob::post_operation_parameters_t, 0x4 );
