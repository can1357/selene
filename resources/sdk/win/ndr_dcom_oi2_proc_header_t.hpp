#pragma once
#include <sdkgen/support_library.hpp>
#include "interpreter_flags_t.hpp"
#include "interpreter_opt_flags_t.hpp"

#include "magic/ndr_dcom_oi2_proc_header_t.start.hpp"
namespace win
{
    // [struct _NDR_DCOM_OI2_PROC_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_dcom_oi2_proc_header_t                               
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                          
        _m00 uint8_t                             handle_type;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HandleType
        _m01 struct win::interpreter_flags_t     old_oi_flags;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .OldOiFlags
        _m02 uint16_t                            rpc_flags_low;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .RpcFlagsLow
        _m03 uint16_t                            rpc_flags_hi;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RpcFlagsHi
        _m04 uint16_t                            proc_num;            //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .ProcNum
        _m05 uint16_t                            stack_size;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StackSize
        _m06 uint16_t                            client_buffer_size;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .ClientBufferSize
        _m07 uint16_t                            server_buffer_size;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ServerBufferSize
        _m08 struct win::interpreter_opt_flags_t oi2_flags;           //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .Oi2Flags
        _m09 uint8_t                             number_params;       //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .NumberParams
                                                                    
        SDK_MAGIC_PROPERTIES( "_NDR_DCOM_OI2_PROC_HEADER.$", 0x10, true, 0xc2f5879144b8bfa3 );                   
        SDK_FIXED_SIZE( ndr_dcom_oi2_proc_header_t, 0x10 );                   
    };                                                              
};
#include "magic/ndr_dcom_oi2_proc_header_t.end.hpp"
SDK_VERIFY( struct win::ndr_dcom_oi2_proc_header_t, 0x10 );
