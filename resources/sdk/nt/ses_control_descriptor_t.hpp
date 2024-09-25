#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ses_control_descriptor_t.start.hpp"
namespace nt
{
    // [struct _SES_CONTROL_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct ses_control_descriptor_t                                   
    {                                                                 
        struct u0_device_slot_t                                       
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m04 uint1_t request_identify;                              //{ +0x0001@1  } | .RequestIdentify
            _m05 uint1_t request_remove;                                //{ +0x0001@2  } | .RequestRemove
            _m06 uint1_t request_insert;                                //{ +0x0001@3  } | .RequestInsert
            _m07 uint1_t request_missing;                               //{ +0x0001@4  } | .RequestMissing
            _m08 uint1_t do_not_remove;                                 //{ +0x0001@6  } | .DoNotRemove
            _m09 uint1_t request_active;                                //{ +0x0001@7  } | .RequestActive
            _m10 uint1_t enable_bypass_b;                               //{ +0x0002@2  } | .EnableBypassB
            _m11 uint1_t enable_bypass_a;                               //{ +0x0002@3  } | .EnableBypassA
            _m12 uint1_t device_off;                                    //{ +0x0002@4  } | .DeviceOff
            _m13 uint1_t request_fault;                                 //{ +0x0002@5  } | .RequestFault
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_CONTROL_DESCRIPTOR.DeviceSlot.$", 0x0, false, 0x980d09f8b340dc18 );                                    
            SDK_FIXED_SIZE( u0_device_slot_t, 0x3 );                                    
        };                                                            
                                                                      
        struct u1_power_supply_t                                      
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m15 uint1_t request_identify;                              //{ +0x0000@7  } | .RequestIdentify
            _m16 uint1_t request_on;                                    //{ +0x0002@5  } | .RequestOn
            _m17 uint1_t request_fail;                                  //{ +0x0002@6  } | .RequestFail
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_CONTROL_DESCRIPTOR.PowerSupply.$", 0x0, false, 0xb7ca2c632f394579 );                                    
            SDK_FIXED_SIZE( u1_power_supply_t, 0x3 );                                    
        };                                                            
                                                                      
        struct u2_cooling_t                                           
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m19 uint1_t request_identify;                              //{ +0x0000@7  } | .RequestIdentify
            _m20 uint3_t request_speed_code;                            //{ +0x0002@0  } | .RequestSpeedCode
            _m21 uint1_t request_on;                                    //{ +0x0002@5  } | .RequestOn
            _m22 uint1_t request_fail;                                  //{ +0x0002@6  } | .RequestFail
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_CONTROL_DESCRIPTOR.Cooling.$", 0x0, false, 0xa424e97e1467071f );                                      
            SDK_FIXED_SIZE( u2_cooling_t, 0x3 );                                      
        };                                                            
                                                                      
        struct u3_temperature_sensor_t                                
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m24 uint1_t request_fail;                                  //{ +0x0000@6  } | .RequestFail
            _m25 uint1_t request_identify;                              //{ +0x0000@7  } | .RequestIdentify
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_CONTROL_DESCRIPTOR.TemperatureSensor.$", 0x0, false, 0x731805278dd113be );                                    
            SDK_FIXED_SIZE( u3_temperature_sensor_t, 0x3 );                                    
        };                                                            
                                                                      
        struct u4_voltage_sensor_t                                    
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m27 uint1_t request_fail;                                  //{ +0x0000@6  } | .RequestFail
            _m28 uint1_t request_identify;                              //{ +0x0000@7  } | .RequestIdentify
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_CONTROL_DESCRIPTOR.VoltageSensor.$", 0x0, false, 0xaa9291cb7c8ca79b );                                    
            SDK_FIXED_SIZE( u4_voltage_sensor_t, 0x3 );                                    
        };                                                            
                                                                      
        struct u4_current_sensor_t                                    
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m30 uint1_t request_fail;                                  //{ +0x0000@6  } | .RequestFail
            _m31 uint1_t request_identify;                              //{ +0x0000@7  } | .RequestIdentify
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_CONTROL_DESCRIPTOR.CurrentSensor.$", 0x0, false, 0xb258a903e9a7d78f );                                    
            SDK_FIXED_SIZE( u4_current_sensor_t, 0x3 );                                    
        };                                                            
                                                                      
        struct u4_enclosure_t                                         
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m33 uint1_t request_identify;                              //{ +0x0000@7  } | .RequestIdentify
            _m34 uint6_t power_cycle_delay;                             //{ +0x0001@0  } | .PowerCycleDelay
            _m35 uint2_t power_cycle_request;                           //{ +0x0001@6  } | .PowerCycleRequest
            _m36 uint1_t request_warning;                               //{ +0x0002@0  } | .RequestWarning
            _m37 uint1_t request_failure;                               //{ +0x0002@1  } | .RequestFailure
            _m38 uint6_t power_off_duration;                            //{ +0x0002@2  } | .PowerOffDuration
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_CONTROL_DESCRIPTOR.Enclosure.$", 0x0, false, 0xceb185373984c14 );                                       
            SDK_FIXED_SIZE( u4_enclosure_t, 0x3 );                                       
        };                                                            
                                                                      
        struct u5_array_device_slot_t                                 
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m40 uint1_t request_rebuild_abort;                         //{ +0x0000@0  } | .RequestRebuildAbort
            _m41 uint1_t request_rebuild;                               //{ +0x0000@1  } | .RequestRebuild
            _m42 uint1_t request_in_failed_array;                       //{ +0x0000@2  } | .RequestInFailedArray
            _m43 uint1_t request_in_critical_array;                     //{ +0x0000@3  } | .RequestInCriticalArray
            _m44 uint1_t request_consistency_array;                     //{ +0x0000@4  } | .RequestConsistencyArray
            _m45 uint1_t request_hot_spare;                             //{ +0x0000@5  } | .RequestHotSpare
            _m46 uint1_t request_reserved_device;                       //{ +0x0000@6  } | .RequestReservedDevice
            _m47 uint1_t request_ok;                                    //{ +0x0000@7  } | .RequestOK
            _m48 uint1_t request_identify;                              //{ +0x0001@1  } | .RequestIdentify
            _m49 uint1_t request_remove;                                //{ +0x0001@2  } | .RequestRemove
            _m50 uint1_t request_insert;                                //{ +0x0001@3  } | .RequestInsert
            _m51 uint1_t request_missing;                               //{ +0x0001@4  } | .RequestMissing
            _m52 uint1_t do_not_remove;                                 //{ +0x0001@6  } | .DoNotRemove
            _m53 uint1_t request_active;                                //{ +0x0001@7  } | .RequestActive
            _m54 uint1_t enable_bypass_b;                               //{ +0x0002@2  } | .EnableBypassB
            _m55 uint1_t enable_bypass_a;                               //{ +0x0002@3  } | .EnableBypassA
            _m56 uint1_t device_off;                                    //{ +0x0002@4  } | .DeviceOff
            _m57 uint1_t request_fault;                                 //{ +0x0002@5  } | .RequestFault
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.$", 0x0, false, 0x3c3814063ce0c6a4 );                                             
            SDK_FIXED_SIZE( u5_array_device_slot_t, 0x3 );                                             
        };                                                            
                                                                      
        // WDK 10                                                     
        //                                                            
        _m00 uint1_t                               reset_swap;          //{ +0x0000@4  } | .ResetSwap
        _m01 uint1_t                               disable;             //{ +0x0000@5  } | .Disable
        _m02 uint1_t                               predict_failure;     //{ +0x0000@6  } | .PredictFailure
        _m03 uint1_t                               select;              //{ +0x0000@7  } | .Select
        _m14 u0_device_slot_t                      device_slot;         //{ +0x0001    } | .DeviceSlot
        _m18 u1_power_supply_t                     power_supply;        //{ +0x0001    } | .PowerSupply
        _m23 u2_cooling_t                          cooling;             //{ +0x0001    } | .Cooling
        _m26 u3_temperature_sensor_t               temperature_sensor;  //{ +0x0001    } | .TemperatureSensor
        _m29 u3_temperature_sensor_t               voltage_sensor;      //{ +0x0001    } | .VoltageSensor
        _m32 u3_temperature_sensor_t               current_sensor;      //{ +0x0001    } | .CurrentSensor
        _m39 u4_enclosure_t                        enclosure;           //{ +0x0001    } | .Enclosure
        _m58 u5_array_device_slot_t                array_device_slot;   //{ +0x0001    } | .ArrayDeviceSlot
                                                                      
        SDK_NONVOL_PROPERTIES( "_SES_CONTROL_DESCRIPTOR.$", 0x0, false, 0x33128c5d718001d3 );                   
        SDK_FIXED_SIZE( ses_control_descriptor_t, 0x4 );                   
    };                                                                
};
#include "magic/ses_control_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::ses_control_descriptor_t::u0_device_slot_t, 0x3 );
SDK_VERIFY( struct nt::ses_control_descriptor_t::u1_power_supply_t, 0x3 );
SDK_VERIFY( struct nt::ses_control_descriptor_t::u2_cooling_t, 0x3 );
SDK_VERIFY( struct nt::ses_control_descriptor_t::u3_temperature_sensor_t, 0x3 );
SDK_VERIFY( struct nt::ses_control_descriptor_t::u4_voltage_sensor_t, 0x3 );
SDK_VERIFY( struct nt::ses_control_descriptor_t::u4_current_sensor_t, 0x3 );
SDK_VERIFY( struct nt::ses_control_descriptor_t::u4_enclosure_t, 0x3 );
SDK_VERIFY( struct nt::ses_control_descriptor_t::u5_array_device_slot_t, 0x3 );
SDK_VERIFY( struct nt::ses_control_descriptor_t, 0x4 );
