#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_CAPABILITIES.Size", size, 0x0, 0x10, true, 0xa97da6f07294f319)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_CAPABILITIES.Version", version, 0x10, 0x10, true, 0xd049ff11c3baa24)
#define _m002 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.DeviceD1", device_d1, 0x20, 0x1, true, 0x8e7caf9a75f85523, 1, uint32_t)
#define _m003 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.DeviceD2", device_d2, 0x21, 0x1, true, 0x91fa725d38654464, 1, uint32_t)
#define _m004 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.LockSupported", lock_supported, 0x22, 0x1, true, 0xc3143103c2157a87, 1, uint32_t)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.EjectSupported", eject_supported, 0x23, 0x1, true, 0x34983dc6adf8a08d, 1, uint32_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.Removable", removable, 0x24, 0x1, true, 0x6f2c4da640af6024, 1, uint32_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.DockDevice", dock_device, 0x25, 0x1, true, 0xf878f6805b7d4631, 1, uint32_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.UniqueID", unique_id, 0x26, 0x1, true, 0x346b4af9917d2e81, 1, uint32_t)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.SilentInstall", silent_install, 0x27, 0x1, true, 0xfeee60dc7d86f470, 1, uint32_t)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.RawDeviceOK", raw_device_ok, 0x28, 0x1, true, 0x470010ab4f047cd8, 1, uint32_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.SurpriseRemovalOK", surprise_removal_ok, 0x29, 0x1, true, 0xa68758a712b2f9ad, 1, uint32_t)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.WakeFromD0", wake_from_d0, 0x2a, 0x1, true, 0x2d26206a3150e33d, 1, uint32_t)
#define _m013 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.WakeFromD1", wake_from_d1, 0x2b, 0x1, true, 0x738e9d956268bd40, 1, uint32_t)
#define _m014 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.WakeFromD2", wake_from_d2, 0x2c, 0x1, true, 0xe823a5d14457089, 1, uint32_t)
#define _m015 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.WakeFromD3", wake_from_d3, 0x2d, 0x1, true, 0x6d6b7ec7870120a7, 1, uint32_t)
#define _m016 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.HardwareDisabled", hardware_disabled, 0x2e, 0x1, true, 0x72227da8df0a06bb, 1, uint32_t)
#define _m017 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.NonDynamic", non_dynamic, 0x2f, 0x1, true, 0xb938562697cbea0, 1, uint32_t)
#define _m018 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.WarmEjectSupported", warm_eject_supported, 0x30, 0x1, true, 0x39551888dcac6c22, 1, uint32_t)
#define _m019 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.NoDisplayInUI", no_display_in_ui, 0x31, 0x1, true, 0xe712d4c6c9220bbe, 1, uint32_t)
#define _m020 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.WakeFromInterrupt", wake_from_interrupt, 0x33, 0x1, true, 0x62466e4a30e4f2e4, 1, uint32_t)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_CAPABILITIES.Address", address, 0x40, 0x20, true, 0x8b1490d05d400c6a)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_CAPABILITIES.UINumber", ui_number, 0x60, 0x20, true, 0x276c87719eab014f)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::device_power_state_t, 7>), "_DEVICE_CAPABILITIES.DeviceState", device_state, 0x80, 0xe0, true, 0xa024d4189512403b)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_DEVICE_CAPABILITIES.SystemWake", system_wake, 0x160, 0x20, true, 0xc8c9da81fc6d3d0)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_DEVICE_CAPABILITIES.DeviceWake", device_wake, 0x180, 0x20, true, 0xfd50d39c9185897f)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_CAPABILITIES.D1Latency", d1_latency, 0x1a0, 0x20, true, 0x1dfe11f2852d9f27)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_CAPABILITIES.D2Latency", d2_latency, 0x1c0, 0x20, true, 0x69abccc9641057eb)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_CAPABILITIES.D3Latency", d3_latency, 0x1e0, 0x20, true, 0xc33ef75c7562a6d6)
#define _m029 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.SecureDevice", secure_device, 0x34, 0x1, true, 0x13251997bcc6a305, 1, uint32_t)
#define _m030 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.ChildOfVgaEnabledBridge", child_of_vga_enabled_bridge, 0x35, 0x1, true, 0x17e6daf0f1938b25, 1, uint32_t)
#define _m031 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_CAPABILITIES.DecodeIoOnBoot", decode_io_on_boot, 0x36, 0x1, true, 0x701cf90925f8707d, 1, uint32_t)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#endif