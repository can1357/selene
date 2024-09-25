#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dvtdinfo_t.start.hpp"
namespace win
{
    // [struct DVTDINFO]
    // => Windows 10 v1607
    //
    struct dvtdinfo_t                 
    {                                 
        // Windows 10 v1607                
        //                            
        _m00 uint32_t cb_convert_size;  //{ +0x0000    } | .cbConvertSize
        _m01 uint32_t cch_drv_name;     //{ +0x0004    } | .cchDrvName
        _m02 uint32_t cch_dev_name;     //{ +0x0008    } | .cchDevName
        _m03 uint32_t cch_port_name;    //{ +0x000c    } | .cchPortName
                                      
        SDK_MAGIC_PROPERTIES( "DVTDINFO.$", 0x0, false, 0x44c5b36abf9e7912 );                
        SDK_FIXED_SIZE( dvtdinfo_t, 0x10 );                
    };                                
};
#include "magic/dvtdinfo_t.end.hpp"
SDK_VERIFY( struct win::dvtdinfo_t, 0x10 );
