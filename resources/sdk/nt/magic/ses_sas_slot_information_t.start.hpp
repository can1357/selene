#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_SAS_SLOT_INFORMATION.NumberOfPhyDescriptors", number_of_phy_descriptors, 0x0, 0x8, true, 0x730d9accb3978a99)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_SAS_SLOT_INFORMATION.NotAllPhys", not_all_phys, 0x8, 0x1, true, 0xaae0150013f7652e, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_SES_SAS_SLOT_INFORMATION.Type", type, 0xe, 0x2, true, 0x245768d12f80b078, 2, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_SAS_SLOT_INFORMATION.DeviceSlotNumber", device_slot_number, 0x18, 0x8, true, 0x76c01e8bfbfa474f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::ses_phy_descriptor_t, 1>), "_SES_SAS_SLOT_INFORMATION.PhyDescriptors", phy_descriptors, 0x20, 0xe0, true, 0xc0634a50fabc3aee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif