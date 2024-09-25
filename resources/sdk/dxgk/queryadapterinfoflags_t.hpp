#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/queryadapterinfoflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_QUERYADAPTERINFOFLAGS]
    // => WDK 10 (NV)
    //
    struct queryadapterinfoflags_t           
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint1_t  virtual_machine_data;    //{ +0x0000@0  } | .VirtualMachineData
        _m01 uint1_t  secure_virtual_machine;  //{ +0x0000@1  } | .SecureVirtualMachine
        _m02 uint32_t value;                   //{ +0x0000    } | .Value
                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYADAPTERINFOFLAGS.$", 0x0, false, 0xa088dc44522138eb );                       
        SDK_FIXED_SIZE( queryadapterinfoflags_t, 0x4 );                       
    };                                       
};
#include "magic/queryadapterinfoflags_t.end.hpp"
SDK_VERIFY( struct dxgk::queryadapterinfoflags_t, 0x4 );
