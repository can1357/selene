#pragma once
#include <sdkgen/support_library.hpp>
#include "trustee_form_t.hpp"
#include "trustee_type_t.hpp"
#include "multiple_trustee_operation_t.hpp"

#include "magic/trustee_w_t.start.hpp"
namespace win
{
    struct trustee_w_t;

    // [struct _TRUSTEE_W]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trustee_w_t                                                         
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                     
        _m00 struct win::trustee_w_t*               p_multiple_trustee;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pMultipleTrustee
        _m01 enum win::multiple_trustee_operation_t multiple_trustee_operation;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MultipleTrusteeOperation
        _m02 enum win::trustee_form_t               trustee_form;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TrusteeForm
        _m03 enum win::trustee_type_t               trustee_type;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TrusteeType
        _m04 wchar_t*                               ptstr_name;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ptstrName
                                                                               
        SDK_MAGIC_PROPERTIES( "_TRUSTEE_W.$", 0x20, true, 0xe8edd05e70764669 );                           
        SDK_FIXED_SIZE( trustee_w_t, 0x20 );                                   
    };                                                                         
};
#include "magic/trustee_w_t.end.hpp"
SDK_VERIFY( struct win::trustee_w_t, 0x20 );
