#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ss_stop_flags_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_SS_STOP_FLAGS]
    // => Windows 10 v1607
    //
    struct ss_stop_flags_t                   
    {                                        
        // Windows 10 v1607                       
        //                                   
        _m00 uint1_t  query_remove;            //{ +0x0000@0  } | .QueryRemove
        _m01 uint1_t  device_remove;           //{ +0x0000@1  } | .DeviceRemove
        _m02 uint1_t  surprise_remove;         //{ +0x0000@2  } | .SurpriseRemove
        _m03 uint1_t  query_stop;              //{ +0x0000@3  } | .QueryStop
        _m04 uint1_t  device_stop;             //{ +0x0000@4  } | .DeviceStop
        _m05 uint1_t  system_power;            //{ +0x0000@5  } | .SystemPower
        _m06 uint1_t  nic_quiet;               //{ +0x0000@6  } | .NicQuiet
        _m07 uint1_t  pn_p_op;                 //{ +0x0000@7  } | .PnPOp
        _m08 uint1_t  not_started;             //{ +0x0000@8  } | .NotStarted
        _m09 uint1_t  miniport_fatal_error;    //{ +0x0000@9  } | .MiniportFatalError
        _m10 uint1_t  apply_interface_change;  //{ +0x0000@10 } | .ApplyInterfaceChange
        _m11 uint1_t  magic_packet;            //{ +0x0000@11 } | .MagicPacket
        _m12 uint1_t  bind_changes;            //{ +0x0000@12 } | .BindChanges
        _m13 uint32_t value;                   //{ +0x0000    } | .Value
                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_SS_STOP_FLAGS.$", 0x0, false, 0x91e2f820031c8a20 );                       
        SDK_FIXED_SIZE( ss_stop_flags_t, 0x4 );                       
    };                                       
};
#include "magic/ss_stop_flags_t.end.hpp"
SDK_VERIFY( struct ndis::ss_stop_flags_t, 0x4 );
