#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_number_of_queues_t), "NVME_CDW11_FEATURES.NumberOfQueues", number_of_queues, 0x0, 0x0, false, 0x16a57e0d08d11631)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_interrupt_coalescing_t), "NVME_CDW11_FEATURES.InterruptCoalescing", interrupt_coalescing, 0x0, 0x0, false, 0x7dabdb418b2a7835)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_interrupt_vector_config_t), "NVME_CDW11_FEATURES.InterruptVectorConfig", interrupt_vector_config, 0x0, 0x0, false, 0x5bc2332347e07f0c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_lba_range_type_t), "NVME_CDW11_FEATURES.LbaRangeType", lba_range_type, 0x0, 0x0, false, 0x921c2e7f28842cb9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_arbitration_t), "NVME_CDW11_FEATURES.Arbitration", arbitration, 0x0, 0x0, false, 0x6d87bd382a625aa6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_volatile_write_cache_t), "NVME_CDW11_FEATURES.VolatileWriteCache", volatile_write_cache, 0x0, 0x0, false, 0x445e541a0cb657b9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_async_event_config_t), "NVME_CDW11_FEATURES.AsyncEventConfig", async_event_config, 0x0, 0x0, false, 0xeb917088668582ce)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_power_management_t), "NVME_CDW11_FEATURES.PowerManagement", power_management, 0x0, 0x0, false, 0xb5ba6d9c36f40e0f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_auto_power_state_transition_t), "NVME_CDW11_FEATURES.AutoPowerStateTransition", auto_power_state_transition, 0x0, 0x0, false, 0x8884d5892f7e3eac)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_temperature_threshold_t), "NVME_CDW11_FEATURES.TemperatureThreshold", temperature_threshold, 0x0, 0x0, false, 0x589b74607398ca7b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_error_recovery_t), "NVME_CDW11_FEATURES.ErrorRecovery", error_recovery, 0x0, 0x0, false, 0x6eb248ef8da06d36)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_host_memory_buffer_t), "NVME_CDW11_FEATURES.HostMemoryBuffer", host_memory_buffer, 0x0, 0x0, false, 0x80dd284e97a3a33b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_write_atomicity_normal_t), "NVME_CDW11_FEATURES.WriteAtomicityNormal", write_atomicity_normal, 0x0, 0x0, false, 0x295f6f6902265fdd)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_non_operational_power_state_t), "NVME_CDW11_FEATURES.NonOperationalPowerState", non_operational_power_state, 0x0, 0x0, false, 0x8cfb26a7fcf1b0a8)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_io_command_set_profile_t), "NVME_CDW11_FEATURES.IoCommandSetProfile", io_command_set_profile, 0x0, 0x0, false, 0xefa324c42d8ada6f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_error_injection_t), "NVME_CDW11_FEATURES.ErrorInjection", error_injection, 0x0, 0x0, false, 0x205b5c41d6a83ea3)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_cdw11_feature_host_identifier_t), "NVME_CDW11_FEATURES.HostIdentifier", host_identifier, 0x0, 0x0, false, 0x19ac3ed703fc30bf)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_cdw11_feature_reservation_persistence_t), "NVME_CDW11_FEATURES.ReservationPersistence", reservation_persistence, 0x0, 0x0, false, 0xd87ad5afa0c498ce)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_cdw11_feature_reservation_notification_mask_t), "NVME_CDW11_FEATURES.ReservationNotificationMask", reservation_notification_mask, 0x0, 0x0, false, 0x345fbade89c87530)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_get_host_metadata_t), "NVME_CDW11_FEATURES.GetHostMetadata", get_host_metadata, 0x0, 0x0, false, 0xc1cedfbbdf35f459)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_feature_set_host_metadata_t), "NVME_CDW11_FEATURES.SetHostMetadata", set_host_metadata, 0x0, 0x0, false, 0x4583600a732b28d0)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURES.AsUlong", as_ulong, 0x0, 0x0, false, 0xe8c027fdadc5dd1b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#endif