#pragma once
#include <sdkgen/support_library.hpp>
#include "cdrom_opc_info_type_t.hpp"

#include "magic/cdrom_simple_opc_info_t.start.hpp"
namespace nt
{
    // [struct _CDROM_SIMPLE_OPC_INFO]
    // => WDK 10 (NV)
    //
    struct cdrom_simple_opc_info_t                       
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 enum nt::cdrom_opc_info_type_t request_type;  //{ +0x0000    } | .RequestType
        _m01 uint8_t                        exclude0;      //{ +0x0004    } | .Exclude0
        _m02 uint8_t                        exclude1;      //{ +0x0005    } | .Exclude1
                                                         
        SDK_NONVOL_PROPERTIES( "_CDROM_SIMPLE_OPC_INFO.$", 0x0, false, 0x5dfa74be1368846 );             
        SDK_FIXED_SIZE( cdrom_simple_opc_info_t, 0x8 );             
    };                                                   
};
#include "magic/cdrom_simple_opc_info_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_simple_opc_info_t, 0x8 );
