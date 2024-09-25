#pragma once
#include <sdkgen/support_library.hpp>
#include "../queryadapterinfotype_t.hpp"
#include "../queryadapterinfoflags_t.hpp"

#include "magic/queryadapterinfo_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_QUERYADAPTERINFO]
    // => WDK 10 (NV)
    //
    struct queryadapterinfo_t                                          
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 enum dxgk::queryadapterinfotype_t    type;                  //{ +0x0000    } | .Type
        _m01 void*                                p_input_data;          //{ +0x0008    } | .pInputData
        _m02 uint32_t                             input_data_size;       //{ +0x0010    } | .InputDataSize
        _m03 void*                                p_output_data;         //{ +0x0018    } | .pOutputData
        _m04 uint32_t                             output_data_size;      //{ +0x0020    } | .OutputDataSize
        _m05 struct dxgk::queryadapterinfoflags_t flags;                 //{ +0x0024    } | .Flags
        _m06 void*                                h_kmd_process_handle;  //{ +0x0028    } | .hKmdProcessHandle
                                                                       
        SDK_NONVOL_PROPERTIES( "_DXGKARG_QUERYADAPTERINFO.$", 0x0, false, 0x449f23b0afe99322 );                     
        SDK_FIXED_SIZE( queryadapterinfo_t, 0x30 );                     
    };                                                                 
};
#include "magic/queryadapterinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::queryadapterinfo_t, 0x30 );
