#pragma once
#include <sdkgen/support_library.hpp>
#include "copyfile2_message_action_t.hpp"

#include "magic/copyfile2_extended_parameters_v2_t.start.hpp"
namespace win
{
    struct copyfile2_message_t;

    // [struct COPYFILE2_EXTENDED_PARAMETERS_V2]
    // => Windows 11
    //
    struct copyfile2_extended_parameters_v2_t                   
    {                                                           
        using pcopyfile2_progress_routine_t = sdk::function<enum win::copyfile2_message_action_t(const struct win::copyfile2_message_t*, void*)>*;                    
                                                                
        // Windows 11                                           
        //                                                      
        _m00 uint32_t                       dw_size;              //{ +0x0000    } | .dwSize
        _m01 uint32_t                       dw_copy_flags;        //{ +0x0004    } | .dwCopyFlags
        _m02 int32_t*                       pf_cancel;            //{ +0x0008    } | .pfCancel
        _m03 pcopyfile2_progress_routine_t  p_progress_routine;   //{ +0x0010    } | .pProgressRoutine
        _m04 void*                          pv_callback_context;  //{ +0x0018    } | .pvCallbackContext
        _m05 uint32_t                       dw_copy_flags_v2;     //{ +0x0020    } | .dwCopyFlagsV2
        _m06 uint32_t                       io_desired_size;      //{ +0x0024    } | .ioDesiredSize
        _m07 uint32_t                       io_desired_rate;      //{ +0x0028    } | .ioDesiredRate
                                                                
        SDK_MAGIC_PROPERTIES( "COPYFILE2_EXTENDED_PARAMETERS_V2.$", 0x0, false, 0x61f34b4427892352 );                    
        SDK_FIXED_SIZE( copyfile2_extended_parameters_v2_t, 0x70 );                    
    };                                                          
};
#include "magic/copyfile2_extended_parameters_v2_t.end.hpp"
SDK_VERIFY( struct win::copyfile2_extended_parameters_v2_t, 0x70 );
