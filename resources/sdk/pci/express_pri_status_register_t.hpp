#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_pri_status_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_PRI_STATUS_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_pri_status_register_t                   
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint1_t  response_failure;                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ResponseFailure
        _m01 uint1_t  unexpected_page_request_group_index;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .UnexpectedPageRequestGroupIndex
        _m02 uint6_t  rsvd;                                 //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Rsvd
        _m03 uint1_t  stopped;                              //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Stopped
        _m04 uint6_t  rsvd2;                                //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .Rsvd2
        _m05 uint1_t  prg_response_pasid_required;          //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .PrgResponsePasidRequired
        _m06 uint16_t as_ushort;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                          
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_PRI_STATUS_REGISTER.$", 0x2, true, 0x57f61afd22ac1850 );                                    
        SDK_FIXED_SIZE( express_pri_status_register_t, 0x2 );                                    
    };                                                    
};
#include "magic/express_pri_status_register_t.end.hpp"
SDK_VERIFY( union pci::express_pri_status_register_t, 0x2 );
