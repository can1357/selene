#pragma once
#include <sdkgen/support_library.hpp>
#include "busmaster_rid_type_t.hpp"

#include "magic/busmaster_descriptor_t.start.hpp"
namespace pci
{
    // [struct _PCI_BUSMASTER_DESCRIPTOR]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct busmaster_descriptor_t                            
    {                                                        
        struct u0_device_rid_t                               
        {                                                    
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                               
            _m02 uint8_t bus;                                  //{ +0x0000    +0x0000    +0x0000    } | .Bus
            _m03 uint8_t device;                               //{ +0x0001    +0x0001    +0x0001    } | .Device
            _m04 uint8_t function;                             //{ +0x0002    +0x0002    +0x0002    } | .Function
                                                             
            SDK_MAGIC_PROPERTIES( "_PCI_BUSMASTER_DESCRIPTOR.DeviceRid.$", 0x4, true, 0xb8ad2942b87e3876 );                          
            SDK_FIXED_SIZE( u0_device_rid_t, 0x4 );                          
        };                                                   
                                                             
        struct u3_bridge_rid_t                               
        {                                                    
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                               
            _m06 uint8_t bus;                                  //{ +0x0000    +0x0000    +0x0000    } | .Bus
            _m07 uint8_t device;                               //{ +0x0001    +0x0001    +0x0001    } | .Device
            _m08 uint8_t function;                             //{ +0x0002    +0x0002    +0x0002    } | .Function
                                                             
            SDK_MAGIC_PROPERTIES( "_PCI_BUSMASTER_DESCRIPTOR.BridgeRid.$", 0x4, true, 0x83e3047171d318b4 );                          
            SDK_FIXED_SIZE( u3_bridge_rid_t, 0x4 );                          
        };                                                   
                                                             
        struct u3_multiple_bridges_t                         
        {                                                    
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
            //                                               
            _m10 uint8_t secondary_bus;                        //{ +0x0000    +0x0000    +0x0000    } | .SecondaryBus
            _m11 uint8_t subordinate_bus;                      //{ +0x0001    +0x0001    +0x0001    } | .SubordinateBus
                                                             
            SDK_MAGIC_PROPERTIES( "_PCI_BUSMASTER_DESCRIPTOR.MultipleBridges.$", 0x2, true, 0x444d2a9b3d795f97 );                                 
            SDK_FIXED_SIZE( u3_multiple_bridges_t, 0x2 );                                 
        };                                                   
                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 enum pci::busmaster_rid_type_t type;              //{ +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                       segment;           //{ +0x0004    +0x0004    +0x0004    } | .Segment
        _m05 u0_device_rid_t                device_rid;        //{ +0x0008    +0x0008    +0x0008    } | .DeviceRid
        _m09 u0_device_rid_t                bridge_rid;        //{ +0x0008    +0x0008    +0x0008    } | .BridgeRid
        _m12 u3_multiple_bridges_t          multiple_bridges;  //{ +0x0008    +0x0008    +0x0008    } | .MultipleBridges
                                                             
        SDK_MAGIC_PROPERTIES( "_PCI_BUSMASTER_DESCRIPTOR.$", 0xc, true, 0xcd25b8948cb2b157 );                 
        SDK_FIXED_SIZE( busmaster_descriptor_t, 0xc );                 
    };                                                       
};
#include "magic/busmaster_descriptor_t.end.hpp"
SDK_VERIFY( struct pci::busmaster_descriptor_t::u0_device_rid_t, 0x4 );
SDK_VERIFY( struct pci::busmaster_descriptor_t::u3_bridge_rid_t, 0x4 );
SDK_VERIFY( struct pci::busmaster_descriptor_t::u3_multiple_bridges_t, 0x2 );
SDK_VERIFY( struct pci::busmaster_descriptor_t, 0xc );
