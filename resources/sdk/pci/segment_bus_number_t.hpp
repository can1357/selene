#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/segment_bus_number_t.start.hpp"
namespace pci
{
    // [struct _PCI_SEGMENT_BUS_NUMBER]
    // => Windows 11
    //
    struct segment_bus_number_t                   
    {                                             
        struct u0_bits_t                          
        {                                         
            // Windows 11                         
            //                                    
            _m00 uint8_t  bus_number;               //{ +0x0000@0  } | .BusNumber
            _m01 uint16_t segment_number;           //{ +0x0000@8  } | .SegmentNumber
                                                  
            SDK_MAGIC_PROPERTIES( "_PCI_SEGMENT_BUS_NUMBER.bits.$", 0x0, false, 0xa79b8a17ec1b82dd );                        
            SDK_FIXED_SIZE( u0_bits_t, 0x4 );                        
        };                                        
                                                  
        // Windows 11                             
        //                                        
        _m02 u0_bits_t                   bits;      //{ +0x0000    } | .bits
        _m03 uint32_t                    as_ulong;  //{ +0x0000    } | .AsULONG
                                                  
        SDK_MAGIC_PROPERTIES( "_PCI_SEGMENT_BUS_NUMBER.$", 0x0, false, 0x57684d75d71d8fff );         
        SDK_FIXED_SIZE( segment_bus_number_t, 0x4 );         
    };                                            
};
#include "magic/segment_bus_number_t.end.hpp"
SDK_VERIFY( struct pci::segment_bus_number_t::u0_bits_t, 0x4 );
SDK_VERIFY( struct pci::segment_bus_number_t, 0x4 );
