#pragma once
#include <sdkgen/support_library.hpp>
#include "scsi_request_block_t.hpp"
#include "class_power_options_t.hpp"

#include "magic/class_power_context_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct device_object_t;

    // [struct _CLASS_POWER_CONTEXT]
    // => WDK 10 (NV)
    //
    struct class_power_context_t                                                
    {                                                                           
        union u0_power_change_state_t                                           
        {                                                                       
            enum class u1_power_down_t : int32_t                                
            {                                                                   
                initial =  0x0,                                                   // WDK 10
                locked =   0x1,                                                   // WDK 10
                stopped =  0x2,                                                   // WDK 10
                off =      0x3,                                                   // WDK 10
                unlocked = 0x4,                                                   // WDK 10
            };                                                                  
                                                                                
            enum class u2_power_down2_t : int32_t                               
            {                                                                   
                initial2 =  0x0,                                                  // WDK 10
                locked2 =   0x1,                                                  // WDK 10
                flushed2 =  0x2,                                                  // WDK 10
                stopped2 =  0x3,                                                  // WDK 10
                off2 =      0x4,                                                  // WDK 10
                unlocked2 = 0x5,                                                  // WDK 10
            };                                                                  
                                                                                
            enum class u3_power_down3_t : int32_t                               
            {                                                                   
                initial3 =  0x0,                                                  // WDK 10
                locked3 =   0x1,                                                  // WDK 10
                quiesced3 = 0x2,                                                  // WDK 10
                flushed3 =  0x3,                                                  // WDK 10
                stopped3 =  0x4,                                                  // WDK 10
                off3 =      0x5,                                                  // WDK 10
                unlocked3 = 0x6,                                                  // WDK 10
            };                                                                  
                                                                                
            enum class u4_power_up_t : int32_t                                  
            {                                                                   
                initial =  0x0,                                                   // WDK 10
                locked =   0x1,                                                   // WDK 10
                on =       0x2,                                                   // WDK 10
                started =  0x3,                                                   // WDK 10
                unlocked = 0x4,                                                   // WDK 10
            };                                                                  
                                                                                
            // WDK 10                                                           
            //                                                                  
            _m00 u1_power_down_t                 power_down;                      //{ +0x0000    } | .PowerDown
            _m01 u2_power_down2_t                power_down2;                     //{ +0x0000    } | .PowerDown2
            _m02 u3_power_down3_t                power_down3;                     //{ +0x0000    } | .PowerDown3
            _m03 u4_power_up_t                   power_up;                        //{ +0x0000    } | .PowerUp
                                                                                
            SDK_NONVOL_PROPERTIES( "_CLASS_POWER_CONTEXT.PowerChangeState.$", 0x0, false, 0x5d3e3bcfcfdbd0d0 );                               
            SDK_FIXED_SIZE( u0_power_change_state_t, 0x4 );                               
        };                                                                      
                                                                                
        using pio_completion_routine_t = sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, void*)>*;                   
                                                                                
        // WDK 10                                                               
        //                                                                      
        _m04 u0_power_change_state_t                         power_change_state;  //{ +0x0000    } | .PowerChangeState
        _m05 struct nt::class_power_options_t                options;             //{ +0x0004    } | .Options
        _m06 uint8_t                                         in_use;              //{ +0x0008    } | .InUse
        _m07 uint8_t                                         queue_locked;        //{ +0x0009    } | .QueueLocked
        _m08 int32_t                                         final_status;        //{ +0x000c    } | .FinalStatus
        _m09 uint32_t                                        retry_count;         //{ +0x0010    } | .RetryCount
        _m10 uint32_t                                        retry_interval;      //{ +0x0014    } | .RetryInterval
        _m11 pio_completion_routine_t                        completion_routine;  //{ +0x0018    } | .CompletionRoutine
        _m12 struct nt::device_object_t*                     device_object;       //{ +0x0020    } | .DeviceObject
        _m13 struct nt::irp_t*                               irp;                 //{ +0x0028    } | .Irp
        _m14 struct nt::scsi_request_block_t                 srb;                 //{ +0x0030    } | .Srb
                                                                                
        SDK_NONVOL_PROPERTIES( "_CLASS_POWER_CONTEXT.$", 0x0, false, 0x7b702cfd9653aa8b );                   
        SDK_FIXED_SIZE( class_power_context_t, 0x88 );                          
    };                                                                          
};
#include "magic/class_power_context_t.end.hpp"
SDK_VERIFY( union nt::class_power_context_t::u0_power_change_state_t, 0x4 );
SDK_VERIFY( struct nt::class_power_context_t, 0x88 );
