#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SES_STATUS_DESCRIPTOR.ElementStatus", element_status, 0x0, 0x4, true, 0x49484147064d5668, 4, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.Swap", swap, 0x4, 0x1, true, 0xee9ffb0c7f97a762, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.Disabled", disabled, 0x5, 0x1, true, 0xcf040456b580f222, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.PredictedFailure", predicted_failure, 0x6, 0x1, true, 0xaae1f9e8d86fb905, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.SlotAddress", slot_address, 0x0, 0x8, true, 0x9b6bae85d69b91e0)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.Report", report, 0x8, 0x1, true, 0xe072e7af0d4aa4d7, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.Identify", identify, 0x9, 0x1, true, 0x21943a20bc051a91, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.Remove", remove, 0xa, 0x1, true, 0xc122bf77ff87628d, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.ReadyToInsert", ready_to_insert, 0xb, 0x1, true, 0xff674e761f4e2be, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.EnclosureBypassedB", enclosure_bypassed_b, 0xc, 0x1, true, 0x1479f526f60a20d0, 1, uint8_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.EnclosureBypassedA", enclosure_bypassed_a, 0xd, 0x1, true, 0x8c5ded4648515620, 1, uint8_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.DoNotRemove", do_not_remove, 0xe, 0x1, true, 0x87857888ecff49c6, 1, uint8_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.AppBypassedA", app_bypassed_a, 0xf, 0x1, true, 0x6f4fc17299c81924, 1, uint8_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.DeviceBypassedB", device_bypassed_b, 0x10, 0x1, true, 0xdd88c54f1e485a1d, 1, uint8_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.DeviceBypassedA", device_bypassed_a, 0x11, 0x1, true, 0xd66e191e6ccbbff5, 1, uint8_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.BypassedB", bypassed_b, 0x12, 0x1, true, 0xc3cb809ed410e18b, 1, uint8_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.BypassedA", bypassed_a, 0x13, 0x1, true, 0xd681f0037863748, 1, uint8_t)
#define _m17 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.DeviceOff", device_off, 0x14, 0x1, true, 0xfe25d7c927c875b1, 1, uint8_t)
#define _m18 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.FaultRequested", fault_requested, 0x15, 0x1, true, 0x35c1a44d209bfa83, 1, uint8_t)
#define _m19 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.FaultSensed", fault_sensed, 0x16, 0x1, true, 0xdec02a02d6cedf09, 1, uint8_t)
#define _m20 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot.AppBypassedB", app_bypassed_b, 0x17, 0x1, true, 0xf9b99184b6060a28, 1, uint8_t)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_device_slot_t), "_SES_STATUS_DESCRIPTOR.DeviceSlot", device_slot, 0x8, 0x18, true, 0x57b1a186f7a7b6a2)
#define _m22 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.PowerSupply.Identify", identify, 0x7, 0x1, true, 0xab837676d75c8940, 1, uint8_t)
#define _m23 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.PowerSupply.DCOverCurrent", dc_over_current, 0x9, 0x1, true, 0x47ff887f18082c1f, 1, uint8_t)
#define _m24 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.PowerSupply.DCUnderVoltage", dc_under_voltage, 0xa, 0x1, true, 0x8009882cb699c51e, 1, uint8_t)
#define _m25 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.PowerSupply.DCOverVoltage", dc_over_voltage, 0xb, 0x1, true, 0xdf7637673f33d074, 1, uint8_t)
#define _m26 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.PowerSupply.DCFail", dc_fail, 0x10, 0x1, true, 0xff9991e59ef38719, 1, uint8_t)
#define _m27 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.PowerSupply.ACFail", ac_fail, 0x11, 0x1, true, 0xd7a46682533f69e9, 1, uint8_t)
#define _m28 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.PowerSupply.TemperatureWarning", temperature_warning, 0x12, 0x1, true, 0xab3934bcd2e37c7c, 1, uint8_t)
#define _m29 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.PowerSupply.OverTemperatureFail", over_temperature_fail, 0x13, 0x1, true, 0x32e1a0c0a52dce43, 1, uint8_t)
#define _m30 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.PowerSupply.Off", off, 0x14, 0x1, true, 0x9fd92e09863a9fbe, 1, uint8_t)
#define _m31 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.PowerSupply.RequestedOn", requested_on, 0x15, 0x1, true, 0x89a4be9331fcd826, 1, uint8_t)
#define _m32 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.PowerSupply.Fail", fail, 0x16, 0x1, true, 0x7cdcdd8547d6b7ca, 1, uint8_t)
#define _m33 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.PowerSupply.HotSwap", hot_swap, 0x17, 0x1, true, 0x226c910731308b68, 1, uint8_t)
#define _m34 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_power_supply_t), "_SES_STATUS_DESCRIPTOR.PowerSupply", power_supply, 0x8, 0x18, true, 0x4e91a0fef5e87ebe)
#define _m35 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SES_STATUS_DESCRIPTOR.Cooling.ActualFanSpeedMSB", actual_fan_speed_msb, 0x0, 0x3, true, 0x7365c9270f641e47, 3, uint8_t)
#define _m36 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.Cooling.Identify", identify, 0x7, 0x1, true, 0x8c0054515315fe56, 1, uint8_t)
#define _m37 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_STATUS_DESCRIPTOR.Cooling.ActualFanSpeedLSB", actual_fan_speed_lsb, 0x8, 0x8, true, 0xdab4fa72041bfe60)
#define _m38 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SES_STATUS_DESCRIPTOR.Cooling.ActualSpeedCode", actual_speed_code, 0x10, 0x3, true, 0x5180d814f2d39a89, 3, uint8_t)
#define _m39 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.Cooling.Off", off, 0x14, 0x1, true, 0x94afd6e51a376aca, 1, uint8_t)
#define _m40 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.Cooling.RequestedOn", requested_on, 0x15, 0x1, true, 0x9c0407020bc9b6e4, 1, uint8_t)
#define _m41 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.Cooling.Fail", fail, 0x16, 0x1, true, 0xa099b9a895ef95b6, 1, uint8_t)
#define _m42 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.Cooling.HotSwap", hot_swap, 0x17, 0x1, true, 0xaa9c6c381156a6c7, 1, uint8_t)
#define _m43 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_cooling_t), "_SES_STATUS_DESCRIPTOR.Cooling", cooling, 0x8, 0x18, true, 0x7a9fc278fc418278)
#define _m44 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.TemperatureSensor.Fail", fail, 0x6, 0x1, true, 0x2a35aaa11bf97bbc, 1, uint8_t)
#define _m45 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.TemperatureSensor.Identify", identify, 0x7, 0x1, true, 0xf2ec21e749848b64, 1, uint8_t)
#define _m46 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_STATUS_DESCRIPTOR.TemperatureSensor.Temperature", temperature, 0x8, 0x8, true, 0xf01dcb76e6bf2d8e)
#define _m47 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.TemperatureSensor.UnderTemperatureWarning", under_temperature_warning, 0x10, 0x1, true, 0xf0005a3879dee292, 1, uint8_t)
#define _m48 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.TemperatureSensor.UnderTemperatureFailure", under_temperature_failure, 0x11, 0x1, true, 0xbbbfcbf4592d8b4e, 1, uint8_t)
#define _m49 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.TemperatureSensor.OverTemperatureWarning", over_temperature_warning, 0x12, 0x1, true, 0x5f1d4475af6d8c51, 1, uint8_t)
#define _m50 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.TemperatureSensor.OverTemperatureFailure", over_temperature_failure, 0x13, 0x1, true, 0x986808c9b4b55da0, 1, uint8_t)
#define _m51 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_temperature_sensor_t), "_SES_STATUS_DESCRIPTOR.TemperatureSensor", temperature_sensor, 0x8, 0x18, true, 0xa2340179dc337d21)
#define _m52 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.VoltageSensor.CritUnder", crit_under, 0x0, 0x1, true, 0x2307098827baaef1, 1, uint8_t)
#define _m53 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.VoltageSensor.CritOver", crit_over, 0x1, 0x1, true, 0xe6d8311cff44f122, 1, uint8_t)
#define _m54 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.VoltageSensor.WarnUnder", warn_under, 0x2, 0x1, true, 0x9ac4edb8fdf38e96, 1, uint8_t)
#define _m55 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.VoltageSensor.WarnOver", warn_over, 0x3, 0x1, true, 0x8a0787ceaba95b7c, 1, uint8_t)
#define _m56 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.VoltageSensor.Fail", fail, 0x6, 0x1, true, 0x5eb976f44ca2bb42, 1, uint8_t)
#define _m57 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.VoltageSensor.Identify", identify, 0x7, 0x1, true, 0x2f000535211f7332, 1, uint8_t)
#define _m58 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_STATUS_DESCRIPTOR.VoltageSensor.VoltageMSB", voltage_msb, 0x8, 0x8, true, 0x5c084c3fddc3f2ec)
#define _m59 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_STATUS_DESCRIPTOR.VoltageSensor.VoltageLSB", voltage_lsb, 0x10, 0x8, true, 0xcfc589e14515a414)
#define _m60 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u4_voltage_sensor_t), "_SES_STATUS_DESCRIPTOR.VoltageSensor", voltage_sensor, 0x8, 0x18, true, 0xbb1a2de6c8eb4a09)
#define _m61 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.CurrentSensor.CritOver", crit_over, 0x1, 0x1, true, 0x3798ee0b85d4608d, 1, uint8_t)
#define _m62 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.CurrentSensor.WarnOver", warn_over, 0x3, 0x1, true, 0xfe4919e5d865cba0, 1, uint8_t)
#define _m63 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.CurrentSensor.Fail", fail, 0x6, 0x1, true, 0xa638b8a8922c8cee, 1, uint8_t)
#define _m64 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.CurrentSensor.Identify", identify, 0x7, 0x1, true, 0x84871b97f37492b8, 1, uint8_t)
#define _m65 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_STATUS_DESCRIPTOR.CurrentSensor.CurrentMSB", current_msb, 0x8, 0x8, true, 0x4c4974f9f8172059)
#define _m66 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_STATUS_DESCRIPTOR.CurrentSensor.CurrentLSB", current_lsb, 0x10, 0x8, true, 0xf4df4777783be06a)
#define _m67 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_current_sensor_t), "_SES_STATUS_DESCRIPTOR.CurrentSensor", current_sensor, 0x8, 0x18, true, 0x5eb8b100086db6f7)
#define _m68 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.Enclosure.Identify", identify, 0x7, 0x1, true, 0xb4f50cd24fbc255b, 1, uint8_t)
#define _m69 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.Enclosure.WarningIndication", warning_indication, 0x8, 0x1, true, 0x4f65678e9df5eb16, 1, uint8_t)
#define _m70 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.Enclosure.FailureIndication", failure_indication, 0x9, 0x1, true, 0xa2098093b6d482a3, 1, uint8_t)
#define _m71 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_SES_STATUS_DESCRIPTOR.Enclosure.TimeUntilPowerCycle", time_until_power_cycle, 0xa, 0x6, true, 0x3329281845231684, 6, uint8_t)
#define _m72 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.Enclosure.WarningRequested", warning_requested, 0x10, 0x1, true, 0xed86d361cd255656, 1, uint8_t)
#define _m73 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.Enclosure.FailureRequested", failure_requested, 0x11, 0x1, true, 0x145ee0a2b24476aa, 1, uint8_t)
#define _m74 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_SES_STATUS_DESCRIPTOR.Enclosure.RequestedPowerOffTime", requested_power_off_time, 0x12, 0x6, true, 0xd31e8a3428b2fa30, 6, uint8_t)
#define _m75 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u6_enclosure_t), "_SES_STATUS_DESCRIPTOR.Enclosure", enclosure, 0x8, 0x18, true, 0x16039209c141a063)
#define _m76 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.RebuildAbort", rebuild_abort, 0x0, 0x1, true, 0x8fda33117873d0a2, 1, uint8_t)
#define _m77 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.Rebuild", rebuild, 0x1, 0x1, true, 0xa58df92fe235418b, 1, uint8_t)
#define _m78 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.InFailedArray", in_failed_array, 0x2, 0x1, true, 0x69a3e2feece1fd46, 1, uint8_t)
#define _m79 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.InCriticalArray", in_critical_array, 0x3, 0x1, true, 0xb7d9013f6d296258, 1, uint8_t)
#define _m80 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.ConsistencyCheck", consistency_check, 0x4, 0x1, true, 0x53a09a36a38e42ed, 1, uint8_t)
#define _m81 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.HotSpare", hot_spare, 0x5, 0x1, true, 0xc41731e4cba0bbcd, 1, uint8_t)
#define _m82 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.ReservedDevice", reserved_device, 0x6, 0x1, true, 0x6d248ba86038eb03, 1, uint8_t)
#define _m83 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.OK", ok, 0x7, 0x1, true, 0x9744085d69f2e56f, 1, uint8_t)
#define _m84 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.Report", report, 0x8, 0x1, true, 0x474015c62fb6f7da, 1, uint8_t)
#define _m85 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.Identify", identify, 0x9, 0x1, true, 0x129c59733baacd3d, 1, uint8_t)
#define _m86 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.Remove", remove, 0xa, 0x1, true, 0x6df0e195d59764d8, 1, uint8_t)
#define _m87 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.ReadyToInsert", ready_to_insert, 0xb, 0x1, true, 0xd2d1995c244452be, 1, uint8_t)
#define _m88 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.EnclosureBypassedB", enclosure_bypassed_b, 0xc, 0x1, true, 0x4c33c3dba460d7ac, 1, uint8_t)
#define _m89 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.EnclosureBypassedA", enclosure_bypassed_a, 0xd, 0x1, true, 0xdacee20354a728fc, 1, uint8_t)
#define _m90 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.DoNotRemove", do_not_remove, 0xe, 0x1, true, 0xa5034931e1653c41, 1, uint8_t)
#define _m91 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.AppBypassedA", app_bypassed_a, 0xf, 0x1, true, 0x4df791bd9f486c1a, 1, uint8_t)
#define _m92 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.DeviceBypassedB", device_bypassed_b, 0x10, 0x1, true, 0xf9a251fbaa3130e8, 1, uint8_t)
#define _m93 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.DeviceBypassedA", device_bypassed_a, 0x11, 0x1, true, 0x18b78077946ca677, 1, uint8_t)
#define _m94 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.BypassedB", bypassed_b, 0x12, 0x1, true, 0x8621a3ae0b86ad2b, 1, uint8_t)
#define _m95 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.BypassedA", bypassed_a, 0x13, 0x1, true, 0x4b4fdc05b0591acc, 1, uint8_t)
#define _m96 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.DeviceOff", device_off, 0x14, 0x1, true, 0xd2f190398b7c7c47, 1, uint8_t)
#define _m97 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.FaultRequested", fault_requested, 0x15, 0x1, true, 0xc97bb773b5597178, 1, uint8_t)
#define _m98 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.FaultSensed", fault_sensed, 0x16, 0x1, true, 0x9c6b8467608f2524, 1, uint8_t)
#define _m99 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot.AppBypassedB", app_bypassed_b, 0x17, 0x1, true, 0xf9c3642c7e5118be, 1, uint8_t)
#define _n00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u7_array_device_slot_t), "_SES_STATUS_DESCRIPTOR.ArrayDeviceSlot", array_device_slot, 0x8, 0x18, true, 0xcf5f407704e1061f)
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
#define _m59
#define _m60
#define _m61
#define _m62
#define _m63
#define _m64
#define _m65
#define _m66
#define _m67
#define _m68
#define _m69
#define _m70
#define _m71
#define _m72
#define _m73
#define _m74
#define _m75
#define _m76
#define _m77
#define _m78
#define _m79
#define _m80
#define _m81
#define _m82
#define _m83
#define _m84
#define _m85
#define _m86
#define _m87
#define _m88
#define _m89
#define _m90
#define _m91
#define _m92
#define _m93
#define _m94
#define _m95
#define _m96
#define _m97
#define _m98
#define _m99
#define _n00
#endif