#pragma once
#include <sdkgen/support_library.hpp>
#include "express_dpc_capability_t.hpp"
#include "../whea/error_packet_v2_t.hpp"
#include "../whea/pciexpress_error_section_t.hpp"

#include "magic/express_error_packet_t.start.hpp"
namespace pci
{
    // [struct _EXPRESS_ERROR_PACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct express_error_packet_t                                          
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                 
        _m00 struct whea::error_packet_v2_t          header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct whea::pciexpress_error_section_t pci_express_error;      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .PciExpressError
                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                 
        _m02 struct pci::express_dpc_capability_t    express_pc_capability;  //{ +0x0120    +0x0120    +0x0120    } | .ExpressPcCapability
        _m03 uint8_t                                 express_pc_info_valid;  //{ +0x0164    +0x0164    +0x0164    } | .ExpressPcInfoValid
                                                                           
        SDK_MAGIC_PROPERTIES( "_EXPRESS_ERROR_PACKET.$", 0x165, true, 0xac257de54c6f0e6b );                      
        SDK_DYNAMIC_SIZE( express_error_packet_t );                        
    };                                                                     
};
#include "magic/express_error_packet_t.end.hpp"
