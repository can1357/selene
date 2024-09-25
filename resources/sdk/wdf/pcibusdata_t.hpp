#pragma once
#include <sdkgen/support_library.hpp>
#include "../pci/slot_number_t.hpp"

namespace nt  { struct bus_handler_t;   }
namespace pci { struct common_config_t; }

#include "magic/pcibusdata_t.start.hpp"
namespace wdf
{
    // [struct _PCIBUSDATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pcibusdata_t                             
    {                                               
        using pci_read_write_config_t = sdk::function<void(struct nt::bus_handler_t*, struct pci::slot_number_t, void*, uint32_t, uint32_t)>*;             
        using pci_read_write_config_t = sdk::function<void(struct nt::bus_handler_t*, struct pci::slot_number_t, void*, uint32_t, uint32_t)>*;             
        using pci_pin2_line_t =         sdk::function<void(struct nt::bus_handler_t*, struct nt::bus_handler_t*, struct pci::slot_number_t, struct pci::common_config_t*)>*;             
        using pci_line2_pin_t =         sdk::function<void(struct nt::bus_handler_t*, struct nt::bus_handler_t*, struct pci::slot_number_t, struct pci::common_config_t*, struct pci::common_config_t*)>*;             
                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                          
        _m00 uint32_t                  tag;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Tag
        _m01 uint32_t                  version;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m02 pci_read_write_config_t   read_config;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ReadConfig
        _m03 pci_read_write_config_t   write_config;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .WriteConfig
        _m04 pci_pin2_line_t           pin2_line;     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Pin2Line
        _m05 pci_line2_pin_t           line2_pin;     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Line2Pin
        _m06 struct pci::slot_number_t parent_slot;   //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ParentSlot
                                                    
        SDK_NONVOL_PROPERTIES( "_PCIBUSDATA.$", 0x50, true, 0x38338308761b6e8b );             
        SDK_FIXED_SIZE( pcibusdata_t, 0x50 );             
    };                                              
};
#include "magic/pcibusdata_t.end.hpp"
SDK_VERIFY( struct wdf::pcibusdata_t, 0x50 );
