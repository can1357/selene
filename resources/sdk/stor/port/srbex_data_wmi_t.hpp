#pragma once
#include <sdkgen/support_library.hpp>
#include "srbexdatatype_t.hpp"

#include "magic/srbex_data_wmi_t.start.hpp"
namespace stor::port
{
    // [struct _SRBEX_DATA_WMI]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct srbex_data_wmi_t                                    
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                     
        _m00 enum stor::port::srbexdatatype_t type;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                         length;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 uint8_t                          wmi_sub_function;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WMISubFunction
        _m03 uint8_t                          wmi_flags;         //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .WMIFlags
        _m04 void*                            data_path;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DataPath
                                                               
        SDK_MAGIC_PROPERTIES( "_SRBEX_DATA_WMI.$", 0x18, true, 0xc532a463e97e264 );                 
        SDK_FIXED_SIZE( srbex_data_wmi_t, 0x18 );                 
    };                                                         
};
#include "magic/srbex_data_wmi_t.end.hpp"
SDK_VERIFY( struct stor::port::srbex_data_wmi_t, 0x18 );
