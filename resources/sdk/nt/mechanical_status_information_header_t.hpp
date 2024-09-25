#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mechanical_status_information_header_t.start.hpp"
namespace nt
{
    // [struct _MECHANICAL_STATUS_INFORMATION_HEADER]
    // => WDK 10 (NV)
    //
    struct mechanical_status_information_header_t                 
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 uint5_t                current_slot;                   //{ +0x0000@0  } | .CurrentSlot
        _m01 uint2_t                changer_state;                  //{ +0x0000@5  } | .ChangerState
        _m02 uint1_t                fault;                          //{ +0x0000@7  } | .Fault
        _m03 uint3_t                mechanism_state;                //{ +0x0001@5  } | .MechanismState
        _m04 sdk::array<uint8_t, 3> current_logical_block_address;  //{ +0x0002    } | .CurrentLogicalBlockAddress
        _m05 uint8_t                number_available_slots;         //{ +0x0005    } | .NumberAvailableSlots
        _m06 sdk::array<uint8_t, 2> slot_table_length;              //{ +0x0006    } | .SlotTableLength
                                                                  
        SDK_NONVOL_PROPERTIES( "_MECHANICAL_STATUS_INFORMATION_HEADER.$", 0x0, false, 0x535dd88fe5d1ff0b );                              
        SDK_FIXED_SIZE( mechanical_status_information_header_t, 0x8 );                              
    };                                                            
};
#include "magic/mechanical_status_information_header_t.end.hpp"
SDK_VERIFY( struct nt::mechanical_status_information_header_t, 0x8 );
