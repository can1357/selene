#pragma once
#include <sdkgen/support_library.hpp>
#include "pcixbus_id_t.hpp"
#include "error_status_t.hpp"
#include "pcixbus_command_t.hpp"
#include "pcixbus_error_section_validbits_t.hpp"

#include "magic/pcixbus_error_section_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PCIXBUS_ERROR_SECTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pcixbus_error_section_t                                      
    {                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                              
        _m00 union whea::pcixbus_error_section_validbits_t valid_bits;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
        _m01 union whea::error_status_t                    error_status;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ErrorStatus
        _m02 uint16_t                                      error_type;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorType
        _m03 union whea::pcixbus_id_t                      bus_id;        //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .BusId
        _m04 uint64_t                                      bus_address;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .BusAddress
        _m05 uint64_t                                      bus_data;      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .BusData
        _m06 union whea::pcixbus_command_t                 bus_command;   //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .BusCommand
        _m07 uint64_t                                      requester_id;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .RequesterId
        _m08 uint64_t                                      completer_id;  //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .CompleterId
        _m09 uint64_t                                      target_id;     //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .TargetId
                                                                        
        SDK_NONVOL_PROPERTIES( "_WHEA_PCIXBUS_ERROR_SECTION.$", 0x48, true, 0x2dc00317dc7d875a );             
        SDK_FIXED_SIZE( pcixbus_error_section_t, 0x48 );                
    };                                                                  
};
#include "magic/pcixbus_error_section_t.end.hpp"
SDK_VERIFY( struct whea::pcixbus_error_section_t, 0x48 );
