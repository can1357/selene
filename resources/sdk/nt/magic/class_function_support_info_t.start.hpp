#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLASS_FUNCTION_SUPPORT_INFO.SyncLock", sync_lock, 0x0, 0x40, true, 0x1373b834d6008582)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_FUNCTION_SUPPORT_INFO.GenerationCount", generation_count, 0x40, 0x20, true, 0xedf26347fca211c4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_CLASS_FUNCTION_SUPPORT_INFO.ChangeRequestCount", change_request_count, 0x60, 0x20, true, 0x6d662db48f0b72ab)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_FUNCTION_SUPPORT_INFO.ValidInquiryPages.BlockLimits", block_limits, 0x0, 0x1, true, 0x527fe3de15b54bea, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_FUNCTION_SUPPORT_INFO.ValidInquiryPages.BlockDeviceCharacteristics", block_device_characteristics, 0x1, 0x1, true, 0x47dd26783450c9e7, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_FUNCTION_SUPPORT_INFO.ValidInquiryPages.LBProvisioning", lb_provisioning, 0x2, 0x1, true, 0x410cc4bf2f126932, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_FUNCTION_SUPPORT_INFO.ValidInquiryPages.BlockDeviceRODLimits", block_device_rod_limits, 0x3, 0x1, true, 0x31a4c5f6535553e8, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_FUNCTION_SUPPORT_INFO.ValidInquiryPages.ZonedBlockDeviceCharacteristics", zoned_block_device_characteristics, 0x4, 0x1, true, 0xa8aa13954fac31ee, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_CLASS_FUNCTION_SUPPORT_INFO.ValidInquiryPages.DeviceType", device_type, 0x1b, 0x5, true, 0x3680b2f89dfcdc09, 5, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_valid_inquiry_pages_t), "_CLASS_FUNCTION_SUPPORT_INFO.ValidInquiryPages", valid_inquiry_pages, 0x80, 0x20, true, 0x2e03fb718194513e)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_seek_penalty_property_t), "_CLASS_FUNCTION_SUPPORT_INFO.LowerLayerSupport.SeekPenaltyProperty", seek_penalty_property, 0x0, 0x20, true, 0xb01fa65e3ffc43ea)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_seek_penalty_property_t), "_CLASS_FUNCTION_SUPPORT_INFO.LowerLayerSupport.AccessAlignmentProperty", access_alignment_property, 0x20, 0x20, true, 0x7587745903fb2ee)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_seek_penalty_property_t), "_CLASS_FUNCTION_SUPPORT_INFO.LowerLayerSupport.TrimProperty", trim_property, 0x40, 0x20, true, 0xb1dd6b3dddbae3d2)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_seek_penalty_property_t), "_CLASS_FUNCTION_SUPPORT_INFO.LowerLayerSupport.TrimProcess", trim_process, 0x60, 0x20, true, 0xafafe8185443c7e0)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_lower_layer_support_t), "_CLASS_FUNCTION_SUPPORT_INFO.LowerLayerSupport", lower_layer_support, 0xa0, 0x80, true, 0x4512373b541a4b15)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLASS_FUNCTION_SUPPORT_INFO.RegAccessAlignmentQueryNotSupported", reg_access_alignment_query_not_supported, 0x120, 0x8, true, 0x76f8a3b63310a18a)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLASS_FUNCTION_SUPPORT_INFO.AsynchronousNotificationSupported", asynchronous_notification_supported, 0x128, 0x8, true, 0xa4aeab7c6ff5c5a9)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLASS_FUNCTION_SUPPORT_INFO.UseModeSense10", use_mode_sense10, 0x130, 0x8, true, 0xc2d56257b3978488)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_vpd_b0_data_t), "_CLASS_FUNCTION_SUPPORT_INFO.BlockLimitsData", block_limits_data, 0x140, 0x0, true, 0x5903a7c1bd0a31a6)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_vpd_b1_data_t), "_CLASS_FUNCTION_SUPPORT_INFO.DeviceCharacteristicsData", device_characteristics_data, 0x240, 0x80, true, 0xdb7b53aa1ac61ad4)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_vpd_b2_data_t), "_CLASS_FUNCTION_SUPPORT_INFO.LBProvisioningData", lb_provisioning_data, 0x2c0, 0x60, true, 0x74b181d3498838f2)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_read_capacity16_data_t), "_CLASS_FUNCTION_SUPPORT_INFO.ReadCapacity16Data", read_capacity16_data, 0x320, 0xc0, true, 0x3175239977e7cf3f)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_vpd_ecop_block_device_rod_limits_t), "_CLASS_FUNCTION_SUPPORT_INFO.BlockDeviceRODLimitsData", block_device_rod_limits_data, 0x400, 0x0, true, 0xd0c3c3bcfe465c3b)
#define _m23 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_FUNCTION_SUPPORT_INFO.IdlePower.D3ColdSupported", d3_cold_supported, 0x0, 0x1, true, 0x676a7ecc062eca71, 1, uint32_t)
#define _m24 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_FUNCTION_SUPPORT_INFO.IdlePower.DeviceWakeable", device_wakeable, 0x1, 0x1, true, 0xbdac5c537a36f56f, 1, uint32_t)
#define _m25 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_FUNCTION_SUPPORT_INFO.IdlePower.IdlePowerEnabled", idle_power_enabled, 0x2, 0x1, true, 0x5109e71427de7ebf, 1, uint32_t)
#define _m26 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_FUNCTION_SUPPORT_INFO.IdlePower.D3IdleTimeoutOverridden", d3_idle_timeout_overridden, 0x3, 0x1, true, 0x167498273726bae0, 1, uint32_t)
#define _m27 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_FUNCTION_SUPPORT_INFO.IdlePower.NoVerifyDuringIdlePower", no_verify_during_idle_power, 0x4, 0x1, true, 0x235e5ec90c3b784d, 1, uint32_t)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_FUNCTION_SUPPORT_INFO.IdlePower.D3IdleTimeout", d3_idle_timeout, 0x20, 0x20, true, 0x5d0a5fcd4f675ab9)
#define _m29 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_idle_power_t), "_CLASS_FUNCTION_SUPPORT_INFO.IdlePower", idle_power, 0x500, 0x40, true, 0x111f851d9c460c14)
#define _m30 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_seek_penalty_property_t), "_CLASS_FUNCTION_SUPPORT_INFO.HwFirmwareGetInfoSupport", hw_firmware_get_info_support, 0x540, 0x20, true, 0x9adf1a756389bc)
#define _m31 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::storage_hw_firmware_info_t*), "_CLASS_FUNCTION_SUPPORT_INFO.HwFirmwareInfo", hw_firmware_info, 0x580, 0x40, true, 0x4d43ebf7a2a972a8)
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
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#endif