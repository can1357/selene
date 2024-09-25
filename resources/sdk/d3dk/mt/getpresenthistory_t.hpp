#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getpresenthistory_t.start.hpp"
namespace d3dk::mt
{
    struct presenthistorytoken_t;

    // [struct _D3DKMT_GETPRESENTHISTORY]
    // => WDK 10 (NV)
    //
    struct getpresenthistory_t                                     
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                                h_adapter;      //{ +0x0000    } | .hAdapter
        _m01 uint32_t                                provided_size;  //{ +0x0004    } | .ProvidedSize
        _m02 uint32_t                                written_size;   //{ +0x0008    } | .WrittenSize
        _m03 struct d3dk::mt::presenthistorytoken_t* p_tokens;       //{ +0x0010    } | .pTokens
        _m04 uint32_t                                num_tokens;     //{ +0x0018    } | .NumTokens
                                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GETPRESENTHISTORY.$", 0x0, false, 0x26045adaac56308e );              
        SDK_FIXED_SIZE( getpresenthistory_t, 0x20 );               
    };                                                             
};
#include "magic/getpresenthistory_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::getpresenthistory_t, 0x20 );
