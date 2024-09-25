#pragma once
#include <sdkgen/support_library.hpp>
#include "nvme_cdw11_feature_arbitration_t.hpp"
#include "nvme_cdw11_feature_error_recovery_t.hpp"
#include "nvme_cdw11_feature_lba_range_type_t.hpp"
#include "nvme_cdw11_feature_error_injection_t.hpp"
#include "nvme_cdw11_feature_host_identifier_t.hpp"
#include "nvme_cdw11_feature_number_of_queues_t.hpp"
#include "nvme_cdw11_feature_power_management_t.hpp"
#include "nvme_cdw11_feature_get_host_metadata_t.hpp"
#include "nvme_cdw11_feature_set_host_metadata_t.hpp"
#include "nvme_cdw11_feature_async_event_config_t.hpp"
#include "nvme_cdw11_feature_host_memory_buffer_t.hpp"
#include "nvme_cdw11_feature_interrupt_coalescing_t.hpp"
#include "nvme_cdw11_feature_volatile_write_cache_t.hpp"
#include "nvme_cdw11_feature_temperature_threshold_t.hpp"
#include "nvme_cdw11_feature_io_command_set_profile_t.hpp"
#include "nvme_cdw11_feature_write_atomicity_normal_t.hpp"
#include "nvme_cdw11_feature_interrupt_vector_config_t.hpp"
#include "nvme_cdw11_feature_reservation_persistence_t.hpp"
#include "nvme_cdw11_feature_auto_power_state_transition_t.hpp"
#include "nvme_cdw11_feature_non_operational_power_state_t.hpp"
#include "nvme_cdw11_feature_reservation_notification_mask_t.hpp"

#include "magic/nvme_cdw11_features_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURES]
    // => Windows 11
    //
    union nvme_cdw11_features_t                                             
    {                                                                       
        using number_of_queues_t =              union stor::port::nvme_cdw11_feature_number_of_queues_t;                              
        using interrupt_coalescing_t =          union stor::port::nvme_cdw11_feature_interrupt_coalescing_t;                              
        using interrupt_vector_config_t =       union stor::port::nvme_cdw11_feature_interrupt_vector_config_t;                              
        using lba_range_type_t =                union stor::port::nvme_cdw11_feature_lba_range_type_t;                              
        using arbitration_t =                   union stor::port::nvme_cdw11_feature_arbitration_t;                              
        using volatile_write_cache_t =          union stor::port::nvme_cdw11_feature_volatile_write_cache_t;                              
        using async_event_config_t =            union stor::port::nvme_cdw11_feature_async_event_config_t;                              
        using power_management_t =              union stor::port::nvme_cdw11_feature_power_management_t;                              
        using auto_power_state_transition_t =   union stor::port::nvme_cdw11_feature_auto_power_state_transition_t;                              
        using temperature_threshold_t =         union stor::port::nvme_cdw11_feature_temperature_threshold_t;                              
        using error_recovery_t =                union stor::port::nvme_cdw11_feature_error_recovery_t;                              
        using host_memory_buffer_t =            union stor::port::nvme_cdw11_feature_host_memory_buffer_t;                              
        using write_atomicity_normal_t =        union stor::port::nvme_cdw11_feature_write_atomicity_normal_t;                              
        using non_operational_power_state_t =   union stor::port::nvme_cdw11_feature_non_operational_power_state_t;                              
        using io_command_set_profile_t =        union stor::port::nvme_cdw11_feature_io_command_set_profile_t;                              
        using error_injection_t =               union stor::port::nvme_cdw11_feature_error_injection_t;                              
        using host_identifier_t =               struct stor::port::nvme_cdw11_feature_host_identifier_t;                              
        using reservation_persistence_t =       struct stor::port::nvme_cdw11_feature_reservation_persistence_t;                              
        using reservation_notification_mask_t = struct stor::port::nvme_cdw11_feature_reservation_notification_mask_t;                              
        using get_host_metadata_t =             union stor::port::nvme_cdw11_feature_get_host_metadata_t;                              
        using set_host_metadata_t =             union stor::port::nvme_cdw11_feature_set_host_metadata_t;                              
                                                                            
        // Windows 11                                                       
        //                                                                  
        _m00 number_of_queues_t               number_of_queues;               //{ +0x0000    } | .NumberOfQueues
        _m01 interrupt_coalescing_t           interrupt_coalescing;           //{ +0x0000    } | .InterruptCoalescing
        _m02 interrupt_vector_config_t        interrupt_vector_config;        //{ +0x0000    } | .InterruptVectorConfig
        _m03 lba_range_type_t                 lba_range_type;                 //{ +0x0000    } | .LbaRangeType
        _m04 arbitration_t                    arbitration;                    //{ +0x0000    } | .Arbitration
        _m05 volatile_write_cache_t           volatile_write_cache;           //{ +0x0000    } | .VolatileWriteCache
        _m06 async_event_config_t             async_event_config;             //{ +0x0000    } | .AsyncEventConfig
        _m07 power_management_t               power_management;               //{ +0x0000    } | .PowerManagement
        _m08 auto_power_state_transition_t    auto_power_state_transition;    //{ +0x0000    } | .AutoPowerStateTransition
        _m09 temperature_threshold_t          temperature_threshold;          //{ +0x0000    } | .TemperatureThreshold
        _m10 error_recovery_t                 error_recovery;                 //{ +0x0000    } | .ErrorRecovery
        _m11 host_memory_buffer_t             host_memory_buffer;             //{ +0x0000    } | .HostMemoryBuffer
        _m12 write_atomicity_normal_t         write_atomicity_normal;         //{ +0x0000    } | .WriteAtomicityNormal
        _m13 non_operational_power_state_t    non_operational_power_state;    //{ +0x0000    } | .NonOperationalPowerState
        _m14 io_command_set_profile_t         io_command_set_profile;         //{ +0x0000    } | .IoCommandSetProfile
        _m15 error_injection_t                error_injection;                //{ +0x0000    } | .ErrorInjection
        _m16 host_identifier_t                host_identifier;                //{ +0x0000    } | .HostIdentifier
        _m17 reservation_persistence_t        reservation_persistence;        //{ +0x0000    } | .ReservationPersistence
        _m18 reservation_notification_mask_t  reservation_notification_mask;  //{ +0x0000    } | .ReservationNotificationMask
        _m19 get_host_metadata_t              get_host_metadata;              //{ +0x0000    } | .GetHostMetadata
        _m20 set_host_metadata_t              set_host_metadata;              //{ +0x0000    } | .SetHostMetadata
        _m21 uint32_t                         as_ulong;                       //{ +0x0000    } | .AsUlong
                                                                            
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURES.$", 0x0, false, 0xd9c9a17c66867285 );                              
        SDK_FIXED_SIZE( nvme_cdw11_features_t, 0x4 );                              
    };                                                                      
};
#include "magic/nvme_cdw11_features_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_features_t, 0x4 );
