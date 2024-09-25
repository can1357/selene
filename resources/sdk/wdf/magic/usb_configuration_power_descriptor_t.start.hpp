#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_POWER_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0x3ce12bd152b600b2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_POWER_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0x2bceef610f9bb4f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_USB_CONFIGURATION_POWER_DESCRIPTOR.SelfPowerConsumedD0", self_power_consumed_d0, 0x10, 0x18, true, 0x327640c52f1d3b01)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_POWER_DESCRIPTOR.bPowerSummaryId", b_power_summary_id, 0x28, 0x8, true, 0x22c6232ad8fe32c9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_POWER_DESCRIPTOR.bBusPowerSavingD1", b_bus_power_saving_d1, 0x30, 0x8, true, 0xd83394da49bcadf3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_POWER_DESCRIPTOR.bSelfPowerSavingD1", b_self_power_saving_d1, 0x38, 0x8, true, 0x64f278fd18db8176)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_POWER_DESCRIPTOR.bBusPowerSavingD2", b_bus_power_saving_d2, 0x40, 0x8, true, 0xef79675ee6954f16)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_POWER_DESCRIPTOR.bSelfPowerSavingD2", b_self_power_saving_d2, 0x48, 0x8, true, 0x7370f56b211dc176)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_POWER_DESCRIPTOR.bBusPowerSavingD3", b_bus_power_saving_d3, 0x50, 0x8, true, 0x7fab923f84b3e6e5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_POWER_DESCRIPTOR.bSelfPowerSavingD3", b_self_power_saving_d3, 0x58, 0x8, true, 0x84b494abe35a5870)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_CONFIGURATION_POWER_DESCRIPTOR.TransitionTimeFromD1", transition_time_from_d1, 0x60, 0x10, true, 0x4267af352b0ad5bf)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_CONFIGURATION_POWER_DESCRIPTOR.TransitionTimeFromD2", transition_time_from_d2, 0x70, 0x10, true, 0x5496bea15be009f2)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_CONFIGURATION_POWER_DESCRIPTOR.TransitionTimeFromD3", transition_time_from_d3, 0x80, 0x10, true, 0xe450538107becec)
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
#endif