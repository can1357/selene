#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_CAPABILITIES_HEADER.CapabilityID", capability_id, 0x0, 0x8, true, 0x525ba895cc52d252)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_CAPABILITIES_HEADER.Next", next, 0x8, 0x8, true, 0x6f653154caf1c4de)
#else
#define _m00
#define _m01
#endif