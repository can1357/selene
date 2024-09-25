#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ResetSwap", reset_swap, 0x4, 0x1, true, 0xb790a46e529546e3, 1, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.Disable", disable, 0x5, 0x1, true, 0x6d15b87fedf399df, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.PredictFailure", predict_failure, 0x6, 0x1, true, 0x98281745a9ee1016, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.Select", select, 0x7, 0x1, true, 0x65a7840153510666, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.DeviceSlot.RequestIdentify", request_identify, 0x9, 0x1, true, 0x130d4eda51d39191, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.DeviceSlot.RequestRemove", request_remove, 0xa, 0x1, true, 0xbcc1fe41213b278a, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.DeviceSlot.RequestInsert", request_insert, 0xb, 0x1, true, 0xc2abb66123b3bdb6, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.DeviceSlot.RequestMissing", request_missing, 0xc, 0x1, true, 0xff3545126034f017, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.DeviceSlot.DoNotRemove", do_not_remove, 0xe, 0x1, true, 0xd2651686d36980b7, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.DeviceSlot.RequestActive", request_active, 0xf, 0x1, true, 0xba5e50095f788f66, 1, uint8_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.DeviceSlot.EnableBypassB", enable_bypass_b, 0x12, 0x1, true, 0x717e5f380149e781, 1, uint8_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.DeviceSlot.EnableBypassA", enable_bypass_a, 0x13, 0x1, true, 0x5af5b77b9c8420fa, 1, uint8_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.DeviceSlot.DeviceOff", device_off, 0x14, 0x1, true, 0xc6f06f673682766a, 1, uint8_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.DeviceSlot.RequestFault", request_fault, 0x15, 0x1, true, 0x8053d1f954d453af, 1, uint8_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_device_slot_t), "_SES_CONTROL_DESCRIPTOR.DeviceSlot", device_slot, 0x8, 0x18, true, 0x53aa1f6e1ec80720)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.PowerSupply.RequestIdentify", request_identify, 0x7, 0x1, true, 0xfdf1b375f4ddcd46, 1, uint8_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.PowerSupply.RequestOn", request_on, 0x15, 0x1, true, 0x9c6905e25ead3f5f, 1, uint8_t)
#define _m17 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.PowerSupply.RequestFail", request_fail, 0x16, 0x1, true, 0x2a1ac59554b8be79, 1, uint8_t)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_power_supply_t), "_SES_CONTROL_DESCRIPTOR.PowerSupply", power_supply, 0x8, 0x18, true, 0x2d77aa127ce3e7e8)
#define _m19 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.Cooling.RequestIdentify", request_identify, 0x7, 0x1, true, 0xce983965276ebe59, 1, uint8_t)
#define _m20 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SES_CONTROL_DESCRIPTOR.Cooling.RequestSpeedCode", request_speed_code, 0x10, 0x3, true, 0x3b1740be5a683bb6, 3, uint8_t)
#define _m21 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.Cooling.RequestOn", request_on, 0x15, 0x1, true, 0x26cf8f04fc9b350b, 1, uint8_t)
#define _m22 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.Cooling.RequestFail", request_fail, 0x16, 0x1, true, 0xef54fe773b47fd26, 1, uint8_t)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_cooling_t), "_SES_CONTROL_DESCRIPTOR.Cooling", cooling, 0x8, 0x18, true, 0xb569018abae36536)
#define _m24 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.TemperatureSensor.RequestFail", request_fail, 0x6, 0x1, true, 0x2e0660e76a809b2a, 1, uint8_t)
#define _m25 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.TemperatureSensor.RequestIdentify", request_identify, 0x7, 0x1, true, 0xe456caa837f4e608, 1, uint8_t)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_temperature_sensor_t), "_SES_CONTROL_DESCRIPTOR.TemperatureSensor", temperature_sensor, 0x8, 0x18, true, 0x9817da3657a636a1)
#define _m27 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.VoltageSensor.RequestFail", request_fail, 0x6, 0x1, true, 0xfc85f391edbeab75, 1, uint8_t)
#define _m28 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.VoltageSensor.RequestIdentify", request_identify, 0x7, 0x1, true, 0x38a058eafbb76058, 1, uint8_t)
#define _m29 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_temperature_sensor_t), "_SES_CONTROL_DESCRIPTOR.VoltageSensor", voltage_sensor, 0x8, 0x18, true, 0xb182a26cd8e14548)
#define _m30 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.CurrentSensor.RequestFail", request_fail, 0x6, 0x1, true, 0x71e220e8889891e, 1, uint8_t)
#define _m31 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.CurrentSensor.RequestIdentify", request_identify, 0x7, 0x1, true, 0xf2f80dd15f5a46c4, 1, uint8_t)
#define _m32 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_temperature_sensor_t), "_SES_CONTROL_DESCRIPTOR.CurrentSensor", current_sensor, 0x8, 0x18, true, 0x520feee4430e1fb9)
#define _m33 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.Enclosure.RequestIdentify", request_identify, 0x7, 0x1, true, 0xd84db40b52eb9eec, 1, uint8_t)
#define _m34 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_SES_CONTROL_DESCRIPTOR.Enclosure.PowerCycleDelay", power_cycle_delay, 0x8, 0x6, true, 0xb0d34864da57b52b, 6, uint8_t)
#define _m35 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_SES_CONTROL_DESCRIPTOR.Enclosure.PowerCycleRequest", power_cycle_request, 0xe, 0x2, true, 0xd8745b584c945a6, 2, uint8_t)
#define _m36 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.Enclosure.RequestWarning", request_warning, 0x10, 0x1, true, 0x33da8b4c2b43db72, 1, uint8_t)
#define _m37 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.Enclosure.RequestFailure", request_failure, 0x11, 0x1, true, 0x79cc67c4969bc926, 1, uint8_t)
#define _m38 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_SES_CONTROL_DESCRIPTOR.Enclosure.PowerOffDuration", power_off_duration, 0x12, 0x6, true, 0xc426b46f0bda4a1d, 6, uint8_t)
#define _m39 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u4_enclosure_t), "_SES_CONTROL_DESCRIPTOR.Enclosure", enclosure, 0x8, 0x18, true, 0x55c4b8db97972830)
#define _m40 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.RequestRebuildAbort", request_rebuild_abort, 0x0, 0x1, true, 0x657488f4865fbae2, 1, uint8_t)
#define _m41 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.RequestRebuild", request_rebuild, 0x1, 0x1, true, 0x95cd32a1be7d6561, 1, uint8_t)
#define _m42 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.RequestInFailedArray", request_in_failed_array, 0x2, 0x1, true, 0x98815d4d6e09509a, 1, uint8_t)
#define _m43 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.RequestInCriticalArray", request_in_critical_array, 0x3, 0x1, true, 0xbba56198219e3a7c, 1, uint8_t)
#define _m44 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.RequestConsistencyArray", request_consistency_array, 0x4, 0x1, true, 0xe9299cf4b5803552, 1, uint8_t)
#define _m45 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.RequestHotSpare", request_hot_spare, 0x5, 0x1, true, 0xba9326527454b73d, 1, uint8_t)
#define _m46 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.RequestReservedDevice", request_reserved_device, 0x6, 0x1, true, 0x760307d31a390648, 1, uint8_t)
#define _m47 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.RequestOK", request_ok, 0x7, 0x1, true, 0xd37db021bc231085, 1, uint8_t)
#define _m48 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.RequestIdentify", request_identify, 0x9, 0x1, true, 0x75c410919a12abed, 1, uint8_t)
#define _m49 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.RequestRemove", request_remove, 0xa, 0x1, true, 0xba58eacf01af466e, 1, uint8_t)
#define _m50 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.RequestInsert", request_insert, 0xb, 0x1, true, 0x3fc0bfeab114db7b, 1, uint8_t)
#define _m51 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.RequestMissing", request_missing, 0xc, 0x1, true, 0x284cf630f93dceca, 1, uint8_t)
#define _m52 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.DoNotRemove", do_not_remove, 0xe, 0x1, true, 0x39a27be311a7a2b, 1, uint8_t)
#define _m53 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.RequestActive", request_active, 0xf, 0x1, true, 0x51bf7fa42fd726bc, 1, uint8_t)
#define _m54 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.EnableBypassB", enable_bypass_b, 0x12, 0x1, true, 0xbe83a80ed0f820ea, 1, uint8_t)
#define _m55 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.EnableBypassA", enable_bypass_a, 0x13, 0x1, true, 0xfeba106d74131648, 1, uint8_t)
#define _m56 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.DeviceOff", device_off, 0x14, 0x1, true, 0xa1055f674b3a7e6d, 1, uint8_t)
#define _m57 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot.RequestFault", request_fault, 0x15, 0x1, true, 0xf164dda4a3f679b7, 1, uint8_t)
#define _m58 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_array_device_slot_t), "_SES_CONTROL_DESCRIPTOR.ArrayDeviceSlot", array_device_slot, 0x8, 0x18, true, 0xb378b1401642c913)
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
#define _m32
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#define _m42
#define _m43
#define _m44
#define _m45
#define _m46
#define _m47
#define _m48
#define _m49
#define _m50
#define _m51
#define _m52
#define _m53
#define _m54
#define _m55
#define _m56
#define _m57
#define _m58
#endif