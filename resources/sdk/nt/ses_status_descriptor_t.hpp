#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ses_status_descriptor_t.start.hpp"
namespace nt
{
    // [struct _SES_STATUS_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct ses_status_descriptor_t                                    
    {                                                                 
        struct u0_device_slot_t                                       
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m04 uint8_t slot_address;                                  //{ +0x0000    } | .SlotAddress
            _m05 uint1_t report;                                        //{ +0x0001@0  } | .Report
            _m06 uint1_t identify;                                      //{ +0x0001@1  } | .Identify
            _m07 uint1_t remove;                                        //{ +0x0001@2  } | .Remove
            _m08 uint1_t ready_to_insert;                               //{ +0x0001@3  } | .ReadyToInsert
            _m09 uint1_t enclosure_bypassed_b;                          //{ +0x0001@4  } | .EnclosureBypassedB
            _m10 uint1_t enclosure_bypassed_a;                          //{ +0x0001@5  } | .EnclosureBypassedA
            _m11 uint1_t do_not_remove;                                 //{ +0x0001@6  } | .DoNotRemove
            _m12 uint1_t app_bypassed_a;                                //{ +0x0001@7  } | .AppBypassedA
            _m13 uint1_t device_bypassed_b;                             //{ +0x0002@0  } | .DeviceBypassedB
            _m14 uint1_t device_bypassed_a;                             //{ +0x0002@1  } | .DeviceBypassedA
            _m15 uint1_t bypassed_b;                                    //{ +0x0002@2  } | .BypassedB
            _m16 uint1_t bypassed_a;                                    //{ +0x0002@3  } | .BypassedA
            _m17 uint1_t device_off;                                    //{ +0x0002@4  } | .DeviceOff
            _m18 uint1_t fault_requested;                               //{ +0x0002@5  } | .FaultRequested
            _m19 uint1_t fault_sensed;                                  //{ +0x0002@6  } | .FaultSensed
            _m20 uint1_t app_bypassed_b;                                //{ +0x0002@7  } | .AppBypassedB
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_STATUS_DESCRIPTOR.DeviceSlot.$", 0x0, false, 0x7f12b0fdda520c07 );                                        
            SDK_FIXED_SIZE( u0_device_slot_t, 0x3 );                                        
        };                                                            
                                                                      
        struct u1_power_supply_t                                      
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m22 uint1_t identify;                                      //{ +0x0000@7  } | .Identify
            _m23 uint1_t dc_over_current;                               //{ +0x0001@1  } | .DCOverCurrent
            _m24 uint1_t dc_under_voltage;                              //{ +0x0001@2  } | .DCUnderVoltage
            _m25 uint1_t dc_over_voltage;                               //{ +0x0001@3  } | .DCOverVoltage
            _m26 uint1_t dc_fail;                                       //{ +0x0002@0  } | .DCFail
            _m27 uint1_t ac_fail;                                       //{ +0x0002@1  } | .ACFail
            _m28 uint1_t temperature_warning;                           //{ +0x0002@2  } | .TemperatureWarning
            _m29 uint1_t over_temperature_fail;                         //{ +0x0002@3  } | .OverTemperatureFail
            _m30 uint1_t off;                                           //{ +0x0002@4  } | .Off
            _m31 uint1_t requested_on;                                  //{ +0x0002@5  } | .RequestedOn
            _m32 uint1_t fail;                                          //{ +0x0002@6  } | .Fail
            _m33 uint1_t hot_swap;                                      //{ +0x0002@7  } | .HotSwap
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_STATUS_DESCRIPTOR.PowerSupply.$", 0x0, false, 0xe04159993571276c );                                         
            SDK_FIXED_SIZE( u1_power_supply_t, 0x3 );                                         
        };                                                            
                                                                      
        struct u2_cooling_t                                           
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m35 uint3_t actual_fan_speed_msb;                          //{ +0x0000@0  } | .ActualFanSpeedMSB
            _m36 uint1_t identify;                                      //{ +0x0000@7  } | .Identify
            _m37 uint8_t actual_fan_speed_lsb;                          //{ +0x0001    } | .ActualFanSpeedLSB
            _m38 uint3_t actual_speed_code;                             //{ +0x0002@0  } | .ActualSpeedCode
            _m39 uint1_t off;                                           //{ +0x0002@4  } | .Off
            _m40 uint1_t requested_on;                                  //{ +0x0002@5  } | .RequestedOn
            _m41 uint1_t fail;                                          //{ +0x0002@6  } | .Fail
            _m42 uint1_t hot_swap;                                      //{ +0x0002@7  } | .HotSwap
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_STATUS_DESCRIPTOR.Cooling.$", 0x0, false, 0x226e501c5c933825 );                                        
            SDK_FIXED_SIZE( u2_cooling_t, 0x3 );                                        
        };                                                            
                                                                      
        struct u3_temperature_sensor_t                                
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m44 uint1_t fail;                                          //{ +0x0000@6  } | .Fail
            _m45 uint1_t identify;                                      //{ +0x0000@7  } | .Identify
            _m46 uint8_t temperature;                                   //{ +0x0001    } | .Temperature
            _m47 uint1_t under_temperature_warning;                     //{ +0x0002@0  } | .UnderTemperatureWarning
            _m48 uint1_t under_temperature_failure;                     //{ +0x0002@1  } | .UnderTemperatureFailure
            _m49 uint1_t over_temperature_warning;                      //{ +0x0002@2  } | .OverTemperatureWarning
            _m50 uint1_t over_temperature_failure;                      //{ +0x0002@3  } | .OverTemperatureFailure
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_STATUS_DESCRIPTOR.TemperatureSensor.$", 0x0, false, 0x2bd3bf1b4727d19f );                                             
            SDK_FIXED_SIZE( u3_temperature_sensor_t, 0x3 );                                             
        };                                                            
                                                                      
        struct u4_voltage_sensor_t                                    
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m52 uint1_t crit_under;                                    //{ +0x0000@0  } | .CritUnder
            _m53 uint1_t crit_over;                                     //{ +0x0000@1  } | .CritOver
            _m54 uint1_t warn_under;                                    //{ +0x0000@2  } | .WarnUnder
            _m55 uint1_t warn_over;                                     //{ +0x0000@3  } | .WarnOver
            _m56 uint1_t fail;                                          //{ +0x0000@6  } | .Fail
            _m57 uint1_t identify;                                      //{ +0x0000@7  } | .Identify
            _m58 uint8_t voltage_msb;                                   //{ +0x0001    } | .VoltageMSB
            _m59 uint8_t voltage_lsb;                                   //{ +0x0002    } | .VoltageLSB
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_STATUS_DESCRIPTOR.VoltageSensor.$", 0x0, false, 0xc060f87e489b1a6f );                               
            SDK_FIXED_SIZE( u4_voltage_sensor_t, 0x3 );                               
        };                                                            
                                                                      
        struct u5_current_sensor_t                                    
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m61 uint1_t crit_over;                                     //{ +0x0000@1  } | .CritOver
            _m62 uint1_t warn_over;                                     //{ +0x0000@3  } | .WarnOver
            _m63 uint1_t fail;                                          //{ +0x0000@6  } | .Fail
            _m64 uint1_t identify;                                      //{ +0x0000@7  } | .Identify
            _m65 uint8_t current_msb;                                   //{ +0x0001    } | .CurrentMSB
            _m66 uint8_t current_lsb;                                   //{ +0x0002    } | .CurrentLSB
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_STATUS_DESCRIPTOR.CurrentSensor.$", 0x0, false, 0xa241aa58c7313e73 );                               
            SDK_FIXED_SIZE( u5_current_sensor_t, 0x3 );                               
        };                                                            
                                                                      
        struct u6_enclosure_t                                         
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m68 uint1_t identify;                                      //{ +0x0000@7  } | .Identify
            _m69 uint1_t warning_indication;                            //{ +0x0001@0  } | .WarningIndication
            _m70 uint1_t failure_indication;                            //{ +0x0001@1  } | .FailureIndication
            _m71 uint6_t time_until_power_cycle;                        //{ +0x0001@2  } | .TimeUntilPowerCycle
            _m72 uint1_t warning_requested;                             //{ +0x0002@0  } | .WarningRequested
            _m73 uint1_t failure_requested;                             //{ +0x0002@1  } | .FailureRequested
            _m74 uint6_t requested_power_off_time;                      //{ +0x0002@2  } | .RequestedPowerOffTime
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_STATUS_DESCRIPTOR.Enclosure.$", 0x0, false, 0xc7f2a4610cc4234e );                                            
            SDK_FIXED_SIZE( u6_enclosure_t, 0x3 );                                            
        };                                                            
                                                                      
        struct u7_array_device_slot_t                                 
        {                                                             
            // WDK 10                                                 
            //                                                        
            _m76 uint1_t rebuild_abort;                                 //{ +0x0000@0  } | .RebuildAbort
            _m77 uint1_t rebuild;                                       //{ +0x0000@1  } | .Rebuild
            _m78 uint1_t in_failed_array;                               //{ +0x0000@2  } | .InFailedArray
            _m79 uint1_t in_critical_array;                             //{ +0x0000@3  } | .InCriticalArray
            _m80 uint1_t consistency_check;                             //{ +0x0000@4  } | .ConsistencyCheck
            _m81 uint1_t hot_spare;                                     //{ +0x0000@5  } | .HotSpare
            _m82 uint1_t reserved_device;                               //{ +0x0000@6  } | .ReservedDevice
            _m83 uint1_t ok;                                            //{ +0x0000@7  } | .OK
            _m84 uint1_t report;                                        //{ +0x0001@0  } | .Report
            _m85 uint1_t identify;                                      //{ +0x0001@1  } | .Identify
            _m86 uint1_t remove;                                        //{ +0x0001@2  } | .Remove
            _m87 uint1_t ready_to_insert;                               //{ +0x0001@3  } | .ReadyToInsert
            _m88 uint1_t enclosure_bypassed_b;                          //{ +0x0001@4  } | .EnclosureBypassedB
            _m89 uint1_t enclosure_bypassed_a;                          //{ +0x0001@5  } | .EnclosureBypassedA
            _m90 uint1_t do_not_remove;                                 //{ +0x0001@6  } | .DoNotRemove
            _m91 uint1_t app_bypassed_a;                                //{ +0x0001@7  } | .AppBypassedA
            _m92 uint1_t device_bypassed_b;                             //{ +0x0002@0  } | .DeviceBypassedB
            _m93 uint1_t device_bypassed_a;                             //{ +0x0002@1  } | .DeviceBypassedA
            _m94 uint1_t bypassed_b;                                    //{ +0x0002@2  } | .BypassedB
            _m95 uint1_t bypassed_a;                                    //{ +0x0002@3  } | .BypassedA
            _m96 uint1_t device_off;                                    //{ +0x0002@4  } | .DeviceOff
            _m97 uint1_t fault_requested;                               //{ +0x0002@5  } | .FaultRequested
            _m98 uint1_t fault_sensed;                                  //{ +0x0002@6  } | .FaultSensed
            _m99 uint1_t app_bypassed_b;                                //{ +0x0002@7  } | .AppBypassedB
                                                                      
            SDK_NONVOL_PROPERTIES( "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.$", 0x0, false, 0x52be31bdd3a2b78c );                                        
            SDK_FIXED_SIZE( u7_array_device_slot_t, 0x3 );                                        
        };                                                            
                                                                      
        // WDK 10                                                     
        //                                                            
        _m00 uint4_t                               element_status;      //{ +0x0000@0  } | .ElementStatus
        _m01 uint1_t                               swap;                //{ +0x0000@4  } | .Swap
        _m02 uint1_t                               disabled;            //{ +0x0000@5  } | .Disabled
        _m03 uint1_t                               predicted_failure;   //{ +0x0000@6  } | .PredictedFailure
        _m21 u0_device_slot_t                      device_slot;         //{ +0x0001    } | .DeviceSlot
        _m34 u1_power_supply_t                     power_supply;        //{ +0x0001    } | .PowerSupply
        _m43 u2_cooling_t                          cooling;             //{ +0x0001    } | .Cooling
        _m51 u3_temperature_sensor_t               temperature_sensor;  //{ +0x0001    } | .TemperatureSensor
        _m60 u4_voltage_sensor_t                   voltage_sensor;      //{ +0x0001    } | .VoltageSensor
        _m67 u5_current_sensor_t                   current_sensor;      //{ +0x0001    } | .CurrentSensor
        _m75 u6_enclosure_t                        enclosure;           //{ +0x0001    } | .Enclosure
        _n00 u7_array_device_slot_t                array_device_slot;   //{ +0x0001    } | .ArrayDeviceSlot
                                                                      
        SDK_NONVOL_PROPERTIES( "_SES_STATUS_DESCRIPTOR.$", 0x0, false, 0x7e803236061e5fe7 );                   
        SDK_FIXED_SIZE( ses_status_descriptor_t, 0x4 );                   
    };                                                                
};
#include "magic/ses_status_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::ses_status_descriptor_t::u0_device_slot_t, 0x3 );
SDK_VERIFY( struct nt::ses_status_descriptor_t::u1_power_supply_t, 0x3 );
SDK_VERIFY( struct nt::ses_status_descriptor_t::u2_cooling_t, 0x3 );
SDK_VERIFY( struct nt::ses_status_descriptor_t::u3_temperature_sensor_t, 0x3 );
SDK_VERIFY( struct nt::ses_status_descriptor_t::u4_voltage_sensor_t, 0x3 );
SDK_VERIFY( struct nt::ses_status_descriptor_t::u5_current_sensor_t, 0x3 );
SDK_VERIFY( struct nt::ses_status_descriptor_t::u6_enclosure_t, 0x3 );
SDK_VERIFY( struct nt::ses_status_descriptor_t::u7_array_device_slot_t, 0x3 );
SDK_VERIFY( struct nt::ses_status_descriptor_t, 0x4 );
