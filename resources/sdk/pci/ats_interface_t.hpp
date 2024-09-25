#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ats_interface_t.start.hpp"
namespace pci
{
    // [struct _PCI_ATS_INTERFACE]
    // => Windows 11
    //
    struct ats_interface_t                                                            
    {                                                                                 
        // Windows 11                                                                 
        //                                                                            
        _m00 uint16_t                                size;                              //{ +0x0000    } | .Size
        _m01 uint16_t                                version;                           //{ +0x0002    } | .Version
        _m02 void*                                   context;                           //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*             interface_reference;               //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*             interface_dereference;             //{ +0x0018    } | .InterfaceDereference
        _m05 sdk::function<int32_t(void*, uint8_t)>* set_address_translation_services;  //{ +0x0020    } | .SetAddressTranslationServices
        _m06 uint8_t                                 invalidate_queue_depth;            //{ +0x0028    } | .InvalidateQueueDepth
                                                                                      
        SDK_MAGIC_PROPERTIES( "_PCI_ATS_INTERFACE.$", 0x0, false, 0x8a173401a228c14 );                                 
        SDK_FIXED_SIZE( ats_interface_t, 0x30 );                                      
    };                                                                                
};
#include "magic/ats_interface_t.end.hpp"
SDK_VERIFY( struct pci::ats_interface_t, 0x30 );
