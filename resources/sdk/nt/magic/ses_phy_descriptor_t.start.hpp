#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SES_PHY_DESCRIPTOR.DeviceType", device_type, 0x4, 0x3, true, 0xe433830ddd0c7d86, 3, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_PHY_DESCRIPTOR.SmpInitiatorPort", smp_initiator_port, 0x11, 0x1, true, 0xa694dee4390548fe, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_PHY_DESCRIPTOR.StpInitiatorPort", stp_initiator_port, 0x12, 0x1, true, 0x66bb8e4b8978eb27, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_PHY_DESCRIPTOR.SspInitiatorPort", ssp_initiator_port, 0x13, 0x1, true, 0x70af77c85a4aca5, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_PHY_DESCRIPTOR.SataDevice", sata_device, 0x18, 0x1, true, 0x67182b86c3ecacba, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_PHY_DESCRIPTOR.SmpTargetPort", smp_target_port, 0x19, 0x1, true, 0x1711200a08654e3e, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_PHY_DESCRIPTOR.StpTargetPort", stp_target_port, 0x1a, 0x1, true, 0x6c6fae56cea306ca, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_PHY_DESCRIPTOR.SspTargetPort", ssp_target_port, 0x1b, 0x1, true, 0x701964b37a791438, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_PHY_DESCRIPTOR.SataPortSelector", sata_port_selector, 0x1f, 0x1, true, 0xd9501ff8db059eb6, 1, uint8_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_SES_PHY_DESCRIPTOR.AttachedSASAddress", attached_sas_address, 0x20, 0x40, true, 0xb9bf2c5eb8a67521)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_SES_PHY_DESCRIPTOR.SASAddress", sas_address, 0x60, 0x40, true, 0x85512a373f659f08)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_PHY_DESCRIPTOR.PhyIdentifier", phy_identifier, 0xa0, 0x8, true, 0x597122c3092b5648)
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
#endif