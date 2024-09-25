#pragma once
#include <sdkgen/support_library.hpp>
#include "copyfile2_message_action_t.hpp"

#include "magic/copyfile2_extended_parameters_t.start.hpp"
namespace win
{
    struct copyfile2_message_t;

    // [struct COPYFILE2_EXTENDED_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct copyfile2_extended_parameters_t                      
    {                                                           
        using pcopyfile2_progress_routine_t = sdk::function<enum win::copyfile2_message_action_t(const struct win::copyfile2_message_t*, void*)>*;                    
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                      
        _m00 uint32_t                       dw_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 uint32_t                       dw_copy_flags;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwCopyFlags
        _m02 int32_t*                       pf_cancel;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfCancel
        _m03 pcopyfile2_progress_routine_t  p_progress_routine;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pProgressRoutine
        _m04 void*                          pv_callback_context;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pvCallbackContext
                                                                
        SDK_MAGIC_PROPERTIES( "COPYFILE2_EXTENDED_PARAMETERS.$", 0x20, true, 0x46ac2c0c297197b7 );                    
        SDK_FIXED_SIZE( copyfile2_extended_parameters_t, 0x20 );                    
    };                                                          
};
#include "magic/copyfile2_extended_parameters_t.end.hpp"
SDK_VERIFY( struct win::copyfile2_extended_parameters_t, 0x20 );
