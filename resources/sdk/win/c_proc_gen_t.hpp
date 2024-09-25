#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_proc_gen_t.start.hpp"
namespace win
{
    class c_type_gen_t;

    // [class CProcGen]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_proc_gen_t                                     
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                 
        _m00 const uint8_t*           p_proc_format_string;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pProcFormatString
        _m01 uint16_t                 offset;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._offset
        _m02 uint16_t                 stack_size;            //{ +0x000a    +0x000a    +0x000a    +0x000a    } | ._stackSize
        _m03 uint32_t                 client_buffer_size;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._clientBufferSize
        _m04 uint32_t                 server_buffer_size;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._serverBufferSize
        _m05 int32_t                  f_client_must_size;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | ._fClientMustSize
        _m06 int32_t                  f_server_must_size;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._fServerMustSize
        _m07 int32_t                  f_client_corr_check;   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._fClientCorrCheck
        _m08 int32_t                  f_server_corr_check;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._fServerCorrCheck
        _m09 uint16_t                 us_float_arg_mask;     //{ +0x0024    +0x0024    +0x0024    +0x0024    } | ._usFloatArgMask
        _m10 uint16_t                 us_float_slots;        //{ +0x0026    +0x0026    +0x0026    +0x0026    } | ._usFloatSlots
        _m11 class win::c_type_gen_t* p_type_gen;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pTypeGen
                                                           
        SDK_MAGIC_PROPERTIES( "CProcGen.$", 0x30, true, 0x981043df47e04c60 );                     
        SDK_FIXED_SIZE( c_proc_gen_t, 0x30 );                     
    };                                                     
};
#include "magic/c_proc_gen_t.end.hpp"
SDK_VERIFY( class win::c_proc_gen_t, 0x30 );
